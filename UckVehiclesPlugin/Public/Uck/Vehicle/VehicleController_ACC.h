#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/PlayerController.h"
#include "VehicleController_ACC.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartedCallback, bool, Value);

UCLASS(abstract)
class UVehicleControllerStats : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = "Default")
	TObjectPtr<APlayerController> Var_ControllerRef;

public:
	UPROPERTY(BlueprintReadOnly, Category = "Default")
	bool Var_Started = false;

	UFUNCTION(BlueprintCallable, Category = "Default")
	void fn_StartEngine(bool _Value);

public:
	UPROPERTY(BlueprintAssignable, Category = "Default")
	FOnStartedCallback cbStarted;

public:
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Default")
	float Var_WheelsFriction = 1.f;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Default")
	float Var_WheelsReFriction = 1.f;

	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "Default")
	TObjectPtr<UCurveFloat> Var_WheelsReFrictionCurve;

};

UCLASS()
class UVehicleController : public UVehicleControllerStats
{
	GENERATED_BODY()

public:	
	UVehicleController()
	{
		PrimaryComponentTick.bCanEverTick = false;
	}

public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_Init();
	void fn_Init_Implementation();

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	float Var_MoveX = 0.f;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_MoveX(float _value);
	void fn_MoveX_Implementation(float _value);

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	float Var_MoveY = 0.f;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_MoveY(float _value);
	void fn_MoveY_Implementation(float _value);

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	float Var_LookX = 0.f;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_LookX(float _value);
	void fn_LookX_Implementation(float _value);

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	float Var_LookY = 0.f;
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_LookY(float _value);
	void fn_LookY_Implementation(float _value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_GearUp(int _value);
	void fn_GearUp_Implementation(int _value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_GearDn(int _value);
	void fn_GearDn_Implementation(int _value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_Gear(int _value);
	void fn_Gear_Implementation(int _value);

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	int Var_NextGear = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	int Var_CurrentGear = 0;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_Stop(float _value);
	void fn_Stop_Implementation(float _value);

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	float Var_Stop = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Default")
	float Var_Brake = 0;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_Update(float _time);
	void fn_Update_Implementation(float _time);

	UFUNCTION(BlueprintCallable, Category = "Default")
	void fn_ClearFrameVariables();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_Brake(float _value);
	void fn_Brake_Implementation(float _value);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API void fn_AutoGear(float _time);
	void fn_AutoGear_Implementation(float _time);
};

UCLASS()
class UVehicleHelpers : public UVehicleController
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintPure, BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API float fn_GetInputValue();
	float fn_GetInputValue_Implementation();

	UFUNCTION(BlueprintPure, BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API float fn_GetRPM();
	float fn_GetRPM_Implementation();

	UFUNCTION(BlueprintPure, BlueprintCallable, BlueprintNativeEvent, Category = "Default")
	UCKVEHICLESPLUGIN_API float fn_GetEngineLoad();
	float fn_GetEngineLoad_Implementation();

	float Var_EngineLoad = 0.f;
	float Var_EngineUnload = 0.f;
};


UCLASS(Blueprintable)
class UCKVEHICLESPLUGIN_API UVehicleController_ACC : public UVehicleHelpers
{
	GENERATED_BODY()
};

