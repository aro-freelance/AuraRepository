// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/AbilitySystem/ModMagCalc/MMC_BlockChance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMMC_BlockChance() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UMMC_BlockChance();
	AURA_API UClass* Z_Construct_UClass_UMMC_BlockChance_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UMMC_BlockChance::StaticRegisterNativesUMMC_BlockChance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMMC_BlockChance);
	UClass* Z_Construct_UClass_UMMC_BlockChance_NoRegister()
	{
		return UMMC_BlockChance::StaticClass();
	}
	struct Z_Construct_UClass_UMMC_BlockChance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMMC_BlockChance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_BlockChance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMMC_BlockChance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/ModMagCalc/MMC_BlockChance.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/ModMagCalc/MMC_BlockChance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMMC_BlockChance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMMC_BlockChance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMMC_BlockChance_Statics::ClassParams = {
		&UMMC_BlockChance::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMMC_BlockChance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMMC_BlockChance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMMC_BlockChance()
	{
		if (!Z_Registration_Info_UClass_UMMC_BlockChance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMMC_BlockChance.OuterSingleton, Z_Construct_UClass_UMMC_BlockChance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMMC_BlockChance.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UMMC_BlockChance>()
	{
		return UMMC_BlockChance::StaticClass();
	}
	UMMC_BlockChance::UMMC_BlockChance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMMC_BlockChance);
	UMMC_BlockChance::~UMMC_BlockChance() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_BlockChance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_BlockChance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMMC_BlockChance, UMMC_BlockChance::StaticClass, TEXT("UMMC_BlockChance"), &Z_Registration_Info_UClass_UMMC_BlockChance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMMC_BlockChance), 345599724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_BlockChance_h_4252234318(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_BlockChance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_ModMagCalc_MMC_BlockChance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
