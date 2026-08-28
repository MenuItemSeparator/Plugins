// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/UckWidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeUckWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUckWidgetBase(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUckWidget_Final(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUckWidgetBase(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UUckWidget_Final(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UUckWidgetBase Function fn_WidgetActivate ********************************
struct UckWidgetBase_eventfn_WidgetActivate_Parms
{
	bool _Value;
};
static FName NAME_UUckWidgetBase_fn_WidgetActivate = FName(TEXT("fn_WidgetActivate"));
void UUckWidgetBase::fn_WidgetActivate(bool _Value)
{
	UFunction* Func = FindFunctionChecked(NAME_UUckWidgetBase_fn_WidgetActivate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UckWidgetBase_eventfn_WidgetActivate_Parms Parms;
		Parms._Value=_Value ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		fn_WidgetActivate_Implementation(_Value);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UUckWidgetBase_fn_WidgetActivate_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/UckWidgetBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_WidgetActivate constinit property declarations *********************
	static void NewProp__Value_SetBit(void* Obj)
	{
		((UckWidgetBase_eventfn_WidgetActivate_Parms*)Obj)->_Value = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_WidgetActivate constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_WidgetActivate Property Definitions ********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UckWidgetBase_eventfn_WidgetActivate_Parms), &UHT_STATICS::NewProp__Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_WidgetActivate Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UUckWidgetBase, nullptr, "fn_WidgetActivate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UckWidgetBase_eventfn_WidgetActivate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UckWidgetBase_eventfn_WidgetActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUckWidgetBase_fn_WidgetActivate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UUckWidgetBase::execfn_WidgetActivate)
{
	P_GET_UBOOL(Z_Param__Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_WidgetActivate_Implementation(Z_Param__Value);
	P_NATIVE_END;
}
// ********** End Class UUckWidgetBase Function fn_WidgetActivate **********************************

// ********** Begin Class UUckWidgetBase ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUckWidgetBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/UckWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Uck/UckWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_IsActiveNow_MetaData[] = {
		{ "Category", "UckWidgetBase" },
		{ "ModuleRelativePath", "Public/Uck/UckWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_EnableAutoCollapse_MetaData[] = {
		{ "Category", "UckWidgetBase" },
		{ "ModuleRelativePath", "Public/Uck/UckWidgetBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUckWidgetBase constinit property declarations ***************************
	static void NewProp_Var_IsActiveNow_SetBit(void* Obj)
	{
		((UUckWidgetBase*)Obj)->Var_IsActiveNow = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Var_IsActiveNow;
	static void NewProp_Var_EnableAutoCollapse_SetBit(void* Obj)
	{
		((UUckWidgetBase*)Obj)->Var_EnableAutoCollapse = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Var_EnableAutoCollapse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUckWidgetBase constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fn_WidgetActivate"), .Pointer = &UUckWidgetBase::execfn_WidgetActivate },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUckWidgetBase_fn_WidgetActivate, "fn_WidgetActivate" }, // 3a60ce8c8ae84631bb03573365eccb8185c5e63c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUckWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UUckWidgetBase Property Definitions **************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Var_IsActiveNow = { "Var_IsActiveNow", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UUckWidgetBase), &UHT_STATICS::NewProp_Var_IsActiveNow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_IsActiveNow_MetaData), NewProp_Var_IsActiveNow_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Var_EnableAutoCollapse = { "Var_EnableAutoCollapse", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UUckWidgetBase), &UHT_STATICS::NewProp_Var_EnableAutoCollapse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_EnableAutoCollapse_MetaData), NewProp_Var_EnableAutoCollapse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_IsActiveNow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_EnableAutoCollapse,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UUckWidgetBase Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUckWidgetBase,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UUckWidgetBase_StaticRegisterNativesUUckWidgetBase()
{
	UClass* Class = UUckWidgetBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUckWidgetBase;
UClass* Z_Construct_UClass_UUckWidgetBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUckWidgetBase;
		if (!Z_Registration_Info_UClass_UUckWidgetBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("UckWidgetBase"),
				Z_Registration_Info_UClass_UUckWidgetBase.InnerSingleton,
				UUckWidgetBase_StaticRegisterNativesUUckWidgetBase,
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
		return Z_Registration_Info_UClass_UUckWidgetBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUckWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUckWidgetBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUckWidgetBase.OuterSingleton;
}
#undef UHT_STATICS
UUckWidgetBase::UUckWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUckWidgetBase);
UUckWidgetBase::~UUckWidgetBase() {}
// ********** End Class UUckWidgetBase *************************************************************

// ********** Begin Class UUckWidget_Final *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUckWidget_Final_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/UckWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Uck/UckWidgetBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUckWidget_Final constinit property declarations *************************
// ********** End Class UUckWidget_Final constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUckWidget_Final>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUckWidgetBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUckWidget_Final,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UUckWidget_Final;
UClass* Z_Construct_UClass_UUckWidget_Final(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUckWidget_Final;
		if (!Z_Registration_Info_UClass_UUckWidget_Final.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("UckWidget_Final"),
				Z_Registration_Info_UClass_UUckWidget_Final.InnerSingleton,
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
		return Z_Registration_Info_UClass_UUckWidget_Final.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUckWidget_Final.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUckWidget_Final.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUckWidget_Final.OuterSingleton;
}
#undef UHT_STATICS
UUckWidget_Final::UUckWidget_Final(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUckWidget_Final);
UUckWidget_Final::~UUckWidget_Final() {}
// ********** End Class UUckWidget_Final ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_UckWidgetBase_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUckWidgetBase, TEXT("UUckWidgetBase"), &Z_Registration_Info_UClass_UUckWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUckWidgetBase), 4217890581U) },
		{ Z_Construct_UClass_UUckWidget_Final, TEXT("UUckWidget_Final"), &Z_Registration_Info_UClass_UUckWidget_Final, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUckWidget_Final), 2236019667U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_UckWidgetBase_h__Script_Uck_6437925c484bf0c076152af1a8b8fb8bd261fb7a{
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
