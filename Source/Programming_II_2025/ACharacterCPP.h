// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ACharacterCPP.generated.h"

//Forward declare classes
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class PROGRAMMING_II_2025_API AACharacterCPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AACharacterCPP();

protected:
	// Called when the game starts or when spawned
	//Same as Start() in Unity
	
	virtual void BeginPlay() override;

public:	
	// Called every frame
	//Same as Update() in Unity
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
