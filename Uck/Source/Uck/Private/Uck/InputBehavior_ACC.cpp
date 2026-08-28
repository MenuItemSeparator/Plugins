#include "Uck/InputBehavior_ACC.h"

#include "Engine/LocalPlayer.h"
#include "GameFramework/PlayerController.h"

void UInputHandlersContainer::fn_AddInterface(TScriptInterface<IInputHandler> _Var)
{
	Var_InputBehaviorArray.AddUnique(_Var);
	fn_UpdateInputInterfaces();
}

void UInputHandlersContainer::fn_RemoveInterface(TScriptInterface<IInputHandler> _Var)
{
	Var_InputBehaviorArray.Remove(_Var);
	fn_UpdateInputInterfaces();
}

void UInputHandlersContainer::fn_UpdateInputInterfaces()
{
	fn_ClearMappings();
	int priority = 0;

	for (TScriptInterface<IInputHandler> i : Var_InputBehaviorArray)
	{
		if (const UObject* ref = i.GetObjectRef())
		{
			for (const FInputMapping_Struct& s : Var_Config)
			{
				if (const UClass* c = s.Object)
				{
					if (c == ref->GetClass())
					{
						for (const UInputMappingContext* m : s.Mappings)
						{
							fn_RegisterMapping(m, ++priority);
						}
					}
				}
			}
		}
	}
}

void UInputHandlersContainer::fn_ClearMappings()
{
	if (eisi_t e = GetIeisi())
	{
		e->ClearAllMappings();
	}
}

void UInputHandlersContainer::fn_RegisterMapping(const UInputMappingContext* _Target, int _Priority)
{
	eisi_t subsystem = GetIeisi();
	if (subsystem)
	{
		subsystem->AddMappingContext(_Target, _Priority);
	}
}

UEnhancedInputLocalPlayerSubsystem* UInputHandlersContainer::GetIeisi()
{
	eisi_t result = Var_Eisei.Get();
	if (result)
	{
		return result;
	}
	else
	{
		if (APlayerController* pc = Cast<APlayerController>(GetOwner()); pc)
		{
			if (UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer()); subsystem)
			{
				Var_Eisei = subsystem;
				return subsystem;
			}
		}
	}
	return nullptr;
}

void UInputContainer::fn_FlushInputs()
{
	for (const FConsumedInput_Struct& a : Var_FrameInputs)
	{
		for (TScriptInterface<IInputHandler> i : ReverseIterate(Var_InputBehaviorArray))
		{
			if (!i.GetObject()) continue;
			if (bool result = IInputHandler::Execute_fi_TryHandleInput(i.GetObject(), a.Var_Action, a.Var_Value, a.Var_Time, a.Var_InputLifeTime, a.Var_DeviceType))
			{
				break;
			}
		}
	}
	Var_FrameInputs.Empty();
}

void UInputContainer::fn_AddInputAction(FGameplayTag _Action, float _Value, float _Time, EInputLifeTime_Enum _Lt, EDeviceType_Enum _Device)
{
	Var_FrameInputs.Add({_Action, _Value, _Time, _Lt, _Device});
}
