// Copyright Arora Software


#include "Actor/AuraEffectActor.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "WorldPartition/ContentBundle/ContentBundleLog.h"


/*
 * This class is used for attribute changing items (Potions)
 */


AAuraEffectActor::AAuraEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	SetRootComponent(CreateDefaultSubobject<USceneComponent>("SceneRoot"));
	
}

void AAuraEffectActor::BeginPlay()
{
	Super::BeginPlay();

}


//this function is used for applying a single effect to the target actor
void AAuraEffectActor::ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> EffectClass)
{
	//get the Ability System from the Actor
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	
	if(TargetASC == nullptr) return;
	check(EffectClass);

	//apply effect to the Ability System
	FGameplayEffectContextHandle GameplayEffectContextHandle = TargetASC->MakeEffectContext();
	GameplayEffectContextHandle.AddSourceObject(this);
	const FGameplayEffectSpecHandle GameplayEffectSpecHandle = TargetASC->MakeOutgoingSpec(EffectClass, EffectLevel, GameplayEffectContextHandle);
	const FActiveGameplayEffectHandle ActiveEffectHandle = TargetASC->ApplyGameplayEffectSpecToSelf(*GameplayEffectSpecHandle.Data.Get());


	
	const bool bIsInfinite = GameplayEffectSpecHandle.Data.Get()->Def.Get()->DurationPolicy == EGameplayEffectDurationType::Infinite;

//&& InfiniteEffectRemovalPolicy == EEffectOverlapRemovalPolicy::RemoveOnEndOverlap)
	//&& EffectOverlapRemovalPolicy == EEffectOverlapRemovalPolicy::RemoveOnEndOverlap && ActiveEffectHandle.IsValid())
	if (bIsInfinite && InfiniteEffectRemovalPolicy == EEffectOverlapRemovalPolicy::RemoveOnEndOverlap)
	{
		ActiveEffectHandles.Add(ActiveEffectHandle, TargetASC);
	}

	if (!bIsInfinite)
	{
		Destroy();
	}

}


//adds array of effects to target actor
void AAuraEffectActor::ApplyEffectArrayToTarget(AActor* TargetActor, TArray<FAuraEffect> EffectClassArray)
{
	//get the Ability System from target Actor
	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	
	if(TargetASC == nullptr) return;
	if(EffectClassArray.IsEmpty()) return;


	//apply effect to the Ability System by looping through each array type
	FGameplayEffectContextHandle GameplayEffectContextHandle = TargetASC->MakeEffectContext();
	GameplayEffectContextHandle.AddSourceObject(this);
	
	for (const FAuraEffect AuraEffect : EffectClassArray)
	{
		
		const TSubclassOf<UGameplayEffect> EffectClass = AuraEffect.GameplayEffectClass;
		const EEffectDurationType Duration = AuraEffect.EffectDurationType;
		
		const FGameplayEffectSpecHandle GameplayEffectSpecHandle = TargetASC->MakeOutgoingSpec(EffectClass, EffectLevel, GameplayEffectContextHandle);
		const FActiveGameplayEffectHandle ActiveEffectHandle = TargetASC->ApplyGameplayEffectSpecToSelf(*GameplayEffectSpecHandle.Data.Get());

		if(Duration == EEffectDurationType::Infinite && AuraEffect.EffectRemovalPolicy == EEffectOverlapRemovalPolicy::RemoveOnEndOverlap)
		{
			ActiveEffectHandles.Add(ActiveEffectHandle, TargetASC);
		}
		else
		{
			Destroy();
		}

	}
	
}


//apply all effects in array(s) on overlap
void AAuraEffectActor::OnOverlap(AActor* TargetActor)
{

	
	//loop instant effects and apply them
	for (const auto& InstantEffect : InstantEffects)
	{
		if(InstantEffect.EffectApplicationPolicy == EEffectOverlapApplicationPolicy::ApplyOnOverlap)
		{
			ApplyEffectToTarget(TargetActor, InstantEffect.GameplayEffectClass);
		}
	}

	//loop duration effects and apply them
	for (const auto& DurationEffect : DurationEffects)
	{
		if(DurationEffect.EffectApplicationPolicy == EEffectOverlapApplicationPolicy::ApplyOnOverlap)
		{
			ApplyEffectToTarget(TargetActor, DurationEffect.GameplayEffectClass);
		}
	}

	//loop infinite effects and apply them
	for (const auto& InfiniteEffect : InfiniteEffects)
	{
		if(InfiniteEffect.EffectApplicationPolicy == EEffectOverlapApplicationPolicy::ApplyOnOverlap)
		{
			ApplyEffectToTarget(TargetActor, InfiniteEffect.GameplayEffectClass);
		}
	}
	
}


//end effects that were added on overlap when overlap ends
void AAuraEffectActor::OnEndOverlap(AActor* TargetActor)
{

	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	if(!IsValid(TargetASC)) return;


	//loop all instant effects and remove them
	for (const auto& InstantEffect : InstantEffects)
	{
		if(InstantEffect.EffectApplicationPolicy == EEffectOverlapApplicationPolicy::ApplyOnEndOverlap)
		{
			ApplyEffectToTarget(TargetActor, InstantEffect.GameplayEffectClass);
		}
	}

	//loop all duration effects and remove them
	for (const auto& DurationEffect : DurationEffects)
	{
		if(DurationEffect.EffectApplicationPolicy == EEffectOverlapApplicationPolicy::ApplyOnEndOverlap)
		{
			ApplyEffectToTarget(TargetActor, DurationEffect.GameplayEffectClass);
		}
	}

	//loop all infinite effects and remove them
	for (const auto& InfiniteEffect : InfiniteEffects)
	{
		if(InfiniteEffect.EffectApplicationPolicy == EEffectOverlapApplicationPolicy::ApplyOnEndOverlap)
		{
			ApplyEffectToTarget(TargetActor, InfiniteEffect.GameplayEffectClass);
		}
	}

	TArray<FActiveGameplayEffectHandle> ActiveEffectHandlesToRemove;
	for(const auto& InfiniteEffect : InfiniteEffects)
	{
		if(InfiniteEffect.EffectRemovalPolicy == EEffectOverlapRemovalPolicy::RemoveOnEndOverlap)
		{
			//find handles that match  the target ASC
			for (const auto& ActiveEffectHandle : ActiveEffectHandles)
			{
				if (TargetASC == ActiveEffectHandle.Value)
				{
					TargetASC->RemoveActiveGameplayEffect(ActiveEffectHandle.Key, 1);
					ActiveEffectHandlesToRemove.Add(ActiveEffectHandle.Key);
				}
			}
		}
	}

}



