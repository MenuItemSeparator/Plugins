// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/InputHandler_ACC.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeInputHandler_ACC() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UEnum* Z_Construct_UEnum_Uck_EDeviceType_Enum(ETypeConstructPhase);
UCK_API UEnum* Z_Construct_UEnum_Uck_EInputLifeTime_Enum(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputHandler(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_IInputHandler(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_UInputHandler(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_IInputHandler(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EDeviceType_Enum **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Uck_EDeviceType_Enum_Statics
template<> UCK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDeviceType_Enum>()
{
	return Z_Construct_UEnum_Uck_EDeviceType_Enum(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Disable.Name", "EDeviceType_Enum::Disable" },
		{ "EInputType_Enum_MAX.Name", "EDeviceType_Enum::EInputType_Enum_MAX" },
		{ "Gamepad.Name", "EDeviceType_Enum::Gamepad" },
		{ "Keyboard.Name", "EDeviceType_Enum::Keyboard" },
		{ "Mixed.Name", "EDeviceType_Enum::Mixed" },
		{ "ModuleRelativePath", "Public/Uck/InputHandler_ACC.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDeviceType_Enum::Disable", (int64)EDeviceType_Enum::Disable },
		{ "EDeviceType_Enum::Keyboard", (int64)EDeviceType_Enum::Keyboard },
		{ "EDeviceType_Enum::Gamepad", (int64)EDeviceType_Enum::Gamepad },
		{ "EDeviceType_Enum::Mixed", (int64)EDeviceType_Enum::Mixed },
		{ "EDeviceType_Enum::EInputType_Enum_MAX", (int64)EDeviceType_Enum::EInputType_Enum_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
	nullptr,
	"EDeviceType_Enum",
	"EDeviceType_Enum",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDeviceType_Enum;
UEnum* Z_Construct_UEnum_Uck_EDeviceType_Enum(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDeviceType_Enum.OuterSingleton)
		{
			ZRIE_EDeviceType_Enum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Uck_EDeviceType_Enum, (UObject*)Z_Construct_UPackage__Script_Uck(ETypeConstructPhase::Outer), TEXT("EDeviceType_Enum"));
		}
		return ZRIE_EDeviceType_Enum.OuterSingleton;
	}
	if (!ZRIE_EDeviceType_Enum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDeviceType_Enum.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDeviceType_Enum.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDeviceType_Enum ************************************************************

// ********** Begin Enum EInputLifeTime_Enum *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_Uck_EInputLifeTime_Enum_Statics
template<> UCK_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputLifeTime_Enum>()
{
	return Z_Construct_UEnum_Uck_EInputLifeTime_Enum(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Continue.Name", "EInputLifeTime_Enum::Continue" },
		{ "Disabled.Name", "EInputLifeTime_Enum::Disabled" },
		{ "EInputLifeTime_Enum_MAX.Name", "EInputLifeTime_Enum::EInputLifeTime_Enum_MAX" },
		{ "End.Name", "EInputLifeTime_Enum::End" },
		{ "ModuleRelativePath", "Public/Uck/InputHandler_ACC.h" },
		{ "Start.Name", "EInputLifeTime_Enum::Start" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputLifeTime_Enum::Disabled", (int64)EInputLifeTime_Enum::Disabled },
		{ "EInputLifeTime_Enum::Start", (int64)EInputLifeTime_Enum::Start },
		{ "EInputLifeTime_Enum::Continue", (int64)EInputLifeTime_Enum::Continue },
		{ "EInputLifeTime_Enum::End", (int64)EInputLifeTime_Enum::End },
		{ "EInputLifeTime_Enum::EInputLifeTime_Enum_MAX", (int64)EInputLifeTime_Enum::EInputLifeTime_Enum_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
	nullptr,
	"EInputLifeTime_Enum",
	"EInputLifeTime_Enum",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EInputLifeTime_Enum;
UEnum* Z_Construct_UEnum_Uck_EInputLifeTime_Enum(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EInputLifeTime_Enum.OuterSingleton)
		{
			ZRIE_EInputLifeTime_Enum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Uck_EInputLifeTime_Enum, (UObject*)Z_Construct_UPackage__Script_Uck(ETypeConstructPhase::Outer), TEXT("EInputLifeTime_Enum"));
		}
		return ZRIE_EInputLifeTime_Enum.OuterSingleton;
	}
	if (!ZRIE_EInputLifeTime_Enum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EInputLifeTime_Enum.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EInputLifeTime_Enum.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EInputLifeTime_Enum *********************************************************

// ********** Begin Interface UInputHandler Function fi_TryHandleInput *****************************
struct InputHandler_eventfi_TryHandleInput_Parms
{
	FGameplayTag _Action;
	float _Value;
	float _Time;
	EInputLifeTime_Enum _Type;
	EDeviceType_Enum _Device;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_eventfi_TryHandleInput_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInputHandler::fi_TryHandleInput(FGameplayTag _Action, float _Value, float _Time, EInputLifeTime_Enum _Type, EDeviceType_Enum _Device)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_fi_TryHandleInput instead.");
	InputHandler_eventfi_TryHandleInput_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInputHandler_fi_TryHandleInput = FName(TEXT("fi_TryHandleInput"));
bool IInputHandler::Execute_fi_TryHandleInput(UObject* O, FGameplayTag _Action, float _Value, float _Time, EInputLifeTime_Enum _Type, EDeviceType_Enum _Device)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputHandler::StaticClass()));
	InputHandler_eventfi_TryHandleInput_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputHandler_fi_TryHandleInput);
	if (Func)
	{
		Parms._Action=std::move(_Action);
		Parms._Value=std::move(_Value);
		Parms._Time=std::move(_Time);
		Parms._Type=std::move(_Type);
		Parms._Device=std::move(_Device);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInputHandler*)(O->GetNativeInterfaceAddress(UInputHandler::StaticClass())))
	{
		Parms.ReturnValue = I->fi_TryHandleInput_Implementation(_Action,_Value,_Time,_Type,_Device);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UInputHandler_fi_TryHandleInput_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "U3D Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"Default\")\n\x09""bool fi_ReceiveInput(FGameplayTag _Tag);\n\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Uck/InputHandler_ACC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"Default\")\nbool fi_ReceiveInput(FGameplayTag _Tag);" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function fi_TryHandleInput constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp__Action;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__Time;
	static const UECodeGen_Private::FBytePropertyParams NewProp__Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp__Device_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__Device;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputHandler_eventfi_TryHandleInput_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function fi_TryHandleInput constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function fi_TryHandleInput Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp__Action = { "_Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_eventfi_TryHandleInput_Parms, _Action), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 63c9638e64e309ea70a1c1e4688171f6669f0b1b
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp__Value = { "_Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_eventfi_TryHandleInput_Parms, _Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp__Time = { "_Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_eventfi_TryHandleInput_Parms, _Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp__Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp__Type = { "_Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_eventfi_TryHandleInput_Parms, _Type), Z_Construct_UEnum_Uck_EInputLifeTime_Enum, METADATA_PARAMS(0, nullptr) }; // 8f70ecf2f52ff1fc7d63c5d5bd720883711b9f58
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp__Device_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp__Device = { "_Device", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_eventfi_TryHandleInput_Parms, _Device), Z_Construct_UEnum_Uck_EDeviceType_Enum, METADATA_PARAMS(0, nullptr) }; // e9d893f882859bfc6b0bddb50e3de8f930b52aad
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandler_eventfi_TryHandleInput_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Device_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp__Device,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function fi_TryHandleInput Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UInputHandler, nullptr, "fi_TryHandleInput", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<InputHandler_eventfi_TryHandleInput_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(InputHandler_eventfi_TryHandleInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_fi_TryHandleInput(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IInputHandler::execfi_TryHandleInput)
{
	P_GET_STRUCT(FGameplayTag,Z_Param__Action);
	P_GET_PROPERTY(FFloatProperty,Z_Param__Value);
	P_GET_PROPERTY(FFloatProperty,Z_Param__Time);
	P_GET_ENUM(EInputLifeTime_Enum,Z_Param__Type);
	P_GET_ENUM(EDeviceType_Enum,Z_Param__Device);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->fi_TryHandleInput_Implementation(Z_Param__Action,Z_Param__Value,Z_Param__Time,EInputLifeTime_Enum(Z_Param__Type),EDeviceType_Enum(Z_Param__Device));
	P_NATIVE_END;
}
// ********** End Interface UInputHandler Function fi_TryHandleInput *******************************

// ********** Begin Interface UInputHandler ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UInputHandler_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Uck/InputHandler_ACC.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UInputHandler constinit property declarations ************************
// ********** End Interface UInputHandler constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("fi_TryHandleInput"), .Pointer = &IInputHandler::execfi_TryHandleInput },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandler_fi_TryHandleInput, "fi_TryHandleInput" }, // 7a8d04f5611c20f6c01aaca6535fd394e70ecfd1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UInputHandler,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UInputHandler_StaticRegisterNativesUInputHandler()
{
	UClass* Class = UInputHandler::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputHandler;
UClass* Z_Construct_UClass_UInputHandler(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UInputHandler;
		if (!Z_Registration_Info_UClass_UInputHandler.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("InputHandler"),
				Z_Registration_Info_UClass_UInputHandler.InnerSingleton,
				UInputHandler_StaticRegisterNativesUInputHandler,
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
		return Z_Registration_Info_UClass_UInputHandler.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UInputHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler.OuterSingleton;
}
#undef UHT_STATICS
UInputHandler::UInputHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UInputHandler);
// ********** End Interface UInputHandler **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_Uck_EDeviceType_Enum, TEXT("EDeviceType_Enum"), &ZRIE_EDeviceType_Enum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3923284984U) },
		{ Z_Construct_UEnum_Uck_EInputLifeTime_Enum, TEXT("EInputLifeTime_Enum"), &ZRIE_EInputLifeTime_Enum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2406542578U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler, TEXT("UInputHandler"), &Z_Registration_Info_UClass_UInputHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler), 703151786U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h__Script_Uck_03bfa67ae7558f0ed6a4b9d051294ec138c3808e{
	TEXT("/Script/Uck"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
