// Copyright Arora Software


#include "Actor/AuraProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "Interaction/CombatInterface.h"

AAuraProjectile::AAuraProjectile()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	
	OverlapSphere = CreateDefaultSubobject<USphereComponent>("OverlapSphere");
	SetRootComponent(OverlapSphere);
	OverlapSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	OverlapSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	OverlapSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	OverlapSphere->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Overlap);
	OverlapSphere->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->InitialSpeed = 550.f;
	ProjectileMovement->MaxSpeed = 550.f;
	ProjectileMovement->ProjectileGravityScale = 0.f;
}

void AAuraProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AAuraProjectile::OnSphereOverlap);
}

void AAuraProjectile::PlayImpactSoundAndEffect()
{
	UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation(), FRotator::ZeroRotator);
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, ImpactEffect, GetActorLocation());
}

void AAuraProjectile::Destroyed()
{
	UE_LOG(LogTemp, Warning, TEXT("destroy projectile"));
	if(!bHit && !HasAuthority())
	{
		PlayImpactSoundAndEffect();
	}
	Super::Destroyed();
}

void AAuraProjectile::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                      UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//@yelsa make the projectile not hit the actor that shoots it.
	/*
	 * LogTemp: Warning: owner of projectile BP_AuraPlayerState_C_0
	 * LogTemp: Warning: other actor BP_AuraCharacter_C_0
	 * 
	 */
	
	UE_LOG(LogTemp, Warning, TEXT("owner of projectile %s"), *GetOwner()->GetFName().ToString());
	UE_LOG(LogTemp, Warning, TEXT("other actor %s"), *OtherActor->GetFName().ToString());
	if(GetOwner() != OtherActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("projectile sphere overlap"));
		PlayImpactSoundAndEffect();
		
		if(HasAuthority())
		{
			Destroy();
		}
		else
		{
			bHit = true;
		}
	
	}
	
	
}


