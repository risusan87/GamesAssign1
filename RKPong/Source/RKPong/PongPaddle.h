// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <Components/BoxComponent.h>
#include "GameFramework/Pawn.h"
#include "PongPaddle.generated.h"

UCLASS()
class RKPONG_API APongPaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APongPaddle();
	UPROPERTY(EditAnywhere, Category = "Pong Paddle")
		UBoxComponent* CollisionBox;
	UPROPERTY(EditAnywhere, Category = "Pong Paddle")
		UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, Category = "Pong Paddle")
		float PaddleSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void PaddleMove(float direction);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
