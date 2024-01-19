// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_HealthRegen.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_HealthRegen::UMMC_HealthRegen()
{
	VitalityDefinition.AttributeToCapture = UAuraAttributeSet::GetVitalityAttribute();
	VitalityDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	VitalityDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(VitalityDefinition);

	MindDefinition.AttributeToCapture = UAuraAttributeSet::GetMindAttribute();
	MindDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	MindDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(MindDefinition);

}

float UMMC_HealthRegen::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
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

	float Mind = 0.f;
	GetCapturedAttributeMagnitude(MindDefinition, Spec, EvaluateParameters, Mind);
	Mind = FMath::Max<float>(Mind, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();

	//This is a health value not a percent.
	float Calculation = ((PlayerLevel * 2.3) + (Vitality * .1) + (Mind * .05f));

	
	return Calculation;
}
