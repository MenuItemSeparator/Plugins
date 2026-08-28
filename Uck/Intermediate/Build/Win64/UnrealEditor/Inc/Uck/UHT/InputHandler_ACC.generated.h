// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Uck/InputHandler_ACC.h"

#ifdef UCK_InputHandler_ACC_generated_h
#error "InputHandler_ACC.generated.h already included, missing '#pragma once' in InputHandler_ACC.h"
#endif
#define UCK_InputHandler_ACC_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDeviceType_Enum : uint8;
enum class EInputLifeTime_Enum : uint8;
struct FGameplayTag;

// ********** Begin Interface UInputHandler ********************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool fi_TryHandleInput_Implementation(FGameplayTag _Action, float _Value, float _Time, EInputLifeTime_Enum _Type, EDeviceType_Enum _Device) { return false; }; \
	DECLARE_FUNCTION(execfi_TryHandleInput);


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UInputHandler_Statics;
UCK_API UClass* Z_Construct_UClass_UInputHandler(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UCK_API UInputHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputHandler(UInputHandler&&) = delete; \
	UInputHandler(const UInputHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UCK_API, UInputHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputHandler) \
	virtual ~UInputHandler() = default;


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_UInputHandler_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UInputHandler(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInputHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UInputHandler) \
	DECLARE_SERIALIZER(UInputHandler)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_GENERATED_UINTERFACE_BODY() \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputHandler() {} \
public: \
	typedef UInputHandler UClassType; \
	typedef IInputHandler ThisClass; \
	static bool Execute_fi_TryHandleInput(UObject* O, FGameplayTag _Action, float _Value, float _Time, EInputLifeTime_Enum _Type, EDeviceType_Enum _Device); \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_35_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_CALLBACK_WRAPPERS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h_38_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputHandler;

// ********** End Interface UInputHandler **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputHandler_ACC_h

// ********** Begin Enum EDeviceType_Enum **********************************************************
#define FOREACH_ENUM_EDEVICETYPE_ENUM(op) \
	op(EDeviceType_Enum::Disable) \
	op(EDeviceType_Enum::Keyboard) \
	op(EDeviceType_Enum::Gamepad) \
	op(EDeviceType_Enum::Mixed) \
	op(EDeviceType_Enum::EInputType_Enum_MAX) 

enum class EDeviceType_Enum : uint8;
template<> struct TIsUEnumClass<EDeviceType_Enum> { enum { Value = true }; };
template<> UE_NODEBUG UCK_NON_ATTRIBUTED_API UEnum* StaticEnum<EDeviceType_Enum>();
// ********** End Enum EDeviceType_Enum ************************************************************

// ********** Begin Enum EInputLifeTime_Enum *******************************************************
#define FOREACH_ENUM_EINPUTLIFETIME_ENUM(op) \
	op(EInputLifeTime_Enum::Disabled) \
	op(EInputLifeTime_Enum::Start) \
	op(EInputLifeTime_Enum::Continue) \
	op(EInputLifeTime_Enum::End) \
	op(EInputLifeTime_Enum::EInputLifeTime_Enum_MAX) 

enum class EInputLifeTime_Enum : uint8;
template<> struct TIsUEnumClass<EInputLifeTime_Enum> { enum { Value = true }; };
template<> UE_NODEBUG UCK_NON_ATTRIBUTED_API UEnum* StaticEnum<EInputLifeTime_Enum>();
// ********** End Enum EInputLifeTime_Enum *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
