// Copyright Epic Games, Inc. All Rights Reserved.

#include "ld48GameMode.h"
#include "ld48HUD.h"
#include "ld48Character.h"
#include "UObject/ConstructorHelpers.h"

Ald48GameMode::Ald48GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Ald48HUD::StaticClass();
}
