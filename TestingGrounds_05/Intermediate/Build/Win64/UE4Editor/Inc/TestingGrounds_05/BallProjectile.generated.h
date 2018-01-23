// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TESTINGGROUNDS_05_BallProjectile_generated_h
#error "BallProjectile.generated.h already included, missing '#pragma once' in BallProjectile.h"
#endif
#define TESTINGGROUNDS_05_BallProjectile_generated_h

#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallProjectile(); \
	friend TESTINGGROUNDS_05_API class UClass* Z_Construct_UClass_ABallProjectile(); \
public: \
	DECLARE_CLASS(ABallProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds_05"), NO_API) \
	DECLARE_SERIALIZER(ABallProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABallProjectile(); \
	friend TESTINGGROUNDS_05_API class UClass* Z_Construct_UClass_ABallProjectile(); \
public: \
	DECLARE_CLASS(ABallProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds_05"), NO_API) \
	DECLARE_SERIALIZER(ABallProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallProjectile(ABallProjectile&&); \
	NO_API ABallProjectile(const ABallProjectile&); \
public:


#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallProjectile(ABallProjectile&&); \
	NO_API ABallProjectile(const ABallProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallProjectile)


#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABallProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABallProjectile, ProjectileMovement); }


#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_9_PROLOG
#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_RPC_WRAPPERS \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_INCLASS \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_INCLASS_NO_PURE_DECLS \
	TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestingGrounds_05_Source_TestingGrounds_05_Weapons_BallProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
