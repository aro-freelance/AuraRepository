// Copyright Arora Software


#include "AbilitySystem/AuraAbilitySystemComponent.h"

#include "AuraGameplayTags.h"

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAuraAbilitySystemComponent::EffectApplied);
	
	
}

void UAuraAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent,
                                                const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	//add tags to a container
	FGameplayTagContainer TagContainer;
	EffectSpec.GetAllAssetTags(TagContainer); //NOTE: asset tags and granted tags are different types

	//broadcast the tag. This is now used by a lambda function in the OverlayWidgetController?
	EffectAssetTags.Broadcast(TagContainer);
	
}
