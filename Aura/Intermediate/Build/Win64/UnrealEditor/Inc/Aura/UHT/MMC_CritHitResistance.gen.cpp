// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/ModMagCalc/MMC_CritHitResistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_CritHitResistance() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UMMC_CritHitResistance();
	AURA_API UClass* Z_Construct_UClass_UMMC_CritHitResistance_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UMMC_CritHitResistance::StaticRegisterNativesUMMC_CritHitResistance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_CritHitResistance);
	UClass* Z_Construct_UClass_UMMC_CritHitResistance_NoRegister()
	{
		return UMMC_CritHitResistance::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_CritHitResistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_CritHitResistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_CritHitResistance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_CritHitResistance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/ModMagCalc/MMC_CritHitResistance.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ModMagCalc/MMC_CritHitResistance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_CritHitResistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_CritHitResistance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_CritHitResistance_Statics::ClassParams = {
		&UMMC_CritHitResistance::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_CritHitResistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_CritHitResistance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_CritHitResistance()
	{
		if (!Z_Registration_Info_UClass_UMMC_CritHitResistance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_CritHitResistance.OuterSingleton, Z_Construct_UClass_UMMC_CritHitResistance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_CritHitResistance.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UMMC_CritHitResistance>()
	{
		return UMMC_CritHitResistance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_CritHitResistance);
	UMMC_CritHitResistance::~UMMC_CritHitResistance() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritHitResistance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritHitResistance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_CritHitResistance, UMMC_CritHitResistance::StaticClass, TEXT("UMMC_CritHitResistance"), &Z_Registration_Info_UClass_UMMC_CritHitResistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_CritHitResistance), 229059280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritHitResistance_h_423926180(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritHitResistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_CritHitResistance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
