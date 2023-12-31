// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PongGameStateBase.h"
#include "PongWall.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PongBall.generated.h"

UCLASS()
class RKPONG_API APongBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APongBall();
	UPROPERTY(EditAnywhere, Category = "Pong Paddle")
		USphereComponent* SphereComponent;
	UPROPERTY(EditAnywhere, Category = "Pong Paddle")
		UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditAnywhere, Category = "Pong Paddle")
		UProjectileMovementComponent* ProjectileMovementComponent;

	UPROPERTY(EditAnywhere, Category = "Pong Paddle")
		float Speed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float FixedX;

};
