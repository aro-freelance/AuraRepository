// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/ModMagCalc/MMC_CritDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_CritDamage() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UMMC_CritDamage();
	AURA_API UClass* Z_Construct_UClass_UMMC_CritDamage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UMMC_CritDamage::StaticRegisterNativesUMMC_CritDamage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_CritDamage);
	UClass* Z_Construct_UClass_UMMC_CritDamage_NoRegister()
	{
		return UMMC_CritDamage::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_CritDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_CritDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_CritDamage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_CritDamage_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/ModMagCalc/MMC_CritDamage.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ModMagCalc/MMC_CritDamage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_CritDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_CritDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_CritDamage_Statics::ClassParams = {
		&UMMC_CritDamage::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_CritDamage_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_CritDamage_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_CritDamage()
	{
		if (!Z_Registration_Info_UClass_UMMC_CritDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_CritDamage.OuterSingleton, Z_Construct_UClass_UMMC_CritDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_CritDamage.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UMMC_CritDamage>()
	{
		return UMMC_CritDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_CritDamage);
	UMMC_CritDamage::~UMMC_CritDamage() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_CritDamage, UMMC_CritDamage::StaticClass, TEXT("UMMC_CritDamage"), &Z_Registration_Info_UClass_UMMC_CritDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_CritDamage), 2383611939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritDamage_h_3724526184(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
