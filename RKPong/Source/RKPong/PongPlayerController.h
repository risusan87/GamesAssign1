// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/GameplayStatics.h"
#include "PongBoard.h"
#include "MyPongPaddle.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PongPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RKPONG_API APongPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
	
};
