// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MultiplayerTestCharacter.h"
#include "MyGreenCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERTEST_API AMyGreenCharacter : public AMultiplayerTestCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* TeleportAction;

	void DoTeleport(const FInputActionValue& Value);

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
};
