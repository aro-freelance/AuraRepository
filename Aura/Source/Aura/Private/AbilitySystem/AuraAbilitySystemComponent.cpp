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
	for (const TSubclassOf<UGameplayAbility> AbilityClass : StartupAbilities)
	{
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass,  1);
		if (const UAuraGameplayAbility* AuraAbility = Cast<UAuraGameplayAbility>(AbilitySpec.Ability))
		{
			AbilitySpec.DynamicAbilityTags.AddTag(AuraAbility->StartupInputTag);
			GiveAbility(AbilityClass);
		}
		
	}
}

void UAuraAbilitySystemComponent::AbilityInputTagHeld(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid()) return;

	//this is showing
	GEngine->AddOnScreenDebugMessage(12, 3.f, FColor::Green, *InputTag.ToString());
	
	for (FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		//GEngine->AddOnScreenDebugMessage(3, 3.f, FColor::Purple, *AbilitySpec.GetDebugString());
		UE_LOG(LogTemp, Warning, TEXT("AbilityInputTagHeld: %s"), *AbilitySpec.GetDebugString());

		if(AbilitySpec.IsActive())
		{
			GEngine->AddOnScreenDebugMessage(3, 3.f, FColor::Purple, *InputTag.ToString());
		}
		else { UE_LOG(LogTemp, Warning, TEXT("AbilityInputTagHeld: not active"))};
		if(!AbilitySpec.DynamicAbilityTags.IsEmpty())
		{
			GEngine->AddOnScreenDebugMessage(6, 3.f, FColor::Orange, *InputTag.ToString());
		}
		else { UE_LOG(LogTemp, Warning, TEXT("AbilityInputTagHeld: no tags"))};
		
		//nothing in here is showing
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			//GEngine->AddOnScreenDebugMessage(4, 3.f, FColor::Green, *InputTag.ToString());
			AbilitySpecInputPressed(AbilitySpec);
			
			if (!AbilitySpec.IsActive())
			{
				//GEngine->AddOnScreenDebugMessage(5, 3.f, FColor::Orange, *InputTag.ToString());
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
