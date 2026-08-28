#include "Uck/CTRL/Entity_CTRL_ACC.h"
#include "GameFramework/PlayerController.h"
#include "Uck/FLIBS-01/GlobalFunctionality_FLib.h"
#include "Uck/NGLog/NGLog.h"
#include "Net/UnrealNetwork.h" 

UUck_InternalEntityCtrl_::UUck_InternalEntityCtrl_()
{

	PrimaryComponentTick.bCanEverTick = true;

}

void UUck_InternalEntityCtrl_::BeginPlay()
{
	Super::BeginPlay();

	if (UGlobalFunctionality_FLib::call_IsGameActor(GetOwner()))
	{
		cbServerInit.Broadcast();
	}
	if (UGlobalFunctionality_FLib::call_IsClientActor(GetOwner()))
	{
		cbClientInit.Broadcast();
	}
}

void UUck_InternalEntityCtrl_::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (UGlobalFunctionality_FLib::call_IsGameActor(GetOwner()))
	{
		fn_ServerTick();
	}
	if (UGlobalFunctionality_FLib::call_IsClientActor(GetOwner()))
	{
		fn_PlayerTick();
	}
}

void UUck_InternalPossessCtrl_::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UUck_InternalPossessCtrl_, Var_Controller);
}

void UUck_InternalEntityCtrl_::fn_PlayerTick_Implementation()
{

}

void UUck_InternalEntityCtrl_::fn_ServerTick_Implementation()
{

}

void UUck_InternalPossessCtrl_::fn_SetController(APlayerController* _Value)
{
	if (Var_Controller != _Value)
	{
		Var_Controller = _Value;
		ENetRole role = GetOwner()->GetLocalRole();
		if (role == ROLE_Authority)
		{
			RepNotify_OnChangePlayerController();
		}
		else
		{
			mDEVMSG(LOG_ON, (int8)role);
		}
		return;
	}
	if (Var_Controller == _Value)
	{
		return;
	}
}

void UUck_InternalPossessCtrl_::RepNotify_OnChangePlayerController_Implementation()
{
	if (Var_Controller)
	{
		Var_PreviousController = Var_Controller;
	}
	cbControllerInit.Broadcast();
}
