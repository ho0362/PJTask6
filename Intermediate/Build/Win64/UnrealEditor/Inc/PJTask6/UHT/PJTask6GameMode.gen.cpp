// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PJTask6/PJTask6GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePJTask6GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PJTASK6_API UClass* Z_Construct_UClass_APJTask6GameMode();
PJTASK6_API UClass* Z_Construct_UClass_APJTask6GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PJTask6();
// End Cross Module References

// Begin Class APJTask6GameMode
void APJTask6GameMode::StaticRegisterNativesAPJTask6GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APJTask6GameMode);
UClass* Z_Construct_UClass_APJTask6GameMode_NoRegister()
{
	return APJTask6GameMode::StaticClass();
}
struct Z_Construct_UClass_APJTask6GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PJTask6GameMode.h" },
		{ "ModuleRelativePath", "PJTask6GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APJTask6GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APJTask6GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PJTask6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APJTask6GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APJTask6GameMode_Statics::ClassParams = {
	&APJTask6GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APJTask6GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APJTask6GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APJTask6GameMode()
{
	if (!Z_Registration_Info_UClass_APJTask6GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APJTask6GameMode.OuterSingleton, Z_Construct_UClass_APJTask6GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APJTask6GameMode.OuterSingleton;
}
template<> PJTASK6_API UClass* StaticClass<APJTask6GameMode>()
{
	return APJTask6GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APJTask6GameMode);
APJTask6GameMode::~APJTask6GameMode() {}
// End Class APJTask6GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_PJTask6GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APJTask6GameMode, APJTask6GameMode::StaticClass, TEXT("APJTask6GameMode"), &Z_Registration_Info_UClass_APJTask6GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APJTask6GameMode), 1358388283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_PJTask6GameMode_h_2856791588(TEXT("/Script/PJTask6"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_PJTask6GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_PJTask_PJTask6_Source_PJTask6_PJTask6GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
