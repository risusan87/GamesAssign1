// Fill out your copyright notice in the Description page of Project Settings.


#include "PongPlayerController.h"

void APongPlayerController::BeginPlay() {

	Super::BeginPlay();

    APongBoard* MyCameraActor = Cast<APongBoard>(UGameplayStatics::GetActorOfClass(GetWorld(), APongBoard::StaticClass()));
    AMyPongPaddle* Paddle = Cast<AMyPongPaddle>(UGameplayStatics::GetActorOfClass(this->GetWorld(), AMyPongPaddle::StaticClass()));
    
    if (Paddle)
        Possess(Paddle);

    if (MyCameraActor) {
        UCameraComponent* CameraComponent = Cast<UCameraComponent>(MyCameraActor->GetComponentByClass(UCameraComponent::StaticClass()));

        if (CameraComponent) {
            SetViewTargetWithBlend(MyCameraActor);
        }
    }

}