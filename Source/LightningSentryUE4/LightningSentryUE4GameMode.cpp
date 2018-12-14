// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LightningSentryUE4GameMode.h"
#include "Player/PlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALightningSentryUE4GameMode::ALightningSentryUE4GameMode() {
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Player/Behaviour/PlayerCharacter"));
    if (PlayerPawnBPClass.Class != NULL) {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}
