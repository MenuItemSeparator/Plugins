// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/FLIBS-01/GlobalFunctionality_FLib.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGlobalFunctionality_FLib() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UGlobalFunctionality_FLib(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UGlobalFunctionality_FLib(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UGlobalFunctionality_FLib Function call_IsClientActor ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGlobalFunctionality_FLib_call_IsClientActor_Statics
struct UHT_STATICS
{
	struct GlobalFunctionality_FLib_eventcall_IsClientActor_Parms
	{
		const AActor* _Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <returns>Is game logics time.</returns>\n" },
#endif
		{ "ModuleRelativePath", "Public/Uck/FLIBS-01/GlobalFunctionality_FLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<returns>Is game logics time.</returns>" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function call_IsClientActor constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlobalFunctionality_FLib_eventcall_IsClientActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function call_IsClientActor constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function call_IsClientActor Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp__Actor = { "_Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalFunctionality_FLib_eventcall_IsClientActor_Parms, _Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Actor_MetaData), NewProp__Actor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GlobalFunctionality_FLib_eventcall_IsClientActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function call_IsClientActor Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGlobalFunctionality_FLib, nullptr, "call_IsClientActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GlobalFunctionality_FLib_eventcall_IsClientActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GlobalFunctionality_FLib_eventcall_IsClientActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGlobalFunctionality_FLib_call_IsClientActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGlobalFunctionality_FLib::execcall_IsClientActor)
{
	P_GET_OBJECT(AActor,Z_Param__Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGlobalFunctionality_FLib::call_IsClientActor(Z_Param__Actor);
	P_NATIVE_END;
}
// ********** End Class UGlobalFunctionality_FLib Function call_IsClientActor **********************

// ********** Begin Class UGlobalFunctionality_FLib Function call_IsGameActor **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UGlobalFunctionality_FLib_call_IsGameActor_Statics
struct UHT_STATICS
{
	struct GlobalFunctionality_FLib_eventcall_IsGameActor_Parms
	{
		const AActor* _Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <returns>Is business logic time</returns>\n" },
#endif
		{ "ModuleRelativePath", "Public/Uck/FLIBS-01/GlobalFunctionality_FLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<returns>Is business logic time</returns>" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function call_IsGameActor constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GlobalFunctionality_FLib_eventcall_IsGameActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function call_IsGameActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function call_IsGameActor Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp__Actor = { "_Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(GlobalFunctionality_FLib_eventcall_IsGameActor_Parms, _Actor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Actor_MetaData), NewProp__Actor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(GlobalFunctionality_FLib_eventcall_IsGameActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function call_IsGameActor Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UGlobalFunctionality_FLib, nullptr, "call_IsGameActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::GlobalFunctionality_FLib_eventcall_IsGameActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::GlobalFunctionality_FLib_eventcall_IsGameActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGlobalFunctionality_FLib_call_IsGameActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UGlobalFunctionality_FLib::execcall_IsGameActor)
{
	P_GET_OBJECT(AActor,Z_Param__Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGlobalFunctionality_FLib::call_IsGameActor(Z_Param__Actor);
	P_NATIVE_END;
}
// ********** End Class UGlobalFunctionality_FLib Function call_IsGameActor ************************

// ********** Begin Class UGlobalFunctionality_FLib ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UGlobalFunctionality_FLib_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/FLIBS-01/GlobalFunctionality_FLib.h" },
		{ "ModuleRelativePath", "Public/Uck/FLIBS-01/GlobalFunctionality_FLib.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGlobalFunctionality_FLib constinit property declarations ****************
// ********** End Class UGlobalFunctionality_FLib constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("call_IsClientActor"), .Pointer = &UGlobalFunctionality_FLib::execcall_IsClientActor },
		{ .NameUTF8 = UTF8TEXT("call_IsGameActor"), .Pointer = &UGlobalFunctionality_FLib::execcall_IsGameActor },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlobalFunctionality_FLib_call_IsClientActor, "call_IsClientActor" }, // 95aff5b93c7cffa6f534fd9c82974f1e88dacd56
		{ &Z_Construct_UFunction_UGlobalFunctionality_FLib_call_IsGameActor, "call_IsGameActor" }, // a2259c962fbfc0bbd739e0a205597f9882365344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalFunctionality_FLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UGlobalFunctionality_FLib,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UGlobalFunctionality_FLib_StaticRegisterNativesUGlobalFunctionality_FLib()
{
	UClass* Class = UGlobalFunctionality_FLib::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGlobalFunctionality_FLib;
UClass* Z_Construct_UClass_UGlobalFunctionality_FLib(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UGlobalFunctionality_FLib;
		if (!Z_Registration_Info_UClass_UGlobalFunctionality_FLib.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("GlobalFunctionality_FLib"),
				Z_Registration_Info_UClass_UGlobalFunctionality_FLib.InnerSingleton,
				UGlobalFunctionality_FLib_StaticRegisterNativesUGlobalFunctionality_FLib,
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
		return Z_Registration_Info_UClass_UGlobalFunctionality_FLib.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UGlobalFunctionality_FLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalFunctionality_FLib.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UGlobalFunctionality_FLib.OuterSingleton;
}
#undef UHT_STATICS
UGlobalFunctionality_FLib::UGlobalFunctionality_FLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGlobalFunctionality_FLib);
UGlobalFunctionality_FLib::~UGlobalFunctionality_FLib() {}
// ********** End Class UGlobalFunctionality_FLib **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalFunctionality_FLib, TEXT("UGlobalFunctionality_FLib"), &Z_Registration_Info_UClass_UGlobalFunctionality_FLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalFunctionality_FLib), 919801112U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h__Script_Uck_8a5352ef0a68c706f73aedb1d567365eff817fec{
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
