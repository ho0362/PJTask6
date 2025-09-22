// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PJTask6/Public/TaskActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PJTASK6_API UClass* Z_Construct_UClass_ATaskActor();
PJTASK6_API UClass* Z_Construct_UClass_ATaskActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_PJTask6();
// End Cross Module References

// Begin Class ATaskActor Function GetRotationSpeed
struct Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics
{
	struct TaskActor_eventGetRotationSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskActor|Properties" },
		{ "ModuleRelativePath", "Public/TaskActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskActor_eventGetRotationSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaskActor, nullptr, "GetRotationSpeed", nullptr, nullptr, Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::TaskActor_eventGetRotationSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::TaskActor_eventGetRotationSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATaskActor_GetRotationSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaskActor_GetRotationSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaskActor::execGetRotationSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRotationSpeed();
	P_NATIVE_END;
}
// End Class ATaskActor Function GetRotationSpeed

// Begin Class ATaskActor Function ResetActorPosition
struct Z_Construct_UFunction_ATaskActor_ResetActorPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskActor|Action" },
		{ "ModuleRelativePath", "Public/TaskActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaskActor_ResetActorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaskActor, nullptr, "ResetActorPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaskActor_ResetActorPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaskActor_ResetActorPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATaskActor_ResetActorPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaskActor_ResetActorPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaskActor::execResetActorPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetActorPosition();
	P_NATIVE_END;
}
// End Class ATaskActor Function ResetActorPosition

// Begin Class ATaskActor
void ATaskActor::StaticRegisterNativesATaskActor()
{
	UClass* Class = ATaskActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRotationSpeed", &ATaskActor::execGetRotationSpeed },
		{ "ResetActorPosition", &ATaskActor::execResetActorPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATaskActor);
UClass* Z_Construct_UClass_ATaskActor_NoRegister()
{
	return ATaskActor::StaticClass();
}
struct Z_Construct_UClass_ATaskActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TaskActor.h" },
		{ "ModuleRelativePath", "Public/TaskActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "TaskActor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "TaskActor|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "TaskActor|Properties" },
		{ "ModuleRelativePath", "Public/TaskActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATaskActor_GetRotationSpeed, "GetRotationSpeed" }, // 702755345
		{ &Z_Construct_UFunction_ATaskActor_ResetActorPosition, "ResetActorPosition" }, // 3048879397
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATaskActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaskActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaskActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaskActor_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaskActor, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATaskActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaskActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATaskActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaskActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaskActor_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaskActor_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATaskActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATaskActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PJTask6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATaskActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATaskActor_Statics::ClassParams = {
	&ATaskActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATaskActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATaskActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATaskActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATaskActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATaskActor()
{
	if (!Z_Registration_Info_UClass_ATaskActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATaskActor.OuterSingleton, Z_Construct_UClass_ATaskActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATaskActor.OuterSingleton;
}
template<> PJTASK6_API UClass* StaticClass<ATaskActor>()
{
	return ATaskActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATaskActor);
ATaskActor::~ATaskActor() {}
// End Class ATaskActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATaskActor, ATaskActor::StaticClass, TEXT("ATaskActor"), &Z_Registration_Info_UClass_ATaskActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATaskActor), 3882926591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_516366853(TEXT("/Script/PJTask6"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_Public_TaskActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
