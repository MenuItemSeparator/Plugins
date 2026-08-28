// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/UckVehicleController_ACC.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeUckVehicleController_ACC() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_U1_VehicleController_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_U1_VehicleController_ACC_Fin(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_U1_VehicleController_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_U1_VehicleController_ACC_Fin(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class U1_VehicleController_ACC Function fn_Init ********************************
static FName NAME_U1_VehicleController_ACC_fn_Init = FName(TEXT("fn_Init"));
void U1_VehicleController_ACC::fn_Init()
{
	UFunction* Func = FindFunctionChecked(NAME_U1_VehicleController_ACC_fn_Init);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		fn_Init_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_U1_VehicleController_ACC_fn_Init_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/UckVehicleController_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_Init constinit property declarations *******************************
// ********** End Function fn_Init constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_U1_VehicleController_ACC, nullptr, "fn_Init", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_U1_VehicleController_ACC_fn_Init(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(U1_VehicleController_ACC::execfn_Init)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_Init_Implementation();
	P_NATIVE_END;
}
// ********** End Class U1_VehicleController_ACC Function fn_Init **********************************

// ********** Begin Class U1_VehicleController_ACC *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_U1_VehicleController_ACC_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Uck/UckVehicleController_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/UckVehicleController_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class U1_VehicleController_ACC constinit property declarations *****************
// ********** End Class U1_VehicleController_ACC constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fn_Init"), .Pointer = &U1_VehicleController_ACC::execfn_Init },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_U1_VehicleController_ACC_fn_Init, "fn_Init" }, // fc55cbcba2c27f0ef012900d21688890a6cf9066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<U1_VehicleController_ACC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_U1_VehicleController_ACC,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void U1_VehicleController_ACC_StaticRegisterNativesU1_VehicleController_ACC()
{
	UClass* Class = U1_VehicleController_ACC::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_U1_VehicleController_ACC;
UClass* Z_Construct_UClass_U1_VehicleController_ACC(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = U1_VehicleController_ACC;
		if (!Z_Registration_Info_UClass_U1_VehicleController_ACC.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("1_VehicleController_ACC"),
				Z_Registration_Info_UClass_U1_VehicleController_ACC.InnerSingleton,
				U1_VehicleController_ACC_StaticRegisterNativesU1_VehicleController_ACC,
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
		return Z_Registration_Info_UClass_U1_VehicleController_ACC.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_U1_VehicleController_ACC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_U1_VehicleController_ACC.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_U1_VehicleController_ACC.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, U1_VehicleController_ACC);
U1_VehicleController_ACC::~U1_VehicleController_ACC() {}
// ********** End Class U1_VehicleController_ACC ***************************************************

// ********** Begin Class U1_VehicleController_ACC_Fin *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_U1_VehicleController_ACC_Fin_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Uck/UckVehicleController_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/UckVehicleController_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class U1_VehicleController_ACC_Fin constinit property declarations *************
// ********** End Class U1_VehicleController_ACC_Fin constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<U1_VehicleController_ACC_Fin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_U1_VehicleController_ACC,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_U1_VehicleController_ACC_Fin,
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
FClassRegistrationInfo Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin;
UClass* Z_Construct_UClass_U1_VehicleController_ACC_Fin(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = U1_VehicleController_ACC_Fin;
		if (!Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("1_VehicleController_ACC_Fin"),
				Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin.InnerSingleton,
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
		return Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin.OuterSingleton;
}
#undef UHT_STATICS
U1_VehicleController_ACC_Fin::U1_VehicleController_ACC_Fin() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, U1_VehicleController_ACC_Fin);
U1_VehicleController_ACC_Fin::~U1_VehicleController_ACC_Fin() {}
// ********** End Class U1_VehicleController_ACC_Fin ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_UckVehicleController_ACC_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_U1_VehicleController_ACC, TEXT("U1_VehicleController_ACC"), &Z_Registration_Info_UClass_U1_VehicleController_ACC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(U1_VehicleController_ACC), 4262595721U) },
		{ Z_Construct_UClass_U1_VehicleController_ACC_Fin, TEXT("U1_VehicleController_ACC_Fin"), &Z_Registration_Info_UClass_U1_VehicleController_ACC_Fin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(U1_VehicleController_ACC_Fin), 3624323628U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_UckVehicleController_ACC_h__Script_Uck_6521ad402349c0420005e82cd8689d0c53a304d8{
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
