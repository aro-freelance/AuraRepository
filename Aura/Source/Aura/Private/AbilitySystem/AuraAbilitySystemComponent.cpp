// Copyright Arora Software


#include "AbilitySystem/AuraAbilitySystemComponent.h"

#include "AuraGameplayTags.h"
#include "AbilitySystem/Abilities/AuraGameplayAbility.h"

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAuraAbilitySystemComponent::EffectApplied);
	
	
}

void UAuraAbilitySystemComponent::AddCharacterAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartupAbilities)
{
	UE_LOG(LogTemp, Warning, TEXT("AddCharacterAbilities. A"))
	for (const TSubclassOf<UGameplayAbility> AbilityClass : StartupAbilities)
	{
		UE_LOG(LogTemp, Warning, TEXT("AddCharacterAbilities. B"))
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass,  1);
		if (const UAuraGameplayAbility* AuraAbility = Cast<UAuraGameplayAbility>(AbilitySpec.Ability))
		{
			UE_LOG(LogTemp, Warning, TEXT("AddCharacterAbilities. C. %s"), *AuraAbility->StartupInputTag.ToString())
			AbilitySpec.DynamicAbilityTags.AddTag(AuraAbility->StartupInputTag);

			GiveAbility(AbilitySpec);
			
			
		}
		
	}
}

void UAuraAbilitySystemComponent::AbilityInputTagHeld(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;
	
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			AbilitySpecInputPressed(AbilitySpec);
			
			if (!AbilitySpec.IsActive())
			{
				TryActivateAbility(AbilitySpec.Handle);
			}
		}
	}
	
}

void UAuraAbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;

	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			AbilitySpecInputReleased(AbilitySpec);
		}
	}
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
