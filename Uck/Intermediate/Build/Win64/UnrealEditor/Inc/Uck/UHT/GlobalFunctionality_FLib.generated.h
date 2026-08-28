// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Uck/FLIBS-01/GlobalFunctionality_FLib.h"

#ifdef UCK_GlobalFunctionality_FLib_generated_h
#error "GlobalFunctionality_FLib.generated.h already included, missing '#pragma once' in GlobalFunctionality_FLib.h"
#endif
#define UCK_GlobalFunctionality_FLib_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UGlobalFunctionality_FLib ************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execcall_IsClientActor); \
	DECLARE_FUNCTION(execcall_IsGameActor);


struct Z_Construct_UClass_UGlobalFunctionality_FLib_Statics;
UCK_API UClass* Z_Construct_UClass_UGlobalFunctionality_FLib(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_10_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGlobalFunctionality_FLib_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UGlobalFunctionality_FLib(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGlobalFunctionality_FLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UGlobalFunctionality_FLib) \
	DECLARE_SERIALIZER(UGlobalFunctionality_FLib)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGlobalFunctionality_FLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGlobalFunctionality_FLib(UGlobalFunctionality_FLib&&) = delete; \
	UGlobalFunctionality_FLib(const UGlobalFunctionality_FLib&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGlobalFunctionality_FLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGlobalFunctionality_FLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGlobalFunctionality_FLib) \
	NO_API virtual ~UGlobalFunctionality_FLib();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_7_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_10_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGlobalFunctionality_FLib;

// ********** End Class UGlobalFunctionality_FLib **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_FLIBS_01_GlobalFunctionality_FLib_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
