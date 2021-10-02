// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "BulletType.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallisticsSystemProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS(config=Game)
class ABallisticsSystemProjectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

public:
	ABallisticsSystemProjectile();

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* SM_BulletBody;

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EBulletCaliber> BulletCaliber=EBulletCaliber::S_Caliber_762mm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float Mass;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float dragCoefficient;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float crossSectionArea;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float BulletCoefficient;

	float BulletCoefficientCalculator(float mass, float drag, float crossSection);
};

