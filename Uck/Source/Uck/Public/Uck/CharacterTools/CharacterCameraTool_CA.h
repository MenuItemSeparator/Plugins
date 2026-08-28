#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyObject.h"
#include "CharacterCameraTool_CA.generated.h"

UCLASS(Blueprintable)
class UCK_API AUck_InternalCharacterCameraTool : public AActor
{
	GENERATED_BODY()
	
public:	

	AUck_InternalCharacterCameraTool();

	UPROPERTY(EditAnyWhere, Category = "Uck")
	TObjectPtr<class USceneComponent> Var_Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Uck")
	TObjectPtr<class USpringArmComponent> Var_SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Uck")
	TObjectPtr<class UCameraComponent> Var_Camera;

	UPROPERTY(BlueprintReadWrite, Category = "Uck", meta = (ExposeOnSpawn = true))
	TObjectPtr<AActor> Var_Target;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Uck")
	FName Var_StaticMeshTag =  Uck::PrimaryMeshName;
	
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Uck")
	FName Var_HeadBoneName = Uck::DefaultCameraBoneName;

protected:
	void BeginPlay() override;

};

UCLASS(Blueprintable)
class UCK_API ACharacterCameraTool_Final : public AUck_InternalCharacterCameraTool
{
	GENERATED_BODY()
};