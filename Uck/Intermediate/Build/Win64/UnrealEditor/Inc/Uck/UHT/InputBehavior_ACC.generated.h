// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Uck/InputBehavior_ACC.h"

#ifdef UCK_InputBehavior_ACC_generated_h
#error "InputBehavior_ACC.generated.h already included, missing '#pragma once' in InputBehavior_ACC.h"
#endif
#define UCK_InputBehavior_ACC_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IInputHandler;
enum class EDeviceType_Enum : uint8;
enum class EInputLifeTime_Enum : uint8;
struct FGameplayTag;

// ********** Begin ScriptStruct FInputMapping_Struct **********************************************
struct Z_Construct_UScriptStruct_FInputMapping_Struct_Statics;
UCK_API UScriptStruct* Z_Construct_UScriptStruct_FInputMapping_Struct(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInputMapping_Struct_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FInputMapping_Struct(ETypeConstructPhase::Inner); }


struct FInputMapping_Struct;
// ********** End ScriptStruct FInputMapping_Struct ************************************************

// ********** Begin Class UInputBehaviorConfig *****************************************************
struct Z_Construct_UClass_UInputBehaviorConfig_Statics;
UCK_API UClass* Z_Construct_UClass_UInputBehaviorConfig(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_40_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UInputBehaviorConfig_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UInputBehaviorConfig(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInputBehaviorConfig, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UInputBehaviorConfig) \
	DECLARE_SERIALIZER(UInputBehaviorConfig)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputBehaviorConfig(UInputBehaviorConfig&&) = delete; \
	UInputBehaviorConfig(const UInputBehaviorConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBehaviorConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehaviorConfig); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInputBehaviorConfig) \
	NO_API virtual ~UInputBehaviorConfig();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_37_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_40_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputBehaviorConfig;

// ********** End Class UInputBehaviorConfig *******************************************************

// ********** Begin Class UInputHandlersContainer **************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execfn_UpdateInputInterfaces); \
	DECLARE_FUNCTION(execfn_RemoveInterface); \
	DECLARE_FUNCTION(execfn_AddInterface);


struct Z_Construct_UClass_UInputHandlersContainer_Statics;
UCK_API UClass* Z_Construct_UClass_UInputHandlersContainer(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_55_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UInputHandlersContainer_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UInputHandlersContainer(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInputHandlersContainer, UInputBehaviorConfig, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UInputHandlersContainer) \
	DECLARE_SERIALIZER(UInputHandlersContainer)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputHandlersContainer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputHandlersContainer(UInputHandlersContainer&&) = delete; \
	UInputHandlersContainer(const UInputHandlersContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputHandlersContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputHandlersContainer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInputHandlersContainer) \
	NO_API virtual ~UInputHandlersContainer();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_52_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_55_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputHandlersContainer;

// ********** End Class UInputHandlersContainer ****************************************************

// ********** Begin ScriptStruct FConsumedInput_Struct *********************************************
struct Z_Construct_UScriptStruct_FConsumedInput_Struct_Statics;
UCK_API UScriptStruct* Z_Construct_UScriptStruct_FConsumedInput_Struct(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConsumedInput_Struct_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FConsumedInput_Struct(ETypeConstructPhase::Inner); }


struct FConsumedInput_Struct;
// ********** End ScriptStruct FConsumedInput_Struct ***********************************************

// ********** Begin Class UInputContainer **********************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execfn_AddInputAction); \
	DECLARE_FUNCTION(execfn_FlushInputs);


struct Z_Construct_UClass_UInputContainer_Statics;
UCK_API UClass* Z_Construct_UClass_UInputContainer(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_103_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UInputContainer_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UInputContainer(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInputContainer, UInputHandlersContainer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UInputContainer) \
	DECLARE_SERIALIZER(UInputContainer)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_103_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputContainer(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputContainer(UInputContainer&&) = delete; \
	UInputContainer(const UInputContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputContainer); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInputContainer) \
	NO_API virtual ~UInputContainer();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_100_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_103_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_103_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputContainer;

// ********** End Class UInputContainer ************************************************************

// ********** Begin Class UInputController_ACC *****************************************************
struct Z_Construct_UClass_UInputController_ACC_Statics;
UCK_API UClass* Z_Construct_UClass_UInputController_ACC(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_118_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UInputController_ACC_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UInputController_ACC(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UInputController_ACC, UInputContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UInputController_ACC) \
	DECLARE_SERIALIZER(UInputController_ACC)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_118_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputController_ACC(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputController_ACC(UInputController_ACC&&) = delete; \
	UInputController_ACC(const UInputController_ACC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputController_ACC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputController_ACC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputController_ACC) \
	NO_API virtual ~UInputController_ACC();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_115_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_118_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_118_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h_118_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputController_ACC;

// ********** End Class UInputController_ACC *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_InputBehavior_ACC_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
