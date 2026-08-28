#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalFunctionality_FLib.generated.h"

UCLASS()
class UCK_API UGlobalFunctionality_FLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/// <returns>Is business logic time</returns>
	UFUNCTION(BlueprintPure, Category = "Uck", meta = (WorldContext = "WorldContextObject"))
	static bool call_IsGameActor(const AActor* _Actor);

	/// <returns>Is game logics time.</returns>
	UFUNCTION(BlueprintPure, Category = "Uck", meta = (WorldContext = "WorldContextObject"))
	static bool call_IsClientActor(const AActor* _Actor);
};
