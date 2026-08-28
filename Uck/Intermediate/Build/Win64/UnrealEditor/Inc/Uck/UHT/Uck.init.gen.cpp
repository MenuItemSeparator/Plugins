// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUck_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	UCK_API UFunction* Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Uck;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Uck(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_Uck.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_Uck_CB__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Uck",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xE0D39B8E,
			0xA54E9570,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Uck.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Uck.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Uck(Z_Construct_UPackage__Script_Uck, TEXT("/Script/Uck"), Z_Registration_Info_UPackage__Script_Uck, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE0D39B8E, 0xA54E9570));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
