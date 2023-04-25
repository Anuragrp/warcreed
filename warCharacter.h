// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "warCharacter.generated.h"

UCLASS()
class WAR_CREED_API AwarCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AwarCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
protected:
	void MoveForward(float Value);

protected:
	virtual void BeginPlay() override;

};	