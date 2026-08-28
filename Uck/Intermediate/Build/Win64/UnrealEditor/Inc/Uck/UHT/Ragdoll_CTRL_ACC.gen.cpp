// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/CTRL/Ragdoll_CTRL_ACC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRagdoll_CTRL_ACC() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPhysicalAnimationComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UCTRL_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_URagdoll_CTRL_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_Ragdoll_CTRL(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UEntityCtrl_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_URagdoll_CTRL_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_Ragdoll_CTRL(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UUck_Ragdoll_CTRL Function fn_Ragdoll ************************************
struct Uck_Ragdoll_CTRL_eventfn_Ragdoll_Parms
{
	bool _Value;
};
static FName NAME_UUck_Ragdoll_CTRL_fn_Ragdoll = FName(TEXT("fn_Ragdoll"));
void UUck_Ragdoll_CTRL::fn_Ragdoll(bool _Value)
{
	UFunction* Func = FindFunctionChecked(NAME_UUck_Ragdoll_CTRL_fn_Ragdoll);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Uck_Ragdoll_CTRL_eventfn_Ragdoll_Parms Parms;
		Parms._Value=_Value ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		fn_Ragdoll_Implementation(_Value);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_Ragdoll_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_Ragdoll constinit property declarations ****************************
	static void NewProp__Value_SetBit(void* Obj)
	{
		((Uck_Ragdoll_CTRL_eventfn_Ragdoll_Parms*)Obj)->_Value = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_Ragdoll constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_Ragdoll Property Definitions ***************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(Uck_Ragdoll_CTRL_eventfn_Ragdoll_Parms), &UHT_STATICS::NewProp__Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_Ragdoll Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_Ragdoll_CTRL, nullptr, "fn_Ragdoll", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<Uck_Ragdoll_CTRL_eventfn_Ragdoll_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(Uck_Ragdoll_CTRL_eventfn_Ragdoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_Ragdoll(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_Ragdoll_CTRL::execfn_Ragdoll)
{
	P_GET_UBOOL(Z_Param__Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_Ragdoll_Implementation(Z_Param__Value);
	P_NATIVE_END;
}
// ********** End Class UUck_Ragdoll_CTRL Function fn_Ragdoll **************************************

// ********** Begin Class UUck_Ragdoll_CTRL Function fn_SetTargetBlendWeight ***********************
struct Uck_Ragdoll_CTRL_eventfn_SetTargetBlendWeight_Parms
{
	float _Weight;
};
static FName NAME_UUck_Ragdoll_CTRL_fn_SetTargetBlendWeight = FName(TEXT("fn_SetTargetBlendWeight"));
void UUck_Ragdoll_CTRL::fn_SetTargetBlendWeight(float _Weight)
{
	UFunction* Func = FindFunctionChecked(NAME_UUck_Ragdoll_CTRL_fn_SetTargetBlendWeight);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Uck_Ragdoll_CTRL_eventfn_SetTargetBlendWeight_Parms Parms;
		Parms._Weight=_Weight;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		fn_SetTargetBlendWeight_Implementation(_Weight);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_SetTargetBlendWeight_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_SetTargetBlendWeight constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp__Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_SetTargetBlendWeight constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_SetTargetBlendWeight Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp__Weight = { "_Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(Uck_Ragdoll_CTRL_eventfn_SetTargetBlendWeight_Parms, _Weight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Weight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_SetTargetBlendWeight Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_Ragdoll_CTRL, nullptr, "fn_SetTargetBlendWeight", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<Uck_Ragdoll_CTRL_eventfn_SetTargetBlendWeight_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(Uck_Ragdoll_CTRL_eventfn_SetTargetBlendWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_SetTargetBlendWeight(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_Ragdoll_CTRL::execfn_SetTargetBlendWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__Weight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_SetTargetBlendWeight_Implementation(Z_Param__Weight);
	P_NATIVE_END;
}
// ********** End Class UUck_Ragdoll_CTRL Function fn_SetTargetBlendWeight *************************

// ********** Begin Class UUck_Ragdoll_CTRL Function fn_TryGetHost *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_TryGetHost_Statics
struct UHT_STATICS
{
	struct Uck_Ragdoll_CTRL_eventfn_TryGetHost_Parms
	{
		UEntityCtrl_ACC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_TryGetHost constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_TryGetHost constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_TryGetHost Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Uck_Ragdoll_CTRL_eventfn_TryGetHost_Parms, ReturnValue), Z_Construct_UClass_UEntityCtrl_ACC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_TryGetHost Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_Ragdoll_CTRL, nullptr, "fn_TryGetHost", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Uck_Ragdoll_CTRL_eventfn_TryGetHost_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Uck_Ragdoll_CTRL_eventfn_TryGetHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_TryGetHost(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_Ragdoll_CTRL::execfn_TryGetHost)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEntityCtrl_ACC**)Z_Param__Result=P_THIS->fn_TryGetHost();
	P_NATIVE_END;
}
// ********** End Class UUck_Ragdoll_CTRL Function fn_TryGetHost ***********************************

// ********** Begin Class UUck_Ragdoll_CTRL Function OnControllerInit ******************************
static FName NAME_UUck_Ragdoll_CTRL_OnControllerInit = FName(TEXT("OnControllerInit"));
void UUck_Ragdoll_CTRL::OnControllerInit()
{
	UFunction* Func = FindFunctionChecked(NAME_UUck_Ragdoll_CTRL_OnControllerInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnControllerInit_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_Ragdoll_CTRL_OnControllerInit_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnControllerInit constinit property declarations **********************
// ********** End Function OnControllerInit constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_Ragdoll_CTRL, nullptr, "OnControllerInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UUck_Ragdoll_CTRL_OnControllerInit(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_Ragdoll_CTRL::execOnControllerInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnControllerInit_Implementation();
	P_NATIVE_END;
}
// ********** End Class UUck_Ragdoll_CTRL Function OnControllerInit ********************************

// ********** Begin Class UUck_Ragdoll_CTRL ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUck_Ragdoll_CTRL_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/CTRL/Ragdoll_CTRL_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Target_MetaData[] = {
		{ "Category", "Uck_Ragdoll_CTRL" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_PhysAnimComp_MetaData[] = {
		{ "Category", "Uck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_CollisionProfileName_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_PrimaryMeshTagName_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_SimBoneName_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_IncludeBone_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_OveridedPhysicalAsset_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_PhysicsBlendWeight_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Host_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUck_Ragdoll_CTRL constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_PhysAnimComp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Var_CollisionProfileName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Var_PrimaryMeshTagName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Var_SimBoneName;
	static void NewProp_Var_IncludeBone_SetBit(void* Obj)
	{
		((UUck_Ragdoll_CTRL*)Obj)->Var_IncludeBone = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Var_IncludeBone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_OveridedPhysicalAsset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Var_PhysicsBlendWeight;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Var_Host;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUck_Ragdoll_CTRL constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fn_Ragdoll"), .Pointer = &UUck_Ragdoll_CTRL::execfn_Ragdoll },
		{ .NameUTF8 = UTF8TEXT("fn_SetTargetBlendWeight"), .Pointer = &UUck_Ragdoll_CTRL::execfn_SetTargetBlendWeight },
		{ .NameUTF8 = UTF8TEXT("fn_TryGetHost"), .Pointer = &UUck_Ragdoll_CTRL::execfn_TryGetHost },
		{ .NameUTF8 = UTF8TEXT("OnControllerInit"), .Pointer = &UUck_Ragdoll_CTRL::execOnControllerInit },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_Ragdoll, "fn_Ragdoll" }, // 803d8142882fe248141141f4cb81e79112d65537
		{ &Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_SetTargetBlendWeight, "fn_SetTargetBlendWeight" }, // ce7107588574cda54ead009bd31cf9fb47596085
		{ &Z_Construct_UFunction_UUck_Ragdoll_CTRL_fn_TryGetHost, "fn_TryGetHost" }, // 2468a1f065b5d11b5c8930b3bc8958e6a234ef31
		{ &Z_Construct_UFunction_UUck_Ragdoll_CTRL_OnControllerInit, "OnControllerInit" }, // a0b6dac8dcd1166d44d0ad42b06d7d29c3753f88
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUck_Ragdoll_CTRL>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UUck_Ragdoll_CTRL Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_Target = { "Var_Target", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_Target), Z_Construct_UClass_USkeletalMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Target_MetaData), NewProp_Var_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_PhysAnimComp = { "Var_PhysAnimComp", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_PhysAnimComp), Z_Construct_UClass_UPhysicalAnimationComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_PhysAnimComp_MetaData), NewProp_Var_PhysAnimComp_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Var_CollisionProfileName = { "Var_CollisionProfileName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_CollisionProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_CollisionProfileName_MetaData), NewProp_Var_CollisionProfileName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Var_PrimaryMeshTagName = { "Var_PrimaryMeshTagName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_PrimaryMeshTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_PrimaryMeshTagName_MetaData), NewProp_Var_PrimaryMeshTagName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Var_SimBoneName = { "Var_SimBoneName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_SimBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_SimBoneName_MetaData), NewProp_Var_SimBoneName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Var_IncludeBone = { "Var_IncludeBone", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UUck_Ragdoll_CTRL), &UHT_STATICS::NewProp_Var_IncludeBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_IncludeBone_MetaData), NewProp_Var_IncludeBone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_OveridedPhysicalAsset = { "Var_OveridedPhysicalAsset", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_OveridedPhysicalAsset), Z_Construct_UClass_UPhysicsAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_OveridedPhysicalAsset_MetaData), NewProp_Var_OveridedPhysicalAsset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Var_PhysicsBlendWeight = { "Var_PhysicsBlendWeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_PhysicsBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_PhysicsBlendWeight_MetaData), NewProp_Var_PhysicsBlendWeight_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_Var_Host = { "Var_Host", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_Ragdoll_CTRL, Var_Host), Z_Construct_UClass_UEntityCtrl_ACC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Host_MetaData), NewProp_Var_Host_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_PhysAnimComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_CollisionProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_PrimaryMeshTagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_SimBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_IncludeBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_OveridedPhysicalAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_PhysicsBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Host,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UUck_Ragdoll_CTRL Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UCTRL_ACC,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUck_Ragdoll_CTRL,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UUck_Ragdoll_CTRL_StaticRegisterNativesUUck_Ragdoll_CTRL()
{
	UClass* Class = UUck_Ragdoll_CTRL::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUck_Ragdoll_CTRL;
UClass* Z_Construct_UClass_UUck_Ragdoll_CTRL(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUck_Ragdoll_CTRL;
		if (!Z_Registration_Info_UClass_UUck_Ragdoll_CTRL.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Uck_Ragdoll_CTRL"),
				Z_Registration_Info_UClass_UUck_Ragdoll_CTRL.InnerSingleton,
				UUck_Ragdoll_CTRL_StaticRegisterNativesUUck_Ragdoll_CTRL,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UUck_Ragdoll_CTRL.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUck_Ragdoll_CTRL.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUck_Ragdoll_CTRL.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUck_Ragdoll_CTRL.OuterSingleton;
}
#undef UHT_STATICS
UUck_Ragdoll_CTRL::UUck_Ragdoll_CTRL() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUck_Ragdoll_CTRL);
UUck_Ragdoll_CTRL::~UUck_Ragdoll_CTRL() {}
// ********** End Class UUck_Ragdoll_CTRL **********************************************************

// ********** Begin Class URagdoll_CTRL_ACC ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URagdoll_CTRL_ACC_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Uck/CTRL/Ragdoll_CTRL_ACC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Ragdoll_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URagdoll_CTRL_ACC constinit property declarations ************************
// ********** End Class URagdoll_CTRL_ACC constinit property declarations **************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URagdoll_CTRL_ACC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUck_Ragdoll_CTRL,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URagdoll_CTRL_ACC,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URagdoll_CTRL_ACC;
UClass* Z_Construct_UClass_URagdoll_CTRL_ACC(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URagdoll_CTRL_ACC;
		if (!Z_Registration_Info_UClass_URagdoll_CTRL_ACC.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Ragdoll_CTRL_ACC"),
				Z_Registration_Info_UClass_URagdoll_CTRL_ACC.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_URagdoll_CTRL_ACC.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URagdoll_CTRL_ACC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URagdoll_CTRL_ACC.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URagdoll_CTRL_ACC.OuterSingleton;
}
#undef UHT_STATICS
URagdoll_CTRL_ACC::URagdoll_CTRL_ACC() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URagdoll_CTRL_ACC);
URagdoll_CTRL_ACC::~URagdoll_CTRL_ACC() {}
// ********** End Class URagdoll_CTRL_ACC **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Ragdoll_CTRL_ACC_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUck_Ragdoll_CTRL, TEXT("UUck_Ragdoll_CTRL"), &Z_Registration_Info_UClass_UUck_Ragdoll_CTRL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUck_Ragdoll_CTRL), 1681394380U) },
		{ Z_Construct_UClass_URagdoll_CTRL_ACC, TEXT("URagdoll_CTRL_ACC"), &Z_Registration_Info_UClass_URagdoll_CTRL_ACC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URagdoll_CTRL_ACC), 3558786495U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Ragdoll_CTRL_ACC_h__Script_Uck_970712ff0a461b7430e2190671e4595ad1e6f6f9{
	TEXT("/Script/Uck"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
