// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IEnemyInterface;
class IPlayerInterface;
class IObjectInterface;
class UAuraInputConfig;
class UAuraAbilitySystemComponent;
class USplineComponent;

UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	AAuraPlayerController();
	virtual void PlayerTick(float DeltaTime) override;
	
protected:

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	
	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, Category="Input")
	TObjectPtr<UInputAction> MoveAction;

	void Move(const FInputActionValue& InputActionValue);

	void CursorTrace();

	/*** Enemy Interface */
	IEnemyInterface* LastActor_Enemy;
	IEnemyInterface* ThisActor_Enemy;
	/* Enemy Interface ***/

	/*** Player Interface */
	IPlayerInterface* LastActor_Player;
	IPlayerInterface* ThisActor_Player;
	/* Player Interface ***/

	/*** Object Interface */
	IObjectInterface* LastActor_Object;
	IObjectInterface* ThisActor_Object;
	/* Object Interface ***/

	void AbilityInputTagPressed(FGameplayTag InputTag);
	void AbilityInputTagReleased(FGameplayTag InputTag);
	void AbilityInputTagHeld(FGameplayTag InputTag);
	
	UPROPERTY(EditDefaultsOnly, Category="Input")
	TObjectPtr<UAuraInputConfig> InputConfig;


	UPROPERTY()
	TObjectPtr<UAuraAbilitySystemComponent> AuraAbilitySystemComponent;

	UAuraAbilitySystemComponent* GetASC();


	/*** Movement */
	
	FVector CachedDestination = FVector::ZeroVector;
	float FollowTime = 0.f;

	//the min time required for a press to be considered long, less than this is short
	//short press = path to location, long press(hold) = path to mouse position
	float PressThreshold = 0.5f;

	//when this is on the character is moving to the target location
	bool bAutoRunning = false;

	//when this is true the mouse is hovering over something targetable
	bool bTargeting = false;
	bool bTargeting_Enemy = false;
	bool bTargeting_Player = false;
	bool bTargeting_Object = false;

	//the margin for error from character location to target location
	UPROPERTY(EditDefaultsOnly)
	float AutoRunAcceptanceRadius = 3.f;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USplineComponent> Spline;

	void AutoRun();

	/* Movement ***/
	
};
