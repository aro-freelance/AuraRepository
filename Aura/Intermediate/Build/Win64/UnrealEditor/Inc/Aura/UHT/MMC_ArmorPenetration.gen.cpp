// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/ModMagCalc/MMC_ArmorPenetration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_ArmorPenetration() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UMMC_ArmorPenetration();
	AURA_API UClass* Z_Construct_UClass_UMMC_ArmorPenetration_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UMMC_ArmorPenetration::StaticRegisterNativesUMMC_ArmorPenetration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_ArmorPenetration);
	UClass* Z_Construct_UClass_UMMC_ArmorPenetration_NoRegister()
	{
		return UMMC_ArmorPenetration::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_ArmorPenetration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_ArmorPenetration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_ArmorPenetration_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_ArmorPenetration_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/ModMagCalc/MMC_ArmorPenetration.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ModMagCalc/MMC_ArmorPenetration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_ArmorPenetration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_ArmorPenetration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_ArmorPenetration_Statics::ClassParams = {
		&UMMC_ArmorPenetration::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_ArmorPenetration_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_ArmorPenetration_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_ArmorPenetration()
	{
		if (!Z_Registration_Info_UClass_UMMC_ArmorPenetration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_ArmorPenetration.OuterSingleton, Z_Construct_UClass_UMMC_ArmorPenetration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_ArmorPenetration.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UMMC_ArmorPenetration>()
	{
		return UMMC_ArmorPenetration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_ArmorPenetration);
	UMMC_ArmorPenetration::~UMMC_ArmorPenetration() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_ArmorPenetration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_ArmorPenetration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_ArmorPenetration, UMMC_ArmorPenetration::StaticClass, TEXT("UMMC_ArmorPenetration"), &Z_Registration_Info_UClass_UMMC_ArmorPenetration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_ArmorPenetration), 1362472284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_ArmorPenetration_h_36169745(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_ArmorPenetration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_ArmorPenetration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
