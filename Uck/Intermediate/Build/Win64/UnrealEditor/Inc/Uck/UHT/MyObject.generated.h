// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyObject.h"

#ifdef UCK_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define UCK_MyObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNoNoNo ******************************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execcall_GetPrimaryMeshName);


struct Z_Construct_UClass_UNoNoNo_Statics;
UCK_API UClass* Z_Construct_UClass_UNoNoNo(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UNoNoNo_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UNoNoNo(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UNoNoNo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UNoNoNo) \
	DECLARE_SERIALIZER(UNoNoNo)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoNoNo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNoNoNo(UNoNoNo&&) = delete; \
	UNoNoNo(const UNoNoNo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoNoNo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoNoNo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoNoNo) \
	NO_API virtual ~UNoNoNo();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_19_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_22_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNoNoNo;

// ********** End Class UNoNoNo ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_MyObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
