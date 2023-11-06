// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/BoxComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongWall.generated.h"

UCLASS()
class RKPONG_API APongWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APongWall();

	UPROPERTY(EditAnywhere, Category = "Pong Wall")
		UBoxComponent* BoxComponent;
	UPROPERTY(EditAnywhere, Category = "Pong Wall")
		UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, Category = "Pong Wall")
		int Side;

protected:
	virtual void BeginPlay() override;

};
