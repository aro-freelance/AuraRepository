// Copyright Arora Software


#include "Input/AuraInputConfig.h"


const UInputAction* UAuraInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputTag,
                                                                   bool blogNotFound) const
{
	for (const FAuraInputAction& AbilityInputAction : AbilityInputActions)
	{
		if (InputTag == AbilityInputAction.InputTag)
		{
			return AbilityInputAction.InputAction;
		}
	}

	if(blogNotFound)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot find AbilityInputAction for InputTag %s on Input Config: %s"),
			*InputTag.ToString(),
			*GetNameSafe(this));
	}

	return nullptr;
}
