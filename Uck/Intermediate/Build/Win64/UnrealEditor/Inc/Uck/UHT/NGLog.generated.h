// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Uck/NGLog/NGLog.h"

#ifdef UCK_NGLog_generated_h
#error "NGLog.generated.h already included, missing '#pragma once' in NGLog.h"
#endif
#define UCK_NGLog_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNGLog *******************************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execcall_RegisterCritical); \
	DECLARE_FUNCTION(execcall_RegisterError); \
	DECLARE_FUNCTION(execcall_RegisterWarning); \
	DECLARE_FUNCTION(execcall_Log);


struct Z_Construct_UClass_UNGLog_Statics;
	struct Z_Construct_UFunction_UNGLog_call_ShowStopperMessage_Statics; \
UCK_API UClass* Z_Construct_UClass_UNGLog(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UNGLog_Statics; \
	friend struct ::Z_Construct_UFunction_UNGLog_call_ShowStopperMessage_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UNGLog(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UNGLog, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UNGLog) \
	DECLARE_SERIALIZER(UNGLog)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNGLog(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNGLog(UNGLog&&) = delete; \
	UNGLog(const UNGLog&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNGLog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNGLog); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNGLog) \
	NO_API virtual ~UNGLog();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_19_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_22_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNGLog;

// ********** End Class UNGLog *********************************************************************

// ********** Begin Class UNGLog_FLib **************************************************************
struct Z_Construct_UClass_UNGLog_FLib_Statics;
UCK_API UClass* Z_Construct_UClass_UNGLog_FLib(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_86_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UNGLog_FLib_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UNGLog_FLib(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UNGLog_FLib, UNGLog, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UNGLog_FLib) \
	DECLARE_SERIALIZER(UNGLog_FLib)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNGLog_FLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNGLog_FLib(UNGLog_FLib&&) = delete; \
	UNGLog_FLib(const UNGLog_FLib&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNGLog_FLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNGLog_FLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNGLog_FLib) \
	NO_API virtual ~UNGLog_FLib();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_83_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_86_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNGLog_FLib;

// ********** End Class UNGLog_FLib ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_NGLog_NGLog_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
