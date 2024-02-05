// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "AuraProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;


UCLASS()
class AURA_API AAuraProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AAuraProjectile();

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

protected:
	
	virtual void BeginPlay() override;

	void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	

private:

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USphereComponent> OverlapSphere;

};
