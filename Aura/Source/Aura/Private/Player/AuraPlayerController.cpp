// Copyright Arora Software


#include "Player/AuraPlayerController.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AuraGameplayTags.h"
#include "EnhancedInputSubsystems.h"
#include "NavigationPath.h"
#include "NavigationSystem.h"
#include "AbilitySystem/AuraAbilitySystemComponent.h"
#include "Components/SplineComponent.h"
#include "Input/AuraInputComponent.h"
#include "Interaction/EnemyInterface.h"
#include "Interaction/PlayerInterface.h"
#include "Interaction/ObjectInterface.h"

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;

	Spline = CreateDefaultSubobject<USplineComponent>("Spline");
	
}

void AAuraPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	CursorTrace();
	
	if(bAutoRunning){ AutoRun(); }
	
}

void AAuraPlayerController::AutoRun()
{
	if(APawn* ControlledPawn = GetPawn())
	{
		const FVector LocationOnSpline = Spline->FindLocationClosestToWorldLocation(
			ControlledPawn->GetActorLocation(), ESplineCoordinateSpace::World);

		const FVector Direction = Spline->FindDirectionClosestToWorldLocation(LocationOnSpline, ESplineCoordinateSpace::World);

		ControlledPawn->AddMovementInput(Direction);

		const float DistanceToDestination = (LocationOnSpline - CachedDestination).Length();

		if(DistanceToDestination <= AutoRunAcceptanceRadius)
		{
			bAutoRunning = false;
		}
	}
	
}


//This is used to highlight enemies with a red outline when the cursor is placed on them
void AAuraPlayerController::CursorTrace()
{
	
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if(!CursorHit.bBlockingHit) return;


	//TODO: assess whether it would be better to use a single highlight interface and use tags to tell the difference between types.
	
	//Enemy
	LastActor_Enemy = ThisActor_Enemy;
	ThisActor_Enemy = Cast<IEnemyInterface>(CursorHit.GetActor());

	//Player
	LastActor_Player = ThisActor_Player;
	ThisActor_Player = Cast<IPlayerInterface>(CursorHit.GetActor());

	//Object
	LastActor_Object = ThisActor_Object;
	ThisActor_Object = Cast<IObjectInterface>(CursorHit.GetActor());
	//TODO: create an object class and add this interface to it. Implement the hover feature to show a tooltip and a different color highlight


	//Enemy
	if(LastActor_Enemy != ThisActor_Enemy)
	{
		if(LastActor_Enemy){ LastActor_Enemy->UnHighlightActor(); }
		if(ThisActor_Enemy){ ThisActor_Enemy->HighlightActor(); }
	}

	//Player
	if(LastActor_Player != ThisActor_Player)
	{
		if(LastActor_Player){ LastActor_Player->UnHighlightActor(); }
		if(ThisActor_Player){ ThisActor_Player->HighlightActor(); }
	}

	//Enemy
	if(LastActor_Object != ThisActor_Object)
	{
		if(LastActor_Object){ LastActor_Object->UnHighlightActor(); }
		if(ThisActor_Object){ ThisActor_Object->HighlightActor(); }
	}
	
	
}

void AAuraPlayerController::AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (InputTag.MatchesTagExact(FAuraGameplayTags::Get().Input_LMB))
	{
		//if ThisActor is not null then we have a target.
		bTargeting_Enemy = ThisActor_Enemy ? true : false;
		bTargeting_Player = ThisActor_Player ? true : false;
		bTargeting_Object = ThisActor_Object ? true : false;

		if(bTargeting_Enemy || bTargeting_Player || bTargeting_Object)
		{
			bTargeting = true;
		}
		else
		{
			bTargeting = false;
		}
		

		//stop movement (to be started again possibly based on new click)
		bAutoRunning = false;
	}

	
}

void AAuraPlayerController::AbilityInputTagReleased(FGameplayTag InputTag)
{
	//if pushing anything other than the left mouse, do the ability
	if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().Input_LMB))
	{
		if (GetASC())
		{
			GetASC()->AbilityInputTagReleased(InputTag);
		}
		return;
	}

	//Targeting and pushing left mouse
	if(bTargeting)
	{
		//TODO:
		//Get the type of target (enemy, player, object using the other bTargeting bools)

		//TODO:
		//if the target is an enemy, do the ability
		if (GetASC())
		{
			GetASC()->AbilityInputTagReleased(InputTag);
		}

		//TODO:
		//if the target is an item, interact with it

		//TODO:
		//if the target is self, do something else... (menu, self buff?)
		
	}
	//Not targeting and pushing left mouse
	else
	{
		//(auto run) move towards the target location

		const APawn* ControlledPawn = GetPawn();
		if(FollowTime <= PressThreshold && ControlledPawn)
		{
			if (UNavigationPath* NavPath = UNavigationSystemV1::FindPathToLocationSynchronously(this,
				ControlledPawn->GetActorLocation(),CachedDestination))
			{
				//clear the spline (curved path between points)
				Spline->ClearSplinePoints();

				//loop through the path between the two locations and add points to the spline
				for (const FVector& PointLoc : NavPath->PathPoints)
				{
					Spline->AddSplinePoint(PointLoc, ESplineCoordinateSpace::World);

					if (NavPath->PathPoints.Num() > 0)
					{
						//Correct the destination to a point that is reachable (the last point in the calculated NavPath)
						CachedDestination = NavPath->PathPoints[NavPath->PathPoints.Num() - 1];
						
						bAutoRunning = true;
					}
				}
			}
		}
	}

	FollowTime = 0.f;
	bTargeting = false;
	bTargeting_Enemy = false;
	bTargeting_Player = false;
	bTargeting_Object = false;
	
}

void AAuraPlayerController::AbilityInputTagHeld(FGameplayTag InputTag)
{
	
	//if pushing anything other than the left mouse, do the ability
	if (!InputTag.MatchesTagExact(FAuraGameplayTags::Get().Input_LMB))
	{
		if (GetASC())
		{
			GetASC()->AbilityInputTagHeld(InputTag);
		}
		return;
	}

	//Targeting and pushing left mouse
	if(bTargeting)
	{
		//TODO:
		//Get the type of target (enemy, player, object using the other bTargeting bools)

		//TODO:
		//if the target is an enemy, do the ability
		if (GetASC())
		{
			GetASC()->AbilityInputTagHeld(InputTag);
		}

		//TODO:
		//if the target is an item, interact with it

		//TODO:
		//if the target is self, do something else... (menu, self buff?)
		
		
	}
	//Not targeting and pushing left mouse
	else
	{
		
		//move towards the mouse location
		FollowTime += GetWorld()->GetDeltaSeconds();
	
		if(CursorHit.bBlockingHit)
		{
			CachedDestination = CursorHit.ImpactPoint;
		}

		if(APawn* ControlledPawn = GetPawn())
		{
			const FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation());
			ControlledPawn->AddMovementInput(WorldDirection);
		}
	}
	
}

UAuraAbilitySystemComponent* AAuraPlayerController::GetASC()
{
	if(AuraAbilitySystemComponent == nullptr)
	{
		AuraAbilitySystemComponent = Cast<UAuraAbilitySystemComponent>(
			UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetPawn<APawn>()));
	}
	return AuraAbilitySystemComponent;
}


void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	if(Subsystem)
	{
		Subsystem->AddMappingContext(AuraContext, 0);
	}
	
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameAndUI InputModeData;
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}

void AAuraPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	UAuraInputComponent* AuraInputComponent = CastChecked<UAuraInputComponent>(InputComponent);
	AuraInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAuraPlayerController::Move);

	AuraInputComponent->BindAbilityActions(InputConfig, this,
		&ThisClass::AbilityInputTagPressed, &ThisClass::AbilityInputTagReleased, &ThisClass::AbilityInputTagHeld);
}

void AAuraPlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if(APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}
}


