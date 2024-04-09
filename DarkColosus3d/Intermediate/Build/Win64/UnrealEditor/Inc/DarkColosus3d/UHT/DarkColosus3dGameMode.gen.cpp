// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkColosus3d/DarkColosus3dGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkColosus3dGameMode() {}
// Cross Module References
	DARKCOLOSUS3D_API UClass* Z_Construct_UClass_ADarkColosus3dGameMode();
	DARKCOLOSUS3D_API UClass* Z_Construct_UClass_ADarkColosus3dGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DarkColosus3d();
// End Cross Module References
	void ADarkColosus3dGameMode::StaticRegisterNativesADarkColosus3dGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADarkColosus3dGameMode);
	UClass* Z_Construct_UClass_ADarkColosus3dGameMode_NoRegister()
	{
		return ADarkColosus3dGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADarkColosus3dGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADarkColosus3dGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DarkColosus3d,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADarkColosus3dGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADarkColosus3dGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DarkColosus3dGameMode.h" },
		{ "ModuleRelativePath", "DarkColosus3dGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADarkColosus3dGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarkColosus3dGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADarkColosus3dGameMode_Statics::ClassParams = {
		&ADarkColosus3dGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADarkColosus3dGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADarkColosus3dGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADarkColosus3dGameMode()
	{
		if (!Z_Registration_Info_UClass_ADarkColosus3dGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADarkColosus3dGameMode.OuterSingleton, Z_Construct_UClass_ADarkColosus3dGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADarkColosus3dGameMode.OuterSingleton;
	}
	template<> DARKCOLOSUS3D_API UClass* StaticClass<ADarkColosus3dGameMode>()
	{
		return ADarkColosus3dGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADarkColosus3dGameMode);
	ADarkColosus3dGameMode::~ADarkColosus3dGameMode() {}
	struct Z_CompiledInDeferFile_FID_DarkColosus3d_Source_DarkColosus3d_DarkColosus3dGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DarkColosus3d_Source_DarkColosus3d_DarkColosus3dGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADarkColosus3dGameMode, ADarkColosus3dGameMode::StaticClass, TEXT("ADarkColosus3dGameMode"), &Z_Registration_Info_UClass_ADarkColosus3dGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADarkColosus3dGameMode), 3420899599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DarkColosus3d_Source_DarkColosus3d_DarkColosus3dGameMode_h_889566154(TEXT("/Script/DarkColosus3d"),
		Z_CompiledInDeferFile_FID_DarkColosus3d_Source_DarkColosus3d_DarkColosus3dGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DarkColosus3d_Source_DarkColosus3d_DarkColosus3dGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
