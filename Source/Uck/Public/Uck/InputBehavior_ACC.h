#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputHandler_ACC.h"
#include "UObject/ScriptInterface.h"


#include "InputAction.h"
#include "InputMappingContext.h"
#include "InputMappingQuery.h"
#include "PlayerMappableInputConfig.h"
#include "PlayerMappableKeySettings.h"

#include "EnhancedInputModule.h"
#include "EnhancedInputPlatformSettings.h"
#include "UserSettings/EnhancedInputUserSettings.h"
#include "EnhancedInputDeveloperSettings.h"
#include "EnhancedInputSubsystems.h"

#include "InputBehavior_ACC.generated.h"

USTRUCT(BlueprintType)
struct FInputMapping_Struct
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Default")
	TSubclassOf<UObject>	Object;

	UPROPERTY(EditAnywhere, Category = "Default")
	TArray<UInputMappingContext*>	Mappings;

};


UCLASS(Abstract)
class UCK_API UInputBehaviorConfig : public UActorComponent
{
	GENERATED_BODY()

public:
	UInputBehaviorConfig()
	{
		PrimaryComponentTick.bCanEverTick = false;
	}

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Default")
	TArray<FInputMapping_Struct> Var_Config;
};

UCLASS( Abstract )
class UCK_API UInputHandlersContainer : public UInputBehaviorConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "Default")
	TArray<TScriptInterface<IInputHandler>> Var_InputBehaviorArray;

	UFUNCTION(BlueprintCallable, Category = "Default")
	void fn_AddInterface(TScriptInterface<IInputHandler> _Var);

	UFUNCTION(BlueprintCallable, Category = "Default")
	void fn_RemoveInterface(TScriptInterface<IInputHandler> _Var);

	UFUNCTION(BlueprintCallable, Category = "Default")
	void fn_UpdateInputInterfaces();

private:
	using eisi_t = UEnhancedInputLocalPlayerSubsystem*;
	void fn_ClearMappings();
	void fn_RegisterMapping(const UInputMappingContext* _Target, int _Priority);

	UPROPERTY()
	TObjectPtr<UEnhancedInputLocalPlayerSubsystem> Var_Eisei;
	UEnhancedInputLocalPlayerSubsystem* GetIeisi();
};

USTRUCT(BlueprintType)
struct FConsumedInput_Struct
{
	GENERATED_BODY()

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	FGameplayTag			Var_Action;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	float					Var_Value = 0;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	float					Var_Time = 0;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	EInputLifeTime_Enum		Var_InputLifeTime = EInputLifeTime_Enum::Disabled;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	EDeviceType_Enum		Var_DeviceType = EDeviceType_Enum::Disable;
};

UCLASS(Abstract)
class UCK_API UInputContainer : public UInputHandlersContainer
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "Default")
	TArray<FConsumedInput_Struct> Var_FrameInputs;

	UFUNCTION(BlueprintCallable, Category = "Default")
	void fn_FlushInputs();

	UFUNCTION(BlueprintCallable, Category = "Default")
	void fn_AddInputAction(FGameplayTag _Action, float _Value, float _Time, EInputLifeTime_Enum _Lt, EDeviceType_Enum _Device);
};

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class UCK_API UInputController_ACC : public UInputContainer
{
	GENERATED_BODY()
public:

};
