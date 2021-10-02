// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BarrelType.generated.h"

UENUM()
enum EBarrelType {
	S_BarrelType_A UMETA(DisplayName = "Type A"),
	S_BarrelType_B UMETA(DisplayName = "Type B"),
	S_BarrelType_C UMETA(DisplayName = "Type C"),
	S_BarrelType_PaintBall UMETA(DisplayName="PaintBall")
};