// Copyright Arora Software


#include "Actor/AuraProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "Character/AuraCharacter.h"
#include "Interaction/CombatInterface.h"
#include "Player/AuraPlayerState.h"

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

	//TODO add class for enemy projectile, with opposite overlaps
	OverlapSphere->SetCollisionResponseToChannel(ECC_GameTraceChannel3, ECR_Overlap);
	/*
	 * DefaultEngine.ini
	 *
	 * +DefaultChannelResponses=(Channel=ECC_GameTraceChannel1,DefaultResponse=ECR_Overlap,bTraceType=False,bStaticObject=False,Name="PlayerProjectile")
	 * +DefaultChannelResponses=(Channel=ECC_GameTraceChannel2,DefaultResponse=ECR_Overlap,bTraceType=False,bStaticObject=False,Name="EnemyProjectile")
	 * +DefaultChannelResponses=(Channel=ECC_GameTraceChannel3,DefaultResponse=ECR_Overlap,bTraceType=False,bStaticObject=False,Name="Enemy")
	 * +DefaultChannelResponses=(Channel=ECC_GameTraceChannel4,DefaultResponse=ECR_Overlap,bTraceType=False,bStaticObject=False,Name="Player")
	 * 
	 */

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
	 * owner of owner is player controller
	 * LogTemp: Warning: other actor BP_AuraCharacter_C_0
	 * 
	 */

	
	
	//UE_LOG(LogTemp, Warning, TEXT("owner  %s"), *GetOwner()->GetFName().ToString());

	AAuraPlayerState* PlayerState = Cast<AAuraPlayerState>(GetOwner());

	if(PlayerState)
	{
		UE_LOG(LogTemp, Warning, TEXT("overlapped comp owner pawn %s"), *PlayerState->GetPawn()->GetFName().ToString());
		if(PlayerState->GetPawn() == OtherActor) return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("playerstate null"));
	}
	
	
	/*
	if(GetInstigator())
	{
		UE_LOG(LogTemp, Warning, TEXT("instigator  %s"), *GetInstigator()->GetFName().ToString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("instigator null"));
	}*/
	
	/*UE_LOG(LogTemp, Warning, TEXT("other actor %s"), *OtherActor->GetFName().ToString());
	UE_LOG(LogTemp, Warning, TEXT("owner of other comp %s"), *OtherComponent->GetOwner()->GetFName().ToString());*/

	//if (!IsValidOverlap(OtherActor)) return;

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


bool AAuraProjectile::IsValidOverlap(AActor* OtherActor)
{
	/*if (DamageEffectParams.SourceAbilitySystemComponent == nullptr) return false;
	AActor* SourceAvatarActor = DamageEffectParams.SourceAbilitySystemComponent->GetAvatarActor();
	if (SourceAvatarActor == OtherActor) return false;
	if (!UAuraAbilitySystemLibrary::IsNotFriend(SourceAvatarActor, OtherActor)) return false;
*/
	return true;
}

