#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidgetBlueprint.h"
#include "UckWidgetBase.generated.h"


UCLASS()
class UCKCOREPLUGIN_API UUckWidgetBase : public UObject//UUserWidgetBlueprint
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
