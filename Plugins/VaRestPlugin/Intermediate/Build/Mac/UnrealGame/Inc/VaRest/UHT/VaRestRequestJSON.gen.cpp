// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestRequestJSON.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestRequestJSON() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON();
	VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestContentType();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestStatus();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestVerb();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics
	{
		struct _Script_VaRest_eventOnRequestComplete_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VaRest_eventOnRequestComplete_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Generate a delegates for callback events */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Generate a delegates for callback events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "OnRequestComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::_Script_VaRest_eventOnRequestComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::_Script_VaRest_eventOnRequestComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, UVaRestRequestJSON* Request)
{
	struct _Script_VaRest_eventOnRequestComplete_Parms
	{
		UVaRestRequestJSON* Request;
	};
	_Script_VaRest_eventOnRequestComplete_Parms Parms;
	Parms.Request=Request;
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics
	{
		struct _Script_VaRest_eventOnRequestFail_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VaRest_eventOnRequestFail_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "OnRequestFail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::_Script_VaRest_eventOnRequestFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::_Script_VaRest_eventOnRequestFail_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, UVaRestRequestJSON* Request)
{
	struct _Script_VaRest_eventOnRequestFail_Parms
	{
		UVaRestRequestJSON* Request;
	};
	_Script_VaRest_eventOnRequestFail_Parms Parms;
	Parms.Request=Request;
	OnRequestFail.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseContentAsString)
	{
		P_GET_UBOOL(Z_Param_bCacheResponseContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResponseContentAsString(Z_Param_bCacheResponseContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execHasTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execRemoveTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execAddTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execExecuteProcessRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteProcessRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execApplyURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_OBJECT_REF(UVaRestJsonObject,Z_Param_Out_Result);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyURL(Z_Param_Url,Z_Param_Out_Result,Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execProcessURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessURL(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetURL(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetResponseContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseContentLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResponseContentLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetAllResponseHeaders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAllResponseHeaders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetResponseHeader(Z_Param_HeaderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetResponseCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaRestRequestStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetVerb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaRestRequestVerb*)Z_Param__Result=P_THIS->GetVerb();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->GetResponseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetResponseObject)
	{
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResponseObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetResponseObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetResponseObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetRequestObject)
	{
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execGetRequestObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->GetRequestObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execResetResponseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetResponseData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execResetRequestData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRequestData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execResetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderName);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeaderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetStringRequestContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStringRequestContent(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetBinaryRequestContent)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryRequestContent(Z_Param_Out_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetBinaryContentType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinaryContentType(Z_Param_ContentType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetContentType)
	{
		P_GET_ENUM(EVaRestRequestContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentType(EVaRestRequestContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetCustomVerb)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Verb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomVerb(Z_Param_Verb);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestRequestJSON::execSetVerb)
	{
		P_GET_ENUM(EVaRestRequestVerb,Z_Param_Verb);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerb(EVaRestRequestVerb(Z_Param_Verb));
		P_NATIVE_END;
	}
	void UVaRestRequestJSON::StaticRegisterNativesUVaRestRequestJSON()
	{
		UClass* Class = UVaRestRequestJSON::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", &UVaRestRequestJSON::execAddTag },
			{ "ApplyURL", &UVaRestRequestJSON::execApplyURL },
			{ "Cancel", &UVaRestRequestJSON::execCancel },
			{ "ExecuteProcessRequest", &UVaRestRequestJSON::execExecuteProcessRequest },
			{ "GetAllResponseHeaders", &UVaRestRequestJSON::execGetAllResponseHeaders },
			{ "GetRequestObject", &UVaRestRequestJSON::execGetRequestObject },
			{ "GetResponseCode", &UVaRestRequestJSON::execGetResponseCode },
			{ "GetResponseContent", &UVaRestRequestJSON::execGetResponseContent },
			{ "GetResponseContentAsString", &UVaRestRequestJSON::execGetResponseContentAsString },
			{ "GetResponseContentLength", &UVaRestRequestJSON::execGetResponseContentLength },
			{ "GetResponseHeader", &UVaRestRequestJSON::execGetResponseHeader },
			{ "GetResponseObject", &UVaRestRequestJSON::execGetResponseObject },
			{ "GetResponseValue", &UVaRestRequestJSON::execGetResponseValue },
			{ "GetStatus", &UVaRestRequestJSON::execGetStatus },
			{ "GetURL", &UVaRestRequestJSON::execGetURL },
			{ "GetVerb", &UVaRestRequestJSON::execGetVerb },
			{ "HasTag", &UVaRestRequestJSON::execHasTag },
			{ "ProcessURL", &UVaRestRequestJSON::execProcessURL },
			{ "RemoveTag", &UVaRestRequestJSON::execRemoveTag },
			{ "ResetData", &UVaRestRequestJSON::execResetData },
			{ "ResetRequestData", &UVaRestRequestJSON::execResetRequestData },
			{ "ResetResponseData", &UVaRestRequestJSON::execResetResponseData },
			{ "SetBinaryContentType", &UVaRestRequestJSON::execSetBinaryContentType },
			{ "SetBinaryRequestContent", &UVaRestRequestJSON::execSetBinaryRequestContent },
			{ "SetContentType", &UVaRestRequestJSON::execSetContentType },
			{ "SetCustomVerb", &UVaRestRequestJSON::execSetCustomVerb },
			{ "SetHeader", &UVaRestRequestJSON::execSetHeader },
			{ "SetRequestObject", &UVaRestRequestJSON::execSetRequestObject },
			{ "SetResponseObject", &UVaRestRequestJSON::execSetResponseObject },
			{ "SetStringRequestContent", &UVaRestRequestJSON::execSetStringRequestContent },
			{ "SetURL", &UVaRestRequestJSON::execSetURL },
			{ "SetVerb", &UVaRestRequestJSON::execSetVerb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics
	{
		struct VaRestRequestJSON_eventAddTag_Parms
		{
			FName Tag;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventAddTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Add tag to this request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Add tag to this request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "AddTag", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::VaRestRequestJSON_eventAddTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::VaRestRequestJSON_eventAddTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics
	{
		struct VaRestRequestJSON_eventApplyURL_Parms
		{
			FString Url;
			UVaRestJsonObject* Result;
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Result), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 2674470931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Open URL in latent mode */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Open URL in latent mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ApplyURL", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::VaRestRequestJSON_eventApplyURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::VaRestRequestJSON_eventApplyURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Cancel latent response waiting  */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Cancel latent response waiting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "Cancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Check URL and execute process request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Check URL and execute process request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ExecuteProcessRequest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics
	{
		struct VaRestRequestJSON_eventGetAllResponseHeaders_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetAllResponseHeaders_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get list of all response headers */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get list of all response headers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetAllResponseHeaders", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::VaRestRequestJSON_eventGetAllResponseHeaders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::VaRestRequestJSON_eventGetAllResponseHeaders_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics
	{
		struct VaRestRequestJSON_eventGetRequestObject_Parms
		{
			UVaRestJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetRequestObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get the Request Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Request Json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetRequestObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::VaRestRequestJSON_eventGetRequestObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::VaRestRequestJSON_eventGetRequestObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics
	{
		struct VaRestRequestJSON_eventGetResponseCode_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the response code of the last query */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the response code of the last query" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseCode", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::VaRestRequestJSON_eventGetResponseCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::VaRestRequestJSON_eventGetResponseCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics
	{
		struct VaRestRequestJSON_eventGetResponseContent_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/**\n\x09 * Get the content payload of the request or response.\n\x09 *\n\x09 * @param Content - array that will be filled with the content.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the content payload of the request or response.\n\n@param Content - array that will be filled with the content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseContent", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::VaRestRequestJSON_eventGetResponseContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::VaRestRequestJSON_eventGetResponseContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics
	{
		struct VaRestRequestJSON_eventGetResponseContentAsString_Parms
		{
			bool bCacheResponseContent;
			FString ReturnValue;
		};
		static void NewProp_bCacheResponseContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheResponseContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit(void* Obj)
	{
		((VaRestRequestJSON_eventGetResponseContentAsString_Parms*)Obj)->bCacheResponseContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent = { "bCacheResponseContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestRequestJSON_eventGetResponseContentAsString_Parms), &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseContentAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_bCacheResponseContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/**\n\x09 * Get request response stored as a string\n\x09 * @param bCacheResponseContent - Set true if you plan to use it few times to prevent deserialization each time\n\x09 */" },
		{ "CPP_Default_bCacheResponseContent", "true" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get request response stored as a string\n@param bCacheResponseContent - Set true if you plan to use it few times to prevent deserialization each time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseContentAsString", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::VaRestRequestJSON_eventGetResponseContentAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::VaRestRequestJSON_eventGetResponseContentAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics
	{
		struct VaRestRequestJSON_eventGetResponseContentLength_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseContentLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/**\n\x09 * Shortcut to get the Content-Length header value. Will not always return non-zero.\n\x09 * If you want the real length of the payload, get the payload and check it's length.\n\x09 *\n\x09 * @return the content length (if available)\n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Shortcut to get the Content-Length header value. Will not always return non-zero.\nIf you want the real length of the payload, get the payload and check it's length.\n\n@return the content length (if available)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseContentLength", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::VaRestRequestJSON_eventGetResponseContentLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::VaRestRequestJSON_eventGetResponseContentLength_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics
	{
		struct VaRestRequestJSON_eventGetResponseHeader_Parms
		{
			FString HeaderName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get value of desired response header */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get value of desired response header" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseHeader", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::VaRestRequestJSON_eventGetResponseHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::VaRestRequestJSON_eventGetResponseHeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics
	{
		struct VaRestRequestJSON_eventGetResponseObject_Parms
		{
			UVaRestJsonObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the Response Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Response Json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::VaRestRequestJSON_eventGetResponseObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::VaRestRequestJSON_eventGetResponseObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics
	{
		struct VaRestRequestJSON_eventGetResponseValue_Parms
		{
			UVaRestJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseValue_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Get the Response Json value */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get the Response Json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetResponseValue", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::VaRestRequestJSON_eventGetResponseValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::VaRestRequestJSON_eventGetResponseValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics
	{
		struct VaRestRequestJSON_eventGetStatus_Parms
		{
			EVaRestRequestStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestRequestStatus, METADATA_PARAMS(0, nullptr) }; // 2575662168
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get status of http request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get status of http request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::VaRestRequestJSON_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::VaRestRequestJSON_eventGetStatus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics
	{
		struct VaRestRequestJSON_eventGetURL_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get url of http request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get url of http request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetURL", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::VaRestRequestJSON_eventGetURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::VaRestRequestJSON_eventGetURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics
	{
		struct VaRestRequestJSON_eventGetVerb_Parms
		{
			EVaRestRequestVerb ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventGetVerb_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2600001411
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Get verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Get verb to the request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "GetVerb", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::VaRestRequestJSON_eventGetVerb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::VaRestRequestJSON_eventGetVerb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_GetVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics
	{
		struct VaRestRequestJSON_eventHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventHasTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestRequestJSON_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestRequestJSON_eventHasTag_Parms), &Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** See if this request contains the supplied tag */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "See if this request contains the supplied tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "HasTag", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::VaRestRequestJSON_eventHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::VaRestRequestJSON_eventHasTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics
	{
		struct VaRestRequestJSON_eventProcessURL_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventProcessURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Open URL with current setup */" },
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Open URL with current setup" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ProcessURL", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::VaRestRequestJSON_eventProcessURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::VaRestRequestJSON_eventProcessURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics
	{
		struct VaRestRequestJSON_eventRemoveTag_Parms
		{
			FName Tag;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Remove tag from this request\n\x09 *\n\x09 * @return Number of removed elements\n\x09 */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Remove tag from this request\n\n@return Number of removed elements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "RemoveTag", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::VaRestRequestJSON_eventRemoveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::VaRestRequestJSON_eventRemoveTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Reset all internal saved data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset all internal saved data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Reset saved request data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset saved request data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetRequestData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Reset saved response data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Reset saved response data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "ResetResponseData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics
	{
		struct VaRestRequestJSON_eventSetBinaryContentType_Parms
		{
			FString ContentType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryContentType_Parms, ContentType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content type of the request for binary post data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content type of the request for binary post data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetBinaryContentType", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::VaRestRequestJSON_eventSetBinaryContentType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::VaRestRequestJSON_eventSetBinaryContentType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics
	{
		struct VaRestRequestJSON_eventSetBinaryRequestContent_Parms
		{
			TArray<uint8> Content;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Content_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner = { "Content", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryRequestContent_Parms, Content), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content of the request for binary post data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content of the request for binary post data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetBinaryRequestContent", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::VaRestRequestJSON_eventSetBinaryRequestContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::VaRestRequestJSON_eventSetBinaryRequestContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics
	{
		struct VaRestRequestJSON_eventSetContentType_Parms
		{
			EVaRestRequestContentType ContentType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetContentType_Parms, ContentType), Z_Construct_UEnum_VaRest_EVaRestRequestContentType, METADATA_PARAMS(0, nullptr) }; // 3327806048
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::NewProp_ContentType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content type to the request. If you're using the x-www-form-urlencoded,\n\x09 * params/constaints should be defined as key=ValueString pairs from Json data */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content type to the request. If you're using the x-www-form-urlencoded,\nparams/constaints should be defined as key=ValueString pairs from Json data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetContentType", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::VaRestRequestJSON_eventSetContentType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::VaRestRequestJSON_eventSetContentType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetContentType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetContentType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics
	{
		struct VaRestRequestJSON_eventSetCustomVerb_Parms
		{
			FString Verb;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetCustomVerb_Parms, Verb), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::NewProp_Verb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set custom verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set custom verb to the request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetCustomVerb", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::VaRestRequestJSON_eventSetCustomVerb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::VaRestRequestJSON_eventSetCustomVerb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics
	{
		struct VaRestRequestJSON_eventSetHeader_Parms
		{
			FString HeaderName;
			FString HeaderValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HeaderValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName = { "HeaderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue = { "HeaderValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::NewProp_HeaderValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Sets optional header info */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Sets optional header info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetHeader", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::VaRestRequestJSON_eventSetHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::VaRestRequestJSON_eventSetHeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics
	{
		struct VaRestRequestJSON_eventSetRequestObject_Parms
		{
			UVaRestJsonObject* JsonObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetRequestObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set the Request Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set the Request Json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetRequestObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::VaRestRequestJSON_eventSetRequestObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::VaRestRequestJSON_eventSetRequestObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics
	{
		struct VaRestRequestJSON_eventSetResponseObject_Parms
		{
			UVaRestJsonObject* JsonObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetResponseObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::NewProp_JsonObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Set the Response Json object */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set the Response Json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetResponseObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::VaRestRequestJSON_eventSetResponseObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::VaRestRequestJSON_eventSetResponseObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics
	{
		struct VaRestRequestJSON_eventSetStringRequestContent_Parms
		{
			FString Content;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetStringRequestContent_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set content of the request as a plain string */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set content of the request as a plain string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetStringRequestContent", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::VaRestRequestJSON_eventSetStringRequestContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::VaRestRequestJSON_eventSetStringRequestContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics
	{
		struct VaRestRequestJSON_eventSetURL_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetURL_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url_MetaData), Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Setting request URL */" },
		{ "CPP_Default_Url", "http://alyamkin.com" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Setting request URL" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetURL", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::VaRestRequestJSON_eventSetURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::VaRestRequestJSON_eventSetURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics
	{
		struct VaRestRequestJSON_eventSetVerb_Parms
		{
			EVaRestRequestVerb Verb;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestRequestJSON_eventSetVerb_Parms, Verb), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2600001411
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::NewProp_Verb,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Request" },
		{ "Comment", "/** Set verb to the request */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Set verb to the request" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, nullptr, "SetVerb", nullptr, nullptr, Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::VaRestRequestJSON_eventSetVerb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::VaRestRequestJSON_eventSetVerb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetVerb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestRequestJSON_SetVerb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRestRequestJSON);
	UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister()
	{
		return UVaRestRequestJSON::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestRequestJSON_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidJsonResponse_MetaData[];
#endif
		static void NewProp_bIsValidJsonResponse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidJsonResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestRequestJSON_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestRequestJSON_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestRequestJSON_AddTag, "AddTag" }, // 1557666790
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL, "ApplyURL" }, // 3449931866
		{ &Z_Construct_UFunction_UVaRestRequestJSON_Cancel, "Cancel" }, // 1127348116
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest, "ExecuteProcessRequest" }, // 1134284175
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders, "GetAllResponseHeaders" }, // 4157455292
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject, "GetRequestObject" }, // 2237379030
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode, "GetResponseCode" }, // 1881847088
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContent, "GetResponseContent" }, // 1405846245
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentAsString, "GetResponseContentAsString" }, // 2553752864
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseContentLength, "GetResponseContentLength" }, // 1579558488
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader, "GetResponseHeader" }, // 340737984
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject, "GetResponseObject" }, // 1751810216
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseValue, "GetResponseValue" }, // 4142797736
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetStatus, "GetStatus" }, // 1061812860
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetURL, "GetURL" }, // 2434115849
		{ &Z_Construct_UFunction_UVaRestRequestJSON_GetVerb, "GetVerb" }, // 3502850156
		{ &Z_Construct_UFunction_UVaRestRequestJSON_HasTag, "HasTag" }, // 3118533800
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL, "ProcessURL" }, // 1677270314
		{ &Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag, "RemoveTag" }, // 1846171926
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetData, "ResetData" }, // 536967948
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData, "ResetRequestData" }, // 1220613259
		{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData, "ResetResponseData" }, // 2470551148
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType, "SetBinaryContentType" }, // 2134593498
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent, "SetBinaryRequestContent" }, // 2048623459
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetContentType, "SetContentType" }, // 3954265573
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb, "SetCustomVerb" }, // 4044797093
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetHeader, "SetHeader" }, // 1247801253
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject, "SetRequestObject" }, // 1939130085
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject, "SetResponseObject" }, // 1178154359
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent, "SetStringRequestContent" }, // 1995137533
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetURL, "SetURL" }, // 961673997
		{ &Z_Construct_UFunction_UVaRestRequestJSON_SetVerb, "SetVerb" }, // 3290600627
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * General helper class http requests via blueprints\n */" },
		{ "IncludePath", "VaRestRequestJSON.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "General helper class http requests via blueprints" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete_MetaData[] = {
		{ "Category", "VaRest|Event" },
		{ "Comment", "/** Event occured when the request has been completed */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Event occured when the request has been completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete = { "OnRequestComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestComplete), Z_Construct_UDelegateFunction_VaRest_OnRequestComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete_MetaData) }; // 4241832735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail_MetaData[] = {
		{ "Category", "VaRest|Event" },
		{ "Comment", "/** Event occured when the request wasn't successfull */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Event occured when the request wasn't successfull" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail = { "OnRequestFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestFail), Z_Construct_UDelegateFunction_VaRest_OnRequestFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail_MetaData) }; // 839104387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Response size */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response size" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize = { "ResponseSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** DEPRECATED: Please use GetResponseContentAsString() instead */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "DEPRECATED: Please use GetResponseContentAsString() instead" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseContent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_MetaData[] = {
		{ "Category", "VaRest|Response" },
		{ "Comment", "/** Is the response valid JSON? */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Is the response valid JSON?" },
	};
#endif
	void Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit(void* Obj)
	{
		((UVaRestRequestJSON*)Obj)->bIsValidJsonResponse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse = { "bIsValidJsonResponse", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVaRestRequestJSON), &Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj_MetaData[] = {
		{ "Comment", "/** Internal request data stored as JSON */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Internal request data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj = { "RequestJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, RequestJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response data stored as JSON" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj = { "ResponseJsonObj", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue_MetaData[] = {
		{ "Comment", "/** Response data stored as JSON value */" },
		{ "ModuleRelativePath", "Public/VaRestRequestJSON.h" },
		{ "ToolTip", "Response data stored as JSON value" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue = { "ResponseJsonValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue_MetaData), Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_OnRequestFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_bIsValidJsonResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_RequestJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestRequestJSON_Statics::NewProp_ResponseJsonValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestRequestJSON_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestRequestJSON>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestRequestJSON_Statics::ClassParams = {
		&UVaRestRequestJSON::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestRequestJSON_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestRequestJSON_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVaRestRequestJSON()
	{
		if (!Z_Registration_Info_UClass_UVaRestRequestJSON.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestRequestJSON.OuterSingleton, Z_Construct_UClass_UVaRestRequestJSON_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVaRestRequestJSON.OuterSingleton;
	}
	template<> VAREST_API UClass* StaticClass<UVaRestRequestJSON>()
	{
		return UVaRestRequestJSON::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestRequestJSON);
	UVaRestRequestJSON::~UVaRestRequestJSON() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestRequestJSON, UVaRestRequestJSON::StaticClass, TEXT("UVaRestRequestJSON"), &Z_Registration_Info_UClass_UVaRestRequestJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestRequestJSON), 2861927129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_2674992235(TEXT("/Script/VaRest"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestRequestJSON_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
