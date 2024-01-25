// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAttributeSet() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet();
	AURA_API UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FEffectProperties>()
{
	return FEffectProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEffectProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DECLARE_DELEGATE_RetVal(FGameplayAttribute, FAttributeSignature);\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DECLARE_DELEGATE_RetVal(FGameplayAttribute, FAttributeSignature);" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData), Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"EffectProperties",
		Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
		sizeof(FEffectProperties),
		alignof(FEffectProperties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_ManaRegen)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManaRegen(Z_Param_Out_OldManaRegen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_HealthRegen)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HealthRegen(Z_Param_Out_OldHealthRegen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CriticalHitResistance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalHitResistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalHitResistance(Z_Param_Out_OldCriticalHitResistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CriticalDamage)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalDamage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalDamage(Z_Param_Out_OldCriticalDamage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_CriticalChance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCriticalChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CriticalChance(Z_Param_Out_OldCriticalChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_BlockChance)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBlockChance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BlockChance(Z_Param_Out_OldBlockChance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_ArmorPenetration)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmorPenetration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ArmorPenetration(Z_Param_Out_OldArmorPenetration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Charisma)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCharisma);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Charisma(Z_Param_Out_OldCharisma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Mind)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mind(Z_Param_Out_OldMind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Intelligence)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldIntelligence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Intelligence(Z_Param_Out_OldIntelligence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Agility)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAgility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Agility(Z_Param_Out_OldAgility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Vitality)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldVitality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Vitality(Z_Param_Out_OldVitality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Dexterity)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDexterity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Dexterity(Z_Param_Out_OldDexterity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Strength)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Strength(Z_Param_Out_OldStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UAuraAttributeSet::StaticRegisterNativesUAuraAttributeSet()
	{
		UClass* Class = UAuraAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Agility", &UAuraAttributeSet::execOnRep_Agility },
			{ "OnRep_Armor", &UAuraAttributeSet::execOnRep_Armor },
			{ "OnRep_ArmorPenetration", &UAuraAttributeSet::execOnRep_ArmorPenetration },
			{ "OnRep_BlockChance", &UAuraAttributeSet::execOnRep_BlockChance },
			{ "OnRep_Charisma", &UAuraAttributeSet::execOnRep_Charisma },
			{ "OnRep_CriticalChance", &UAuraAttributeSet::execOnRep_CriticalChance },
			{ "OnRep_CriticalDamage", &UAuraAttributeSet::execOnRep_CriticalDamage },
			{ "OnRep_CriticalHitResistance", &UAuraAttributeSet::execOnRep_CriticalHitResistance },
			{ "OnRep_Dexterity", &UAuraAttributeSet::execOnRep_Dexterity },
			{ "OnRep_Health", &UAuraAttributeSet::execOnRep_Health },
			{ "OnRep_HealthRegen", &UAuraAttributeSet::execOnRep_HealthRegen },
			{ "OnRep_Intelligence", &UAuraAttributeSet::execOnRep_Intelligence },
			{ "OnRep_Mana", &UAuraAttributeSet::execOnRep_Mana },
			{ "OnRep_ManaRegen", &UAuraAttributeSet::execOnRep_ManaRegen },
			{ "OnRep_MaxHealth", &UAuraAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UAuraAttributeSet::execOnRep_MaxMana },
			{ "OnRep_Mind", &UAuraAttributeSet::execOnRep_Mind },
			{ "OnRep_Strength", &UAuraAttributeSet::execOnRep_Strength },
			{ "OnRep_Vitality", &UAuraAttributeSet::execOnRep_Vitality },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics
	{
		struct AuraAttributeSet_eventOnRep_Agility_Parms
		{
			FGameplayAttributeData OldAgility;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAgility_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAgility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::NewProp_OldAgility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::NewProp_OldAgility = { "OldAgility", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Agility_Parms, OldAgility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::NewProp_OldAgility_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::NewProp_OldAgility_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::NewProp_OldAgility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Agility", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::AuraAttributeSet_eventOnRep_Agility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::AuraAttributeSet_eventOnRep_Agility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics
	{
		struct AuraAttributeSet_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Armor", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::AuraAttributeSet_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::AuraAttributeSet_eventOnRep_Armor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics
	{
		struct AuraAttributeSet_eventOnRep_ArmorPenetration_Parms
		{
			FGameplayAttributeData OldArmorPenetration;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmorPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmorPenetration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration = { "OldArmorPenetration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_ArmorPenetration_Parms, OldArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::NewProp_OldArmorPenetration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_ArmorPenetration", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::AuraAttributeSet_eventOnRep_ArmorPenetration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::AuraAttributeSet_eventOnRep_ArmorPenetration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics
	{
		struct AuraAttributeSet_eventOnRep_BlockChance_Parms
		{
			FGameplayAttributeData OldBlockChance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldBlockChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldBlockChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance = { "OldBlockChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_BlockChance_Parms, OldBlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_BlockChance", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::AuraAttributeSet_eventOnRep_BlockChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::AuraAttributeSet_eventOnRep_BlockChance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics
	{
		struct AuraAttributeSet_eventOnRep_Charisma_Parms
		{
			FGameplayAttributeData OldCharisma;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCharisma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCharisma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma = { "OldCharisma", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Charisma_Parms, OldCharisma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Charisma", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::AuraAttributeSet_eventOnRep_Charisma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::AuraAttributeSet_eventOnRep_Charisma_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics
	{
		struct AuraAttributeSet_eventOnRep_CriticalChance_Parms
		{
			FGameplayAttributeData OldCriticalChance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance = { "OldCriticalChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CriticalChance_Parms, OldCriticalChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::NewProp_OldCriticalChance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CriticalChance", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::AuraAttributeSet_eventOnRep_CriticalChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::AuraAttributeSet_eventOnRep_CriticalChance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics
	{
		struct AuraAttributeSet_eventOnRep_CriticalDamage_Parms
		{
			FGameplayAttributeData OldCriticalDamage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::NewProp_OldCriticalDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::NewProp_OldCriticalDamage = { "OldCriticalDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CriticalDamage_Parms, OldCriticalDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::NewProp_OldCriticalDamage_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::NewProp_OldCriticalDamage_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::NewProp_OldCriticalDamage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CriticalDamage", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::AuraAttributeSet_eventOnRep_CriticalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::AuraAttributeSet_eventOnRep_CriticalDamage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics
	{
		struct AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms
		{
			FGameplayAttributeData OldCriticalHitResistance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldCriticalHitResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldCriticalHitResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance = { "OldCriticalHitResistance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms, OldCriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::NewProp_OldCriticalHitResistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_CriticalHitResistance", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::AuraAttributeSet_eventOnRep_CriticalHitResistance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics
	{
		struct AuraAttributeSet_eventOnRep_Dexterity_Parms
		{
			FGameplayAttributeData OldDexterity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldDexterity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldDexterity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity = { "OldDexterity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Dexterity_Parms, OldDexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::NewProp_OldDexterity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Dexterity", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::AuraAttributeSet_eventOnRep_Dexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::AuraAttributeSet_eventOnRep_Dexterity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics
	{
		struct AuraAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::AuraAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::AuraAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics
	{
		struct AuraAttributeSet_eventOnRep_HealthRegen_Parms
		{
			FGameplayAttributeData OldHealthRegen;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldHealthRegen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldHealthRegen = { "OldHealthRegen", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_HealthRegen_Parms, OldHealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldHealthRegen_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldHealthRegen_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldHealthRegen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_HealthRegen", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::AuraAttributeSet_eventOnRep_HealthRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::AuraAttributeSet_eventOnRep_HealthRegen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics
	{
		struct AuraAttributeSet_eventOnRep_Intelligence_Parms
		{
			FGameplayAttributeData OldIntelligence;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldIntelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldIntelligence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence = { "OldIntelligence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Intelligence_Parms, OldIntelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Intelligence", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::AuraAttributeSet_eventOnRep_Intelligence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::AuraAttributeSet_eventOnRep_Intelligence_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics
	{
		struct AuraAttributeSet_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::AuraAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::AuraAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics
	{
		struct AuraAttributeSet_eventOnRep_ManaRegen_Parms
		{
			FGameplayAttributeData OldManaRegen;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldManaRegen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldManaRegen = { "OldManaRegen", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_ManaRegen_Parms, OldManaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldManaRegen_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldManaRegen_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldManaRegen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_ManaRegen", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::AuraAttributeSet_eventOnRep_ManaRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::AuraAttributeSet_eventOnRep_ManaRegen_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics
	{
		struct AuraAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::AuraAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::AuraAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics
	{
		struct AuraAttributeSet_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::AuraAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::AuraAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics
	{
		struct AuraAttributeSet_eventOnRep_Mind_Parms
		{
			FGameplayAttributeData OldMind;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldMind_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldMind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::NewProp_OldMind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::NewProp_OldMind = { "OldMind", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Mind_Parms, OldMind), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::NewProp_OldMind_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::NewProp_OldMind_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::NewProp_OldMind,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Mind", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::AuraAttributeSet_eventOnRep_Mind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::AuraAttributeSet_eventOnRep_Mind_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics
	{
		struct AuraAttributeSet_eventOnRep_Strength_Parms
		{
			FGameplayAttributeData OldStrength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength = { "OldStrength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Strength_Parms, OldStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::AuraAttributeSet_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::AuraAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics
	{
		struct AuraAttributeSet_eventOnRep_Vitality_Parms
		{
			FGameplayAttributeData OldVitality;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldVitality_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldVitality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::NewProp_OldVitality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::NewProp_OldVitality = { "OldVitality", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAttributeSet_eventOnRep_Vitality_Parms, OldVitality), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::NewProp_OldVitality_MetaData), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::NewProp_OldVitality_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::NewProp_OldVitality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAttributeSet, nullptr, "OnRep_Vitality", nullptr, nullptr, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::AuraAttributeSet_eventOnRep_Vitality_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::AuraAttributeSet_eventOnRep_Vitality_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAttributeSet);
	UClass* Z_Construct_UClass_UAuraAttributeSet_NoRegister()
	{
		return UAuraAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dexterity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vitality_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vitality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Agility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mind_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Charisma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalChance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalDamage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitResistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Agility, "OnRep_Agility" }, // 947975593
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 439278704
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_ArmorPenetration, "OnRep_ArmorPenetration" }, // 428745567
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 2895123199
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Charisma, "OnRep_Charisma" }, // 3896962755
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalChance, "OnRep_CriticalChance" }, // 1219882843
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalDamage, "OnRep_CriticalDamage" }, // 1242316876
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_CriticalHitResistance, "OnRep_CriticalHitResistance" }, // 463870411
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Dexterity, "OnRep_Dexterity" }, // 1133915597
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Health, "OnRep_Health" }, // 928571338
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_HealthRegen, "OnRep_HealthRegen" }, // 2571365526
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Intelligence, "OnRep_Intelligence" }, // 196417345
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 1393059406
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_ManaRegen, "OnRep_ManaRegen" }, // 1742511136
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3682557547
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 346995521
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Mind, "OnRep_Mind" }, // 2946946900
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 3845953358
		{ &Z_Construct_UFunction_UAuraAttributeSet_OnRep_Vitality, "OnRep_Vitality" }, // 2705182968
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AuraAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Vital Attributes\n\x09 *///Health\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Vital Attributes\n//Health" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mana\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Primary Attributes\n\x09 *///Strength\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Primary Attributes\n//Strength" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Dexterity_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Dexterity\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dexterity" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Dexterity = { "Dexterity", "OnRep_Dexterity", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Dexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Dexterity_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Dexterity_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vitality_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Vitality\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vitality" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vitality = { "Vitality", "OnRep_Vitality", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Vitality), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vitality_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vitality_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Agility_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Agility\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Agility" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Agility = { "Agility", "OnRep_Agility", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Agility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Agility_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Agility_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Intelligence\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intelligence" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", "OnRep_Intelligence", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mind_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mind\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mind" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mind = { "Mind", "OnRep_Mind", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Mind), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mind_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mind_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Charisma_MetaData[] = {
		{ "Category", "Primary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Charisma\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Charisma" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Charisma = { "Charisma", "OnRep_Charisma", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Charisma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Charisma_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Charisma_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Secondary Attributes\n\x09 *\n\x09 *///Armor\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Secondary Attributes\n*\n//Armor" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Armor Penetration\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Armor Penetration" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration = { "ArmorPenetration", "OnRep_ArmorPenetration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, ArmorPenetration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Block Chance\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Block Chance" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalChance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Critical Chance\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Critical Chance" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalChance = { "CriticalChance", "OnRep_CriticalChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CriticalChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalChance_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalChance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalDamage_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Critical Damage\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Critical Damage" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalDamage = { "CriticalDamage", "OnRep_CriticalDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CriticalDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalDamage_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalDamage_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Critical Hit Resistance\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Critical Hit Resistance" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance = { "CriticalHitResistance", "OnRep_CriticalHitResistance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, CriticalHitResistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegen_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Health Regen\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Regen" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegen = { "HealthRegen", "OnRep_HealthRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, HealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegen_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegen_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegen_MetaData[] = {
		{ "Category", "Secondary Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mana Regen\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana Regen" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegen = { "ManaRegen", "OnRep_ManaRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, ManaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegen_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegen_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Max Health\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Health" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Max Mana\n" },
#endif
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Mana" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana_MetaData), Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Dexterity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Vitality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Agility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Intelligence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Mind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Charisma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ArmorPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_BlockChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_CriticalHitResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_HealthRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_ManaRegen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraAttributeSet_Statics::NewProp_MaxMana,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams = {
		&UAuraAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAuraAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton, Z_Construct_UClass_UAuraAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAttributeSet.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAttributeSet>()
	{
		return UAuraAttributeSet::StaticClass();
	}

	void UAuraAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_Strength(TEXT("Strength"));
		static const FName Name_Dexterity(TEXT("Dexterity"));
		static const FName Name_Vitality(TEXT("Vitality"));
		static const FName Name_Agility(TEXT("Agility"));
		static const FName Name_Intelligence(TEXT("Intelligence"));
		static const FName Name_Mind(TEXT("Mind"));
		static const FName Name_Charisma(TEXT("Charisma"));
		static const FName Name_Armor(TEXT("Armor"));
		static const FName Name_ArmorPenetration(TEXT("ArmorPenetration"));
		static const FName Name_BlockChance(TEXT("BlockChance"));
		static const FName Name_CriticalChance(TEXT("CriticalChance"));
		static const FName Name_CriticalDamage(TEXT("CriticalDamage"));
		static const FName Name_CriticalHitResistance(TEXT("CriticalHitResistance"));
		static const FName Name_HealthRegen(TEXT("HealthRegen"));
		static const FName Name_ManaRegen(TEXT("ManaRegen"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_MaxMana(TEXT("MaxMana"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
			&& Name_Dexterity == ClassReps[(int32)ENetFields_Private::Dexterity].Property->GetFName()
			&& Name_Vitality == ClassReps[(int32)ENetFields_Private::Vitality].Property->GetFName()
			&& Name_Agility == ClassReps[(int32)ENetFields_Private::Agility].Property->GetFName()
			&& Name_Intelligence == ClassReps[(int32)ENetFields_Private::Intelligence].Property->GetFName()
			&& Name_Mind == ClassReps[(int32)ENetFields_Private::Mind].Property->GetFName()
			&& Name_Charisma == ClassReps[(int32)ENetFields_Private::Charisma].Property->GetFName()
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
			&& Name_ArmorPenetration == ClassReps[(int32)ENetFields_Private::ArmorPenetration].Property->GetFName()
			&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
			&& Name_CriticalChance == ClassReps[(int32)ENetFields_Private::CriticalChance].Property->GetFName()
			&& Name_CriticalDamage == ClassReps[(int32)ENetFields_Private::CriticalDamage].Property->GetFName()
			&& Name_CriticalHitResistance == ClassReps[(int32)ENetFields_Private::CriticalHitResistance].Property->GetFName()
			&& Name_HealthRegen == ClassReps[(int32)ENetFields_Private::HealthRegen].Property->GetFName()
			&& Name_ManaRegen == ClassReps[(int32)ENetFields_Private::ManaRegen].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAuraAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAttributeSet);
	UAuraAttributeSet::~UAuraAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"), &Z_Registration_Info_UScriptStruct_EffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 1553216266U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAttributeSet, UAuraAttributeSet::StaticClass, TEXT("UAuraAttributeSet"), &Z_Registration_Info_UClass_UAuraAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAttributeSet), 1080192324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_1355239591(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAttributeSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
