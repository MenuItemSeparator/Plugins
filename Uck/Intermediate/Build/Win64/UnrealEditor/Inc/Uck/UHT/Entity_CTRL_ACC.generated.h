// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Uck/CTRL/Entity_CTRL_ACC.h"

#ifdef UCK_Entity_CTRL_ACC_generated_h
#error "Entity_CTRL_ACC.generated.h already included, missing '#pragma once' in Entity_CTRL_ACC.h"
#endif
#define UCK_Entity_CTRL_ACC_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;

// ********** Begin Class UUck_InternalPossessCtrl_ ************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRepNotify_OnChangePlayerController); \
	DECLARE_FUNCTION(execfn_SetController);


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUck_InternalPossessCtrl__Statics;
UCK_API UClass* Z_Construct_UClass_UUck_InternalPossessCtrl_(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UUck_InternalPossessCtrl__Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UUck_InternalPossessCtrl_(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UUck_InternalPossessCtrl_, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UUck_InternalPossessCtrl_) \
	DECLARE_SERIALIZER(UUck_InternalPossessCtrl_) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Var_Controller=NETFIELD_REP_START, \
		Var_PreviousController, \
		NETFIELD_REP_END=Var_PreviousController	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUck_InternalPossessCtrl_(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUck_InternalPossessCtrl_(UUck_InternalPossessCtrl_&&) = delete; \
	UUck_InternalPossessCtrl_(const UUck_InternalPossessCtrl_&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUck_InternalPossessCtrl_); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUck_InternalPossessCtrl_); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUck_InternalPossessCtrl_) \
	NO_API virtual ~UUck_InternalPossessCtrl_();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_9_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_CALLBACK_WRAPPERS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUck_InternalPossessCtrl_;

// ********** End Class UUck_InternalPossessCtrl_ **************************************************

// ********** Begin Class UUck_InternalEntityCtrl_ *************************************************
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execfn_ServerTick); \
	DECLARE_FUNCTION(execfn_PlayerTick);


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UUck_InternalEntityCtrl__Statics;
UCK_API UClass* Z_Construct_UClass_UUck_InternalEntityCtrl_(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UUck_InternalEntityCtrl__Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UUck_InternalEntityCtrl_(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UUck_InternalEntityCtrl_, UUck_InternalPossessCtrl_, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UUck_InternalEntityCtrl_) \
	DECLARE_SERIALIZER(UUck_InternalEntityCtrl_)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUck_InternalEntityCtrl_(UUck_InternalEntityCtrl_&&) = delete; \
	UUck_InternalEntityCtrl_(const UUck_InternalEntityCtrl_&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUck_InternalEntityCtrl_); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUck_InternalEntityCtrl_); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UUck_InternalEntityCtrl_) \
	NO_API virtual ~UUck_InternalEntityCtrl_();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_42_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_CALLBACK_WRAPPERS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUck_InternalEntityCtrl_;

// ********** End Class UUck_InternalEntityCtrl_ ***************************************************

// ********** Begin Class UUck_InternalAnimatronic_ ************************************************
struct Z_Construct_UClass_UUck_InternalAnimatronic__Statics;
UCK_API UClass* Z_Construct_UClass_UUck_InternalAnimatronic_(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_73_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UUck_InternalAnimatronic__Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UUck_InternalAnimatronic_(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UUck_InternalAnimatronic_, UUck_InternalPossessCtrl_, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UUck_InternalAnimatronic_) \
	DECLARE_SERIALIZER(UUck_InternalAnimatronic_)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUck_InternalAnimatronic_(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUck_InternalAnimatronic_(UUck_InternalAnimatronic_&&) = delete; \
	UUck_InternalAnimatronic_(const UUck_InternalAnimatronic_&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUck_InternalAnimatronic_); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUck_InternalAnimatronic_); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUck_InternalAnimatronic_) \
	NO_API virtual ~UUck_InternalAnimatronic_();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_70_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_73_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUck_InternalAnimatronic_;

// ********** End Class UUck_InternalAnimatronic_ **************************************************

// ********** Begin Class UEntityCtrl_ACC **********************************************************
struct Z_Construct_UClass_UEntityCtrl_ACC_Statics;
UCK_API UClass* Z_Construct_UClass_UEntityCtrl_ACC(ETypeConstructPhase);

#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_82_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEntityCtrl_ACC_Statics; \
	friend UCK_API UClass* ::Z_Construct_UClass_UEntityCtrl_ACC(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEntityCtrl_ACC, UUck_InternalAnimatronic_, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Uck"), Z_Construct_UClass_UEntityCtrl_ACC) \
	DECLARE_SERIALIZER(UEntityCtrl_ACC)


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEntityCtrl_ACC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEntityCtrl_ACC(UEntityCtrl_ACC&&) = delete; \
	UEntityCtrl_ACC(const UEntityCtrl_ACC&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityCtrl_ACC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityCtrl_ACC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityCtrl_ACC) \
	NO_API virtual ~UEntityCtrl_ACC();


#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_79_PROLOG
#define FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_82_INCLASS_NO_PURE_DECLS \
	FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEntityCtrl_ACC;

// ********** End Class UEntityCtrl_ACC ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CTRL_Entity_CTRL_ACC_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
