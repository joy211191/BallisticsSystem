// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MouseDeltaValues.generated.h"

/**
 * 
 */
UCLASS()
class BALLISTICSSYSTEM_API AMouseDeltaValues : public APlayerController
{
	GENERATED_BODY()
	
public:
	float mouseDeltaX;
	float mouseDeltaY;
	
	virtual void BeginPlay() override;
protected:
	virtual void Tick(float DeltaTime) override;
};
