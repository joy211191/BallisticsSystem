// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BallisticsSystemHUD.generated.h"

UCLASS()
class ABallisticsSystemHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABallisticsSystemHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

