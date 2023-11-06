// Fill out your copyright notice in the Description page of Project Settings.


#include "PongPaddle.h"

// Sets default values
APongPaddle::APongPaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	SetRootComponent(CollisionBox);
	StaticMeshComponent -> SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APongPaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APongPaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APongPaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

