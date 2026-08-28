#pragma once

#include "CoreMinimal.h"
#include "Uck/CTRL_ACC.h"
#include "MyObject.h"
#include "Components/SkeletalMeshComponent.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "Ragdoll_CTRL_ACC.generated.h"

UCLASS(abstract)
class UCK_API UUck_Ragdoll_CTRL : public UCTRL_ACC
{
	GENERATED_BODY()

public:

	virtual void BeginPlay() override;
	virtual void Activate(bool bReset = false) override;
	virtual void Deactivate() override;
	virtual void OnRep_IsActive() override;

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Uck")
	void fn_Ragdoll(bool _Value);
	void fn_Ragdoll_Implementation(bool _Value);

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<class USkeletalMeshComponent> Var_Target;

	UPROPERTY(BlueprintReadWrite, Category = "Uck")
	TObjectPtr<UPhysicalAnimationComponent> Var_PhysAnimComp;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Uck")
	FName Var_CollisionProfileName = "1112";

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Uck")
	FName Var_PrimaryMeshTagName = Uck::PrimaryMeshName;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Uck")
	FName Var_SimBoneName;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Uck")
	bool Var_IncludeBone;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Uck")
	TObjectPtr<class UPhysicsAsset> Var_OveridedPhysicalAsset;

	UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "Uck")
	float Var_PhysicsBlendWeight = 0.f;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Uck")
	void fn_SetTargetBlendWeight(float _Weight);
	void fn_SetTargetBlendWeight_Implementation(float _Weight);

	UFUNCTION(BlueprintNativeEvent, Category = "Uck")
	void OnControllerInit();
	void OnControllerInit_Implementation();

	UPROPERTY(BlueprintReadOnly, Category = "Uck")
	TWeakObjectPtr<class UEntityCtrl_ACC> Var_Host;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Uck")
	UEntityCtrl_ACC* fn_TryGetHost();

};

UCLASS(Blueprintable)
class UCK_API URagdoll_CTRL_ACC : public UUck_Ragdoll_CTRL
{

	GENERATED_BODY()

};
