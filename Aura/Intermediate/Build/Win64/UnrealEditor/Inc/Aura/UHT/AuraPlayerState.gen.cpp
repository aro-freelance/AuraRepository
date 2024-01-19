// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Player/AuraPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraPlayerState() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerState();
	AURA_API UClass* Z_Construct_UClass_AAuraPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(AAuraPlayerState::execOnRep_LightningLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldLightningLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LightningLevel(Z_Param_OldLightningLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraPlayerState::execOnRep_IceLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldIceLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IceLevel(Z_Param_OldIceLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraPlayerState::execOnRep_FireLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldFireLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_FireLevel(Z_Param_OldFireLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraPlayerState::execOnRep_ScoutLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldScoutLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ScoutLevel(Z_Param_OldScoutLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraPlayerState::execOnRep_WarriorLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldWarriorLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WarriorLevel(Z_Param_OldWarriorLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraPlayerState::execOnRep_MageLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldMageLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MageLevel(Z_Param_OldMageLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraPlayerState::execOnRep_PlayerLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OldPlayerLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerLevel(Z_Param_OldPlayerLevel);
		P_NATIVE_END;
	}
	void AAuraPlayerState::StaticRegisterNativesAAuraPlayerState()
	{
		UClass* Class = AAuraPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_FireLevel", &AAuraPlayerState::execOnRep_FireLevel },
			{ "OnRep_IceLevel", &AAuraPlayerState::execOnRep_IceLevel },
			{ "OnRep_LightningLevel", &AAuraPlayerState::execOnRep_LightningLevel },
			{ "OnRep_MageLevel", &AAuraPlayerState::execOnRep_MageLevel },
			{ "OnRep_PlayerLevel", &AAuraPlayerState::execOnRep_PlayerLevel },
			{ "OnRep_ScoutLevel", &AAuraPlayerState::execOnRep_ScoutLevel },
			{ "OnRep_WarriorLevel", &AAuraPlayerState::execOnRep_WarriorLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics
	{
		struct AuraPlayerState_eventOnRep_FireLevel_Parms
		{
			int32 OldFireLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldFireLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::NewProp_OldFireLevel = { "OldFireLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_FireLevel_Parms, OldFireLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::NewProp_OldFireLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_FireLevel", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::AuraPlayerState_eventOnRep_FireLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::AuraPlayerState_eventOnRep_FireLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics
	{
		struct AuraPlayerState_eventOnRep_IceLevel_Parms
		{
			int32 OldIceLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldIceLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::NewProp_OldIceLevel = { "OldIceLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_IceLevel_Parms, OldIceLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::NewProp_OldIceLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_IceLevel", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::AuraPlayerState_eventOnRep_IceLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::AuraPlayerState_eventOnRep_IceLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics
	{
		struct AuraPlayerState_eventOnRep_LightningLevel_Parms
		{
			int32 OldLightningLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldLightningLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::NewProp_OldLightningLevel = { "OldLightningLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_LightningLevel_Parms, OldLightningLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::NewProp_OldLightningLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_LightningLevel", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::AuraPlayerState_eventOnRep_LightningLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::AuraPlayerState_eventOnRep_LightningLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics
	{
		struct AuraPlayerState_eventOnRep_MageLevel_Parms
		{
			int32 OldMageLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldMageLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::NewProp_OldMageLevel = { "OldMageLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_MageLevel_Parms, OldMageLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::NewProp_OldMageLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_MageLevel", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::AuraPlayerState_eventOnRep_MageLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::AuraPlayerState_eventOnRep_MageLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics
	{
		struct AuraPlayerState_eventOnRep_PlayerLevel_Parms
		{
			int32 OldPlayerLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldPlayerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::NewProp_OldPlayerLevel = { "OldPlayerLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_PlayerLevel_Parms, OldPlayerLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::NewProp_OldPlayerLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_PlayerLevel", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::AuraPlayerState_eventOnRep_PlayerLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::AuraPlayerState_eventOnRep_PlayerLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics
	{
		struct AuraPlayerState_eventOnRep_ScoutLevel_Parms
		{
			int32 OldScoutLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldScoutLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::NewProp_OldScoutLevel = { "OldScoutLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_ScoutLevel_Parms, OldScoutLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::NewProp_OldScoutLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_ScoutLevel", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::AuraPlayerState_eventOnRep_ScoutLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::AuraPlayerState_eventOnRep_ScoutLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics
	{
		struct AuraPlayerState_eventOnRep_WarriorLevel_Parms
		{
			int32 OldWarriorLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldWarriorLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::NewProp_OldWarriorLevel = { "OldWarriorLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraPlayerState_eventOnRep_WarriorLevel_Parms, OldWarriorLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::NewProp_OldWarriorLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraPlayerState, nullptr, "OnRep_WarriorLevel", nullptr, nullptr, Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::AuraPlayerState_eventOnRep_WarriorLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::AuraPlayerState_eventOnRep_WarriorLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraPlayerState);
	UClass* Z_Construct_UClass_AAuraPlayerState_NoRegister()
	{
		return AAuraPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AAuraPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MageLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MageLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarriorLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WarriorLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoutLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScoutLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FireLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightningLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightningLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_FireLevel, "OnRep_FireLevel" }, // 450015449
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_IceLevel, "OnRep_IceLevel" }, // 4275773905
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_LightningLevel, "OnRep_LightningLevel" }, // 4243173568
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_MageLevel, "OnRep_MageLevel" }, // 3691661637
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_PlayerLevel, "OnRep_PlayerLevel" }, // 2646090679
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_ScoutLevel, "OnRep_ScoutLevel" }, // 3717591671
		{ &Z_Construct_UFunction_AAuraPlayerState_OnRep_WarriorLevel, "OnRep_WarriorLevel" }, // 4284866363
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/AuraPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_PlayerLevel = { "PlayerLevel", "OnRep_PlayerLevel", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, PlayerLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_PlayerLevel_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_PlayerLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_MageLevel_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_MageLevel = { "MageLevel", "OnRep_MageLevel", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, MageLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_MageLevel_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_MageLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_WarriorLevel_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_WarriorLevel = { "WarriorLevel", "OnRep_WarriorLevel", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, WarriorLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_WarriorLevel_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_WarriorLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_ScoutLevel_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_ScoutLevel = { "ScoutLevel", "OnRep_ScoutLevel", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, ScoutLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_ScoutLevel_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_ScoutLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_FireLevel_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_FireLevel = { "FireLevel", "OnRep_FireLevel", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, FireLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_FireLevel_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_FireLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_IceLevel_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_IceLevel = { "IceLevel", "OnRep_IceLevel", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, IceLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_IceLevel_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_IceLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_LightningLevel_MetaData[] = {
		{ "Category", "AuraPlayerState" },
		{ "ModuleRelativePath", "Public/Player/AuraPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_LightningLevel = { "LightningLevel", "OnRep_LightningLevel", (EPropertyFlags)0x0040000100020021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraPlayerState, LightningLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_LightningLevel_MetaData), Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_LightningLevel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_PlayerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_MageLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_WarriorLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_ScoutLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_FireLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_IceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraPlayerState_Statics::NewProp_LightningLevel,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAuraPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAuraPlayerState, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraPlayerState_Statics::ClassParams = {
		&AAuraPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraPlayerState()
	{
		if (!Z_Registration_Info_UClass_AAuraPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraPlayerState.OuterSingleton, Z_Construct_UClass_AAuraPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraPlayerState.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraPlayerState>()
	{
		return AAuraPlayerState::StaticClass();
	}

	void AAuraPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayerLevel(TEXT("PlayerLevel"));
		static const FName Name_MageLevel(TEXT("MageLevel"));
		static const FName Name_WarriorLevel(TEXT("WarriorLevel"));
		static const FName Name_ScoutLevel(TEXT("ScoutLevel"));
		static const FName Name_FireLevel(TEXT("FireLevel"));
		static const FName Name_IceLevel(TEXT("IceLevel"));
		static const FName Name_LightningLevel(TEXT("LightningLevel"));

		const bool bIsValid = true
			&& Name_PlayerLevel == ClassReps[(int32)ENetFields_Private::PlayerLevel].Property->GetFName()
			&& Name_MageLevel == ClassReps[(int32)ENetFields_Private::MageLevel].Property->GetFName()
			&& Name_WarriorLevel == ClassReps[(int32)ENetFields_Private::WarriorLevel].Property->GetFName()
			&& Name_ScoutLevel == ClassReps[(int32)ENetFields_Private::ScoutLevel].Property->GetFName()
			&& Name_FireLevel == ClassReps[(int32)ENetFields_Private::FireLevel].Property->GetFName()
			&& Name_IceLevel == ClassReps[(int32)ENetFields_Private::IceLevel].Property->GetFName()
			&& Name_LightningLevel == ClassReps[(int32)ENetFields_Private::LightningLevel].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAuraPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraPlayerState);
	AAuraPlayerState::~AAuraPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraPlayerState, AAuraPlayerState::StaticClass, TEXT("AAuraPlayerState"), &Z_Registration_Info_UClass_AAuraPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraPlayerState), 3254407463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_3787287504(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
