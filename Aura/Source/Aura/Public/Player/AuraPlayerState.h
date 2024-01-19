// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "AuraPlayerState.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;

UCLASS()
class AURA_API AAuraPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AAuraPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

	FORCEINLINE int32 GetPlayerLevel() const { return PlayerLevel; }
	FORCEINLINE int32 GetMageLevel() const { return MageLevel; }
	FORCEINLINE int32 GetWarriorLevel() const { return WarriorLevel; }
	FORCEINLINE int32 GetScoutLevel() const { return ScoutLevel; }
	FORCEINLINE int32 GetFireLevel() const { return FireLevel; }
	FORCEINLINE int32 GetIceLevel() const { return IceLevel; }
	FORCEINLINE int32 GetLightningLevel() const { return LightningLevel; }
	
protected:
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

private:

	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_PlayerLevel)
	int32 PlayerLevel = 1;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_MageLevel)
	int32 MageLevel = 1;
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_WarriorLevel)
	int32 WarriorLevel = 1;
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_ScoutLevel)
	int32 ScoutLevel = 1;
	

	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_FireLevel)
	int32 FireLevel = 1;
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_IceLevel)
	int32 IceLevel = 1;
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_LightningLevel)
	int32 LightningLevel = 1;

	UFUNCTION()
	void OnRep_PlayerLevel(int32 OldPlayerLevel);

	UFUNCTION()
	void OnRep_MageLevel(int32 OldMageLevel);
	UFUNCTION()
	void OnRep_WarriorLevel(int32 OldWarriorLevel);
	UFUNCTION()
	void OnRep_ScoutLevel(int32 OldScoutLevel);

	UFUNCTION()
	void OnRep_FireLevel(int32 OldFireLevel);
	UFUNCTION()
	void OnRep_IceLevel(int32 OldIceLevel);
	UFUNCTION()
	void OnRep_LightningLevel(int32 OldLightningLevel);
	
};
