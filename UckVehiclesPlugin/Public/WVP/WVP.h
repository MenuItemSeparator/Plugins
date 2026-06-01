#pragma once

#include "CoreMinimal.h"

#include "WheeledVehiclePawn.h"

#include "WVP.generated.h"

UCLASS(Blueprintable)
class UCKVEHICLESPLUGIN_API AWVP : public APawn
{
	GENERATED_BODY()
public:
	AWVP(const FObjectInitializer& ObjectInitializer);

public:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Default")
	TObjectPtr<UChaosVehicleMovementComponent> VehicleMovementComponent;

	UPROPERTY(Category = "Vehicle", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class USkeletalMeshComponent> Mesh;
};
