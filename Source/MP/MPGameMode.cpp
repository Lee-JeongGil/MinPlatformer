// Copyright Epic Games, Inc. All Rights Reserved.

#include "MPGameMode.h"
#include "MPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMPGameMode::AMPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
