// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/NGLog/NGLog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeNGLog() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UNGLog(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UNGLog_FLib(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UNGLog(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UNGLog_FLib(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UNGLog Function call_Log *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UNGLog_call_Log_Statics
struct UHT_STATICS
{
	struct NGLog_eventcall_Log_Parms
	{
		FString _Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/NGLog/NGLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function call_Log constinit property declarations ******************************
	static const UECodeGen_Private::FStrPropertyParams NewProp__Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function call_Log constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function call_Log Property Definitions *****************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(NGLog_eventcall_Log_Parms, _Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Value_MetaData), NewProp__Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function call_Log Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UNGLog, nullptr, "call_Log", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::NGLog_eventcall_Log_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::NGLog_eventcall_Log_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNGLog_call_Log(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UNGLog::execcall_Log)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNGLog::call_Log(Z_Param__Value);
	P_NATIVE_END;
}
// ********** End Class UNGLog Function call_Log ***************************************************

// ********** Begin Class UNGLog Function call_RegisterCritical ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UNGLog_call_RegisterCritical_Statics
struct UHT_STATICS
{
	struct NGLog_eventcall_RegisterCritical_Parms
	{
		bool _Window;
		bool _Log;
		FString _Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/NGLog/NGLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function call_RegisterCritical constinit property declarations *****************
	static void NewProp__Window_SetBit(void* Obj)
	{
		((NGLog_eventcall_RegisterCritical_Parms*)Obj)->_Window = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Window;
	static void NewProp__Log_SetBit(void* Obj)
	{
		((NGLog_eventcall_RegisterCritical_Parms*)Obj)->_Log = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Log;
	static const UECodeGen_Private::FStrPropertyParams NewProp__Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function call_RegisterCritical constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function call_RegisterCritical Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp__Window = { "_Window", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(NGLog_eventcall_RegisterCritical_Parms), &UHT_STATICS::NewProp__Window_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp__Log = { "_Log", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(NGLog_eventcall_RegisterCritical_Parms), &UHT_STATICS::NewProp__Log_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp__Message = { "_Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(NGLog_eventcall_RegisterCritical_Parms, _Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Message_MetaData), NewProp__Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Window,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Log,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Message,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function call_RegisterCritical Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UNGLog, nullptr, "call_RegisterCritical", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::NGLog_eventcall_RegisterCritical_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::NGLog_eventcall_RegisterCritical_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNGLog_call_RegisterCritical(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UNGLog::execcall_RegisterCritical)
{
	P_GET_UBOOL(Z_Param__Window);
	P_GET_UBOOL(Z_Param__Log);
	P_GET_PROPERTY(FStrProperty,Z_Param__Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNGLog::call_RegisterCritical(Z_Param__Window,Z_Param__Log,Z_Param__Message);
	P_NATIVE_END;
}
// ********** End Class UNGLog Function call_RegisterCritical **************************************

// ********** Begin Class UNGLog Function call_RegisterError ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UNGLog_call_RegisterError_Statics
struct UHT_STATICS
{
	struct NGLog_eventcall_RegisterError_Parms
	{
		bool _Log;
		FString _Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/NGLog/NGLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function call_RegisterError constinit property declarations ********************
	static void NewProp__Log_SetBit(void* Obj)
	{
		((NGLog_eventcall_RegisterError_Parms*)Obj)->_Log = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Log;
	static const UECodeGen_Private::FStrPropertyParams NewProp__Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function call_RegisterError constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function call_RegisterError Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp__Log = { "_Log", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(NGLog_eventcall_RegisterError_Parms), &UHT_STATICS::NewProp__Log_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp__Message = { "_Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(NGLog_eventcall_RegisterError_Parms, _Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Message_MetaData), NewProp__Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Log,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Message,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function call_RegisterError Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UNGLog, nullptr, "call_RegisterError", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::NGLog_eventcall_RegisterError_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::NGLog_eventcall_RegisterError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNGLog_call_RegisterError(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UNGLog::execcall_RegisterError)
{
	P_GET_UBOOL(Z_Param__Log);
	P_GET_PROPERTY(FStrProperty,Z_Param__Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNGLog::call_RegisterError(Z_Param__Log,Z_Param__Message);
	P_NATIVE_END;
}
// ********** End Class UNGLog Function call_RegisterError *****************************************

// ********** Begin Class UNGLog Function call_RegisterWarning *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UNGLog_call_RegisterWarning_Statics
struct UHT_STATICS
{
	struct NGLog_eventcall_RegisterWarning_Parms
	{
		bool _Log;
		FString _Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/NGLog/NGLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function call_RegisterWarning constinit property declarations ******************
	static void NewProp__Log_SetBit(void* Obj)
	{
		((NGLog_eventcall_RegisterWarning_Parms*)Obj)->_Log = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp__Log;
	static const UECodeGen_Private::FStrPropertyParams NewProp__Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function call_RegisterWarning constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function call_RegisterWarning Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp__Log = { "_Log", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(NGLog_eventcall_RegisterWarning_Parms), &UHT_STATICS::NewProp__Log_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp__Message = { "_Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(NGLog_eventcall_RegisterWarning_Parms, _Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Message_MetaData), NewProp__Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Log,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Message,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function call_RegisterWarning Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UNGLog, nullptr, "call_RegisterWarning", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::NGLog_eventcall_RegisterWarning_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::NGLog_eventcall_RegisterWarning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNGLog_call_RegisterWarning(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UNGLog::execcall_RegisterWarning)
{
	P_GET_UBOOL(Z_Param__Log);
	P_GET_PROPERTY(FStrProperty,Z_Param__Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNGLog::call_RegisterWarning(Z_Param__Log,Z_Param__Message);
	P_NATIVE_END;
}
// ********** End Class UNGLog Function call_RegisterWarning ***************************************

// ********** Begin Class UNGLog Function call_ShowStopperMessage **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UNGLog_call_ShowStopperMessage_Statics
struct UHT_STATICS
{
	struct NGLog_eventcall_ShowStopperMessage_Parms
	{
		FString _message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CustomThunk", "true" },
		{ "Keywords", "ScriptTrace" },
		{ "ModuleRelativePath", "Public/Uck/NGLog/NGLog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function call_ShowStopperMessage constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp__message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function call_ShowStopperMessage constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function call_ShowStopperMessage Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp__message = { "_message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(NGLog_eventcall_ShowStopperMessage_Parms, _message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__message_MetaData), NewProp__message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__message,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function call_ShowStopperMessage Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UNGLog, nullptr, "call_ShowStopperMessage", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::NGLog_eventcall_ShowStopperMessage_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::NGLog_eventcall_ShowStopperMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNGLog_call_ShowStopperMessage(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UNGLog Function call_ShowStopperMessage ************************************

// ********** Begin Class UNGLog *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UNGLog_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// inline NGLog& operator << (NGLog& _Stream, float _Value) { return _Stream.Appendf(WIDETEXT(\"%f\"), _Value); }\n// inline NGLog& operator << (NGLog& _Stream, double _Value) { return _Stream.Appendf(WIDETEXT(\"%f\"), static_cast<double>(_Value)); }\n" },
#endif
		{ "IncludePath", "Uck/NGLog/NGLog.h" },
		{ "ModuleRelativePath", "Public/Uck/NGLog/NGLog.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "inline NGLog& operator << (NGLog& _Stream, float _Value) { return _Stream.Appendf(WIDETEXT(\"%f\"), _Value); }\ninline NGLog& operator << (NGLog& _Stream, double _Value) { return _Stream.Appendf(WIDETEXT(\"%f\"), static_cast<double>(_Value)); }" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UNGLog constinit property declarations ***********************************
// ********** End Class UNGLog constinit property declarations *************************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("call_Log"), .Pointer = &UNGLog::execcall_Log },
		{ .NameUTF8 = UTF8TEXT("call_RegisterCritical"), .Pointer = &UNGLog::execcall_RegisterCritical },
		{ .NameUTF8 = UTF8TEXT("call_RegisterError"), .Pointer = &UNGLog::execcall_RegisterError },
		{ .NameUTF8 = UTF8TEXT("call_RegisterWarning"), .Pointer = &UNGLog::execcall_RegisterWarning },
		{ .NameUTF8 = UTF8TEXT("call_ShowStopperMessage"), .Pointer = &UNGLog::execcall_ShowStopperMessage },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNGLog_call_Log, "call_Log" }, // da0be369b207a8beecbaa440a7ffd8d30de5d76f
		{ &Z_Construct_UFunction_UNGLog_call_RegisterCritical, "call_RegisterCritical" }, // 05c48afa7ac854a3dbe43df32a39020efad352b4
		{ &Z_Construct_UFunction_UNGLog_call_RegisterError, "call_RegisterError" }, // 2baf4b8af5dd8382472b8ca8189fedd406585dd4
		{ &Z_Construct_UFunction_UNGLog_call_RegisterWarning, "call_RegisterWarning" }, // d8d5ea34352149f1131e9665468a551276eeb393
		{ &Z_Construct_UFunction_UNGLog_call_ShowStopperMessage, "call_ShowStopperMessage" }, // 01917375f5d7f9dec3a9e64c044233eeb068c935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNGLog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UNGLog,
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
static void UNGLog_StaticRegisterNativesUNGLog()
{
	UClass* Class = UNGLog::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNGLog;
UClass* Z_Construct_UClass_UNGLog(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UNGLog;
		if (!Z_Registration_Info_UClass_UNGLog.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("NGLog"),
				Z_Registration_Info_UClass_UNGLog.InnerSingleton,
				UNGLog_StaticRegisterNativesUNGLog,
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
		return Z_Registration_Info_UClass_UNGLog.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UNGLog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNGLog.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UNGLog.OuterSingleton;
}
#undef UHT_STATICS
UNGLog::UNGLog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNGLog);
UNGLog::~UNGLog() {}
// ********** End Class UNGLog *********************************************************************

// ********** Begin Class UNGLog_FLib **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UNGLog_FLib_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/NGLog/NGLog.h" },
		{ "ModuleRelativePath", "Public/Uck/NGLog/NGLog.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UNGLog_FLib constinit property declarations ******************************
// ********** End Class UNGLog_FLib constinit property declarations ********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNGLog_FLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UNGLog,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UNGLog_FLib,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UNGLog_FLib;
UClass* Z_Construct_UClass_UNGLog_FLib(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UNGLog_FLib;
		if (!Z_Registration_Info_UClass_UNGLog_FLib.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("NGLog_FLib"),
				Z_Registration_Info_UClass_UNGLog_FLib.InnerSingleton,
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
		return Z_Registration_Info_UClass_UNGLog_FLib.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UNGLog_FLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNGLog_FLib.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UNGLog_FLib.OuterSingleton;
}
#undef UHT_STATICS
UNGLog_FLib::UNGLog_FLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UNGLog_FLib);
UNGLog_FLib::~UNGLog_FLib() {}
// ********** End Class UNGLog_FLib ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNGLog, TEXT("UNGLog"), &Z_Registration_Info_UClass_UNGLog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNGLog), 2917992525U) },
		{ Z_Construct_UClass_UNGLog_FLib, TEXT("UNGLog_FLib"), &Z_Registration_Info_UClass_UNGLog_FLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNGLog_FLib), 3756554388U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h__Script_Uck_47a5633c954cc8b4ece1f7fdfa048f1288f5611f{
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
