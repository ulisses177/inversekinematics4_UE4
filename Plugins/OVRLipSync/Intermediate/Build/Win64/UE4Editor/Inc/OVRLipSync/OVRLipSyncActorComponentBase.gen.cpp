// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSync/Public/OVRLipSyncActorComponentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncActorComponentBase() {}
// Cross Module References
	OVRLIPSYNC_API UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OVRLipSync, "OVRLipSyncVisemesDataReadyDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOVRLipSyncActorComponentBase::StaticRegisterNativesUOVRLipSyncActorComponentBase()
	{
		UClass* Class = UOVRLipSyncActorComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignVisemesToMorphTargets", &UOVRLipSyncActorComponentBase::execAssignVisemesToMorphTargets },
			{ "GetLaughterScore", &UOVRLipSyncActorComponentBase::execGetLaughterScore },
			{ "GetVisemeNames", &UOVRLipSyncActorComponentBase::execGetVisemeNames },
			{ "GetVisemes", &UOVRLipSyncActorComponentBase::execGetVisemes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics
	{
		struct OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms
		{
			USkeletalMeshComponent* Mesh;
			TArray<FString> MorphTargetNames;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MorphTargetNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MorphTargetNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames = { UE4CodeGen_Private::EPropertyClass::Array, "MorphTargetNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms, MorphTargetNames), METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "MorphTargetNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_MorphTargetNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Set skeletal mesh morph targets to the predicted viseme scores" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, "AssignVisemesToMorphTargets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(OVRLipSyncActorComponentBase_eventAssignVisemesToMorphTargets_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics
	{
		struct OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms
		{
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000582, 1, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Returns predicted laughter probability" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, "GetLaughterScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(OVRLipSyncActorComponentBase_eventGetLaughterScore_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics
	{
		struct OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms
		{
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Returns list of visme names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, "GetVisemeNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(OVRLipSyncActorComponentBase_eventGetVisemeNames_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics
	{
		struct OVRLipSyncActorComponentBase_eventGetVisemes_Parms
		{
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponentBase_eventGetVisemes_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Returns last predicted viseme scores" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase, "GetVisemes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(OVRLipSyncActorComponentBase_eventGetVisemes_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase_NoRegister()
	{
		return UOVRLipSyncActorComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVisemesReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVisemesReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets, "AssignVisemesToMorphTargets" }, // 2947667469
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetLaughterScore, "GetLaughterScore" }, // 772608540
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemeNames, "GetVisemeNames" }, // 2009086608
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponentBase_GetVisemes, "GetVisemes" }, // 2643775356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncActorComponentBase.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady_MetaData[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncActorComponentBase.h" },
		{ "Tooltip", "Event triggered when new prediction is ready" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnVisemesReady", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOVRLipSyncActorComponentBase, OnVisemesReady), Z_Construct_UDelegateFunction_OVRLipSync_OVRLipSyncVisemesDataReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::NewProp_OnVisemesReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncActorComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::ClassParams = {
		&UOVRLipSyncActorComponentBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVRLipSyncActorComponentBase, 822910095);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVRLipSyncActorComponentBase(Z_Construct_UClass_UOVRLipSyncActorComponentBase, &UOVRLipSyncActorComponentBase::StaticClass, TEXT("/Script/OVRLipSync"), TEXT("UOVRLipSyncActorComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncActorComponentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
