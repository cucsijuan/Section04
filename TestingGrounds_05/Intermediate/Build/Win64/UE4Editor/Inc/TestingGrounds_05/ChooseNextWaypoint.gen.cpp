// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ChooseNextWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChooseNextWaypoint() {}
// Cross Module References
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_UChooseNextWaypoint_NoRegister();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_UChooseNextWaypoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds_05();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UChooseNextWaypoint::StaticRegisterNativesUChooseNextWaypoint()
	{
	}
	UClass* Z_Construct_UClass_UChooseNextWaypoint_NoRegister()
	{
		return UChooseNextWaypoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UChooseNextWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds_05,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ChooseNextWaypoint.h" },
				{ "ModuleRelativePath", "Public/ChooseNextWaypoint.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexKey_MetaData[] = {
				{ "Category", "Blackboard" },
				{ "ModuleRelativePath", "Public/ChooseNextWaypoint.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexKey = { UE4CodeGen_Private::EPropertyClass::Struct, "IndexKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UChooseNextWaypoint, IndexKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(NewProp_IndexKey_MetaData, ARRAY_COUNT(NewProp_IndexKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IndexKey,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UChooseNextWaypoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UChooseNextWaypoint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UChooseNextWaypoint, 571489407);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChooseNextWaypoint(Z_Construct_UClass_UChooseNextWaypoint, &UChooseNextWaypoint::StaticClass, TEXT("/Script/TestingGrounds_05"), TEXT("UChooseNextWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChooseNextWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
