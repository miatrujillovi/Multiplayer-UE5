// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_CPP.generated.h"

class UInputMappingContext;
/**
 * 
 */
UCLASS()
class MULTIPLAYERTEST_API APC_CPP : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public: 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputMappingContext* DefaultMappingContext;
};
