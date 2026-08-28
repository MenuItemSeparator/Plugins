#include "Uck/Leveling/UckLevelActor.h"

AInternalLevelAgent_::AInternalLevelAgent_()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AInternalLevelAgent_::BeginPlay()
{
	Super::BeginPlay();
}

void AInternalLevelAgent_::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

