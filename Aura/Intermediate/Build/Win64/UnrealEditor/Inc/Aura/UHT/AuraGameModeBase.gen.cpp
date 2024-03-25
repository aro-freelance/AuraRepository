// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Game/AuraGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraGameModeBase() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraGameModeBase();
	AURA_API UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister();
	AURA_API UClass* Z_Construct_UClass_UCharacterClassInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraGameModeBase::StaticRegisterNativesAAuraGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraGameModeBase);
	UClass* Z_Construct_UClass_AAuraGameModeBase_NoRegister()
	{
		return AAuraGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAuraGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClassInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CharacterClassInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/AuraGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Game/AuraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraGameModeBase_Statics::NewProp_CharacterClassInfo_MetaData[] = {
		{ "Category", "Class Class Defaults" },
		{ "ModuleRelativePath", "Public/Game/AuraGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraGameModeBase_Statics::NewProp_CharacterClassInfo = { "CharacterClassInfo", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraGameModeBase, CharacterClassInfo), Z_Construct_UClass_UCharacterClassInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::NewProp_CharacterClassInfo_MetaData), Z_Construct_UClass_AAuraGameModeBase_Statics::NewProp_CharacterClassInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraGameModeBase_Statics::NewProp_CharacterClassInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams = {
		&AAuraGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton, Z_Construct_UClass_AAuraGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraGameModeBase.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraGameModeBase>()
	{
		return AAuraGameModeBase::StaticClass();
	}
	AAuraGameModeBase::AAuraGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraGameModeBase);
	AAuraGameModeBase::~AAuraGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraGameModeBase, AAuraGameModeBase::StaticClass, TEXT("AAuraGameModeBase"), &Z_Registration_Info_UClass_AAuraGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraGameModeBase), 126263841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_1704765857(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Game_AuraGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
