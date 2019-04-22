// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef OVRLIPSYNC_OVRLipSyncActorComponentBase_generated_h
#error "OVRLipSyncActorComponentBase.generated.h already included, missing '#pragma once' in OVRLipSyncActorComponentBase.h"
#endif
#define OVRLIPSYNC_OVRLipSyncActorComponentBase_generated_h

#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_31_DELEGATE \
static inline void FOVRLipSyncVisemesDataReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OVRLipSyncVisemesDataReadyDelegate) \
{ \
	OVRLipSyncVisemesDataReadyDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssignVisemesToMorphTargets) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_MorphTargetNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignVisemesToMorphTargets(Z_Param_Mesh,Z_Param_Out_MorphTargetNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaughterScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLaughterScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisemeNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetVisemeNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisemes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetVisemes(); \
		P_NATIVE_END; \
	}


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssignVisemesToMorphTargets) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_MorphTargetNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AssignVisemesToMorphTargets(Z_Param_Mesh,Z_Param_Out_MorphTargetNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLaughterScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLaughterScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisemeNames) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetVisemeNames(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVisemes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<float>*)Z_Param__Result=P_THIS->GetVisemes(); \
		P_NATIVE_END; \
	}


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponentBase(); \
	friend struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncActorComponentBase, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponentBase)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUOVRLipSyncActorComponentBase(); \
	friend struct Z_Construct_UClass_UOVRLipSyncActorComponentBase_Statics; \
public: \
	DECLARE_CLASS(UOVRLipSyncActorComponentBase, UActorComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OVRLipSync"), NO_API) \
	DECLARE_SERIALIZER(UOVRLipSyncActorComponentBase)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOVRLipSyncActorComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOVRLipSyncActorComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncActorComponentBase(UOVRLipSyncActorComponentBase&&); \
	NO_API UOVRLipSyncActorComponentBase(const UOVRLipSyncActorComponentBase&); \
public:


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOVRLipSyncActorComponentBase(UOVRLipSyncActorComponentBase&&); \
	NO_API UOVRLipSyncActorComponentBase(const UOVRLipSyncActorComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOVRLipSyncActorComponentBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOVRLipSyncActorComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOVRLipSyncActorComponentBase)


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_PRIVATE_PROPERTY_OFFSET
#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_33_PROLOG
#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_PRIVATE_PROPERTY_OFFSET \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_PRIVATE_PROPERTY_OFFSET \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_INCLASS_NO_PURE_DECLS \
	OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID OVRLipSyncDemo_Plugins_OVRLipSync_Source_OVRLipSync_Public_OVRLipSyncActorComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
