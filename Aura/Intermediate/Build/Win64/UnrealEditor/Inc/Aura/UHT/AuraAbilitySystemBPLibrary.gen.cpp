// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/AuraAbilitySystemBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemBPLibrary() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemBPLibrary();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemBPLibrary_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UAuraAbilitySystemBPLibrary::execGetOverLayWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOverlayWidgetController**)Z_Param__Result=UAuraAbilitySystemBPLibrary::GetOverLayWidgetController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAuraAbilitySystemBPLibrary::StaticRegisterNativesUAuraAbilitySystemBPLibrary()
	{
		UClass* Class = UAuraAbilitySystemBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOverLayWidgetController", &UAuraAbilitySystemBPLibrary::execGetOverLayWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics
	{
		struct AuraAbilitySystemBPLibrary_eventGetOverLayWidgetController_Parms
		{
			const UObject* WorldContextObject;
			UOverlayWidgetController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventGetOverLayWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventGetOverLayWidgetController_Parms, ReturnValue), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemBPLibrary, nullptr, "GetOverLayWidgetController", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::AuraAbilitySystemBPLibrary_eventGetOverLayWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::AuraAbilitySystemBPLibrary_eventGetOverLayWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAuraAbilitySystemBPLibrary);
	UClass* Z_Construct_UClass_UAuraAbilitySystemBPLibrary_NoRegister()
	{
		return UAuraAbilitySystemBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController, "GetOverLayWidgetController" }, // 1139776566
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AuraAbilitySystemBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::ClassParams = {
		&UAuraAbilitySystemBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAuraAbilitySystemBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UAuraAbilitySystemBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemBPLibrary.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAuraAbilitySystemBPLibrary.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAuraAbilitySystemBPLibrary>()
	{
		return UAuraAbilitySystemBPLibrary::StaticClass();
	}
	UAuraAbilitySystemBPLibrary::UAuraAbilitySystemBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemBPLibrary);
	UAuraAbilitySystemBPLibrary::~UAuraAbilitySystemBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemBPLibrary, UAuraAbilitySystemBPLibrary::StaticClass, TEXT("UAuraAbilitySystemBPLibrary"), &Z_Registration_Info_UClass_UAuraAbilitySystemBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemBPLibrary), 2603433012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_4017546290(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
