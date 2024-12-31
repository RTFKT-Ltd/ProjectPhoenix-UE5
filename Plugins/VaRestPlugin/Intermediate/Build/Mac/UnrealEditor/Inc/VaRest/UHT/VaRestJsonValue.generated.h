// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VaRestJsonValue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestJsonValue;
enum class EVaJson : uint8;
#ifdef VAREST_VaRestJsonValue_generated_h
#error "VaRestJsonValue.generated.h already included, missing '#pragma once' in VaRestJsonValue.h"
#endif
#define VAREST_VaRestJsonValue_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsObject); \
	DECLARE_FUNCTION(execAsArray); \
	DECLARE_FUNCTION(execAsBool); \
	DECLARE_FUNCTION(execAsString); \
	DECLARE_FUNCTION(execAsInt64); \
	DECLARE_FUNCTION(execAsInt32); \
	DECLARE_FUNCTION(execAsNumber); \
	DECLARE_FUNCTION(execIsNull); \
	DECLARE_FUNCTION(execGetTypeString); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execReset);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestJsonValue(); \
	friend struct Z_Construct_UClass_UVaRestJsonValue_Statics; \
public: \
	DECLARE_CLASS(UVaRestJsonValue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VaRest"), NO_API) \
	DECLARE_SERIALIZER(UVaRestJsonValue)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonValue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestJsonValue(UVaRestJsonValue&&); \
	NO_API UVaRestJsonValue(const UVaRestJsonValue&); \
public: \
	NO_API virtual ~UVaRestJsonValue();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_28_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VAREST_API UClass* StaticClass<class UVaRestJsonValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h


#define FOREACH_ENUM_EVAJSON(op) \
	op(EVaJson::None) \
	op(EVaJson::Null) \
	op(EVaJson::String) \
	op(EVaJson::Number) \
	op(EVaJson::Boolean) \
	op(EVaJson::Array) \
	op(EVaJson::Object) 

enum class EVaJson : uint8;
template<> struct TIsUEnumClass<EVaJson> { enum { Value = true }; };
template<> VAREST_API UEnum* StaticEnum<EVaJson>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
