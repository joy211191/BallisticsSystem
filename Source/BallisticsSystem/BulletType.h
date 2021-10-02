// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"BulletType.generated.h"

UENUM(BlueprintType)
enum EBulletCaliber {
	S_Caliber_556mm UMETA(DisplayName = "5.56 mm"),
	S_Caliber_762mm UMETA(DisplayName = "7.62 mm"),
	S_Caliber_9mm UMETA(DisplayName = "9 mm"),
	S_PaintBall UMETA(DisplayName="Paint Ball")
};