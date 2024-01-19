// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AuraPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_AuraPlayerState_generated_h
#error "AuraPlayerState.generated.h already included, missing '#pragma once' in AuraPlayerState.h"
#endif
#define AURA_AuraPlayerState_generated_h

#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_SPARSE_DATA
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_LightningLevel); \
	DECLARE_FUNCTION(execOnRep_IceLevel); \
	DECLARE_FUNCTION(execOnRep_FireLevel); \
	DECLARE_FUNCTION(execOnRep_ScoutLevel); \
	DECLARE_FUNCTION(execOnRep_WarriorLevel); \
	DECLARE_FUNCTION(execOnRep_MageLevel); \
	DECLARE_FUNCTION(execOnRep_PlayerLevel);


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraPlayerState(); \
	friend struct Z_Construct_UClass_AAuraPlayerState_Statics; \
public: \
	DECLARE_CLASS(AAuraPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AAuraPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerLevel=NETFIELD_REP_START, \
		MageLevel, \
		WarriorLevel, \
		ScoutLevel, \
		FireLevel, \
		IceLevel, \
		LightningLevel, \
		NETFIELD_REP_END=LightningLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAuraPlayerState(AAuraPlayerState&&); \
	NO_API AAuraPlayerState(const AAuraPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraPlayerState) \
	NO_API virtual ~AAuraPlayerState();


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_14_PROLOG
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_SPARSE_DATA \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_Player_AuraPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
