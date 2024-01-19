// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_CritDamage.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_CritDamage : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	
	UMMC_CritDamage();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:

	FGameplayEffectAttributeCaptureDefinition DexterityDefinition;
	FGameplayEffectAttributeCaptureDefinition StrengthDefinition;
	FGameplayEffectAttributeCaptureDefinition CharismaDefinition;
	
};
