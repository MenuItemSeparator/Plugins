#include "Uck/NUV/ReconstraintBase.h"
#include "Logging/MessageLog.h"

DECLARE_LOG_CATEGORY_EXTERN(LogEX, Log, All);
DEFINE_LOG_CATEGORY(LogEX);

UConstraintNUV::UConstraintNUV(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    fn_ApplyProperties();
}

void UConstraintNUV::fn_ReinitConstraint()
{
    USceneComponent* child = nullptr;
    USceneComponent* parent = nullptr;

    TArray<USceneComponent*> parents;
    GetParentComponents(parents);
    if (parents.Num())
    {
        parent = parents[0];
        if (IsValid(parent))
        {
            const TArray<TObjectPtr<USceneComponent>>& AttachedChildren = GetAttachChildren();
            for (USceneComponent* candidos : AttachedChildren)
            {
                if (candidos->GetClass()->IsChildOf(UStaticMeshComponent::StaticClass()))
                {
                    child = Cast<UPrimitiveComponent>(candidos);
                }
            }
                
            if (IsValid(child))
            {
                {
                    UPrimitiveComponent* C1 = Cast<UPrimitiveComponent>(parent);
                    UPrimitiveComponent* C2 = Cast<UPrimitiveComponent>(child);
                    if (C1 && C2)
                    {
                        SetConstrainedComponents(C1, FName(), C2, FName());
                    }
                }
            }
            
        }
    }
}

void UConstraintNUV::PostInitProperties()
{
    Super::PostInitProperties();
    
}

void UConstraintNUV::BeginPlay()
{
    Super::BeginPlay();
    fn_ReinitConstraint();
    fn_ApplyProperties();
}

void UConstraintNUV::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    987
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    FVector parentOrientation = GetOwner()->GetActorRotation().Vector() * Var_SusVel;
    SetLinearPositionTarget(FVector(parentOrientation.X, parentOrientation.Y, parentOrientation.Z));
    UE_LOG(LogEX, Warning, TEXT("Updated"));
}

void UReConstraint::fn_ApplyProperties()
{
    ConstraintInstance.SetLinearLimits(ELinearConstraintMotion::LCM_Locked, ELinearConstraintMotion::LCM_Locked, ELinearConstraintMotion::LCM_Limited, Var_SusLen);
    SetLinearPositionDrive(true, true, true);
    SetLinearPositionTarget(FVector(0, 0, Var_SusVel));
    SetLinearDriveParams(Var_SusPow, 0.f, 0.f);
    
    
    ConstraintInstance.SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Locked, 0.f);
    ConstraintInstance.SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Free, 0.f);
    ConstraintInstance.SetAngularTwistLimit(EAngularConstraintMotion::ACM_Locked, 0.f);
    ConstraintInstance.SetAngularDriveMode(EAngularDriveMode::SLERP);

    ConstraintInstance.UpdateLinearLimit();
    ConstraintInstance.UpdateAngularLimit();
}
