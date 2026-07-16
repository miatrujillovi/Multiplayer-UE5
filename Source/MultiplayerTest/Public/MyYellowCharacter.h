// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MultiplayerTestCharacter.h"
#include "MyYellowCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERTEST_API AMyYellowCharacter : public AMultiplayerTestCharacter
{
	GENERATED_BODY()

public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* GrowAction;

	void DoGrow(const FInputActionValue& Value);

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
};
