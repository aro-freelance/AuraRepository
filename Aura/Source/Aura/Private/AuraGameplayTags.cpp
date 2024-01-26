// Copyright Arora Software


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{

	/** Primary */

	GameplayTags.Attributes_Primary_Strength =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Strength"),
		FString("Physical Power"));

	GameplayTags.Attributes_Primary_Dexterity =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Dexterity"),
		FString("Precision"));

	GameplayTags.Attributes_Primary_Vitality =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Vitality"),
		FString("Physical Resilience"));
	
	GameplayTags.Attributes_Primary_Agility =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Agility"),
		FString("Elusiveness"));

	GameplayTags.Attributes_Primary_Intelligence =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Intelligence"),
		FString("Magical Power"));

	GameplayTags.Attributes_Primary_Mind =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Mind"),
		FString("Magical Resilience"));

	GameplayTags.Attributes_Primary_Charisma =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Charisma"),
		FString("Luck and Charm"));
	
	
	/** Secondary */

	GameplayTags.Attributes_Secondary_Armor =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"),
		FString("Reduces damage taken."));
	
	GameplayTags.Attributes_Secondary_ArmorPenetration =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ArmorPenetration"),
		FString("Ignores percent of Armor."));

	GameplayTags.Attributes_Secondary_BlockChance =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.BlockChance"),
		FString("Chance to reduce incoming damage in half."));
	
	GameplayTags.Attributes_Secondary_CriticalHitChance =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitChance"),
		FString("Chance to double damage."));
	
	GameplayTags.Attributes_Secondary_CriticalHitDamage =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitDamage"),
		FString("Bonus damage added to critical hits."));
	
	GameplayTags.Attributes_Secondary_CriticalHitResistance =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitResistance"),
		FString("Reduce the damage of incoming critical hits."));
	
	GameplayTags.Attributes_Secondary_HealthRegen =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.HealthRegen"),
		FString("Amount of health regenerated per second."));
	
	GameplayTags.Attributes_Secondary_ManaRegen =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ManaRegen"),
		FString("Amount of mana regenerated per second."));
	
	GameplayTags.Attributes_Secondary_MaxHealth =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxHealth"),
		FString("Total Health."));
	
	GameplayTags.Attributes_Secondary_MaxMana =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxMana"),
		FString("Total Mana."));



	
	/** Input */

	GameplayTags.Input_LMB =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.LMB"),
		FString("Input Tag for Left Mouse Button."));

	GameplayTags.Input_RMB =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.RMB"),
		FString("Input Tag for Right Mouse Button."));
	
	GameplayTags.Input_01 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.01"),
		FString("Input Tag 01."));
	
	GameplayTags.Input_02 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.02"),
		FString("Input Tag 02."));
	
	GameplayTags.Input_03 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.03"),
		FString("Input Tag 03."));
	
	GameplayTags.Input_04 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.04"),
		FString("Input Tag 04."));
	
	GameplayTags.Input_05 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.05"),
		FString("Input Tag 05."));
	
	GameplayTags.Input_06 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.06"),
		FString("Input Tag 06."));
	
	GameplayTags.Input_07 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.07"),
		FString("Input Tag 07."));
	
	GameplayTags.Input_08 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.08"),
		FString("Input Tag 08."));
	
	GameplayTags.Input_09 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.09"),
		FString("Input Tag 09."));
	
	GameplayTags.Input_10 =
		UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Input.10"),
		FString("Input Tag 10."));


	
}

