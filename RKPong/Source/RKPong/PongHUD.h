// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PongGameStateBase.h"
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PongHUD.generated.h"

/**
 * 
 */
UCLASS()
class RKPONG_API APongHUD : public AHUD
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Pong HUD")
		int32 PlayerHUDX;
	UPROPERTY(EditAnywhere, Category = "Pong HUD")
		int32 PlayerHUDY;
	UPROPERTY(EditAnywhere, Category = "Pong HUD")
		float PlayerHUD_Scale;

public:
	virtual void DrawHUD() override;

	
};
