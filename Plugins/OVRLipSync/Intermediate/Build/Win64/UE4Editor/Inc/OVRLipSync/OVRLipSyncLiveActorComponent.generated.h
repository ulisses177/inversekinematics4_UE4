// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OVRLIPSYNC_OVRLipSyncLiveActorComponent_generated_h
#error "OVRLipSyncLiveActorComponent.generated.h already included, missing '#pragma once' in OVRLipSyncLiveActorComponent.h"
#endif
#define OVRLIPSYNC_OVRLipSyncLiveActorComponent_generated_h

#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnVoiceCaptureTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnVoiceCaptureTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeedAudio) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FeedAudio(Z_Param_Out_AudioData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(); \
		P_NATIVE_END; \
	}


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnVoiceCaptureTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnVoiceCaptureTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFeedAudio) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_AudioData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FeedAudio(Z_Param_Out_AudioData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(); \
		P_NATIVE_END; \
	}


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponent(); \
	friend struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncActorComponent, UOVRLipSyncActorComponentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponent)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponent(); \
	friend struct Z_Construct_UClass_UOVRLipSyncActorComponent_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncActorComponent, UOVRLipSyncActorComponentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponent)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOVRLipSyncActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncActorComponent(UOVRLipSyncActorComponent&&); \
	NO_API UOVRLipSyncActorComponent(const UOVRLipSyncActorComponent&); \
public:


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncActorComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncActorComponent(UOVRLipSyncActorComponent&&); \
	NO_API UOVRLipSyncActorComponent(const UOVRLipSyncActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncActorComponent)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_PRIVATE_PROPERTY_OFFSET
#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_40_PROLOG
#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_RPC_WRAPPERS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_INCLASS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_PRIVATE_PROPERTY_OFFSET \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_INCLASS_NO_PURE_DECLS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncLiveActorComponent_h


#define FOREACH_ENUM_OVRLIPSYNCPROVIDERKIND(op) \
	op(OVRLipSyncProviderKind::Original) \
	op(OVRLipSyncProviderKind::Enhanced) \
	op(OVRLipSyncProviderKind::EnhancedWithLaughter) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
