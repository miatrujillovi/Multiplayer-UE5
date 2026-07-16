// Fill out your copyright notice in the Description page of Project Settings.


#include "MyYellowCharacter.h"
#include "EnhancedInputComponent.h"

void AMyYellowCharacter::DoGrow(const FInputActionValue& Value)
{
	SetActorScale3D(GetActorScale3D() * 1.2f);
}

void AMyYellowCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(GrowAction, ETriggerEvent::Triggered, this, &AMyYellowCharacter::DoGrow);
	}
}
