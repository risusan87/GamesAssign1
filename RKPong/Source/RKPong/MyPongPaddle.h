// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PongPaddle.h"
#include "MyPongPaddle.generated.h"

/**
 * 
 */
UCLASS()
class RKPONG_API AMyPongPaddle : public APongPaddle
{
	GENERATED_BODY()

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void Tick(float DeltaTime) override;

private:
	float MoveForwardAmount = 0;
	virtual void MoveForward(float Amount);
	
};
