#include "Uck/Vehicle/VehicleController_ACC.h"
#include "ChaosWheeledVehicleMovementComponent.h"

void UVehicleController::fn_Init_Implementation()
{
	if (UChaosWheeledVehicleMovementComponent* vehmove = GetOwner()->FindComponentByClass<UChaosWheeledVehicleMovementComponent>())
	{
		
	}
}

void UVehicleController::fn_MoveX_Implementation(float _value)
{
	Var_MoveX = _value;
}

void UVehicleController::fn_MoveY_Implementation(float _value)
{
	Var_MoveY = _value;
}

void UVehicleController::fn_LookX_Implementation(float _value)
{
	Var_LookX = _value;
}

void UVehicleController::fn_LookY_Implementation(float _value)
{
	Var_LookY = _value;
}

void UVehicleController::fn_GearUp_Implementation(int _value)
{

}

void UVehicleController::fn_GearDn_Implementation(int _value)
{

}

void UVehicleController::fn_Gear_Implementation(int _value)
{

}

void UVehicleController::fn_Stop_Implementation(float _value)
{
	Var_Stop = _value;
}

void UVehicleController::fn_Update_Implementation(float _time)
{
	fn_ClearFrameVariables();
	if (UChaosWheeledVehicleMovementComponent* vehmove = GetOwner()->FindComponentByClass<UChaosWheeledVehicleMovementComponent>())
	{
		float speed = vehmove->GetForwardSpeed();
		if (Var_WheelsReFrictionCurve)
		{
			float refriction = Var_WheelsReFrictionCurve->GetFloatValue(speed);
			if (refriction > 0.01f)
			{
				Var_WheelsReFriction = refriction;
			}
			for (int i = vehmove->GetNumWheels(); i > 0; --i)
			{
				vehmove->SetWheelFrictionMultiplier(i - 1, Var_WheelsFriction * Var_WheelsReFriction);
			}	
		}
			
	}
	
}

void UVehicleController::fn_ClearFrameVariables()
{
	Var_MoveX = Var_MoveY = Var_LookX = Var_LookY = Var_Stop = Var_Brake = 0.f;
	Var_NextGear = Var_CurrentGear;
}

void UVehicleController::fn_Brake_Implementation(float _value)
{
	Var_Brake = _value;
}

void UVehicleController::fn_AutoGear_Implementation(float _time)
{

}

float UVehicleHelpers::fn_GetInputValue_Implementation()
{
	return Var_MoveX;
}

float UVehicleHelpers::fn_GetRPM_Implementation()
{
	if (UChaosWheeledVehicleMovementComponent* cmc = GetOwner()->FindComponentByClass<UChaosWheeledVehicleMovementComponent>(); cmc)
	{
		float rpm = cmc->GetEngineRotationSpeed();
		return rpm;
	}
	return 0.f;
}

float UVehicleHelpers::fn_GetEngineLoad_Implementation()
{
	if (Var_MoveY > Var_EngineLoad)
	{
		Var_EngineLoad = Var_MoveY;
	}
	else
	{
		Var_EngineLoad *= 0.95;
	}
	return Var_EngineLoad;
}

void UVehicleControllerStats::fn_StartEngine(bool _Value)
{
	if (Var_Started != _Value)
	{
		cbStarted.Broadcast(_Value);
	}
	Var_Started = _Value;
}
