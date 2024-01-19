// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_CritHitResistance.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_CritHitResistance::UMMC_CritHitResistance()
{
	ArmorDefinition.AttributeToCapture = UAuraAttributeSet::GetArmorAttribute();
	ArmorDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	ArmorDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(ArmorDefinition);
	
	CharismaDefinition.AttributeToCapture = UAuraAttributeSet::GetCharismaAttribute();
	CharismaDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	CharismaDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(CharismaDefinition);
}

float UMMC_CritHitResistance::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// Gather tags from source and target
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluateParameters;
	EvaluateParameters.SourceTags = SourceTags;
	EvaluateParameters.TargetTags = TargetTags;

	float Armor = 0.f;
	GetCapturedAttributeMagnitude(ArmorDefinition, Spec, EvaluateParameters, Armor);
	Armor = FMath::Max<float>(Armor, 0.f);

	float Charisma = 0.f;
	GetCapturedAttributeMagnitude(CharismaDefinition, Spec, EvaluateParameters, Charisma);
	Charisma = FMath::Max<float>(Charisma, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();

	//This is NOT a percent. This is going to basically be an "Armor" value to subtract from Crit Damage I think
	float Calculation = ((PlayerLevel * 10) + (Armor * .8f) + (Charisma * .2f));

	
	return Calculation;
}
