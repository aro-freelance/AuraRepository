// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_Armor.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_Armor::UMMC_Armor()
{
	AgilityDefinition.AttributeToCapture = UAuraAttributeSet::GetAgilityAttribute();
	AgilityDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	AgilityDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(AgilityDefinition);

	VitalityDefinition.AttributeToCapture = UAuraAttributeSet::GetVitalityAttribute();
	VitalityDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	VitalityDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(VitalityDefinition);
}

float UMMC_Armor::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = SourceTags;
	EvaluateParameters.TargetTags = TargetTags;

	float Agility = 0.f;
	GetCapturedAttributeMagnitude(AgilityDefinition, Spec, EvaluateParameters, Agility);
	Agility = FMath::Max<float>(Agility, 0.f);

	float Vitality = 0.f;
	GetCapturedAttributeMagnitude(VitalityDefinition, Spec, EvaluateParameters, Vitality);
	Vitality = FMath::Max<float>(Vitality, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();

	float Calculation = ((PlayerLevel * .5) + (Agility * 2.8f) + (Vitality * .8f));
	
	return Calculation;
}
