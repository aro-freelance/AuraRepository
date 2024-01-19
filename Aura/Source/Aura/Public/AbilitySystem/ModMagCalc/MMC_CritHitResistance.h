// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_CritHitResistance.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_CritHitResistance : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	
	UMMC_CritHitResistance();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:

	FGameplayEffectAttributeCaptureDefinition ArmorDefinition;
	FGameplayEffectAttributeCaptureDefinition CharismaDefinition;
	
};
