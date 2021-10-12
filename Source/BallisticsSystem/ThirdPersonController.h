// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BulletType.h"
#include "MouseDeltaValues.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Character.h"
#include "ThirdPersonController.generated.h"

UCLASS()
class BALLISTICSSYSTEM_API AThirdPersonController : public ACharacter
{
	GENERATED_BODY()

public:

	AThirdPersonController();
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	class USkeletalMeshComponent* skeletalMesh;

	UPROPERTY()
		class AMouseDeltaValues* aMouseDelta;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
		USceneComponent* FP_MuzzleLocation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Mesh)
		USkeletalMeshComponent* FP_Gun;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float turnRate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float lookRate;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ABallisticsSystemProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float BarrelLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	float forwardAxisValue;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void MoveForward(float value);
	void MoveRight(float value);
	void TurnRate(float Rate);
	void LookRate(float Rate);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
