// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Actor/AuraEffectActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraEffectActor() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraEffectActor();
	AURA_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy();
	AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy();
	AURA_API UScriptStruct* Z_Construct_UScriptStruct_FAuraEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectApplicationPolicy;
	static UEnum* EEffectApplicationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectApplicationPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectApplicationPolicy"));
		}
		return Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton;
	}
	template<> AURA_API UEnum* StaticEnum<EEffectApplicationPolicy>()
	{
		return EEffectApplicationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators[] = {
		{ "EEffectApplicationPolicy::ApplyOnOverlap", (int64)EEffectApplicationPolicy::ApplyOnOverlap },
		{ "EEffectApplicationPolicy::ApplyOnEndOverlap", (int64)EEffectApplicationPolicy::ApplyOnEndOverlap },
		{ "EEffectApplicationPolicy::DoNotApply", (int64)EEffectApplicationPolicy::DoNotApply },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ApplyOnEndOverlap.Name", "EEffectApplicationPolicy::ApplyOnEndOverlap" },
		{ "ApplyOnOverlap.Name", "EEffectApplicationPolicy::ApplyOnOverlap" },
		{ "BlueprintType", "true" },
		{ "DoNotApply.Name", "EEffectApplicationPolicy::DoNotApply" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		"EEffectApplicationPolicy",
		"EEffectApplicationPolicy",
		Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRemovalPolicy;
	static UEnum* EEffectRemovalPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectRemovalPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectRemovalPolicy"));
		}
		return Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton;
	}
	template<> AURA_API UEnum* StaticEnum<EEffectRemovalPolicy>()
	{
		return EEffectRemovalPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators[] = {
		{ "EEffectRemovalPolicy::RemoveOnEndOverlap", (int64)EEffectRemovalPolicy::RemoveOnEndOverlap },
		{ "EEffectRemovalPolicy::DoNotRemove", (int64)EEffectRemovalPolicy::DoNotRemove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotRemove.Name", "EEffectRemovalPolicy::DoNotRemove" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
		{ "RemoveOnEndOverlap.Name", "EEffectRemovalPolicy::RemoveOnEndOverlap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		"EEffectRemovalPolicy",
		"EEffectRemovalPolicy",
		Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy()
	{
		if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuraEffect;
class UScriptStruct* FAuraEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuraEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuraEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuraEffect, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("AuraEffect"));
	}
	return Z_Registration_Info_UScriptStruct_AuraEffect.OuterSingleton;
}
template<> AURA_API UScriptStruct* StaticStruct<FAuraEffect>()
{
	return FAuraEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuraEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffectApplicationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectApplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectApplicationPolicy;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffectRemovalPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectRemovalPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectRemovalPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuraEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuraEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_GameplayEffectClass_MetaData[] = {
		{ "Category", "Aura Effect" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraEffect, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_GameplayEffectClass_MetaData), Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_GameplayEffectClass_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectApplicationPolicy_MetaData[] = {
		{ "Category", "Aura Effect" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectApplicationPolicy = { "EffectApplicationPolicy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraEffect, EffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectApplicationPolicy_MetaData), Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectApplicationPolicy_MetaData) }; // 1722026963
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectRemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectRemovalPolicy_MetaData[] = {
		{ "Category", "Aura Effect" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectRemovalPolicy = { "EffectRemovalPolicy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuraEffect, EffectRemovalPolicy), Z_Construct_UEnum_Aura_EEffectRemovalPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectRemovalPolicy_MetaData), Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectRemovalPolicy_MetaData) }; // 3097338331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuraEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_GameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectApplicationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectApplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectRemovalPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuraEffect_Statics::NewProp_EffectRemovalPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuraEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
		nullptr,
		&NewStructOps,
		"AuraEffect",
		Z_Construct_UScriptStruct_FAuraEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraEffect_Statics::PropPointers),
		sizeof(FAuraEffect),
		alignof(FAuraEffect),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuraEffect_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuraEffect_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAuraEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_AuraEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuraEffect.InnerSingleton, Z_Construct_UScriptStruct_FAuraEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuraEffect.InnerSingleton;
	}
	DEFINE_FUNCTION(AAuraEffectActor::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraEffectActor::execOnOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAuraEffectActor::execApplyEffectToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(UClass,Z_Param_EffectClass);
		P_GET_ENUM(EEffectRemovalPolicy,Z_Param_EffectRemovalPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyEffectToTarget(Z_Param_TargetActor,Z_Param_EffectClass,EEffectRemovalPolicy(Z_Param_EffectRemovalPolicy));
		P_NATIVE_END;
	}
	void AAuraEffectActor::StaticRegisterNativesAAuraEffectActor()
	{
		UClass* Class = AAuraEffectActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyEffectToTarget", &AAuraEffectActor::execApplyEffectToTarget },
			{ "OnEndOverlap", &AAuraEffectActor::execOnEndOverlap },
			{ "OnOverlap", &AAuraEffectActor::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics
	{
		struct AuraEffectActor_eventApplyEffectToTarget_Parms
		{
			AActor* TargetActor;
			TSubclassOf<UGameplayEffect>  EffectClass;
			EEffectRemovalPolicy EffectRemovalPolicy;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffectRemovalPolicy_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectRemovalPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectToTarget_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_EffectRemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_EffectRemovalPolicy = { "EffectRemovalPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectToTarget_Parms, EffectRemovalPolicy), Z_Construct_UEnum_Aura_EEffectRemovalPolicy, METADATA_PARAMS(0, nullptr) }; // 3097338331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_EffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_EffectRemovalPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::NewProp_EffectRemovalPolicy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_EffectRemovalPolicy", "RemoveOnEndOverlap" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "ApplyEffectToTarget", nullptr, nullptr, Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::AuraEffectActor_eventApplyEffectToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::AuraEffectActor_eventApplyEffectToTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics
	{
		struct AuraEffectActor_eventOnEndOverlap_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventOnEndOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::AuraEffectActor_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::AuraEffectActor_eventOnEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics
	{
		struct AuraEffectActor_eventOnOverlap_Parms
		{
			AActor* TargetActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventOnOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::AuraEffectActor_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::AuraEffectActor_eventOnOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraEffectActor_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraEffectActor);
	UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister()
	{
		return AAuraEffectActor::StaticClass();
	}
	struct Z_Construct_UClass_AAuraEffectActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnEffectRemoval_MetaData[];
#endif
		static void NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnEffectRemoval;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstantEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstantEffects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DurationEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DurationEffects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InfiniteEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InfiniteEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraEffectActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraEffectActor_ApplyEffectToTarget, "ApplyEffectToTarget" }, // 2681045312
		{ &Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap, "OnEndOverlap" }, // 1623007178
		{ &Z_Construct_UFunction_AAuraEffectActor_OnOverlap, "OnOverlap" }, // 1093760845
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/AuraEffectActor.h" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	void Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj)
	{
		((AAuraEffectActor*)Obj)->bDestroyOnEffectRemoval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval = { "bDestroyOnEffectRemoval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAuraEffectActor), &Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_MetaData), Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffects_Inner = { "InstantEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraEffect, METADATA_PARAMS(0, nullptr) }; // 406621557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffects_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffects = { "InstantEffects", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InstantEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffects_MetaData), Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffects_MetaData) }; // 406621557
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffects_Inner = { "DurationEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraEffect, METADATA_PARAMS(0, nullptr) }; // 406621557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffects_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffects = { "DurationEffects", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, DurationEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffects_MetaData), Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffects_MetaData) }; // 406621557
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffects_Inner = { "InfiniteEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuraEffect, METADATA_PARAMS(0, nullptr) }; // 406621557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffects_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Public/Actor/AuraEffectActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffects = { "InfiniteEffects", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InfiniteEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffects_MetaData), Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffects_MetaData) }; // 406621557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraEffectActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEffectActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams = {
		&AAuraEffectActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraEffectActor()
	{
		if (!Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton, Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraEffectActor>()
	{
		return AAuraEffectActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEffectActor);
	AAuraEffectActor::~AAuraEffectActor() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::EnumInfo[] = {
		{ EEffectApplicationPolicy_StaticEnum, TEXT("EEffectApplicationPolicy"), &Z_Registration_Info_UEnum_EEffectApplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1722026963U) },
		{ EEffectRemovalPolicy_StaticEnum, TEXT("EEffectRemovalPolicy"), &Z_Registration_Info_UEnum_EEffectRemovalPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3097338331U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ScriptStructInfo[] = {
		{ FAuraEffect::StaticStruct, Z_Construct_UScriptStruct_FAuraEffect_Statics::NewStructOps, TEXT("AuraEffect"), &Z_Registration_Info_UScriptStruct_AuraEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuraEffect), 406621557U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEffectActor, AAuraEffectActor::StaticClass, TEXT("AAuraEffectActor"), &Z_Registration_Info_UClass_AAuraEffectActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEffectActor), 162557754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_911128747(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
