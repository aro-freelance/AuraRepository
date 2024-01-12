// Copyright Arora Software


#include "Character/AuraCharacterBase.h"
#include "AbilitySystemComponent.h"

/*
 * This is the parent class of Player(AuraCharacter) and Enemies(AuraEnemy)
 */

AAuraCharacterBase::AAuraCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAuraCharacterBase::InitAbilityActorInfo()
{
}

void AAuraCharacterBase::InitializePrimaryAttributes() const
{
	
	if(AbilitySystemComponent == nullptr) return;
	check(DefaultPrimaryAttributes);

	const FGameplayEffectContextHandle GameplayEffectContextHandle = AbilitySystemComponent->MakeEffectContext();
	const FGameplayEffectSpecHandle GameplayEffectSpecHandle =
		AbilitySystemComponent->MakeOutgoingSpec(DefaultPrimaryAttributes, 1.0f, GameplayEffectContextHandle);
	
	GetAbilitySystemComponent()->ApplyGameplayEffectSpecToTarget(*GameplayEffectSpecHandle.Data.Get(), AbilitySystemComponent);
}
