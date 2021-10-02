// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	switch (BulletCaliber)
	{
	case EBulletCaliber::S_Caliber_556mm: {
		Mass = 5;
	}
	case EBulletCaliber::S_Caliber_762mm: {
		Mass = 6;
	}
	case EBulletCaliber::S_Caliber_9mm: {
		Mass = 7;
	}
	}
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

