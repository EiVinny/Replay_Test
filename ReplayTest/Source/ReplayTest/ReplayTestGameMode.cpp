// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ReplayTestGameMode.h"
#include "ReplayTestHUD.h"
#include "ReplayTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AReplayTestGameMode::AReplayTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AReplayTestHUD::StaticClass();
}
