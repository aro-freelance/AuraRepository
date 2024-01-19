// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_CritChance.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_CritChance::UMMC_CritChance()
{
	DexterityDefinition.AttributeToCapture = UAuraAttributeSet::GetDexterityAttribute();
	DexterityDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	DexterityDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(DexterityDefinition);
}

float UMMC_CritChance::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = SourceTags;
	EvaluateParameters.TargetTags = TargetTags;

	float Dexterity = 0.f;
	GetCapturedAttributeMagnitude(DexterityDefinition, Spec, EvaluateParameters, Dexterity);
	Dexterity = FMath::Max<float>(Dexterity, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();
	const int32 ScoutLevel = CombatInterface->GetScoutLevel();

	float Calculation = ((PlayerLevel * .2) + (ScoutLevel * .3) + (Dexterity * .3f));

	
	return Calculation;
}
