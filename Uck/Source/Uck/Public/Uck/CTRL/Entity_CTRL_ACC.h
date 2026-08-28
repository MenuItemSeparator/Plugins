#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Entity_CTRL_ACC.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCB);

UCLASS(abstract)
class UCK_API UUck_InternalPossessCtrl_ : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = RepNotify_OnChangePlayerController)
	class APlayerController* Var_Controller;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = RepNotify_OnChangePlayerController)
	class APlayerController* Var_PreviousController;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFUNCTION(BlueprintCallable)
	void fn_SetController(APlayerController* _Value);

	UFUNCTION(BlueprintNativeEvent)
	void RepNotify_OnChangePlayerController();
	void RepNotify_OnChangePlayerController_Implementation();

public:
	UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
	FCB cbClientInit;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
	FCB cbServerInit;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
	FCB cbControllerInit;
};

UCLASS( abstract )
class UCK_API UUck_InternalEntityCtrl_ : public UUck_InternalPossessCtrl_
{
	GENERATED_BODY()

public:

	UUck_InternalEntityCtrl_();

protected:

	virtual void BeginPlay() override;

public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void fn_PlayerTick();
	void fn_PlayerTick_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void fn_ServerTick();
	void fn_ServerTick_Implementation();

};

UCLASS(abstract)
class UCK_API UUck_InternalAnimatronic_ : public UUck_InternalPossessCtrl_
{
	GENERATED_BODY()

public:

};

UCLASS(Blueprintable)
class UCK_API UEntityCtrl_ACC : public UUck_InternalAnimatronic_
{
	GENERATED_BODY()
};