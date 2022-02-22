// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyLearningProjectGameMode.h"
#include "MyLearningProjectHUD.h"
#include "MyLearningProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyLearningProjectGameMode::AMyLearningProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyLearningProjectHUD::StaticClass();
}
