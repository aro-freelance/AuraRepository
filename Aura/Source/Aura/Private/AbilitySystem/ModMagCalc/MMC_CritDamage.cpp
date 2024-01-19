// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_CritDamage.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_CritDamage::UMMC_CritDamage()
{
	DexterityDefinition.AttributeToCapture = UAuraAttributeSet::GetDexterityAttribute();
	DexterityDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	DexterityDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(DexterityDefinition);

	StrengthDefinition.AttributeToCapture = UAuraAttributeSet::GetStrengthAttribute();
	StrengthDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	StrengthDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(StrengthDefinition);

	CharismaDefinition.AttributeToCapture = UAuraAttributeSet::GetCharismaAttribute();
	CharismaDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	CharismaDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(CharismaDefinition);
}

float UMMC_CritDamage::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
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
	
	float Strength = 0.f;
	GetCapturedAttributeMagnitude(StrengthDefinition, Spec, EvaluateParameters, Strength);
	Strength = FMath::Max<float>(Strength, 0.f);
	
	float Charisma = 0.f;
	GetCapturedAttributeMagnitude(CharismaDefinition, Spec, EvaluateParameters, Charisma);
	Charisma = FMath::Max<float>(Charisma, 0.f);

	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();

	float Calculation = ((PlayerLevel * 20.f) + (Dexterity * .4f) + (Strength * 1.2f) + (Charisma * 1.1f));

	
	return Calculation;
}
