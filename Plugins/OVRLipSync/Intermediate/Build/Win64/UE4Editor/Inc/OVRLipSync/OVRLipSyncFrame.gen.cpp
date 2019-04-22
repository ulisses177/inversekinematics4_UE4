// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSync/Public/OVRLipSyncFrame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncFrame() {}
// Cross Module References
	OVRLIPSYNC_API UScriptStruct* Z_Construct_UScriptStruct_FOVRLipSyncFrame();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FOVRLipSyncFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OVRLIPSYNC_API uint32 Get_Z_Construct_UScriptStruct_FOVRLipSyncFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOVRLipSyncFrame, Z_Construct_UPackage__Script_OVRLipSync(), TEXT("OVRLipSyncFrame"), sizeof(FOVRLipSyncFrame), Get_Z_Construct_UScriptStruct_FOVRLipSyncFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOVRLipSyncFrame(FOVRLipSyncFrame::StaticStruct, TEXT("/Script/OVRLipSync"), TEXT("OVRLipSyncFrame"), false, nullptr, nullptr);
static struct FScriptStruct_OVRLipSync_StaticRegisterNativesFOVRLipSyncFrame
{
	FScriptStruct_OVRLipSync_StaticRegisterNativesFOVRLipSyncFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OVRLipSyncFrame")),new UScriptStruct::TCppStructOps<FOVRLipSyncFrame>);
	}
} ScriptStruct_OVRLipSync_StaticRegisterNativesFOVRLipSyncFrame;
	struct Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaughterScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaughterScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisemeScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisemeScores;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VisemeScores_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOVRLipSyncFrame>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore = { UE4CodeGen_Private::EPropertyClass::Float, "LaughterScore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FOVRLipSyncFrame, LaughterScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores = { UE4CodeGen_Private::EPropertyClass::Array, "VisemeScores", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FOVRLipSyncFrame, VisemeScores), METADATA_PARAMS(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "VisemeScores", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_LaughterScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::NewProp_VisemeScores_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
		nullptr,
		&NewStructOps,
		"OVRLipSyncFrame",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FOVRLipSyncFrame),
		alignof(FOVRLipSyncFrame),
		Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOVRLipSyncFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOVRLipSyncFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OVRLipSync();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OVRLipSyncFrame"), sizeof(FOVRLipSyncFrame), Get_Z_Construct_UScriptStruct_FOVRLipSyncFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOVRLipSyncFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOVRLipSyncFrame_CRC() { return 367265039U; }
	void UOVRLipSyncFrameSequence::StaticRegisterNativesUOVRLipSyncFrameSequence()
	{
	}
	UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister()
	{
		return UOVRLipSyncFrameSequence::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FrameSequence;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameSequence_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OVRLipSyncFrame.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncFrame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence = { UE4CodeGen_Private::EPropertyClass::Array, "FrameSequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UOVRLipSyncFrameSequence, FrameSequence), METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FrameSequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOVRLipSyncFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::NewProp_FrameSequence_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncFrameSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::ClassParams = {
		&UOVRLipSyncFrameSequence::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVRLipSyncFrameSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVRLipSyncFrameSequence, 2711243112);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVRLipSyncFrameSequence(Z_Construct_UClass_UOVRLipSyncFrameSequence, &UOVRLipSyncFrameSequence::StaticClass, TEXT("/Script/OVRLipSync"), TEXT("UOVRLipSyncFrameSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncFrameSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
