// Fill out your copyright notice in the Description page of Project Settings.


#include "PongBoard.h"

// Sets default values
APongBoard::APongBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	this->SetRootComponent(SceneComponent);
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(SceneComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	CameraComponent->OrthoWidth = 800.f; 
	CameraComponent->bConstrainAspectRatio = true;
	StaticMeshComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APongBoard::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APongBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

