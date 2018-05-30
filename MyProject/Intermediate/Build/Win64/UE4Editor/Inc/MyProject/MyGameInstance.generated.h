// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ReplayInfo;
#ifdef MYPROJECT_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define MYPROJECT_MyGameInstance_generated_h

#define MyProject_Source_MyProject_MyGameInstance_h_14_GENERATED_BODY \
	friend MYPROJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FS_ReplayInfo(); \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


#define MyProject_Source_MyProject_MyGameInstance_h_56_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewFriendlyReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameReplay(Z_Param_ReplayName,Z_Param_NewFriendlyReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindReplays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindReplays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReplayFromBP(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingReplayFromBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecordingReplayFromBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecordingReplayFromBP(Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyGameInstance_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeleteReplay(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameReplay) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewFriendlyReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RenameReplay(Z_Param_ReplayName,Z_Param_NewFriendlyReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindReplays) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindReplays(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReplayFromBP(Z_Param_ReplayName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingReplayFromBP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopRecordingReplayFromBP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingReplayFromBP) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FriendlyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRecordingReplayFromBP(Z_Param_ReplayName,Z_Param_FriendlyName); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyGameInstance_h_56_EVENT_PARMS \
	struct MyGameInstance_eventBP_OnFindReplaysComplete_Parms \
	{ \
		TArray<FS_ReplayInfo> AllReplays; \
	};


#define MyProject_Source_MyProject_MyGameInstance_h_56_CALLBACK_WRAPPERS
#define MyProject_Source_MyProject_MyGameInstance_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UMyGameInstance(); \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyGameInstance_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_UMyGameInstance(); \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_MyGameInstance_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define MyProject_Source_MyProject_MyGameInstance_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define MyProject_Source_MyProject_MyGameInstance_h_56_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_MyGameInstance_h_51_PROLOG \
	MyProject_Source_MyProject_MyGameInstance_h_56_EVENT_PARMS


#define MyProject_Source_MyProject_MyGameInstance_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyGameInstance_h_56_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyGameInstance_h_56_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyGameInstance_h_56_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_MyGameInstance_h_56_INCLASS \
	MyProject_Source_MyProject_MyGameInstance_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyGameInstance_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyGameInstance_h_56_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyGameInstance_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyGameInstance_h_56_CALLBACK_WRAPPERS \
	MyProject_Source_MyProject_MyGameInstance_h_56_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyGameInstance_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
