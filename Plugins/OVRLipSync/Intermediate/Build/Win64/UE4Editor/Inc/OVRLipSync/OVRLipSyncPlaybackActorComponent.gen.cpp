// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSync/Public/OVRLipSyncPlaybackActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncPlaybackActorComponent() {}
// Cross Module References
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister();
// End Cross Module References
	void UOVRLipSyncPlaybackActorComponent::StaticRegisterNativesUOVRLipSyncPlaybackActorComponent()
	{
		UClass* Class = UOVRLipSyncPlaybackActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Start", &UOVRLipSyncPlaybackActorComponent::execStart },
			{ "Stop", &UOVRLipSyncPlaybackActorComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics
	{
		struct OVRLipSyncPlaybackActorComponent_eventStart_Parms
		{
			UAudioComponent* InAudioComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InAudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(OVRLipSyncPlaybackActorComponent_eventStart_Parms, InAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::NewProp_InAudioComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
		{ "Tooltip", "Start playback of the canned sequence synchronized with AudioComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, "Start", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(OVRLipSyncPlaybackActorComponent_eventStart_Parms), Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_NoRegister()
	{
		return UOVRLipSyncPlaybackActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Start, "Start" }, // 1598846682
		{ &Z_Construct_UFunction_UOVRLipSyncPlaybackActorComponent_Stop, "Stop" }, // 2534430714
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncPlaybackActorComponent.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "OVRLipSyncPlaybackActorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AudioComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UOVRLipSyncPlaybackActorComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "OVRLipSyncPlaybackActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncPlaybackActorComponent.h" },
		{ "Tooltip", "LipSync Sequence to be played" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::Object, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UOVRLipSyncPlaybackActorComponent, Sequence), Z_Construct_UClass_UOVRLipSyncFrameSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_AudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncPlaybackActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::ClassParams = {
		&UOVRLipSyncPlaybackActorComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVRLipSyncPlaybackActorComponent, 3985136458);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVRLipSyncPlaybackActorComponent(Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent, &UOVRLipSyncPlaybackActorComponent::StaticClass, TEXT("/Script/OVRLipSync"), TEXT("UOVRLipSyncPlaybackActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncPlaybackActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
