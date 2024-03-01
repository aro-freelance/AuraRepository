// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UCombatInterface : public UInterface
{
	GENERATED_BODY()
};
class AURA_API ICombatInterface
{
	GENERATED_BODY()

public:

	virtual int32 GetPlayerLevel();

	virtual int32 GetMageLevel();
	virtual int32 GetWarriorLevel();
	virtual int32 GetScoutLevel();
	virtual int32 GetFireLevel();
	virtual int32 GetIceLevel();
	virtual int32 GetLightningLevel();
	
	virtual FVector GetCombatSocketLocation();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateFacingTarget(const FVector& Target);

	
};
