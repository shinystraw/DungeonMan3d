// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoulsCloneGameMode.h"
#include "SoulsCloneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoulsCloneGameMode::ASoulsCloneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
