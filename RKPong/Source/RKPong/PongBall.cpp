// Fill out your copyright notice in the Description page of Project Settings.


#include "PongBall.h"

// Sets default values
APongBall::APongBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SetRootComponent(SphereComponent);
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(RootComponent);

}

// Called when the game starts or when spawned
void APongBall::BeginPlay()
{
	Super::BeginPlay();
	ProjectileMovementComponent->Velocity = FVector(0.0f, Speed, 0.0f);
	FixedX = GetActorLocation().X;
	//PrimitiveComponent->SetAllPhysicsLinearVelocity(FVector(0.0f, 10.0f, 0.0f));
	
}

// Called every frame
void APongBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetActorLocation().X != FixedX) {

		FVector Location = FVector(FixedX, GetActorLocation().Y, GetActorLocation().Z);
		SetActorLocation(Location);

		FVector UnitVec = GetVelocity();
		UnitVec.Normalize();
		float X = 0.0f;
		float Y = FMath::Abs(GetVelocity().X) * UnitVec.Y + GetVelocity().Y;
		float Z = FMath::Abs(GetVelocity().X) * UnitVec.Z + GetVelocity().Z;
		ProjectileMovementComponent->Velocity = FVector(X, Y, Z);

	}

}

void APongBall::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) {

	APongGameStateBase* state = GetWorld()->GetGameState<APongGameStateBase>();
	APongWall* hitWall = Cast<APongWall>(Other);

	if (!hitWall)
		return;

	if (state && hitWall->Side == 0) {
		state->EnemyScore++;
	}
	else if (state && hitWall->Side == 1)
		state->PlayerScore++;
	if (hitWall->Side != -1) {
		APongBall* CurrentBall =
			Cast<APongBall>(UGameplayStatics::GetActorOfClass(GetWorld(), APongBall::StaticClass()));
		CurrentBall->Destroy();
		state->NewGame = true;
	}
	

}

