// Fill out your copyright notice in the Description page of Project Settings.


#include "ACharacterCPP.h"

// Sets default values
AACharacterCPP::AACharacterCPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
// Same as Start() in Unity
void AACharacterCPP::BeginPlay()
{
	Super::BeginPlay();
	
	//Verification that AACharacterCPP is being used
	check(GEngine != nullptr);

	//Displays the debug message in red for 5 seconds
	//-1 prevents the message from being updated or refreshed
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using the character AACharacterCPP"));
}

// Called every frame
// Same as Update() in Unity()
void AACharacterCPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AACharacterCPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

