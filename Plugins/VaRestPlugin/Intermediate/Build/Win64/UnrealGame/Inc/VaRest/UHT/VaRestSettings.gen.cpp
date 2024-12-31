// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestSettings();
	VAREST_API UClass* Z_Construct_UClass_UVaRestSettings_NoRegister();
// End Cross Module References
	void UVaRestSettings::StaticRegisterNativesUVaRestSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRestSettings);
	UClass* Z_Construct_UClass_UVaRestSettings_NoRegister()
	{
		return UVaRestSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtendedLog_MetaData[];
#endif
		static void NewProp_bExtendedLog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendedLog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseChunkedParser_MetaData[];
#endif
		static void NewProp_bUseChunkedParser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseChunkedParser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestSettings.h" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData[] = {
		{ "Category", "VaRest" },
		{ "Comment", "/** You can disable request content logging to avoid security vulnerability */" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
		{ "ToolTip", "You can disable request content logging to avoid security vulnerability" },
	};
#endif
	void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit(void* Obj)
	{
		((UVaRestSettings*)Obj)->bExtendedLog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog = { "bExtendedLog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData), Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_MetaData[] = {
		{ "Category", "VaRest" },
		{ "Comment", "/** Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8) */" },
		{ "ModuleRelativePath", "Public/VaRestSettings.h" },
		{ "ToolTip", "Use custom chunked parses (best for memory, but has issues with hex-encoded utf-8)" },
	};
#endif
	void Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit(void* Obj)
	{
		((UVaRestSettings*)Obj)->bUseChunkedParser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser = { "bUseChunkedParser", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestSettings), &Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_MetaData), Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bExtendedLog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSettings_Statics::NewProp_bUseChunkedParser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestSettings_Statics::ClassParams = {
		&UVaRestSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVaRestSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVaRestSettings()
	{
		if (!Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton, Z_Construct_UClass_UVaRestSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVaRestSettings.OuterSingleton;
	}
	template<> VAREST_API UClass* StaticClass<UVaRestSettings>()
	{
		return UVaRestSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestSettings);
	UVaRestSettings::~UVaRestSettings() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestSettings, UVaRestSettings::StaticClass, TEXT("UVaRestSettings"), &Z_Registration_Info_UClass_UVaRestSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestSettings), 3979092089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h_53858380(TEXT("/Script/VaRest"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
