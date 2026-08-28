#pragma once

#include "CoreMinimal.h"
#include "UckWidgetBase.generated.h"


UCLASS(Abstract)
class UCK_API UUckWidgetBase : public UObject//UUserWidgetBlueprint
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	bool Var_IsActiveNow = false;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void fn_WidgetActivate(bool _Value);
	void fn_WidgetActivate_Implementation(bool _Value);

public:
	UPROPERTY(EditAnyWhere, BlueprintReadOnly)
	bool Var_EnableAutoCollapse = true;
};

UCLASS()
class UCK_API UUckWidget_Final : public UUckWidgetBase
{
	GENERATED_BODY()
};