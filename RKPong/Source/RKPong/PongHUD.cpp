// Fill out your copyright notice in the Description page of Project Settings.


#include "PongHUD.h"

void APongHUD::DrawHUD() {

	Super::DrawHUD();
	APongGameStateBase* state = GetWorld()->GetGameState<APongGameStateBase>();
	DrawText(FString::Printf(TEXT("%d"), state->PlayerScore), FLinearColor::White, PlayerHUDX, PlayerHUDY, NULL, PlayerHUD_Scale, true);
	DrawText(FString::Printf(TEXT("%d"), state->EnemyScore), FLinearColor::White, EnemyHUDX, EnemyHUDY, NULL, EnemyHUD_Scale, true);
}