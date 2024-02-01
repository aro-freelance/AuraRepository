// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerInterface.generated.h"


UINTERFACE(MinimalAPI)
class UPlayerInterface : public UInterface
{
	GENERATED_BODY()
};


class AURA_API IPlayerInterface
{
	GENERATED_BODY()

public:

	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;
	
};
