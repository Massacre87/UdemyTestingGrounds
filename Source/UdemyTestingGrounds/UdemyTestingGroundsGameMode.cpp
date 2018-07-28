// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UdemyTestingGroundsGameMode.h"
#include "UdemyTestingGroundsHUD.h"
#include "UdemyTestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemyTestingGroundsGameMode::AUdemyTestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUdemyTestingGroundsHUD::StaticClass();
}
