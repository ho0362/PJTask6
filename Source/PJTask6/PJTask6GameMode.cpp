// Copyright Epic Games, Inc. All Rights Reserved.

#include "PJTask6GameMode.h"
#include "PJTask6Character.h"
#include "UObject/ConstructorHelpers.h"

APJTask6GameMode::APJTask6GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
