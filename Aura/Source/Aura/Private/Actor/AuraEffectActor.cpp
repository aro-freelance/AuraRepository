// Copyright Arora Software


#include "Actor/AuraEffectActor.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"


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
	if (bIsInfinite && InfiniteEffectRemovalPolicy == EEffectRemovalPolicy::RemoveOnEndOverlap)
	{
		ActiveEffectHandles.Add(ActiveEffectHandle, TargetASC);
	}

	if (!bIsInfinite)
	{
		Destroy();
	}

	
}


void AAuraEffectActor::OnOverlap(AActor* TargetActor)
{
	//loop instant effects and apply them
	for (const auto& InstantEffect : InstantEffects)
	{
		if(InstantEffect.EffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
		{
			ApplyEffectToTarget(TargetActor, InstantEffect.GameplayEffectClass);
		}
	}

	//loop duration effects and apply them
	for (const auto& DurationEffect : DurationEffects)
	{
		if(DurationEffect.EffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
		{
			ApplyEffectToTarget(TargetActor, DurationEffect.GameplayEffectClass);
		}
	}

	//loop infinite effects and apply them
	for (const auto& InfiniteEffect : InfiniteEffects)
	{
		if(InfiniteEffect.EffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
		{
			ApplyEffectToTarget(TargetActor, InfiniteEffect.GameplayEffectClass);
		}
	}
	
}

void AAuraEffectActor::OnEndOverlap(AActor* TargetActor)
{

	UAbilitySystemComponent* TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
	if(!IsValid(TargetASC)) return;

	//loop all instant effects and remove them
	for (const auto& InstantEffect : InstantEffects)
	{
		if(InstantEffect.EffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
		{
			ApplyEffectToTarget(TargetActor, InstantEffect.GameplayEffectClass);
		}
	}

	//loop all duration effects and remove them
	for (const auto& DurationEffect : DurationEffects)
	{
		if(DurationEffect.EffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
		{
			ApplyEffectToTarget(TargetActor, DurationEffect.GameplayEffectClass);
		}
	}

	//loop all infinite effects and remove them
	for (const auto& InfiniteEffect : InfiniteEffects)
	{
		if(InfiniteEffect.EffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
		{
			ApplyEffectToTarget(TargetActor, InfiniteEffect.GameplayEffectClass);
		}
	}

	TArray<FActiveGameplayEffectHandle> ActiveEffectHandlesToRemove;
	for(const auto& InfiniteEffect : InfiniteEffects)
	{
		if(InfiniteEffect.EffectRemovalPolicy == EEffectRemovalPolicy::RemoveOnEndOverlap)
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



