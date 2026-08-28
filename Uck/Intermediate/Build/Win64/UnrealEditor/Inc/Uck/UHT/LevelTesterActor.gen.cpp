// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uck/Leveling/LevelTesterActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLevelTesterActor() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_ALevelAgent_Final(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_ALevelTesterActor_Final(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_AUck_InternalLevelTesterActor(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_ALevelTesterActor_Final(ETypeConstructPhase);
UCK_API UClass* Z_Construct_UClass_AUck_InternalLevelTesterActor(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AUck_InternalLevelTesterActor ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AUck_InternalLevelTesterActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/Leveling/LevelTesterActor.h" },
		{ "ModuleRelativePath", "Public/Uck/Leveling/LevelTesterActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AUck_InternalLevelTesterActor constinit property declarations ************
// ********** End Class AUck_InternalLevelTesterActor constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUck_InternalLevelTesterActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ALevelAgent_Final,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AUck_InternalLevelTesterActor,
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
FClassRegistrationInfo Z_Registration_Info_UClass_AUck_InternalLevelTesterActor;
UClass* Z_Construct_UClass_AUck_InternalLevelTesterActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AUck_InternalLevelTesterActor;
		if (!Z_Registration_Info_UClass_AUck_InternalLevelTesterActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Uck_InternalLevelTesterActor"),
				Z_Registration_Info_UClass_AUck_InternalLevelTesterActor.InnerSingleton,
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
		return Z_Registration_Info_UClass_AUck_InternalLevelTesterActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AUck_InternalLevelTesterActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUck_InternalLevelTesterActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AUck_InternalLevelTesterActor.OuterSingleton;
}
#undef UHT_STATICS
AUck_InternalLevelTesterActor::AUck_InternalLevelTesterActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AUck_InternalLevelTesterActor);
AUck_InternalLevelTesterActor::~AUck_InternalLevelTesterActor() {}
// ********** End Class AUck_InternalLevelTesterActor **********************************************

// ********** Begin Class ALevelTesterActor_Final **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ALevelTesterActor_Final_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Uck/Leveling/LevelTesterActor.h" },
		{ "ModuleRelativePath", "Public/Uck/Leveling/LevelTesterActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALevelTesterActor_Final constinit property declarations ******************
// ********** End Class ALevelTesterActor_Final constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelTesterActor_Final>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AUck_InternalLevelTesterActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Uck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ALevelTesterActor_Final,
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
FClassRegistrationInfo Z_Registration_Info_UClass_ALevelTesterActor_Final;
UClass* Z_Construct_UClass_ALevelTesterActor_Final(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ALevelTesterActor_Final;
		if (!Z_Registration_Info_UClass_ALevelTesterActor_Final.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LevelTesterActor_Final"),
				Z_Registration_Info_UClass_ALevelTesterActor_Final.InnerSingleton,
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
		return Z_Registration_Info_UClass_ALevelTesterActor_Final.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ALevelTesterActor_Final.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelTesterActor_Final.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelTesterActor_Final.OuterSingleton;
}
#undef UHT_STATICS
ALevelTesterActor_Final::ALevelTesterActor_Final() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALevelTesterActor_Final);
ALevelTesterActor_Final::~ALevelTesterActor_Final() {}
// ********** End Class ALevelTesterActor_Final ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_Leveling_LevelTesterActor_h__Script_Uck_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUck_InternalLevelTesterActor, TEXT("AUck_InternalLevelTesterActor"), &Z_Registration_Info_UClass_AUck_InternalLevelTesterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUck_InternalLevelTesterActor), 2036629224U) },
		{ Z_Construct_UClass_ALevelTesterActor_Final, TEXT("ALevelTesterActor_Final"), &Z_Registration_Info_UClass_ALevelTesterActor_Final, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelTesterActor_Final), 592512934U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RND_Multiplayer_Plugins_Uck_Source_Uck_Public_Uck_Leveling_LevelTesterActor_h__Script_Uck_0b1c44fad976a95cd4cb9b1e4e316ca947fa4725{
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
