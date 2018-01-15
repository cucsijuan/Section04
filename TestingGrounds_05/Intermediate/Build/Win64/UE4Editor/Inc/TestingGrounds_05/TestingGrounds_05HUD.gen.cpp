// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestingGrounds_05HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingGrounds_05HUD() {}
// Cross Module References
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_ATestingGrounds_05HUD_NoRegister();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_ATestingGrounds_05HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds_05();
// End Cross Module References
	void ATestingGrounds_05HUD::StaticRegisterNativesATestingGrounds_05HUD()
	{
	}
	UClass* Z_Construct_UClass_ATestingGrounds_05HUD_NoRegister()
	{
		return ATestingGrounds_05HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestingGrounds_05HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds_05,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "TestingGrounds_05HUD.h" },
				{ "ModuleRelativePath", "TestingGrounds_05HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATestingGrounds_05HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATestingGrounds_05HUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestingGrounds_05HUD, 3496517466);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestingGrounds_05HUD(Z_Construct_UClass_ATestingGrounds_05HUD, &ATestingGrounds_05HUD::StaticClass, TEXT("/Script/TestingGrounds_05"), TEXT("ATestingGrounds_05HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingGrounds_05HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
