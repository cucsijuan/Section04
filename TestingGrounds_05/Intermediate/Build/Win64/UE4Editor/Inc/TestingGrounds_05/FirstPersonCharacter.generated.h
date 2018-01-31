// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTINGGROUNDS_05_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define TESTINGGROUNDS_05_FirstPersonCharacter_generated_h

#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_RPC_WRAPPERS
#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend TESTINGGROUNDS_05_API class UClass* Z_Construct_UClass_AFirstPersonCharacter(); \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds_05"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend TESTINGGROUNDS_05_API class UClass* Z_Construct_UClass_AFirstPersonCharacter(); \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestingGrounds_05"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public:


#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonCharacter)


#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFirstPersonCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFirstPersonCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFirstPersonCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFirstPersonCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFirstPersonCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFirstPersonCharacter, L_MotionController); }


#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_12_PROLOG
#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_RPC_WRAPPERS \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_INCLASS \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_INCLASS_NO_PURE_DECLS \
	TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestingGrounds_05_Source_TestingGrounds_05_Player_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
