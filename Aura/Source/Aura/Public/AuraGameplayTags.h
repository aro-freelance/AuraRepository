// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/*
 * AuraGameplayTags
 * 
 * Singleton containing native Gameplay Tags
*/


struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeGameplayTags();

	/** Primary */
	FGameplayTag Attributes_Primary_Strength;
	FGameplayTag Attributes_Primary_Dexterity;
	FGameplayTag Attributes_Primary_Vitality;
	FGameplayTag Attributes_Primary_Agility;
	FGameplayTag Attributes_Primary_Intelligence;
	FGameplayTag Attributes_Primary_Mind;
	FGameplayTag Attributes_Primary_Charisma;

	/** Secondary */
	FGameplayTag Attributes_Secondary_Armor;
	FGameplayTag Attributes_Secondary_ArmorPenetration;
	FGameplayTag Attributes_Secondary_BlockChance;
	FGameplayTag Attributes_Secondary_CriticalHitChance;
	FGameplayTag Attributes_Secondary_CriticalHitDamage;
	FGameplayTag Attributes_Secondary_CriticalHitResistance;
	FGameplayTag Attributes_Secondary_HealthRegen;
	FGameplayTag Attributes_Secondary_ManaRegen;
	FGameplayTag Attributes_Secondary_MaxHealth;
	FGameplayTag Attributes_Secondary_MaxMana;

	/** Input */
	FGameplayTag Input_LMB;
	FGameplayTag Input_RMB;
	FGameplayTag Input_01;
	FGameplayTag Input_02;
	FGameplayTag Input_03;
	FGameplayTag Input_04;
	FGameplayTag Input_05;
	FGameplayTag Input_06;
	FGameplayTag Input_07;
	FGameplayTag Input_08;
	FGameplayTag Input_09;
	FGameplayTag Input_10;
	
private:
	static FAuraGameplayTags GameplayTags;
	
};