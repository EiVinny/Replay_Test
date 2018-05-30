// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FS_ReplayInfo();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_DeleteReplay();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_FindReplays();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_RenameReplay();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP();
	MYPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP();
// End Cross Module References
class UScriptStruct* FS_ReplayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_ReplayInfo, Z_Construct_UPackage__Script_MyProject(), TEXT("S_ReplayInfo"), sizeof(FS_ReplayInfo), Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS_ReplayInfo(FS_ReplayInfo::StaticStruct, TEXT("/Script/MyProject"), TEXT("S_ReplayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject_StaticRegisterNativesFS_ReplayInfo
{
	FScriptStruct_MyProject_StaticRegisterNativesFS_ReplayInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S_ReplayInfo")),new UScriptStruct::TCppStructOps<FS_ReplayInfo>);
	}
} ScriptStruct_MyProject_StaticRegisterNativesFS_ReplayInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FS_ReplayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S_ReplayInfo"), sizeof(FS_ReplayInfo), Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_ReplayInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
				{ "Category", "S_ReplayInfo" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			auto NewProp_bIsValid_SetBit = [](void* Obj){ ((FS_ReplayInfo*)Obj)->bIsValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FS_ReplayInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsValid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsValid_MetaData, ARRAY_COUNT(NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthInMS_MetaData[] = {
				{ "Category", "S_ReplayInfo" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LengthInMS = { UE4CodeGen_Private::EPropertyClass::Int, "LengthInMS", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, LengthInMS), METADATA_PARAMS(NewProp_LengthInMS_MetaData, ARRAY_COUNT(NewProp_LengthInMS_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
				{ "Category", "S_ReplayInfo" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp = { UE4CodeGen_Private::EPropertyClass::Struct, "Timestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(NewProp_Timestamp_MetaData, ARRAY_COUNT(NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
				{ "Category", "S_ReplayInfo" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName = { UE4CodeGen_Private::EPropertyClass::Str, "FriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, FriendlyName), METADATA_PARAMS(NewProp_FriendlyName_MetaData, ARRAY_COUNT(NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
				{ "Category", "S_ReplayInfo" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FS_ReplayInfo, ReplayName), METADATA_PARAMS(NewProp_ReplayName_MetaData, ARRAY_COUNT(NewProp_ReplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsValid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LengthInMS,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Timestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FriendlyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplayName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"S_ReplayInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FS_ReplayInfo),
				alignof(FS_ReplayInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS_ReplayInfo_CRC() { return 3850933171U; }
	static FName NAME_UMyGameInstance_BP_OnFindReplaysComplete = FName(TEXT("BP_OnFindReplaysComplete"));
	void UMyGameInstance::BP_OnFindReplaysComplete(TArray<FS_ReplayInfo> const& AllReplays)
	{
		MyGameInstance_eventBP_OnFindReplaysComplete_Parms Parms;
		Parms.AllReplays=AllReplays;
		ProcessEvent(FindFunctionChecked(NAME_UMyGameInstance_BP_OnFindReplaysComplete),&Parms);
	}
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
		UClass* Class = UMyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteReplay", &UMyGameInstance::execDeleteReplay },
			{ "FindReplays", &UMyGameInstance::execFindReplays },
			{ "PlayReplayFromBP", &UMyGameInstance::execPlayReplayFromBP },
			{ "RenameReplay", &UMyGameInstance::execRenameReplay },
			{ "StartRecordingReplayFromBP", &UMyGameInstance::execStartRecordingReplayFromBP },
			{ "StopRecordingReplayFromBP", &UMyGameInstance::execStopRecordingReplayFromBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllReplays_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllReplays = { UE4CodeGen_Private::EPropertyClass::Array, "AllReplays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventBP_OnFindReplaysComplete_Parms, AllReplays), METADATA_PARAMS(NewProp_AllReplays_MetaData, ARRAY_COUNT(NewProp_AllReplays_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllReplays_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AllReplays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FS_ReplayInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllReplays,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllReplays_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replays" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "BP_OnFindReplaysComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08480800, sizeof(MyGameInstance_eventBP_OnFindReplaysComplete_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_DeleteReplay()
	{
		struct MyGameInstance_eventDeleteReplay_Parms
		{
			FString ReplayName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventDeleteReplay_Parms, ReplayName), METADATA_PARAMS(NewProp_ReplayName_MetaData, ARRAY_COUNT(NewProp_ReplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplayName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replays" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
				{ "ToolTip", "Delete a previously recorded replay" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "DeleteReplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventDeleteReplay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_FindReplays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replays" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
				{ "ToolTip", "Start looking for/finding replays on the hard drive" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "FindReplays", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP()
	{
		struct MyGameInstance_eventPlayReplayFromBP_Parms
		{
			FString ReplayName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventPlayReplayFromBP_Parms, ReplayName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplayName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replays" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
				{ "ToolTip", "Start playback for a previously recorded Replay, from blueprint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "PlayReplayFromBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventPlayReplayFromBP_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_RenameReplay()
	{
		struct MyGameInstance_eventRenameReplay_Parms
		{
			FString ReplayName;
			FString NewFriendlyReplayName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFriendlyReplayName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewFriendlyReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "NewFriendlyReplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventRenameReplay_Parms, NewFriendlyReplayName), METADATA_PARAMS(NewProp_NewFriendlyReplayName_MetaData, ARRAY_COUNT(NewProp_NewFriendlyReplayName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventRenameReplay_Parms, ReplayName), METADATA_PARAMS(NewProp_ReplayName_MetaData, ARRAY_COUNT(NewProp_ReplayName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFriendlyReplayName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplayName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replays" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
				{ "ToolTip", "Apply a new custom name to the replay (for UI only)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "RenameReplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventRenameReplay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP()
	{
		struct MyGameInstance_eventStartRecordingReplayFromBP_Parms
		{
			FString ReplayName;
			FString FriendlyName;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName = { UE4CodeGen_Private::EPropertyClass::Str, "FriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventStartRecordingReplayFromBP_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ReplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MyGameInstance_eventStartRecordingReplayFromBP_Parms, ReplayName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FriendlyName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplayName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replays" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
				{ "ToolTip", "Start recording a replay from blueprint. ReplayName = Name of file on disk, FriendlyName = Name of replay in UI" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "StartRecordingReplayFromBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyGameInstance_eventStartRecordingReplayFromBP_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Replays" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
				{ "ToolTip", "Start recording a running replay and save it, from blueprint." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, "StopRecordingReplayFromBP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMyGameInstance_BP_OnFindReplaysComplete, "BP_OnFindReplaysComplete" }, // 134491702
				{ &Z_Construct_UFunction_UMyGameInstance_DeleteReplay, "DeleteReplay" }, // 714672514
				{ &Z_Construct_UFunction_UMyGameInstance_FindReplays, "FindReplays" }, // 473119847
				{ &Z_Construct_UFunction_UMyGameInstance_PlayReplayFromBP, "PlayReplayFromBP" }, // 1627667459
				{ &Z_Construct_UFunction_UMyGameInstance_RenameReplay, "RenameReplay" }, // 2231403288
				{ &Z_Construct_UFunction_UMyGameInstance_StartRecordingReplayFromBP, "StartRecordingReplayFromBP" }, // 1430908077
				{ &Z_Construct_UFunction_UMyGameInstance_StopRecordingReplayFromBP, "StopRecordingReplayFromBP" }, // 2774695020
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyGameInstance.h" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UMyGameInstance, 3400400311);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
