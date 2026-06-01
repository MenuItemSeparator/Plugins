#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"

#include "InputAction.h"
#include "InputMappingContext.h"
#include "InputMappingQuery.h"
#include "PlayerMappableInputConfig.h"
#include "PlayerMappableKeySettings.h"

#include "InputHandler_ACC.generated.h"

UENUM()
enum class EDeviceType_Enum : uint8
{
	Disable,
	Keyboard,
	Gamepad,
	EInputType_Enum_MAX
};

UENUM(BlueprintType)
enum class EInputLifeTime_Enum : uint8
{
	Disabled,
	Start,
	Continue,
	End,
	EInputLifeTime_Enum_MAX
};

UINTERFACE(MinimalAPI)
class UInputHandler : public UInterface
{
	GENERATED_BODY()
};

class UCK_API IInputHandler
{
	GENERATED_BODY()

public:
/*
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Default")
	bool fi_ReceiveInput(FGameplayTag _Tag);

*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "U3D Input")
	bool fi_TryHandleInput(FGameplayTag _Action, float _Value, float _Time, EInputLifeTime_Enum _Type, EDeviceType_Enum _Device);

};
