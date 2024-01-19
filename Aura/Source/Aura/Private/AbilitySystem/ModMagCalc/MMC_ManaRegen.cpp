// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_ManaRegen.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_ManaRegen::UMMC_ManaRegen()
{
	IntelligenceDefinition.AttributeToCapture = UAuraAttributeSet::GetIntelligenceAttribute();
	IntelligenceDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	IntelligenceDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(IntelligenceDefinition);

	MindDefinition.AttributeToCapture = UAuraAttributeSet::GetMindAttribute();
	MindDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	MindDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(MindDefinition);
}

float UMMC_ManaRegen::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = SourceTags;
	EvaluateParameters.TargetTags = TargetTags;

	float Intelligence = 0.f;
	GetCapturedAttributeMagnitude(IntelligenceDefinition, Spec, EvaluateParameters, Intelligence);
	Intelligence = FMath::Max<float>(Intelligence, 0.f);

	float Mind = 0.f;
	GetCapturedAttributeMagnitude(MindDefinition, Spec, EvaluateParameters, Mind);
	Mind = FMath::Max<float>(Mind, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();
	const int32 MageLevel = CombatInterface->GetMageLevel();

	float Calculation = ((PlayerLevel * 1.3) + (MageLevel * 2.2) + (Intelligence * .1f) + (Mind * .05f));

	
	return Calculation;
}
