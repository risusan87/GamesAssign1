// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PongBall.h"
#include "PongGameStateBase.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongBallSpawner.generated.h"

UCLASS()
class RKPONG_API APongBallSpawner : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	APongBallSpawner();
	UPROPERTY(EditAnywhere, Category = "Pong Ball Spawner")
		UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditAnywhere, Category = "Pong Ball Spawner")
		APongBall* Blueprint;
	FTimerHandle Timer;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void SpawnBall();

};
