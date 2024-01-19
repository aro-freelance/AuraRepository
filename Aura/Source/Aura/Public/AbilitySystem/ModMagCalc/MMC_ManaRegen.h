// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_ManaRegen.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_ManaRegen : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	
	UMMC_ManaRegen();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:

	FGameplayEffectAttributeCaptureDefinition IntelligenceDefinition;
	FGameplayEffectAttributeCaptureDefinition MindDefinition;
	
};
