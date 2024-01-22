// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "MMC_BlockChance.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UMMC_BlockChance : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()

public:
	
	UMMC_BlockChance();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:

	FGameplayEffectAttributeCaptureDefinition AgilityDefinition;
	
};