// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NUAGameMode.h"
#include "NUAHUD.h"
#include "NUACharacter.h"
#include "UObject/ConstructorHelpers.h"

ANUAGameMode::ANUAGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANUAHUD::StaticClass();
}
