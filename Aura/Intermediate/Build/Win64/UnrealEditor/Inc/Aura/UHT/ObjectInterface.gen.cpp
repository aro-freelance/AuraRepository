// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Interaction/ObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectInterface() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_UObjectInterface();
	AURA_API UClass* Z_Construct_UClass_UObjectInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void UObjectInterface::StaticRegisterNativesUObjectInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectInterface);
	UClass* Z_Construct_UClass_UObjectInterface_NoRegister()
	{
		return UObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/ObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IObjectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectInterface_Statics::ClassParams = {
		&UObjectInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UObjectInterface()
	{
		if (!Z_Registration_Info_UClass_UObjectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectInterface.OuterSingleton, Z_Construct_UClass_UObjectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectInterface.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<UObjectInterface>()
	{
		return UObjectInterface::StaticClass();
	}
	UObjectInterface::UObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectInterface);
	UObjectInterface::~UObjectInterface() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Interaction_ObjectInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Interaction_ObjectInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectInterface, UObjectInterface::StaticClass, TEXT("UObjectInterface"), &Z_Registration_Info_UClass_UObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectInterface), 4285159669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Interaction_ObjectInterface_h_3680789929(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Interaction_ObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Interaction_ObjectInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
