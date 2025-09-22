// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PJTASK6_MActor_generated_h
#error "MActor.generated.h already included, missing '#pragma once' in MActor.h"
#endif
#define PJTASK6_MActor_generated_h

#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRotationSpeed); \
	DECLARE_FUNCTION(execResetActorPosition);


#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMActor(); \
	friend struct Z_Construct_UClass_AMActor_Statics; \
public: \
	DECLARE_CLASS(AMActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PJTask6"), NO_API) \
	DECLARE_SERIALIZER(AMActor)


#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMActor(AMActor&&); \
	AMActor(const AMActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMActor) \
	NO_API virtual ~AMActor();


#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_7_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PJTASK6_API UClass* StaticClass<class AMActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_MActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
