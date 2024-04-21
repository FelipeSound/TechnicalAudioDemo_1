// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechnicalAudioDemo_1GameMode.h"
#include "TechnicalAudioDemo_1Character.h"
#include "UObject/ConstructorHelpers.h"

ATechnicalAudioDemo_1GameMode::ATechnicalAudioDemo_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
