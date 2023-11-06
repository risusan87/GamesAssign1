// Fill out your copyright notice in the Description page of Project Settings.


#include "PongGameStateBase.h"

APongGameStateBase::APongGameStateBase() {
    PlayerScore = 0;
    EnemyScore = 0;
    NewGame = true;
}

void APongGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(APongGameStateBase, PlayerScore);
    DOREPLIFETIME(APongGameStateBase, EnemyScore);
    DOREPLIFETIME(APongGameStateBase, NewGame);
}