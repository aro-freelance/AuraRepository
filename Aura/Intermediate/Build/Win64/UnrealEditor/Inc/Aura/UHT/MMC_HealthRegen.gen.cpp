// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/ModMagCalc/MMC_HealthRegen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_HealthRegen() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UMMC_HealthRegen();
	AURA_API UClass* Z_Construct_UClass_UMMC_HealthRegen_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UMMC_HealthRegen::StaticRegisterNativesUMMC_HealthRegen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_HealthRegen);
	UClass* Z_Construct_UClass_UMMC_HealthRegen_NoRegister()
	{
		return UMMC_HealthRegen::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_HealthRegen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_HealthRegen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_HealthRegen_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_HealthRegen_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/ModMagCalc/MMC_HealthRegen.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ModMagCalc/MMC_HealthRegen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_HealthRegen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_HealthRegen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_HealthRegen_Statics::ClassParams = {
		&UMMC_HealthRegen::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_HealthRegen_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_HealthRegen_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_HealthRegen()
	{
		if (!Z_Registration_Info_UClass_UMMC_HealthRegen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_HealthRegen.OuterSingleton, Z_Construct_UClass_UMMC_HealthRegen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_HealthRegen.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UMMC_HealthRegen>()
	{
		return UMMC_HealthRegen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_HealthRegen);
	UMMC_HealthRegen::~UMMC_HealthRegen() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_HealthRegen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_HealthRegen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_HealthRegen, UMMC_HealthRegen::StaticClass, TEXT("UMMC_HealthRegen"), &Z_Registration_Info_UClass_UMMC_HealthRegen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_HealthRegen), 3742636697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_HealthRegen_h_1698859038(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_HealthRegen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_HealthRegen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS