// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BulletType.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class BALLISTICSSYSTEM_API ABullet : public AActor
{
	GENERATED_BODY()


public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EBulletCaliber> BulletCaliber;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float Mass;

	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
