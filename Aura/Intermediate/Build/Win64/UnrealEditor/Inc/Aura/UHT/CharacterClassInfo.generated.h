// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Data/CharacterClassInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_CharacterClassInfo_generated_h
#error "CharacterClassInfo.generated.h already included, missing '#pragma once' in CharacterClassInfo.h"
#endif
#define AURA_CharacterClassInfo_generated_h

#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterClassDefaultInfo_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


template<> AURA_API UScriptStruct* StaticStruct<struct FCharacterClassDefaultInfo>();

#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_SPARSE_DATA
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_ACCESSORS
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterClassInfo(); \
	friend struct Z_Construct_UClass_UCharacterClassInfo_Statics; \
public: \
	DECLARE_CLASS(UCharacterClassInfo, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(UCharacterClassInfo)


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterClassInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterClassInfo(UCharacterClassInfo&&); \
	NO_API UCharacterClassInfo(const UCharacterClassInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterClassInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterClassInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterClassInfo) \
	NO_API virtual ~UCharacterClassInfo();


#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_30_PROLOG
#define FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_SPARSE_DATA \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_ACCESSORS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class UCharacterClassInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yelsa_OneDrive_Documents_Unreal_Projects_AuraRepository_Aura_Source_Aura_Public_AbilitySystem_Data_CharacterClassInfo_h


#define FOREACH_ENUM_ECHARACTERCLASS(op) \
	op(ECharacterClass::Mage) \
	op(ECharacterClass::Warrior) \
	op(ECharacterClass::Rogue) 

enum class ECharacterClass : uint8;
template<> struct TIsUEnumClass<ECharacterClass> { enum { Value = true }; };
template<> AURA_API UEnum* StaticEnum<ECharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
