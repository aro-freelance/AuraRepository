// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/UI/WidgetController/AttributeMenuWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeMenuWidgetController() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController();
	AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UAttributeMenuWidgetController::StaticRegisterNativesUAttributeMenuWidgetController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeMenuWidgetController);
	UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister()
	{
		return UAttributeMenuWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeMenuWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeMenuWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeMenuWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams = {
		&UAttributeMenuWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAttributeMenuWidgetController()
	{
		if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton, Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UAttributeMenuWidgetController>()
	{
		return UAttributeMenuWidgetController::StaticClass();
	}
	UAttributeMenuWidgetController::UAttributeMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeMenuWidgetController);
	UAttributeMenuWidgetController::~UAttributeMenuWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeMenuWidgetController, UAttributeMenuWidgetController::StaticClass, TEXT("UAttributeMenuWidgetController"), &Z_Registration_Info_UClass_UAttributeMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeMenuWidgetController), 2143103837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_2318782676(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_UI_WidgetController_AttributeMenuWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
