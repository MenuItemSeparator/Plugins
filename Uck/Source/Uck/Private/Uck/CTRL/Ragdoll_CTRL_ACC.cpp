#include "Uck/CTRL/Ragdoll_CTRL_ACC.h"
#include "Uck/CTRL/Entity_CTRL_ACC.h"
#include "PhysicsEngine/PhysicsAsset.h"

void UUck_Ragdoll_CTRL::BeginPlay()
{
	Super::BeginPlay();
	if (Var_Host = GetOwner()->FindComponentByClass<UEntityCtrl_ACC>(); Var_Host.Get())
	{
		Var_Host.Get()->cbControllerInit.AddDynamic(this, &UUck_Ragdoll_CTRL::OnControllerInit);
	}
}

void UUck_Ragdoll_CTRL::Activate(bool _Reset)
{
	Super::Activate(_Reset);
}

void UUck_Ragdoll_CTRL::Deactivate()
{
	Super::Deactivate();
}

void UUck_Ragdoll_CTRL::OnRep_IsActive()
{
	Super::OnRep_IsActive();
	fn_Ragdoll(IsActive());
}

void UUck_Ragdoll_CTRL::fn_Ragdoll_Implementation(bool _Value)
{
	return;
}

void UUck_Ragdoll_CTRL::fn_SetTargetBlendWeight_Implementation(float _Weight)
{
	Var_PhysicsBlendWeight = _Weight;
}

void UUck_Ragdoll_CTRL::OnControllerInit_Implementation()
{

}

UEntityCtrl_ACC* UUck_Ragdoll_CTRL::fn_TryGetHost()
{
	return Var_Host.Get();
}
