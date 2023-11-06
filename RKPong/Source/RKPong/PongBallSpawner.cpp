// Fill out your copyright notice in the Description page of Project Settings.


#include "PongBallSpawner.h"

// Sets default values
APongBallSpawner::APongBallSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = StaticMeshComponent;

}

// Called when the game starts or when spawned
void APongBallSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APongBallSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APongGameStateBase* state = GetWorld()->GetGameState<APongGameStateBase>();
	if (state->NewGame) {
		state->NewGame = false;
		GetWorld()->GetTimerManager().SetTimer(Timer, this, &APongBallSpawner::SpawnBall, 2.0f, false);
	}

}

void APongBallSpawner::SpawnBall() {
	
	//float X = this->GetActorLocation().X;
	//float Y = this->GetActorLocation().Y;
	//float Z = this->GetActorLocation().Z;

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	APongBall* Ball = GetWorld()->SpawnActor<APongBall>(Blueprint->StaticClass(), this->GetActorLocation(), this->GetActorRotation(), Params);

}

