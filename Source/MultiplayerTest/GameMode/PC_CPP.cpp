// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/PC_CPP.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"

void APC_CPP::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController()) {
		ULocalPlayer* localPlayer = GetLocalPlayer();
		if (localPlayer) 
		{
			UEnhancedInputLocalPlayerSubsystem* subsystem = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

			if (subsystem && DefaultMappingContext)
			{
				subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
}
