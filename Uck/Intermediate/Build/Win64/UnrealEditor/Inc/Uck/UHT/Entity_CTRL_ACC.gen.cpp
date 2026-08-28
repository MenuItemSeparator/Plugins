// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/CTRL/Entity_CTRL_ACC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEntity_CTRL_ACC() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APlayerController(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UFunction* Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UEntityCtrl_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_InternalAnimatronic_(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_InternalEntityCtrl_(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_InternalPossessCtrl_(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UEntityCtrl_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_InternalAnimatronic_(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_InternalEntityCtrl_(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUck_InternalPossessCtrl_(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FCB *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FCB constinit property declarations ***********************************
// ********** End Delegate FCB constinit property declarations *************************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck, nullptr, "CB__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FCB *********************************************************************

// ********** Begin Class UUck_InternalPossessCtrl_ Function fn_SetController **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_InternalPossessCtrl__fn_SetController_Statics
struct UHT_STATICS
{
	struct Uck_InternalPossessCtrl__eventfn_SetController_Parms
	{
		APlayerController* _Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_SetController constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_SetController constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_SetController Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(Uck_InternalPossessCtrl__eventfn_SetController_Parms, _Value), Z_Construct_UClass_APlayerController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_SetController Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_InternalPossessCtrl_, nullptr, "fn_SetController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::Uck_InternalPossessCtrl__eventfn_SetController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::Uck_InternalPossessCtrl__eventfn_SetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUck_InternalPossessCtrl__fn_SetController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_InternalPossessCtrl_::execfn_SetController)
{
	P_GET_OBJECT(APlayerController,Z_Param__Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_SetController(Z_Param__Value);
	P_NATIVE_END;
}
// ********** End Class UUck_InternalPossessCtrl_ Function fn_SetController ************************

// ********** Begin Class UUck_InternalPossessCtrl_ Function RepNotify_OnChangePlayerController ****
static FName NAME_UUck_InternalPossessCtrl__RepNotify_OnChangePlayerController = FName(TEXT("RepNotify_OnChangePlayerController"));
void UUck_InternalPossessCtrl_::RepNotify_OnChangePlayerController()
{
	UFunction* Func = FindFunctionChecked(NAME_UUck_InternalPossessCtrl__RepNotify_OnChangePlayerController);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RepNotify_OnChangePlayerController_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_InternalPossessCtrl__RepNotify_OnChangePlayerController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RepNotify_OnChangePlayerController constinit property declarations ****
// ********** End Function RepNotify_OnChangePlayerController constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_InternalPossessCtrl_, nullptr, "RepNotify_OnChangePlayerController", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UUck_InternalPossessCtrl__RepNotify_OnChangePlayerController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_InternalPossessCtrl_::execRepNotify_OnChangePlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepNotify_OnChangePlayerController_Implementation();
	P_NATIVE_END;
}
// ********** End Class UUck_InternalPossessCtrl_ Function RepNotify_OnChangePlayerController ******

// ********** Begin Class UUck_InternalPossessCtrl_ ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUck_InternalPossessCtrl__Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/CTRL/Entity_CTRL_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Controller_MetaData[] = {
		{ "Category", "Uck_InternalPossessCtrl_" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_PreviousController_MetaData[] = {
		{ "Category", "Uck_InternalPossessCtrl_" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cbClientInit_MetaData[] = {
		{ "Category", "Uck_InternalPossessCtrl_" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cbServerInit_MetaData[] = {
		{ "Category", "Uck_InternalPossessCtrl_" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cbControllerInit_MetaData[] = {
		{ "Category", "Uck_InternalPossessCtrl_" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUck_InternalPossessCtrl_ constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_PreviousController;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_cbClientInit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_cbServerInit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_cbControllerInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUck_InternalPossessCtrl_ constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fn_SetController"), .Pointer = &UUck_InternalPossessCtrl_::execfn_SetController },
		{ .NameUTF8 = UTF8TEXT("RepNotify_OnChangePlayerController"), .Pointer = &UUck_InternalPossessCtrl_::execRepNotify_OnChangePlayerController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUck_InternalPossessCtrl__fn_SetController, "fn_SetController" }, // 7ef80b9acfd52fd14bb7ca7ba0c03d43be42a974
		{ &Z_Construct_UFunction_UUck_InternalPossessCtrl__RepNotify_OnChangePlayerController, "RepNotify_OnChangePlayerController" }, // 5f21f1810ddd2f54a5615c60a8e844296d5e7751
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUck_InternalPossessCtrl_>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UUck_InternalPossessCtrl_ Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_Controller = { "Var_Controller", "RepNotify_OnChangePlayerController", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_InternalPossessCtrl_, Var_Controller), Z_Construct_UClass_APlayerController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Controller_MetaData), NewProp_Var_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_PreviousController = { "Var_PreviousController", "RepNotify_OnChangePlayerController", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_InternalPossessCtrl_, Var_PreviousController), Z_Construct_UClass_APlayerController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_PreviousController_MetaData), NewProp_Var_PreviousController_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_cbClientInit = { "cbClientInit", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_InternalPossessCtrl_, cbClientInit), Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cbClientInit_MetaData), NewProp_cbClientInit_MetaData) }; // 0f7ddce10a27ddd4aca72c74d9e1bf0539806fb9
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_cbServerInit = { "cbServerInit", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_InternalPossessCtrl_, cbServerInit), Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cbServerInit_MetaData), NewProp_cbServerInit_MetaData) }; // 0f7ddce10a27ddd4aca72c74d9e1bf0539806fb9
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_cbControllerInit = { "cbControllerInit", nullptr, (EPropertyFlags)0x0010000010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UUck_InternalPossessCtrl_, cbControllerInit), Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cbControllerInit_MetaData), NewProp_cbControllerInit_MetaData) }; // 0f7ddce10a27ddd4aca72c74d9e1bf0539806fb9
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_PreviousController,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_cbClientInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_cbServerInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_cbControllerInit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UUck_InternalPossessCtrl_ Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUck_InternalPossessCtrl_,
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
static void UUck_InternalPossessCtrl__StaticRegisterNativesUUck_InternalPossessCtrl_()
{
	UClass* Class = UUck_InternalPossessCtrl_::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUck_InternalPossessCtrl_;
UClass* Z_Construct_UClass_UUck_InternalPossessCtrl_(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUck_InternalPossessCtrl_;
		if (!Z_Registration_Info_UClass_UUck_InternalPossessCtrl_.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Uck_InternalPossessCtrl_"),
				Z_Registration_Info_UClass_UUck_InternalPossessCtrl_.InnerSingleton,
				UUck_InternalPossessCtrl__StaticRegisterNativesUUck_InternalPossessCtrl_,
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
		return Z_Registration_Info_UClass_UUck_InternalPossessCtrl_.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUck_InternalPossessCtrl_.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUck_InternalPossessCtrl_.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUck_InternalPossessCtrl_.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UUck_InternalPossessCtrl_::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Var_Controller(TEXT("Var_Controller"));
	static FName Name_Var_PreviousController(TEXT("Var_PreviousController"));
	const bool bIsValid = true
		&& Name_Var_Controller == ClassReps[(int32)ENetFields_Private::Var_Controller].Property->GetFName()
		&& Name_Var_PreviousController == ClassReps[(int32)ENetFields_Private::Var_PreviousController].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUck_InternalPossessCtrl_"));
}
#endif
#undef UHT_STATICS
UUck_InternalPossessCtrl_::UUck_InternalPossessCtrl_(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUck_InternalPossessCtrl_);
UUck_InternalPossessCtrl_::~UUck_InternalPossessCtrl_() {}
// ********** End Class UUck_InternalPossessCtrl_ **************************************************

// ********** Begin Class UUck_InternalEntityCtrl_ Function fn_PlayerTick **************************
static FName NAME_UUck_InternalEntityCtrl__fn_PlayerTick = FName(TEXT("fn_PlayerTick"));
void UUck_InternalEntityCtrl_::fn_PlayerTick()
{
	UFunction* Func = FindFunctionChecked(NAME_UUck_InternalEntityCtrl__fn_PlayerTick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		fn_PlayerTick_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_InternalEntityCtrl__fn_PlayerTick_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_PlayerTick constinit property declarations *************************
// ********** End Function fn_PlayerTick constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_InternalEntityCtrl_, nullptr, "fn_PlayerTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UUck_InternalEntityCtrl__fn_PlayerTick(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_InternalEntityCtrl_::execfn_PlayerTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_PlayerTick_Implementation();
	P_NATIVE_END;
}
// ********** End Class UUck_InternalEntityCtrl_ Function fn_PlayerTick ****************************

// ********** Begin Class UUck_InternalEntityCtrl_ Function fn_ServerTick **************************
static FName NAME_UUck_InternalEntityCtrl__fn_ServerTick = FName(TEXT("fn_ServerTick"));
void UUck_InternalEntityCtrl_::fn_ServerTick()
{
	UFunction* Func = FindFunctionChecked(NAME_UUck_InternalEntityCtrl__fn_ServerTick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		fn_ServerTick_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUck_InternalEntityCtrl__fn_ServerTick_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_ServerTick constinit property declarations *************************
// ********** End Function fn_ServerTick constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUck_InternalEntityCtrl_, nullptr, "fn_ServerTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UUck_InternalEntityCtrl__fn_ServerTick(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUck_InternalEntityCtrl_::execfn_ServerTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_ServerTick_Implementation();
	P_NATIVE_END;
}
// ********** End Class UUck_InternalEntityCtrl_ Function fn_ServerTick ****************************

// ********** Begin Class UUck_InternalEntityCtrl_ *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUck_InternalEntityCtrl__Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/CTRL/Entity_CTRL_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUck_InternalEntityCtrl_ constinit property declarations *****************
// ********** End Class UUck_InternalEntityCtrl_ constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fn_PlayerTick"), .Pointer = &UUck_InternalEntityCtrl_::execfn_PlayerTick },
		{ .NameUTF8 = UTF8TEXT("fn_ServerTick"), .Pointer = &UUck_InternalEntityCtrl_::execfn_ServerTick },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUck_InternalEntityCtrl__fn_PlayerTick, "fn_PlayerTick" }, // d75f3161eece2f1a65e5b558e3ef92e6bebe7f3e
		{ &Z_Construct_UFunction_UUck_InternalEntityCtrl__fn_ServerTick, "fn_ServerTick" }, // 357c4662ce40327d81528ef19fc5a892bb599c19
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUck_InternalEntityCtrl_>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUck_InternalPossessCtrl_,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUck_InternalEntityCtrl_,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UUck_InternalEntityCtrl__StaticRegisterNativesUUck_InternalEntityCtrl_()
{
	UClass* Class = UUck_InternalEntityCtrl_::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUck_InternalEntityCtrl_;
UClass* Z_Construct_UClass_UUck_InternalEntityCtrl_(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUck_InternalEntityCtrl_;
		if (!Z_Registration_Info_UClass_UUck_InternalEntityCtrl_.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Uck_InternalEntityCtrl_"),
				Z_Registration_Info_UClass_UUck_InternalEntityCtrl_.InnerSingleton,
				UUck_InternalEntityCtrl__StaticRegisterNativesUUck_InternalEntityCtrl_,
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
		return Z_Registration_Info_UClass_UUck_InternalEntityCtrl_.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUck_InternalEntityCtrl_.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUck_InternalEntityCtrl_.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUck_InternalEntityCtrl_.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUck_InternalEntityCtrl_);
UUck_InternalEntityCtrl_::~UUck_InternalEntityCtrl_() {}
// ********** End Class UUck_InternalEntityCtrl_ ***************************************************

// ********** Begin Class UUck_InternalAnimatronic_ ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUck_InternalAnimatronic__Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/CTRL/Entity_CTRL_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUck_InternalAnimatronic_ constinit property declarations ****************
// ********** End Class UUck_InternalAnimatronic_ constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUck_InternalAnimatronic_>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUck_InternalPossessCtrl_,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUck_InternalAnimatronic_,
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
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UUck_InternalAnimatronic_;
UClass* Z_Construct_UClass_UUck_InternalAnimatronic_(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUck_InternalAnimatronic_;
		if (!Z_Registration_Info_UClass_UUck_InternalAnimatronic_.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Uck_InternalAnimatronic_"),
				Z_Registration_Info_UClass_UUck_InternalAnimatronic_.InnerSingleton,
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
		return Z_Registration_Info_UClass_UUck_InternalAnimatronic_.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUck_InternalAnimatronic_.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUck_InternalAnimatronic_.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUck_InternalAnimatronic_.OuterSingleton;
}
#undef UHT_STATICS
UUck_InternalAnimatronic_::UUck_InternalAnimatronic_(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUck_InternalAnimatronic_);
UUck_InternalAnimatronic_::~UUck_InternalAnimatronic_() {}
// ********** End Class UUck_InternalAnimatronic_ **************************************************

// ********** Begin Class UEntityCtrl_ACC **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEntityCtrl_ACC_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Uck/CTRL/Entity_CTRL_ACC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Uck/CTRL/Entity_CTRL_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEntityCtrl_ACC constinit property declarations **************************
// ********** End Class UEntityCtrl_ACC constinit property declarations ****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityCtrl_ACC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUck_InternalAnimatronic_,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEntityCtrl_ACC,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UEntityCtrl_ACC;
UClass* Z_Construct_UClass_UEntityCtrl_ACC(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEntityCtrl_ACC;
		if (!Z_Registration_Info_UClass_UEntityCtrl_ACC.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EntityCtrl_ACC"),
				Z_Registration_Info_UClass_UEntityCtrl_ACC.InnerSingleton,
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
		return Z_Registration_Info_UClass_UEntityCtrl_ACC.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEntityCtrl_ACC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityCtrl_ACC.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityCtrl_ACC.OuterSingleton;
}
#undef UHT_STATICS
UEntityCtrl_ACC::UEntityCtrl_ACC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEntityCtrl_ACC);
UEntityCtrl_ACC::~UEntityCtrl_ACC() {}
// ********** End Class UEntityCtrl_ACC ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUck_InternalPossessCtrl_, TEXT("UUck_InternalPossessCtrl_"), &Z_Registration_Info_UClass_UUck_InternalPossessCtrl_, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUck_InternalPossessCtrl_), 1194568003U) },
		{ Z_Construct_UClass_UUck_InternalEntityCtrl_, TEXT("UUck_InternalEntityCtrl_"), &Z_Registration_Info_UClass_UUck_InternalEntityCtrl_, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUck_InternalEntityCtrl_), 3425229584U) },
		{ Z_Construct_UClass_UUck_InternalAnimatronic_, TEXT("UUck_InternalAnimatronic_"), &Z_Registration_Info_UClass_UUck_InternalAnimatronic_, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUck_InternalAnimatronic_), 3476774832U) },
		{ Z_Construct_UClass_UEntityCtrl_ACC, TEXT("UEntityCtrl_ACC"), &Z_Registration_Info_UClass_UEntityCtrl_ACC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityCtrl_ACC), 2075824575U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h__Script_Uck_94ad072ed4bd76b248853352260d8ef3836df440{
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
