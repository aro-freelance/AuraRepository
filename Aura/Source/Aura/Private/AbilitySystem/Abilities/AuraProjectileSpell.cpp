// Copyright Arora Software


#include "AbilitySystem/Abilities/AuraProjectileSpell.h"

#include "Actor/AuraProjectile.h"
#include "Interaction/CombatInterface.h"

void UAuraProjectileSpell::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	
}


//called in Blueprints based on AnimNotify
void UAuraProjectileSpell::SpawnProjectile()
{

	//we're on the server if this is true
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if(!bIsServer) return;

	
	if(ICombatInterface* CombatInterface = Cast<ICombatInterface>(GetAvatarActorFromActorInfo()))
	{
		FTransform SpawnTransform;
		const FVector SocketLocation = CombatInterface->GetCombatSocketLocation();
		SpawnTransform.SetLocation(SocketLocation);
		//TODO: set the rotation of the projectile
		
		AAuraProjectile* Projectile = GetWorld()->SpawnActorDeferred<AAuraProjectile>(
			ProjectileClass,
			SpawnTransform,
			GetOwningActorFromActorInfo(),
			Cast<APawn>(GetOwningActorFromActorInfo()),
			ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

		//TODO: Give the Projectile a Gameplay Effect Spec for causing damage

		Projectile->FinishSpawning(SpawnTransform);
			
	}
}
