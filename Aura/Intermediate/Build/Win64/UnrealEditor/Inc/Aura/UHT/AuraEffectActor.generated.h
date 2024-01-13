// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/AuraEffectActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
struct FAuraEffect;
#ifdef AURA_AuraEffectActor_generated_h
#error "AuraEffectActor.generated.h already included, missing '#pragma once' in AuraEffectActor.h"
#endif
#define AURA_AuraEffectActor_generated_h

#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAuraEffect_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FAuraEffect>();

#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_SPARSE_DATA
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execApplyEffectArrayToTarget); \
	DECLARE_FUNCTION(execApplyEffectToTarget);


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEffectActor(); \
	friend struct Z_Construct_UClass_AAuraEffectActor_Statics; \
public: \
	DECLARE_CLASS(AAuraEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraEffectActor)


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraEffectActor(AAuraEffectActor&&); \
	NO_API AAuraEffectActor(const AAuraEffectActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEffectActor) \
	NO_API virtual ~AAuraEffectActor();


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_56_PROLOG
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_SPARSE_DATA \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_INCLASS_NO_PURE_DECLS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraEffectActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Actor_AuraEffectActor_h


#define FOREACH_ENUM_EEFFECTOVERLAPAPPLICATIONPOLICY(op) \
	op(EEffectOverlapApplicationPolicy::ApplyOnOverlap) \
	op(EEffectOverlapApplicationPolicy::ApplyOnEndOverlap) \
	op(EEffectOverlapApplicationPolicy::DoNotApply) 

enum class EEffectOverlapApplicationPolicy;
template<> struct TIsUEnumClass<EEffectOverlapApplicationPolicy> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<EEffectOverlapApplicationPolicy>();

#define FOREACH_ENUM_EEFFECTOVERLAPREMOVALPOLICY(op) \
	op(EEffectOverlapRemovalPolicy::RemoveOnEndOverlap) \
	op(EEffectOverlapRemovalPolicy::DoNotRemove) 

enum class EEffectOverlapRemovalPolicy;
template<> struct TIsUEnumClass<EEffectOverlapRemovalPolicy> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<EEffectOverlapRemovalPolicy>();

#define FOREACH_ENUM_EEFFECTDURATIONTYPE(op) \
	op(EEffectDurationType::Instant) \
	op(EEffectDurationType::Duration) \
	op(EEffectDurationType::Infinite) 

enum class EEffectDurationType;
template<> struct TIsUEnumClass<EEffectDurationType> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<EEffectDurationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
