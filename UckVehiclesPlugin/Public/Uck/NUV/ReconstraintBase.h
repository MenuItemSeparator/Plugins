#pragma once

#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "ReconstraintBase.generated.h"

/// <summary>
/// Data logic
/// </summary>
UCLASS( abstract
	//, HideCategories = (Object, LOD, Lighting, VirtualTexture, Transform, HLOD, Collision, TextureStreaming, Mobile, Physics, Tags, AssetUserData, Activation, Cooking, Rendering, Navigation, Constraint)
)
class UCKVEHICLESPLUGIN_API UReConstraint : public UPhysicsConstraintComponent
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Suspesion)
	float Var_SusLen = 10.f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Suspesion)
	float Var_SusVel = 1000.f;
	
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Suspesion)
	float Var_SusPow = 10.f;

public:
	virtual void fn_ApplyProperties();
};

/// <summary>
/// Gameplay logic
/// </summary>
UCLASS(abstract)
class UCKVEHICLESPLUGIN_API UConstraintNUV : public UReConstraint
{
	GENERATED_BODY()
public:
	UConstraintNUV(const FObjectInitializer& ObjectInitializer);

public:
	virtual void fn_ReinitConstraint();
	virtual void PostInitProperties() override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};

/// <summary>
/// Engine affection
/// </summary>
UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class UCKVEHICLESPLUGIN_API UConstraintNUV_ACC : public UConstraintNUV
{
	GENERATED_BODY()

};

/// <summary>
/// Steerirng affection
/// </summary>
UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class UCKVEHICLESPLUGIN_API USteerConstraintNUV_ACC : public UConstraintNUV_ACC
{
	GENERATED_BODY()

};
