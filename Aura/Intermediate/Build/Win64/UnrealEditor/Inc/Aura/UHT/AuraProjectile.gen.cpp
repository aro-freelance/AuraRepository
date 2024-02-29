// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Public/Actor/AuraProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuraProjectile() {}
// Cross Module References
	AURA_API UClass* Z_Construct_UClass_AAuraProjectile();
	AURA_API UClass* Z_Construct_UClass_AAuraProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Aura();
// End Cross Module References
	DEFINE_FUNCTION(AAuraProjectile::execOnSphereOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AAuraProjectile::StaticRegisterNativesAAuraProjectile()
	{
		UClass* Class = AAuraProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSphereOverlap", &AAuraProjectile::execOnSphereOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics
	{
		struct AuraProjectile_eventOnSphereOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectile_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectile_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectile_eventOnSphereOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectile_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AuraProjectile_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AuraProjectile_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraProjectile_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/AuraProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAuraProjectile, nullptr, "OnSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::AuraProjectile_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::AuraProjectile_eventOnSphereOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAuraProjectile);
	UClass* Z_Construct_UClass_AAuraProjectile_NoRegister()
	{
		return AAuraProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AAuraProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImpactSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAuraProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAuraProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraProjectile_OnSphereOverlap, "OnSphereOverlap" }, // 3242216354
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactEffect_MetaData[] = {
		{ "Category", "AuraProjectile" },
		{ "ModuleRelativePath", "Public/Actor/AuraProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactEffect = { "ImpactEffect", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraProjectile, ImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactEffect_MetaData), Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "AuraProjectile" },
		{ "ModuleRelativePath", "Public/Actor/AuraProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraProjectile, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactSound_MetaData), Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ProjectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraProjectile_Statics::NewProp_OverlapSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraProjectile_Statics::NewProp_ImpactSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAuraProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraProjectile_Statics::ClassParams = {
		&AAuraProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAuraProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AAuraProjectile, AAuraProjectile::StaticClass, TEXT("AAuraProjectile"), &Z_Registration_Info_UClass_AAuraProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraProjectile), 3234545608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_3183580097(TEXT("/Script/Aura"),
		Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
