// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LightningSentryUE4GameMode.h"
#include "LightningSentryUE4Character.h"
#include "UObject/ConstructorHelpers.h"

ALightningSentryUE4GameMode::ALightningSentryUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
