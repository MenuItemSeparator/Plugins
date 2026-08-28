#pragma once

#include "CoreMinimal.h"
#include "Uck/Leveling/UckLevelActor.h"
#include "LevelTesterActor.generated.h"

UCLASS()
class UCK_API AUck_InternalLevelTesterActor : public ALevelAgent_Final
{
	GENERATED_BODY()	
public:
	void BeginPlay() override;
};

UCLASS()
class UCK_API ALevelTesterActor_Final : public AUck_InternalLevelTesterActor
{
	GENERATED_BODY()
};
