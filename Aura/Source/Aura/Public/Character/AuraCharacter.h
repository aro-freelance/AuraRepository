// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	/*** Combat Interface */

	virtual int32 GetPlayerLevel() override;

	virtual int32 GetMageLevel() override;
	virtual int32 GetWarriorLevel() override;
	virtual int32 GetScoutLevel() override;
	virtual int32 GetFireLevel() override;
	virtual int32 GetIceLevel() override;
	virtual int32 GetLightningLevel() override;
	
	/* Combat Interface ***/

private:
	virtual void InitAbilityActorInfo() override;
	
};
