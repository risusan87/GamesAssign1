// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPongPaddle.h"

void AAIPongPaddle::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);

	FVector Direction = FVector(0.0f, 0.0f, 5.0f) + GetActorLocation();
	//AddMovementInput(Direction, MoveForwardAmount);
	SetActorLocation(Direction, true);

}
