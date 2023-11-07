// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/GameplayStatics.h"
#include "PongBall.h"
#include "CoreMinimal.h"
#include "PongPaddle.h"
#include "AIPongPaddle.generated.h"

/**
 * 
 */
UCLASS()
class RKPONG_API AAIPongPaddle : public APongPaddle
{
	GENERATED_BODY()
public:
	virtual void Tick(float DeltaTime) override;
	
};
