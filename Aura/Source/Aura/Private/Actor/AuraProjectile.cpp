// Copyright Arora Software


#include "Actor/AuraProjectile.h"

#include "GameFramework/ProjectileMovementComponent.h"

AAuraProjectile::AAuraProjectile()
{

	OverlapSphere = CreateDefaultSubobject<USphereComponent>("OverlapSphere");
	SetRootComponent(OverlapSphere);
}

void AAuraProjectile::BeginPlay()
{
	Super::BeginPlay();
	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AAuraProjectile::OnSphereOverlap);
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

void AAuraProjectile::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
}


