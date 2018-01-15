// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestingGrounds_05GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingGrounds_05GameMode() {}
// Cross Module References
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_ATestingGrounds_05GameMode_NoRegister();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_ATestingGrounds_05GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds_05();
// End Cross Module References
	void ATestingGrounds_05GameMode::StaticRegisterNativesATestingGrounds_05GameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestingGrounds_05GameMode_NoRegister()
	{
		return ATestingGrounds_05GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestingGrounds_05GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds_05,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TestingGrounds_05GameMode.h" },
				{ "ModuleRelativePath", "TestingGrounds_05GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATestingGrounds_05GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATestingGrounds_05GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestingGrounds_05GameMode, 683024937);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestingGrounds_05GameMode(Z_Construct_UClass_ATestingGrounds_05GameMode, &ATestingGrounds_05GameMode::StaticClass, TEXT("/Script/TestingGrounds_05"), TEXT("ATestingGrounds_05GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingGrounds_05GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
