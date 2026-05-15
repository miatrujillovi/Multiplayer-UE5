// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/GM_CPP.h"
#include "PC_CPP.h"
#include "UObject/ConstructorHelpers.h"
#include "kismet/GameplayStatics.h"

AGM_CPP::AGM_CPP()
{
	PlayerControllerClass = APC_CPP::StaticClass();

	static ConstructorHelpers::FClassFinder<APawn> PawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));

	if (PawnBPClass.Class)
	{
		DefaultPawnClass = PawnBPClass.Class;
	}
}

void AGM_CPP::BeginPlay()
{
	Super::BeginPlay();

	SpawnPlayer(-1);
}

void AGM_CPP::SpawnPlayer(int ControllerID)
{
	APlayerController* NewLocalPlayer = UGameplayStatics::CreatePlayer(GetWorld(), -1, true);

	if (NewLocalPlayer)
	{
		UE_LOG(LogTemp, Display, TEXT("Spawning Player"));
	}
}
