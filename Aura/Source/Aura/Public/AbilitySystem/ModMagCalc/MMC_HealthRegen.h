// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_HealthRegen.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_HealthRegen : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	
	UMMC_HealthRegen();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:

	FGameplayEffectAttributeCaptureDefinition VitalityDefinition;
	FGameplayEffectAttributeCaptureDefinition MindDefinition;
	
};
