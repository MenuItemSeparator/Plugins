// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/CharacterTools/CharacterCameraTool_CA.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCharacterCameraTool_CA() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_ACharacterCameraTool_Final(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_AUck_InternalCharacterCameraTool(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_ACharacterCameraTool_Final(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_AUck_InternalCharacterCameraTool(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AUck_InternalCharacterCameraTool *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AUck_InternalCharacterCameraTool_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Uck/CharacterTools/CharacterCameraTool_CA.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Root_MetaData[] = {
		{ "Category", "Uck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_SpringArm_MetaData[] = {
		{ "Category", "Uck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Camera_MetaData[] = {
		{ "Category", "Uck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_Target_MetaData[] = {
		{ "Category", "Uck" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_StaticMeshTag_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Var_HeadBoneName_MetaData[] = {
		{ "Category", "Uck" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AUck_InternalCharacterCameraTool constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Var_Target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Var_StaticMeshTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Var_HeadBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AUck_InternalCharacterCameraTool constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUck_InternalCharacterCameraTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AUck_InternalCharacterCameraTool Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_Root = { "Var_Root", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AUck_InternalCharacterCameraTool, Var_Root), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Root_MetaData), NewProp_Var_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_SpringArm = { "Var_SpringArm", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AUck_InternalCharacterCameraTool, Var_SpringArm), Z_Construct_UClass_USpringArmComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_SpringArm_MetaData), NewProp_Var_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_Camera = { "Var_Camera", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AUck_InternalCharacterCameraTool, Var_Camera), Z_Construct_UClass_UCameraComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Camera_MetaData), NewProp_Var_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Var_Target = { "Var_Target", nullptr, (EPropertyFlags)0x0115000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AUck_InternalCharacterCameraTool, Var_Target), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_Target_MetaData), NewProp_Var_Target_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Var_StaticMeshTag = { "Var_StaticMeshTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(AUck_InternalCharacterCameraTool, Var_StaticMeshTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_StaticMeshTag_MetaData), NewProp_Var_StaticMeshTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Var_HeadBoneName = { "Var_HeadBoneName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(AUck_InternalCharacterCameraTool, Var_HeadBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Var_HeadBoneName_MetaData), NewProp_Var_HeadBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_StaticMeshTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Var_HeadBoneName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AUck_InternalCharacterCameraTool Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AUck_InternalCharacterCameraTool,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool;
UClass* Z_Construct_UClass_AUck_InternalCharacterCameraTool(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AUck_InternalCharacterCameraTool;
		if (!Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Uck_InternalCharacterCameraTool"),
				Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool.InnerSingleton,
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
		return Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AUck_InternalCharacterCameraTool);
AUck_InternalCharacterCameraTool::~AUck_InternalCharacterCameraTool() {}
// ********** End Class AUck_InternalCharacterCameraTool *******************************************

// ********** Begin Class ACharacterCameraTool_Final ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ACharacterCameraTool_Final_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Uck/CharacterTools/CharacterCameraTool_CA.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Uck/CharacterTools/CharacterCameraTool_CA.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACharacterCameraTool_Final constinit property declarations ***************
// ********** End Class ACharacterCameraTool_Final constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterCameraTool_Final>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AUck_InternalCharacterCameraTool,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ACharacterCameraTool_Final,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ACharacterCameraTool_Final;
UClass* Z_Construct_UClass_ACharacterCameraTool_Final(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ACharacterCameraTool_Final;
		if (!Z_Registration_Info_UClass_ACharacterCameraTool_Final.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CharacterCameraTool_Final"),
				Z_Registration_Info_UClass_ACharacterCameraTool_Final.InnerSingleton,
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
		return Z_Registration_Info_UClass_ACharacterCameraTool_Final.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ACharacterCameraTool_Final.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterCameraTool_Final.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterCameraTool_Final.OuterSingleton;
}
#undef UHT_STATICS
ACharacterCameraTool_Final::ACharacterCameraTool_Final() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACharacterCameraTool_Final);
ACharacterCameraTool_Final::~ACharacterCameraTool_Final() {}
// ********** End Class ACharacterCameraTool_Final *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CharacterTools_CharacterCameraTool_CA_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUck_InternalCharacterCameraTool, TEXT("AUck_InternalCharacterCameraTool"), &Z_Registration_Info_UClass_AUck_InternalCharacterCameraTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUck_InternalCharacterCameraTool), 4256778850U) },
		{ Z_Construct_UClass_ACharacterCameraTool_Final, TEXT("ACharacterCameraTool_Final"), &Z_Registration_Info_UClass_ACharacterCameraTool_Final, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterCameraTool_Final), 1323836955U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_CharacterTools_CharacterCameraTool_CA_h__Script_Uck_86fca9ec4037d8625068598064ae58a66bf44607{
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
