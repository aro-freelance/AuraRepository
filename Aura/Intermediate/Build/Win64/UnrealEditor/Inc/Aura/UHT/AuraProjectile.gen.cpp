// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Actor/AuraProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraProjectile() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraProjectile();
	AURA_API UClass* Z_Construct_UClass_AAuraProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	void AAuraProjectile::StaticRegisterNativesAAuraProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraProjectile);
	UClass* Z_Construct_UClass_AAuraProjectile_NoRegister()
	{
		return AAuraProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AAuraProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlapSphere;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/AuraProjectile.h" },
		{ "ModuleRelativePath", "Public/Actor/AuraProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "AuraProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/AuraProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ProjectileMovement_MetaData), Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ProjectileMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraProjectile_Statics::NewProp_OverlapSphere_MetaData[] = {
		{ "Category", "AuraProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/AuraProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraProjectile_Statics::NewProp_OverlapSphere = { "OverlapSphere", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraProjectile, OverlapSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::NewProp_OverlapSphere_MetaData), Z_Construct_UClass_AAuraProjectile_Statics::NewProp_OverlapSphere_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraProjectile_Statics::NewProp_OverlapSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraProjectile_Statics::ClassParams = {
		&AAuraProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAuraProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAuraProjectile()
	{
		if (!Z_Registration_Info_UClass_AAuraProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraProjectile.OuterSingleton, Z_Construct_UClass_AAuraProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAuraProjectile.OuterSingleton;
	}
	template<> AURA_API UClass* StaticClass<AAuraProjectile>()
	{
		return AAuraProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraProjectile);
	AAuraProjectile::~AAuraProjectile() {}
	struct Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAuraProjectile, AAuraProjectile::StaticClass, TEXT("AAuraProjectile"), &Z_Registration_Info_UClass_AAuraProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraProjectile), 3516396136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_1346643597(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
