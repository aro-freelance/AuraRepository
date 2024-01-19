// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_MaxHealth.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_MaxHealth::UMMC_MaxHealth()
{
	VitalityDefinition.AttributeToCapture = UAuraAttributeSet::GetVitalityAttribute();
	VitalityDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	VitalityDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(VitalityDefinition);

	StrengthDefinition.AttributeToCapture = UAuraAttributeSet::GetStrengthAttribute();
	StrengthDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	StrengthDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(StrengthDefinition);
}

float UMMC_MaxHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = SourceTags;
	EvaluateParameters.TargetTags = TargetTags;

	float Vitality = 0.f;
	GetCapturedAttributeMagnitude(VitalityDefinition, Spec, EvaluateParameters, Vitality);
	Vitality = FMath::Max<float>(Vitality, 0.f);

	float Strength = 0.f;
	GetCapturedAttributeMagnitude(StrengthDefinition, Spec, EvaluateParameters, Strength);
	Strength = FMath::Max<float>(Strength, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();
	const int32 WarriorLevel = CombatInterface->GetWarriorLevel();

	float Calculation = ((PlayerLevel * 18.2) + (WarriorLevel * 20) + (Vitality * 3.7f) + (Strength * .5f));

	
	return Calculation;
}
