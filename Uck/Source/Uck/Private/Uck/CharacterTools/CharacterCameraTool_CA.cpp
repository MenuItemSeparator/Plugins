#include "Uck/CharacterTools/CharacterCameraTool_CA.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Uck/NGLog/NGLog.h"

AUck_InternalCharacterCameraTool::AUck_InternalCharacterCameraTool()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Var_Root = CreateDefaultSubobject<USceneComponent>("Root");
	SetRootComponent(Var_Root);

	Var_SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Var_SpringArm->SetupAttachment(Var_Root);

	Var_Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Var_Camera->SetupAttachment(Var_SpringArm);
}

void AUck_InternalCharacterCameraTool::BeginPlay()
{
	Super::BeginPlay();
	check(Var_Target);

	if (USkeletalMeshComponent* cmpnt = Var_Target->FindComponentByTag<USkeletalMeshComponent>(Var_StaticMeshTag); cmpnt)
	{
		if (int32 id = cmpnt->GetBoneIndex(Var_HeadBoneName); id >= 0)
		{
			this->AttachToComponent(cmpnt, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, true), Var_HeadBoneName);
		}
		else
		{
			UNGLog_FLib::call_RegisterCritical(true, true, TEXT("Camera toll can't find primary mesh component"));
		}
	}
}
