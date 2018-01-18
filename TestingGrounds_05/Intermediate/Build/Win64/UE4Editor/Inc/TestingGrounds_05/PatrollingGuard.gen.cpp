// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PatrollingGuard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrollingGuard() {}
// Cross Module References
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_APatrollingGuard_NoRegister();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_APatrollingGuard();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_ATP_ThirdPersonCharacter();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds_05();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APatrollingGuard::StaticRegisterNativesAPatrollingGuard()
	{
	}
	UClass* Z_Construct_UClass_APatrollingGuard_NoRegister()
	{
		return APatrollingGuard::StaticClass();
	}
	UClass* Z_Construct_UClass_APatrollingGuard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATP_ThirdPersonCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds_05,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "PatrollingGuard.h" },
				{ "ModuleRelativePath", "Public/PatrollingGuard.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[] = {
				{ "Category", "Patrol Route CPP" },
				{ "ModuleRelativePath", "Public/PatrollingGuard.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints = { UE4CodeGen_Private::EPropertyClass::Array, "PatrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000801, 1, nullptr, STRUCT_OFFSET(APatrollingGuard, PatrolPoints), METADATA_PARAMS(NewProp_PatrolPoints_MetaData, ARRAY_COUNT(NewProp_PatrolPoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PatrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PatrolPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PatrolPoints_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APatrollingGuard>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APatrollingGuard::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrollingGuard, 1470268323);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrollingGuard(Z_Construct_UClass_APatrollingGuard, &APatrollingGuard::StaticClass, TEXT("/Script/TestingGrounds_05"), TEXT("APatrollingGuard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrollingGuard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
