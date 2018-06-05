// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REPLAYTEST_ReplayTestCharacter_generated_h
#error "ReplayTestCharacter.generated.h already included, missing '#pragma once' in ReplayTestCharacter.h"
#endif
#define REPLAYTEST_ReplayTestCharacter_generated_h

#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_RPC_WRAPPERS
#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReplayTestCharacter(); \
	friend REPLAYTEST_API class UClass* Z_Construct_UClass_AReplayTestCharacter(); \
public: \
	DECLARE_CLASS(AReplayTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ReplayTest"), NO_API) \
	DECLARE_SERIALIZER(AReplayTestCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAReplayTestCharacter(); \
	friend REPLAYTEST_API class UClass* Z_Construct_UClass_AReplayTestCharacter(); \
public: \
	DECLARE_CLASS(AReplayTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ReplayTest"), NO_API) \
	DECLARE_SERIALIZER(AReplayTestCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReplayTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReplayTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplayTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplayTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplayTestCharacter(AReplayTestCharacter&&); \
	NO_API AReplayTestCharacter(const AReplayTestCharacter&); \
public:


#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReplayTestCharacter(AReplayTestCharacter&&); \
	NO_API AReplayTestCharacter(const AReplayTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReplayTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReplayTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReplayTestCharacter)


#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AReplayTestCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AReplayTestCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AReplayTestCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AReplayTestCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AReplayTestCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AReplayTestCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AReplayTestCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AReplayTestCharacter, L_MotionController); }


#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_11_PROLOG
#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_RPC_WRAPPERS \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_INCLASS \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ReplayTest_Source_ReplayTest_ReplayTestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ReplayTest_Source_ReplayTest_ReplayTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
