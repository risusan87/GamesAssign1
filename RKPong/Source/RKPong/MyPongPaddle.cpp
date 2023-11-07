// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPongPaddle.h"

void AMyPongPaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (PlayerInputComponent != nullptr) {
		//BIND axis "MoveForward" to this objects MoveForward() Function
		PlayerInputComponent -> BindAxis("MoveUp", this, &AMyPongPaddle::MoveForward);

	}

}

void AMyPongPaddle::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);

	if (this->Controller != nullptr && MoveForwardAmount != 0.0f) {
		PaddleMove(MoveForwardAmount);
	}
	
	

}

void AMyPongPaddle::MoveForward(float Amount)
{
	MoveForwardAmount = Amount;
}