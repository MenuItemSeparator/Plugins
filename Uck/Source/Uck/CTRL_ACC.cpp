#include "Uck/CTRL_ACC.h"

UUCK_CTRL::UUCK_CTRL()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UUCK_CTRL::BeginPlay()
{
	Super::BeginPlay();
	
}

void UUCK_CTRL::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

