// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PJTASK6_TaskActor_generated_h
#error "TaskActor.generated.h already included, missing '#pragma once' in TaskActor.h"
#endif
#define PJTASK6_TaskActor_generated_h

#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationSpeed); \
	DECLARE_FUNCTION(execResetActorPosition);


#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATaskActor(); \
	friend struct Z_Construct_UClass_ATaskActor_Statics; \
public: \
	DECLARE_CLASS(ATaskActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PJTask6"), NO_API) \
	DECLARE_SERIALIZER(ATaskActor)


#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATaskActor(ATaskActor&&); \
	ATaskActor(const ATaskActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATaskActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATaskActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATaskActor) \
	NO_API virtual ~ATaskActor();


#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_10_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PJTASK6_API UClass* StaticClass<class ATaskActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
