// Copyright Arora Software

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ObjectInterface.generated.h"

UINTERFACE(MinimalAPI)
class UObjectInterface : public UInterface
{
	GENERATED_BODY()
};


class AURA_API IObjectInterface
{
	GENERATED_BODY()

public:

	virtual void HighlightActor() = 0;
	virtual void UnHighlightActor() = 0;
	
};
