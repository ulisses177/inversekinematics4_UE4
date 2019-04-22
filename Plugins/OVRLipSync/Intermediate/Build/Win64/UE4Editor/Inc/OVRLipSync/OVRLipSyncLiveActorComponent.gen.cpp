// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OVRLipSync/Public/OVRLipSyncLiveActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOVRLipSyncLiveActorComponent() {}
// Cross Module References
	OVRLIPSYNC_API UEnum* Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind();
	UPackage* Z_Construct_UPackage__Script_OVRLipSync();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponent();
	OVRLIPSYNC_API UClass* Z_Construct_UClass_UOVRLipSyncActorComponentBase();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Start();
	OVRLIPSYNC_API UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop();
// End Cross Module References
	static UEnum* OVRLipSyncProviderKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind, Z_Construct_UPackage__Script_OVRLipSync(), TEXT("OVRLipSyncProviderKind"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_OVRLipSyncProviderKind(OVRLipSyncProviderKind_StaticEnum, TEXT("/Script/OVRLipSync"), TEXT("OVRLipSyncProviderKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_CRC() { return 1037339084U; }
	UEnum* Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OVRLipSync();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("OVRLipSyncProviderKind"), 0, Get_Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OVRLipSyncProviderKind::Original", (int64)OVRLipSyncProviderKind::Original },
				{ "OVRLipSyncProviderKind::Enhanced", (int64)OVRLipSyncProviderKind::Enhanced },
				{ "OVRLipSyncProviderKind::EnhancedWithLaughter", (int64)OVRLipSyncProviderKind::EnhancedWithLaughter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OVRLipSync,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"OVRLipSyncProviderKind",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"OVRLipSyncProviderKind",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UOVRLipSyncActorComponent::StaticRegisterNativesUOVRLipSyncActorComponent()
	{
		UClass* Class = UOVRLipSyncActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FeedAudio", &UOVRLipSyncActorComponent::execFeedAudio },
			{ "OnVoiceCaptureTimer", &UOVRLipSyncActorComponent::execOnVoiceCaptureTimer },
			{ "Start", &UOVRLipSyncActorComponent::execStart },
			{ "Stop", &UOVRLipSyncActorComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics
	{
		struct OVRLipSyncActorComponent_eventFeedAudio_Parms
		{
			TArray<uint8> AudioData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData = { UE4CodeGen_Private::EPropertyClass::Array, "AudioData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OVRLipSyncActorComponent_eventFeedAudio_Parms, AudioData), METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "AudioData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::NewProp_AudioData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
		{ "ToolTip", "Feed AudioBuffer containing packaged mono 16-bit signed integer PCM values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, "FeedAudio", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(OVRLipSyncActorComponent_eventFeedAudio_Parms), Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, "OnVoiceCaptureTimer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, "Start", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "LipSync" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOVRLipSyncActorComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponent_NoRegister()
	{
		return UOVRLipSyncActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableHardwareAcceleration_MetaData[];
#endif
		static void NewProp_EnableHardwareAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableHardwareAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProviderKind;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProviderKind_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOVRLipSyncActorComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OVRLipSync,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_FeedAudio, "FeedAudio" }, // 1613052511
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_OnVoiceCaptureTimer, "OnVoiceCaptureTimer" }, // 1618595811
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_Start, "Start" }, // 1751755906
		{ &Z_Construct_UFunction_UOVRLipSyncActorComponent_Stop, "Stop" }, // 2352807113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OVRLipSyncLiveActorComponent.h" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_MetaData[] = {
		{ "Category", "OVRLipSyncActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
		{ "ToolTip", "Enable hardware acceleration on supported platforms" },
	};
#endif
	void Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_SetBit(void* Obj)
	{
		((UOVRLipSyncActorComponent*)Obj)->EnableHardwareAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableHardwareAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOVRLipSyncActorComponent), &Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_MetaData[] = {
		{ "Category", "OVRLipSyncActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind = { UE4CodeGen_Private::EPropertyClass::Enum, "ProviderKind", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UOVRLipSyncActorComponent, ProviderKind), Z_Construct_UEnum_OVRLipSync_OVRLipSyncProviderKind, METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "OVRLipSyncActorComponent" },
		{ "ModuleRelativePath", "Public/OVRLipSyncLiveActorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate = { UE4CodeGen_Private::EPropertyClass::Int, "SampleRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UOVRLipSyncActorComponent, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_EnableHardwareAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_ProviderKind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::NewProp_SampleRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOVRLipSyncActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::ClassParams = {
		&UOVRLipSyncActorComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOVRLipSyncActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOVRLipSyncActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOVRLipSyncActorComponent, 3904013457);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOVRLipSyncActorComponent(Z_Construct_UClass_UOVRLipSyncActorComponent, &UOVRLipSyncActorComponent::StaticClass, TEXT("/Script/OVRLipSync"), TEXT("UOVRLipSyncActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOVRLipSyncActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
