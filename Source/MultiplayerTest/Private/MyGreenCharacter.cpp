// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGreenCharacter.h"
#include "EnhancedInputComponent.h"

void AMyGreenCharacter::DoTeleport(const FInputActionValue& Value)
{
	FVector NewLocation = GetActorLocation() + GetActorForwardVector() * 300.f;

	SetActorLocation(NewLocation);
}

void AMyGreenCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) 
	{
		EnhancedInputComponent->BindAction(TeleportAction, ETriggerEvent::Triggered, this, &AMyGreenCharacter::DoTeleport);
	}
}
