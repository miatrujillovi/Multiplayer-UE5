// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_CPP.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERTEST_API AGM_CPP : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGM_CPP();

	virtual void BeginPlay() override;

protected:

	void SpawnPlayer(int ControllerID);
	
};
