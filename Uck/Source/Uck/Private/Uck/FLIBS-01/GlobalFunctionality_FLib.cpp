#include "Uck/FLIBS-01/GlobalFunctionality_FLib.h"
#include "MyObject.h"

bool UGlobalFunctionality_FLib::call_IsGameActor(const AActor* _Actor)
{
	if (!_Actor)
	{
		UNGLog_FLib::call_RegisterWarning(true, TEXT("NullActor detected: 1818"));
	}
	
	UWorld* World = GEngine->GetWorldFromContextObject(_Actor, EGetWorldErrorMode::LogAndReturnNull);
	return World ? (World->GetNetMode() != NM_Client) : false;
}

bool UGlobalFunctionality_FLib::call_IsClientActor(const AActor* _Actor)
{
	if (_Actor)
	{	
		if (UWorld* world = GEngine->GetWorldFromContextObject(_Actor, EGetWorldErrorMode::LogAndReturnNull); world)
		{
			ENetMode worldRole = world->GetNetMode();
			if (worldRole != ENetMode::NM_DedicatedServer)
			{
				return true;
			}
		}
	}
	else
	{
		UNGLog_FLib::call_RegisterWarning(true, TEXT("NullActor detected: 1818"));
	}
	
	return false;
}

/*
ENetRole actorsRole = _Actor->GetLocalRole();
FText MyEnumValueText;
UEnum::GetDisplayValueAsText(actorsRole, MyEnumValueText);
if (actorsRole == ENetRole::ROLE_AutonomousProxy ||
	actorsRole == ENetRole::ROLE_SimulatedProxy)
{
	return true;
}
if (_Actor->GetRemoteRole() == ROLE_SimulatedProxy &&
	actorsRole == ENetRole::ROLE_Authority)
{
	return true;
}
mDEVMSG(LOG_OFF, MyEnumValueText.ToString());
*/