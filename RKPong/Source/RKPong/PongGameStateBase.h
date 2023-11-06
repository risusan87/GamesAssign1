// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PongBall.h"
#include "Net/UnrealNetwork.h"
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PongGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class RKPONG_API APongGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	APongGameStateBase();

	UPROPERTY(Replicated)
		int32 PlayerScore;
	UPROPERTY(Replicated)
		int32 EnemyScore;

	UPROPERTY(Replicated)
		bool NewGame;

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};
