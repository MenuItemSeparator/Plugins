// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Uck/FLIBS-01/GlobalFunctionality_FLib.h"
#include "Uck/NGLog/NGLog.h"
#include "MyObject.generated.h"


namespace Uck {
	const FName PrimaryMeshName = "!PrimaryMesh(C)";
	const FName DefaultCameraBoneName = "head";
	const FName DefaulPanimProfileName = "1112";
	const FName DefaulPanimBoneName = "spine_01";
}

UCLASS()
class UCK_API UNoNoNo : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Uck")
	static FName call_GetPrimaryMeshName() { return Uck::PrimaryMeshName; }

};
