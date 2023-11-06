// Fill out your copyright notice in the Description page of Project Settings.


#include "PongWall.h"

// Sets default values
APongWall::APongWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SceneComponent"));
	this->SetRootComponent(BoxComponent);
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(this->RootComponent);

}

void APongWall::BeginPlay() {

	Super::BeginPlay();

}



