// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_ArmorPenetration.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_ArmorPenetration : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	
	UMMC_ArmorPenetration();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:

	FGameplayEffectAttributeCaptureDefinition DexterityDefinition;
	FGameplayEffectAttributeCaptureDefinition StrengthDefinition;
	FGameplayEffectAttributeCaptureDefinition CharismaDefinition;
	
};
