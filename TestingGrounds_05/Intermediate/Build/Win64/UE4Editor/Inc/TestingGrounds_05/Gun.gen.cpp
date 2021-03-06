// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Weapons/Gun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGun() {}
// Cross Module References
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_AGun_NoRegister();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_AGun();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds_05();
	TESTINGGROUNDS_05_API UFunction* Z_Construct_UFunction_AGun_OnFire();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TESTINGGROUNDS_05_API UClass* Z_Construct_UClass_ABallProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AGun::StaticRegisterNativesAGun()
	{
		UClass* Class = AGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFire", (Native)&AGun::execOnFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGun_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Actions" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
				{ "ToolTip", "Fires a projectile." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGun, "OnFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGun_NoRegister()
	{
		return AGun::StaticClass();
	}
	UClass* Z_Construct_UClass_AGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds_05,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGun_OnFire, "OnFire" }, // 3685450680
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Weapons/Gun.h" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance3P_MetaData[] = {
				{ "ModuleRelativePath", "Weapons/Gun.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance3P = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstance3P", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGun, AnimInstance3P), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(NewProp_AnimInstance3P_MetaData, ARRAY_COUNT(NewProp_AnimInstance3P_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimInstance1P_MetaData[] = {
				{ "ModuleRelativePath", "Weapons/Gun.h" },
				{ "ToolTip", "Anim Instance to use" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance1P = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstance1P", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGun, AnimInstance1P), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(NewProp_AnimInstance1P_MetaData, ARRAY_COUNT(NewProp_AnimInstance1P_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation3P_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation3P = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation3P", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AGun, FireAnimation3P), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_FireAnimation3P_MetaData, ARRAY_COUNT(NewProp_FireAnimation3P_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation1P_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
				{ "ToolTip", "AnimMontage to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation1P = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation1P", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AGun, FireAnimation1P), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_FireAnimation1P_MetaData, ARRAY_COUNT(NewProp_FireAnimation1P_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
				{ "ToolTip", "Sound to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AGun, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_FireSound_MetaData, ARRAY_COUNT(NewProp_FireSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
				{ "ToolTip", "Projectile class to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AGun, ProjectileClass), Z_Construct_UClass_ABallProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
				{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "FP_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AGun, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Weapons/Gun.h" },
				{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "FP_Gun", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000b0009, 1, nullptr, STRUCT_OFFSET(AGun, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_FP_Gun_MetaData, ARRAY_COUNT(NewProp_FP_Gun_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInstance3P,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimInstance1P,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireAnimation3P,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireAnimation1P,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FP_MuzzleLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FP_Gun,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGun>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGun::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGun, 1821613585);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGun(Z_Construct_UClass_AGun, &AGun::StaticClass, TEXT("/Script/TestingGrounds_05"), TEXT("AGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
