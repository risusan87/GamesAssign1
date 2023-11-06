// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongBoard.generated.h"

UCLASS()
class RKPONG_API APongBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APongBoard();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Pong Board")
		USceneComponent* SceneComponent;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Pong Board")
		UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditAnywhere, Category = "Pong Board")
		UCameraComponent* CameraComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
