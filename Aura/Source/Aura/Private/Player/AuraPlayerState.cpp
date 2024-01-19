// Copyright Arora Software


#include "Player/AuraPlayerState.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Net/UnrealNetwork.h"


AAuraPlayerState::AAuraPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAuraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAuraAttributeSet>("AttributeSet");

	NetUpdateFrequency = 100.f;
}

void AAuraPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAuraPlayerState, PlayerLevel);
	DOREPLIFETIME(AAuraPlayerState, MageLevel);
	DOREPLIFETIME(AAuraPlayerState, WarriorLevel);
	DOREPLIFETIME(AAuraPlayerState, ScoutLevel);
	DOREPLIFETIME(AAuraPlayerState, FireLevel);
	DOREPLIFETIME(AAuraPlayerState, IceLevel);
	DOREPLIFETIME(AAuraPlayerState, LightningLevel);
	
}

UAbilitySystemComponent* AAuraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAuraPlayerState::OnRep_PlayerLevel(int32 OldPlayerLevel)
{
}

void AAuraPlayerState::OnRep_MageLevel(int32 OldMageLevel)
{
}

void AAuraPlayerState::OnRep_WarriorLevel(int32 OldWarriorLevel)
{
}

void AAuraPlayerState::OnRep_ScoutLevel(int32 OldScoutLevel)
{
}

void AAuraPlayerState::OnRep_FireLevel(int32 OldFireLevel)
{
}

void AAuraPlayerState::OnRep_IceLevel(int32 OldIceLevel)
{
}

void AAuraPlayerState::OnRep_LightningLevel(int32 OldLightningLevel)
{
}


