// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
#ifdef OVRLIPSYNC_OVRLipSyncPlaybackActorComponent_generated_h
#error "OVRLipSyncPlaybackActorComponent.generated.h already included, missing '#pragma once' in OVRLipSyncPlaybackActorComponent.h"
#endif
#define OVRLIPSYNC_OVRLipSyncPlaybackActorComponent_generated_h

#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_RPC_WRAPPERS \
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
		P_GET_OBJECT(UAudioComponent,Z_Param_InAudioComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(Z_Param_InAudioComponent); \
		P_NATIVE_END; \
	}


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
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
		P_GET_OBJECT(UAudioComponent,Z_Param_InAudioComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Start(Z_Param_InAudioComponent); \
		P_NATIVE_END; \
	}


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncPlaybackActorComponent(); \
	friend struct Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncPlaybackActorComponent, UOVRLipSyncActorComponentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncPlaybackActorComponent)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUOVRLipSyncPlaybackActorComponent(); \
	friend struct Z_Construct_UClass_UOVRLipSyncPlaybackActorComponent_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncPlaybackActorComponent, UOVRLipSyncActorComponentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncPlaybackActorComponent)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncPlaybackActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOVRLipSyncPlaybackActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncPlaybackActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncPlaybackActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncPlaybackActorComponent(UOVRLipSyncPlaybackActorComponent&&); \
	NO_API UOVRLipSyncPlaybackActorComponent(const UOVRLipSyncPlaybackActorComponent&); \
public:


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncPlaybackActorComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncPlaybackActorComponent(UOVRLipSyncPlaybackActorComponent&&); \
	NO_API UOVRLipSyncPlaybackActorComponent(const UOVRLipSyncPlaybackActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncPlaybackActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncPlaybackActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncPlaybackActorComponent)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_PRIVATE_PROPERTY_OFFSET
#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_32_PROLOG
#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_RPC_WRAPPERS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_INCLASS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_INCLASS_NO_PURE_DECLS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncPlaybackActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
