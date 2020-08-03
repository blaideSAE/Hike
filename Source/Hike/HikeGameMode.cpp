// Copyright Epic Games, Inc. All Rights Reserved.

#include "HikeGameMode.h"
#include "HikeHUD.h"
#include "HikeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHikeGameMode::AHikeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHikeHUD::StaticClass();
}
