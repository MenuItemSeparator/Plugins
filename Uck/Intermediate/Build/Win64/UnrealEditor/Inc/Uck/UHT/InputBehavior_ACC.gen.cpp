// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/InputBehavior_ACC.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeInputBehavior_ACC() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem(ETypeConstructPhase);
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UScriptStruct* Z_Construct_UScriptStruct_FConsumedInput_Struct(ETypeConstructPhase);
UCK_API UEnum* Z_Construct_UEnum_Uck_EDeviceType_Enum(ETypeConstructPhase);
UCK_API UEnum* Z_Construct_UEnum_Uck_EInputLifeTime_Enum(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputBehaviorConfig(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputContainer(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputController_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputHandlersContainer(ETypeConstructPhase);
UCK_API UScriptStruct* Z_Construct_UScriptStruct_FInputMapping_Struct(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputBehaviorConfig(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputContainer(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputController_ACC(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputHandler(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputHandlersContainer(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FInputMapping_Struct **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FInputMapping_Struct_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FInputMapping_Struct>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FInputMapping_Struct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FInputMapping_Struct constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Object;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Mappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FInputMapping_Struct constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMapping_Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FInputMapping_Struct Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMapping_Struct, Object), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Mappings_Inner = { "Mappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMapping_Struct, Mappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mappings_MetaData), NewProp_Mappings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mappings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FInputMapping_Struct Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
	nullptr,
	&NewStructOps,
	"InputMapping_Struct",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FInputMapping_Struct>(),
	alignof(FInputMapping_Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInputMapping_Struct;
UScriptStruct* Z_Construct_UScriptStruct_FInputMapping_Struct(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FInputMapping_Struct.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FInputMapping_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMapping_Struct, (UObject*)Z_Construct_UPackage__Script_Uck(ETypeConstructPhase::Outer), TEXT("InputMapping_Struct"));
		}
		return Z_Registration_Info_UScriptStruct_FInputMapping_Struct.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FInputMapping_Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInputMapping_Struct.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FInputMapping_Struct.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FInputMapping_Struct ************************************************

// ********** Begin Class UInputBehaviorConfig *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInputBehaviorConfig_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/InputBehavior_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Config_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInputBehaviorConfig constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Var_Config_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Var_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInputBehaviorConfig constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBehaviorConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UInputBehaviorConfig Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Var_Config_Inner = { "Var_Config", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMapping_Struct, METADATA_PARAMS(0, nullptr) }; // 4abfeb2dba7703a225af581f0669c6e42a5d58fa
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Var_Config = { "Var_Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UInputBehaviorConfig, Var_Config), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Config_MetaData), NewProp_Var_Config_MetaData) }; // 4abfeb2dba7703a225af581f0669c6e42a5d58fa
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Config_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Config,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UInputBehaviorConfig Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInputBehaviorConfig,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UInputBehaviorConfig;
UClass* Z_Construct_UClass_UInputBehaviorConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInputBehaviorConfig;
		if (!Z_Registration_Info_UClass_UInputBehaviorConfig.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InputBehaviorConfig"),
				Z_Registration_Info_UClass_UInputBehaviorConfig.InnerSingleton,
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
		return Z_Registration_Info_UClass_UInputBehaviorConfig.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInputBehaviorConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputBehaviorConfig.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputBehaviorConfig.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInputBehaviorConfig);
UInputBehaviorConfig::~UInputBehaviorConfig() {}
// ********** End Class UInputBehaviorConfig *******************************************************

// ********** Begin Class UInputHandlersContainer Function fn_AddInterface *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInputHandlersContainer_fn_AddInterface_Statics
struct UHT_STATICS
{
	struct InputHandlersContainer_eventfn_AddInterface_Parms
	{
		TScriptInterface<IInputHandler> _Var;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_AddInterface constinit property declarations ***********************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp__Var;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_AddInterface constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_AddInterface Property Definitions **********************************
const UECodeGen_Private::FInterfacePropertyParams UHT_STATICS::NewProp__Var = { "_Var", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandlersContainer_eventfn_AddInterface_Parms, _Var), Z_Construct_UClass_UInputHandler, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Var,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_AddInterface Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInputHandlersContainer, nullptr, "fn_AddInterface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InputHandlersContainer_eventfn_AddInterface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InputHandlersContainer_eventfn_AddInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandlersContainer_fn_AddInterface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInputHandlersContainer::execfn_AddInterface)
{
	P_GET_TINTERFACE(IInputHandler,Z_Param__Var);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_AddInterface(Z_Param__Var);
	P_NATIVE_END;
}
// ********** End Class UInputHandlersContainer Function fn_AddInterface ***************************

// ********** Begin Class UInputHandlersContainer Function fn_RemoveInterface **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInputHandlersContainer_fn_RemoveInterface_Statics
struct UHT_STATICS
{
	struct InputHandlersContainer_eventfn_RemoveInterface_Parms
	{
		TScriptInterface<IInputHandler> _Var;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_RemoveInterface constinit property declarations ********************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp__Var;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_RemoveInterface constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_RemoveInterface Property Definitions *******************************
const UECodeGen_Private::FInterfacePropertyParams UHT_STATICS::NewProp__Var = { "_Var", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandlersContainer_eventfn_RemoveInterface_Parms, _Var), Z_Construct_UClass_UInputHandler, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Var,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_RemoveInterface Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInputHandlersContainer, nullptr, "fn_RemoveInterface", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InputHandlersContainer_eventfn_RemoveInterface_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InputHandlersContainer_eventfn_RemoveInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandlersContainer_fn_RemoveInterface(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInputHandlersContainer::execfn_RemoveInterface)
{
	P_GET_TINTERFACE(IInputHandler,Z_Param__Var);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_RemoveInterface(Z_Param__Var);
	P_NATIVE_END;
}
// ********** End Class UInputHandlersContainer Function fn_RemoveInterface ************************

// ********** Begin Class UInputHandlersContainer Function fn_UpdateInputInterfaces ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInputHandlersContainer_fn_UpdateInputInterfaces_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_UpdateInputInterfaces constinit property declarations **************
// ********** End Function fn_UpdateInputInterfaces constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInputHandlersContainer, nullptr, "fn_UpdateInputInterfaces", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UInputHandlersContainer_fn_UpdateInputInterfaces(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInputHandlersContainer::execfn_UpdateInputInterfaces)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_UpdateInputInterfaces();
	P_NATIVE_END;
}
// ********** End Class UInputHandlersContainer Function fn_UpdateInputInterfaces ******************

// ********** Begin Class UInputHandlersContainer **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInputHandlersContainer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/InputBehavior_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_InputBehaviorArray_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Eisei_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInputHandlersContainer constinit property declarations ******************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Var_InputBehaviorArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Var_InputBehaviorArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_Eisei;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInputHandlersContainer constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fn_AddInterface"), .Pointer = &UInputHandlersContainer::execfn_AddInterface },
		{ .NameUTF8 = UTF8TEXT("fn_RemoveInterface"), .Pointer = &UInputHandlersContainer::execfn_RemoveInterface },
		{ .NameUTF8 = UTF8TEXT("fn_UpdateInputInterfaces"), .Pointer = &UInputHandlersContainer::execfn_UpdateInputInterfaces },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandlersContainer_fn_AddInterface, "fn_AddInterface" }, // 7f07d87de2adb5981edb3dcd4e7b61619b5107e7
		{ &Z_Construct_UFunction_UInputHandlersContainer_fn_RemoveInterface, "fn_RemoveInterface" }, // 116dcf928f7e9130f69de49e7cec9585199412d4
		{ &Z_Construct_UFunction_UInputHandlersContainer_fn_UpdateInputInterfaces, "fn_UpdateInputInterfaces" }, // 5067fd3fc8c69db198a837c0afadf4b2598ab486
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandlersContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UInputHandlersContainer Property Definitions *****************************
const UECodeGen_Private::FInterfacePropertyParams UHT_STATICS::NewProp_Var_InputBehaviorArray_Inner = { "Var_InputBehaviorArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputHandler, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Var_InputBehaviorArray = { "Var_InputBehaviorArray", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlersContainer, Var_InputBehaviorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_InputBehaviorArray_MetaData), NewProp_Var_InputBehaviorArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_Eisei = { "Var_Eisei", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandlersContainer, Var_Eisei), Z_Construct_UClass_UEnhancedInputLocalPlayerSubsystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Eisei_MetaData), NewProp_Var_Eisei_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_InputBehaviorArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_InputBehaviorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Eisei,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UInputHandlersContainer Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInputBehaviorConfig,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInputHandlersContainer,
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
static void UInputHandlersContainer_StaticRegisterNativesUInputHandlersContainer()
{
	UClass* Class = UInputHandlersContainer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputHandlersContainer;
UClass* Z_Construct_UClass_UInputHandlersContainer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInputHandlersContainer;
		if (!Z_Registration_Info_UClass_UInputHandlersContainer.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InputHandlersContainer"),
				Z_Registration_Info_UClass_UInputHandlersContainer.InnerSingleton,
				UInputHandlersContainer_StaticRegisterNativesUInputHandlersContainer,
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
		return Z_Registration_Info_UClass_UInputHandlersContainer.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInputHandlersContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandlersContainer.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandlersContainer.OuterSingleton;
}
#undef UHT_STATICS
UInputHandlersContainer::UInputHandlersContainer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInputHandlersContainer);
UInputHandlersContainer::~UInputHandlersContainer() {}
// ********** End Class UInputHandlersContainer ****************************************************

// ********** Begin ScriptStruct FConsumedInput_Struct *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FConsumedInput_Struct_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FConsumedInput_Struct>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FConsumedInput_Struct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Action_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Value_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Time_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_InputLifeTime_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_DeviceType_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FConsumedInput_Struct constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Var_Action;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Var_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Var_Time;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Var_InputLifeTime_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Var_InputLifeTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Var_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Var_DeviceType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FConsumedInput_Struct constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConsumedInput_Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FConsumedInput_Struct Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Var_Action = { "Var_Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumedInput_Struct, Var_Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Action_MetaData), NewProp_Var_Action_MetaData) }; // 63c9638e64e309ea70a1c1e4688171f6669f0b1b
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Var_Value = { "Var_Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumedInput_Struct, Var_Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Value_MetaData), NewProp_Var_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Var_Time = { "Var_Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumedInput_Struct, Var_Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Time_MetaData), NewProp_Var_Time_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Var_InputLifeTime_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Var_InputLifeTime = { "Var_InputLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumedInput_Struct, Var_InputLifeTime), Z_Construct_UEnum_Uck_EInputLifeTime_Enum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_InputLifeTime_MetaData), NewProp_Var_InputLifeTime_MetaData) }; // 8f70ecf2f52ff1fc7d63c5d5bd720883711b9f58
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Var_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Var_DeviceType = { "Var_DeviceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FConsumedInput_Struct, Var_DeviceType), Z_Construct_UEnum_Uck_EDeviceType_Enum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_DeviceType_MetaData), NewProp_Var_DeviceType_MetaData) }; // e9d893f882859bfc6b0bddb50e3de8f930b52aad
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_InputLifeTime_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_InputLifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_DeviceType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FConsumedInput_Struct Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
	nullptr,
	&NewStructOps,
	"ConsumedInput_Struct",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FConsumedInput_Struct>(),
	alignof(FConsumedInput_Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FConsumedInput_Struct;
UScriptStruct* Z_Construct_UScriptStruct_FConsumedInput_Struct(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FConsumedInput_Struct.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FConsumedInput_Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConsumedInput_Struct, (UObject*)Z_Construct_UPackage__Script_Uck(ETypeConstructPhase::Outer), TEXT("ConsumedInput_Struct"));
		}
		return Z_Registration_Info_UScriptStruct_FConsumedInput_Struct.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FConsumedInput_Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FConsumedInput_Struct.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FConsumedInput_Struct.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FConsumedInput_Struct ***********************************************

// ********** Begin Class UInputContainer Function fn_AddInputAction *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInputContainer_fn_AddInputAction_Statics
struct UHT_STATICS
{
	struct InputContainer_eventfn_AddInputAction_Parms
	{
		FGameplayTag _Action;
		float _Value;
		float _Time;
		EInputLifeTime_Enum _Lt;
		EDeviceType_Enum _Device;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_AddInputAction constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp__Action;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__Time;
	static const UECodeGen_Private::FBytePropertyParams NewProp__Lt_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Lt;
	static const UECodeGen_Private::FBytePropertyParams NewProp__Device_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Device;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fn_AddInputAction constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fn_AddInputAction Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp__Action = { "_Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(InputContainer_eventfn_AddInputAction_Parms, _Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 63c9638e64e309ea70a1c1e4688171f6669f0b1b
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(InputContainer_eventfn_AddInputAction_Parms, _Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp__Time = { "_Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(InputContainer_eventfn_AddInputAction_Parms, _Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp__Lt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp__Lt = { "_Lt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(InputContainer_eventfn_AddInputAction_Parms, _Lt), Z_Construct_UEnum_Uck_EInputLifeTime_Enum, METADATA_PARAMS(0, nullptr) }; // 8f70ecf2f52ff1fc7d63c5d5bd720883711b9f58
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp__Device_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp__Device = { "_Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(InputContainer_eventfn_AddInputAction_Parms, _Device), Z_Construct_UEnum_Uck_EDeviceType_Enum, METADATA_PARAMS(0, nullptr) }; // e9d893f882859bfc6b0bddb50e3de8f930b52aad
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Lt_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Lt,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Device_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Device,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fn_AddInputAction Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInputContainer, nullptr, "fn_AddInputAction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::InputContainer_eventfn_AddInputAction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::InputContainer_eventfn_AddInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputContainer_fn_AddInputAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInputContainer::execfn_AddInputAction)
{
	P_GET_STRUCT(FGameplayTag,Z_Param__Action);
	P_GET_PROPERTY(FFloatProperty,Z_Param__Value);
	P_GET_PROPERTY(FFloatProperty,Z_Param__Time);
	P_GET_ENUM(EInputLifeTime_Enum,Z_Param__Lt);
	P_GET_ENUM(EDeviceType_Enum,Z_Param__Device);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_AddInputAction(Z_Param__Action,Z_Param__Value,Z_Param__Time,EInputLifeTime_Enum(Z_Param__Lt),EDeviceType_Enum(Z_Param__Device));
	P_NATIVE_END;
}
// ********** End Class UInputContainer Function fn_AddInputAction *********************************

// ********** Begin Class UInputContainer Function fn_FlushInputs **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInputContainer_fn_FlushInputs_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function fn_FlushInputs constinit property declarations ************************
// ********** End Function fn_FlushInputs constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInputContainer, nullptr, "fn_FlushInputs", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UInputContainer_fn_FlushInputs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UInputContainer::execfn_FlushInputs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->fn_FlushInputs();
	P_NATIVE_END;
}
// ********** End Class UInputContainer Function fn_FlushInputs ************************************

// ********** Begin Class UInputContainer **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInputContainer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/InputBehavior_ACC.h" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_FrameInputs_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInputContainer constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Var_FrameInputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Var_FrameInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UInputContainer constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fn_AddInputAction"), .Pointer = &UInputContainer::execfn_AddInputAction },
		{ .NameUTF8 = UTF8TEXT("fn_FlushInputs"), .Pointer = &UInputContainer::execfn_FlushInputs },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputContainer_fn_AddInputAction, "fn_AddInputAction" }, // 4470ba4825f8f04c1ea470ebc402032372f48980
		{ &Z_Construct_UFunction_UInputContainer_fn_FlushInputs, "fn_FlushInputs" }, // bd951710c98879475a57f9e1e2aa0a26d571b27c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UInputContainer Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Var_FrameInputs_Inner = { "Var_FrameInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConsumedInput_Struct, METADATA_PARAMS(0, nullptr) }; // b6270c20c21888788e5c64c345f3a8276a0d57b6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Var_FrameInputs = { "Var_FrameInputs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UInputContainer, Var_FrameInputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_FrameInputs_MetaData), NewProp_Var_FrameInputs_MetaData) }; // b6270c20c21888788e5c64c345f3a8276a0d57b6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_FrameInputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_FrameInputs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UInputContainer Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInputHandlersContainer,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInputContainer,
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
static void UInputContainer_StaticRegisterNativesUInputContainer()
{
	UClass* Class = UInputContainer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputContainer;
UClass* Z_Construct_UClass_UInputContainer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInputContainer;
		if (!Z_Registration_Info_UClass_UInputContainer.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InputContainer"),
				Z_Registration_Info_UClass_UInputContainer.InnerSingleton,
				UInputContainer_StaticRegisterNativesUInputContainer,
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
		return Z_Registration_Info_UClass_UInputContainer.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInputContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputContainer.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputContainer.OuterSingleton;
}
#undef UHT_STATICS
UInputContainer::UInputContainer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInputContainer);
UInputContainer::~UInputContainer() {}
// ********** End Class UInputContainer ************************************************************

// ********** Begin Class UInputController_ACC *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInputController_ACC_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Uck/InputBehavior_ACC.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Uck/InputBehavior_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UInputController_ACC constinit property declarations *********************
// ********** End Class UInputController_ACC constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputController_ACC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInputContainer,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInputController_ACC,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UInputController_ACC;
UClass* Z_Construct_UClass_UInputController_ACC(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInputController_ACC;
		if (!Z_Registration_Info_UClass_UInputController_ACC.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InputController_ACC"),
				Z_Registration_Info_UClass_UInputController_ACC.InnerSingleton,
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
		return Z_Registration_Info_UClass_UInputController_ACC.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInputController_ACC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputController_ACC.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputController_ACC.OuterSingleton;
}
#undef UHT_STATICS
UInputController_ACC::UInputController_ACC() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInputController_ACC);
UInputController_ACC::~UInputController_ACC() {}
// ********** End Class UInputController_ACC *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FInputMapping_Struct, Z_Construct_UScriptStruct_FInputMapping_Struct_Statics::NewStructOps, TEXT("InputMapping_Struct"),&Z_Registration_Info_UScriptStruct_FInputMapping_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMapping_Struct), 1254091565U) },
		{ Z_Construct_UScriptStruct_FConsumedInput_Struct, Z_Construct_UScriptStruct_FConsumedInput_Struct_Statics::NewStructOps, TEXT("ConsumedInput_Struct"),&Z_Registration_Info_UScriptStruct_FConsumedInput_Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConsumedInput_Struct), 3056012320U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputBehaviorConfig, TEXT("UInputBehaviorConfig"), &Z_Registration_Info_UClass_UInputBehaviorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputBehaviorConfig), 2876074936U) },
		{ Z_Construct_UClass_UInputHandlersContainer, TEXT("UInputHandlersContainer"), &Z_Registration_Info_UClass_UInputHandlersContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandlersContainer), 1787548308U) },
		{ Z_Construct_UClass_UInputContainer, TEXT("UInputContainer"), &Z_Registration_Info_UClass_UInputContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputContainer), 302027126U) },
		{ Z_Construct_UClass_UInputController_ACC, TEXT("UInputController_ACC"), &Z_Registration_Info_UClass_UInputController_ACC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputController_ACC), 1870387187U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h__Script_Uck_ffc1ef2ca2640f276f1b63d51246accd88e66aac{
	TEXT("/Script/Uck"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
