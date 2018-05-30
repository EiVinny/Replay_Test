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
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyGameInstance.h" },
				{ "ModuleRelativePath", "MyGameInstance.h" },
				{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FS_ReplayInfo\n{\n       GENERATED_USTRUCT_BODY()\n\n               UPROPERTY(BlueprintReadOnly)\n                       FString ReplayName;\n\n               UPROPERTY(BlueprintReadOnly)\n                       FString FriendlyName;\n\n               UPROPERTY(BlueprintReadOnly)\n                       FDateTime Timestamp;\n\n               UPROPERTY(BlueprintReadOnly)\n                       int32 LengthInMS;\n\n               UPROPERTY(BlueprintReadOnly)\n                       bool bIsValid;\n\n       FS_ReplayInfo(FString NewName, FString NewFriendlyName, FDateTime NewTimestamp, int32 NewLengthInMS)\n       {\n               ReplayName = NewName;\n               FriendlyName = NewFriendlyName;\n               Timestamp = NewTimestamp;\n               LengthInMS = NewLengthInMS;\n               bIsValid = true;\n       }\n\n       FS_ReplayInfo()\n       {\n               ReplayName = \"Replay\";\n               FriendlyName = \"Replay\";\n               Timestamp = FDateTime::MinValue();\n               LengthInMS = 0;\n               bIsValid = false;\n       }\n};" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyGameInstance::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100088u,
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
	IMPLEMENT_CLASS(UMyGameInstance, 46237177);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
