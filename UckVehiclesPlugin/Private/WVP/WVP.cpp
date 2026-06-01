#include "WVP/WVP.h"
#include "WVP/Movement_WVP_ACC.h"
#include "Components/SkeletalMeshComponent.h"

AWVP::AWVP(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("VehicleMeshComponentName");
	Mesh->SetCollisionProfileName(UCollisionProfile::Vehicle_ProfileName);
	Mesh->BodyInstance.bSimulatePhysics = false;
	Mesh->BodyInstance.bNotifyRigidBodyCollision = true;
	Mesh->BodyInstance.bUseCCD = true;
	Mesh->SetGenerateOverlapEvents(true);
	Mesh->SetCanEverAffectNavigation(false);
	RootComponent = Mesh;

	VehicleMovementComponent = CreateDefaultSubobject<UChaosVehicleMovementComponent, UMovementComponent_WVP_ACC>("VehicleMovementComponentName");
	VehicleMovementComponent->SetIsReplicated(true); // Enable replication by default
	VehicleMovementComponent->UpdatedComponent = Mesh;

}
