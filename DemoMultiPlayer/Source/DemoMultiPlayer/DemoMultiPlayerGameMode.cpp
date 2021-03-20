// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemoMultiPlayerGameMode.h"
#include "DemoMultiPlayerHUD.h"
#include "DemoMultiPlayerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemoMultiPlayerGameMode::ADemoMultiPlayerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	//HUDClass = ADemoMultiPlayerHUD::StaticClass();
}
