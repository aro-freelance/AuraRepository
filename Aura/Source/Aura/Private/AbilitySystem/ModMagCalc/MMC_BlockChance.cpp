// Copyright Arora Software


#include "AbilitySystem/ModMagCalc/MMC_BlockChance.h"

#include "AbilitySystem/AuraAttributeSet.h"
#include "Interaction/CombatInterface.h"

UMMC_BlockChance::UMMC_BlockChance()
{
	AgilityDefinition.AttributeToCapture = UAuraAttributeSet::GetAgilityAttribute();
	AgilityDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	AgilityDefinition.bSnapshot = false;
	RelevantAttributesToCapture.Add(AgilityDefinition);
}

float UMMC_BlockChance::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
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


	ICombatInterface* CombatInterface = Cast<ICombatInterface>(Spec.GetContext().GetSourceObject());
	const int32 PlayerLevel = CombatInterface->GetPlayerLevel();
	const int32 WarriorLevel = CombatInterface->GetWarriorLevel();

	float Calculation = ((PlayerLevel * .3) + (WarriorLevel * .2) + (Agility * .3f));

	
	return Calculation;
}
