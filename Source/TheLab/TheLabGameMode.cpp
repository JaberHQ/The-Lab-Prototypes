// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheLabGameMode.h"
#include "TheLabHUD.h"
#include "TheLabCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheLabGameMode::ATheLabGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATheLabHUD::StaticClass();
}
