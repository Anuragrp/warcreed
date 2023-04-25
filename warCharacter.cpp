/ Fill out your copyright notice in the Description page of Project Settings.


#include "characters/warCharacter.h"

AwarCharacter::AwarCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AwarCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AwarCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AwarCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent ->BindAxis(FName("MoveForward"), this, &AwarCharacter::MoveForward)
}

void AwarCharacter::MoveForward(float Value)
{
	if (Controller && (value != 0.f))
	{

		FVector Forward = GetActorForwardVector();
		AddMovementInput(Forward, Value)
	}
}
