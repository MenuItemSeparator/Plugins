#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UckVehicleController_ACC.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UCK_API U1_VehicleController_ACC : public UActorComponent
{
	GENERATED_BODY()

public:	
	U1_VehicleController_ACC()
	{
		PrimaryComponentTick.bCanEverTick = true;
	}

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void fn_Init();
	void fn_Init_Implementation();
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UCK_API U1_VehicleController_ACC_Fin : public U1_VehicleController_ACC
{
	GENERATED_BODY()
};