// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PatrolRoute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolRoute() {}
// Cross Module References
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_UPatrolRoute_NoRegister();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_UPatrolRoute();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds_05();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPatrolRoute::StaticRegisterNativesUPatrolRoute()
	{
	}
	UClass* Z_Construct_UClass_UPatrolRoute_NoRegister()
	{
		return UPatrolRoute::StaticClass();
	}
	UClass* Z_Construct_UClass_UPatrolRoute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds_05,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "PatrolRoute.h" },
				{ "ModuleRelativePath", "Public/PatrolRoute.h" },
				{ "ToolTip", "A \"Route card\" to help AI choose their next waypoint" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[] = {
				{ "Category", "Patrol Route CPP" },
				{ "ModuleRelativePath", "Public/PatrolRoute.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints = { UE4CodeGen_Private::EPropertyClass::Array, "PatrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000801, 1, nullptr, STRUCT_OFFSET(UPatrolRoute, PatrolPoints), METADATA_PARAMS(NewProp_PatrolPoints_MetaData, ARRAY_COUNT(NewProp_PatrolPoints_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PatrolPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PatrolPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PatrolPoints_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPatrolRoute>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPatrolRoute::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UPatrolRoute, 1106402549);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPatrolRoute(Z_Construct_UClass_UPatrolRoute, &UPatrolRoute::StaticClass, TEXT("/Script/TestingGrounds_05"), TEXT("UPatrolRoute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatrolRoute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
