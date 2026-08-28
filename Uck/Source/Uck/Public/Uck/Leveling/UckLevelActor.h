// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UckLevelActor.generated.h"

UCLASS(abstract)
class UCK_API AInternalLevelAgent_ : public AActor
{
	GENERATED_BODY()
	
public:	
	AInternalLevelAgent_();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
};

UCLASS(Blueprintable)
class UCK_API ALevelAgent_Final : public AInternalLevelAgent_
{
	GENERATED_BODY()
};
