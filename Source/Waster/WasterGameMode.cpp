// Copyright Epic Games, Inc. All Rights Reserved.

#include "WasterGameMode.h"
#include "WasterPlayerController.h"
#include "WasterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWasterGameMode::AWasterGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AWasterPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}