// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPongPaddle.h"

void AAIPongPaddle::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);
	APongBall* Ball = Cast<APongBall>(UGameplayStatics::GetActorOfClass(this->GetWorld(), APongBall::StaticClass()));
	if (Ball) {
		float direction = Ball->GetActorLocation().Z > this->GetActorLocation().Z ? 1 : -1;
		PaddleMove(direction);
	}

}
