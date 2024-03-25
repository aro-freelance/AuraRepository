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
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemBPLibrary();
	AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemBPLibrary_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	AURA_API UEnum* Z_Construct_UEnum_Aura_ECharacterClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(UAuraAbilitySystemBPLibrary::execInitializeDefaultAttributes)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(ECharacterClass,Z_Param_CharacterClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAuraAbilitySystemBPLibrary::InitializeDefaultAttributes(Z_Param_WorldContextObject,ECharacterClass(Z_Param_CharacterClass),Z_Param_Level,Z_Param_ASC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAuraAbilitySystemBPLibrary::execGetAttributeMenuWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAttributeMenuWidgetController**)Z_Param__Result=UAuraAbilitySystemBPLibrary::GetAttributeMenuWidgetController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
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
			{ "GetAttributeMenuWidgetController", &UAuraAbilitySystemBPLibrary::execGetAttributeMenuWidgetController },
			{ "GetOverLayWidgetController", &UAuraAbilitySystemBPLibrary::execGetOverLayWidgetController },
			{ "InitializeDefaultAttributes", &UAuraAbilitySystemBPLibrary::execInitializeDefaultAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics
	{
		struct AuraAbilitySystemBPLibrary_eventGetAttributeMenuWidgetController_Parms
		{
			const UObject* WorldContextObject;
			UAttributeMenuWidgetController* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventGetAttributeMenuWidgetController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventGetAttributeMenuWidgetController_Parms, ReturnValue), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|WidgetController" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemBPLibrary, nullptr, "GetAttributeMenuWidgetController", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::AuraAbilitySystemBPLibrary_eventGetAttributeMenuWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::AuraAbilitySystemBPLibrary_eventGetAttributeMenuWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics
	{
		struct AuraAbilitySystemBPLibrary_eventInitializeDefaultAttributes_Parms
		{
			const UObject* WorldContextObject;
			ECharacterClass CharacterClass;
			float Level;
			UAbilitySystemComponent* ASC;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterClass_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventInitializeDefaultAttributes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass = { "CharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventInitializeDefaultAttributes_Parms, CharacterClass), Z_Construct_UEnum_Aura_ECharacterClass, METADATA_PARAMS(0, nullptr) }; // 2472263766
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventInitializeDefaultAttributes_Parms, Level), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraAbilitySystemBPLibrary_eventInitializeDefaultAttributes_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData), Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_CharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::NewProp_ASC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "AuraAbilitySystemLibrary|CharacterClassDefaults" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AuraAbilitySystemBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAuraAbilitySystemBPLibrary, nullptr, "InitializeDefaultAttributes", nullptr, nullptr, Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::AuraAbilitySystemBPLibrary_eventInitializeDefaultAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::AuraAbilitySystemBPLibrary_eventInitializeDefaultAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetAttributeMenuWidgetController, "GetAttributeMenuWidgetController" }, // 1356312218
		{ &Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_GetOverLayWidgetController, "GetOverLayWidgetController" }, // 1139776566
		{ &Z_Construct_UFunction_UAuraAbilitySystemBPLibrary_InitializeDefaultAttributes, "InitializeDefaultAttributes" }, // 4127970033
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAuraAbilitySystemBPLibrary_Statics::Class_MetaDataParams[] = {
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
		{ Z_Construct_UClass_UAuraAbilitySystemBPLibrary, UAuraAbilitySystemBPLibrary::StaticClass, TEXT("UAuraAbilitySystemBPLibrary"), &Z_Registration_Info_UClass_UAuraAbilitySystemBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemBPLibrary), 435992873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_3863614242(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_AuraAbilitySystemBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
