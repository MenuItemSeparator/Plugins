#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CTRL_ACC.generated.h"


UCLASS( abstract )
class UCK_API UUCK_CTRL : public UActorComponent
{
	GENERATED_BODY()

public:	
	UUCK_CTRL();

protected:

	virtual void BeginPlay() override;

public:	

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		
};

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class UCK_API UCTRL_ACC : public UUCK_CTRL
{
	GENERATED_BODY()
};

