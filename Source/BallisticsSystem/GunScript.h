// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BarrelType.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunScript.generated.h"

UCLASS()
class BALLISTICSSYSTEM_API AGunScript : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EBarrelType> BarrelType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float BarrelLength;
	// Sets default values for this actor's properties
	AGunScript();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
