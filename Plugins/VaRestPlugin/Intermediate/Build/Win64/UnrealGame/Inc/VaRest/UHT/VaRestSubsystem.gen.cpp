// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestSubsystem();
	VAREST_API UClass* Z_Construct_UClass_UVaRestSubsystem_NoRegister();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestContentType();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaRestRequestVerb();
	VAREST_API UFunction* Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature();
	VAREST_API UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics
	{
		struct _Script_VaRest_eventVaRestCallDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VaRest_eventVaRestCallDelegate_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRest, nullptr, "VaRestCallDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::_Script_VaRest_eventVaRestCallDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::_Script_VaRest_eventVaRestCallDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVaRestCallDelegate_DelegateWrapper(const FScriptDelegate& VaRestCallDelegate, UVaRestRequestJSON* Request)
{
	struct _Script_VaRest_eventVaRestCallDelegate_Parms
	{
		UVaRestRequestJSON* Request;
	};
	_Script_VaRest_eventVaRestCallDelegate_Parms Parms;
	Parms.Request=Request;
	VaRestCallDelegate.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VaRestCallResponse;
class UScriptStruct* FVaRestCallResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VaRestCallResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VaRestCallResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRestCallResponse, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("VaRestCallResponse"));
	}
	return Z_Registration_Info_UScriptStruct_VaRestCallResponse.OuterSingleton;
}
template<> VAREST_API UScriptStruct* StaticStruct<FVaRestCallResponse>()
{
	return FVaRestCallResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVaRestCallResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRestCallResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request_MetaData[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestCallResponse, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request_MetaData), Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback_MetaData[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVaRestCallResponse, Callback), Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback_MetaData), Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback_MetaData) }; // 575148149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewProp_Callback,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
		nullptr,
		&NewStructOps,
		"VaRestCallResponse",
		Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers),
		sizeof(FVaRestCallResponse),
		alignof(FVaRestCallResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_VaRestCallResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VaRestCallResponse.InnerSingleton, Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VaRestCallResponse.InnerSingleton;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execLoadJsonFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_UBOOL(Z_Param_bIsRelativeToContentDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->LoadJsonFromFile(Z_Param_Path,Z_Param_bIsRelativeToContentDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execDecodeJsonObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->DecodeJsonObject(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execDecodeJsonValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->DecodeJsonValue(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueObject)
	{
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueObject(Z_Param_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueArray)
	{
		P_GET_TARRAY_REF(UVaRestJsonValue*,Z_Param_Out_InArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueArray(Z_Param_Out_InArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueBool)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueBool(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueString(Z_Param_StringValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructJsonValueNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonValue**)Z_Param__Result=P_THIS->ConstructJsonValueNumber(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execStaticConstructVaRestJsonObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=UVaRestSubsystem::StaticConstructVaRestJsonObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructVaRestJsonObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->ConstructVaRestJsonObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructVaRestRequestExt)
	{
		P_GET_ENUM(EVaRestRequestVerb,Z_Param_Verb);
		P_GET_ENUM(EVaRestRequestContentType,Z_Param_ContentType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestRequestJSON**)Z_Param__Result=P_THIS->ConstructVaRestRequestExt(EVaRestRequestVerb(Z_Param_Verb),EVaRestRequestContentType(Z_Param_ContentType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execConstructVaRestRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestRequestJSON**)Z_Param__Result=P_THIS->ConstructVaRestRequest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestSubsystem::execCallURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_ENUM(EVaRestRequestVerb,Z_Param_Verb);
		P_GET_ENUM(EVaRestRequestContentType,Z_Param_ContentType);
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_VaRestJson);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallURL(Z_Param_URL,EVaRestRequestVerb(Z_Param_Verb),EVaRestRequestContentType(Z_Param_ContentType),Z_Param_VaRestJson,FVaRestCallDelegate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	void UVaRestSubsystem::StaticRegisterNativesUVaRestSubsystem()
	{
		UClass* Class = UVaRestSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallURL", &UVaRestSubsystem::execCallURL },
			{ "ConstructJsonValueArray", &UVaRestSubsystem::execConstructJsonValueArray },
			{ "ConstructJsonValueBool", &UVaRestSubsystem::execConstructJsonValueBool },
			{ "ConstructJsonValueNumber", &UVaRestSubsystem::execConstructJsonValueNumber },
			{ "ConstructJsonValueObject", &UVaRestSubsystem::execConstructJsonValueObject },
			{ "ConstructJsonValueString", &UVaRestSubsystem::execConstructJsonValueString },
			{ "ConstructVaRestJsonObject", &UVaRestSubsystem::execConstructVaRestJsonObject },
			{ "ConstructVaRestRequest", &UVaRestSubsystem::execConstructVaRestRequest },
			{ "ConstructVaRestRequestExt", &UVaRestSubsystem::execConstructVaRestRequestExt },
			{ "DecodeJsonObject", &UVaRestSubsystem::execDecodeJsonObject },
			{ "DecodeJsonValue", &UVaRestSubsystem::execDecodeJsonValue },
			{ "LoadJsonFromFile", &UVaRestSubsystem::execLoadJsonFromFile },
			{ "StaticConstructVaRestJsonObject", &UVaRestSubsystem::execStaticConstructVaRestJsonObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics
	{
		struct VaRestSubsystem_eventCallURL_Parms
		{
			FString URL;
			EVaRestRequestVerb Verb;
			EVaRestRequestContentType ContentType;
			UVaRestJsonObject* VaRestJson;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VaRestJson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, Verb), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2600001411
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, ContentType), Z_Construct_UEnum_VaRest_EVaRestRequestContentType, METADATA_PARAMS(0, nullptr) }; // 3327806048
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_VaRestJson = { "VaRestJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, VaRestJson), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventCallURL_Parms, Callback), Z_Construct_UDelegateFunction_VaRest_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Callback_MetaData), Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Callback_MetaData) }; // 575148149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_VaRestJson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/** Easy way to process http requests */" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Easy way to process http requests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "CallURL", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::VaRestSubsystem_eventCallURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::VaRestSubsystem_eventCallURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_CallURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_CallURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics
	{
		struct VaRestSubsystem_eventConstructJsonValueArray_Parms
		{
			TArray<UVaRestJsonValue*> InArray;
			UVaRestJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InArray;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_Inner = { "InArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray = { "InArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueArray_Parms, InArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_InArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Create new Json Array value */" },
		{ "DisplayName", "Construct Json Array Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Create new Json Array value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueArray", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::VaRestSubsystem_eventConstructJsonValueArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::VaRestSubsystem_eventConstructJsonValueArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics
	{
		struct VaRestSubsystem_eventConstructJsonValueBool_Parms
		{
			bool InValue;
			UVaRestJsonValue* ReturnValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((VaRestSubsystem_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestSubsystem_eventConstructJsonValueBool_Parms), &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Create new Json Bool value */" },
		{ "DisplayName", "Construct Json Bool Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Create new Json Bool value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueBool", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::VaRestSubsystem_eventConstructJsonValueBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::VaRestSubsystem_eventConstructJsonValueBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics
	{
		struct VaRestSubsystem_eventConstructJsonValueNumber_Parms
		{
			float Number;
			UVaRestJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Create new Json Number value\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "DisplayName", "Construct Json Number Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Create new Json Number value\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueNumber", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::VaRestSubsystem_eventConstructJsonValueNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::VaRestSubsystem_eventConstructJsonValueNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics
	{
		struct VaRestSubsystem_eventConstructJsonValueObject_Parms
		{
			UVaRestJsonObject* JsonObject;
			UVaRestJsonValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Create new Json Object value */" },
		{ "DisplayName", "Construct Json Object Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Create new Json Object value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::VaRestSubsystem_eventConstructJsonValueObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::VaRestSubsystem_eventConstructJsonValueObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics
	{
		struct VaRestSubsystem_eventConstructJsonValueString_Parms
		{
			FString StringValue;
			UVaRestJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_StringValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Create new Json String value */" },
		{ "DisplayName", "Construct Json String Value" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Create new Json String value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructJsonValueString", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::VaRestSubsystem_eventConstructJsonValueString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::VaRestSubsystem_eventConstructJsonValueString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics
	{
		struct VaRestSubsystem_eventConstructVaRestJsonObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestJsonObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Create new Json object */" },
		{ "DisplayName", "Construct Json Object" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Create new Json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructVaRestJsonObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::VaRestSubsystem_eventConstructVaRestJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::VaRestSubsystem_eventConstructVaRestJsonObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics
	{
		struct VaRestSubsystem_eventConstructVaRestRequest_Parms
		{
			UVaRestRequestJSON* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequest_Parms, ReturnValue), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Creates new request (totally empty) */" },
		{ "DisplayName", "Construct Json Request (Empty)" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Creates new request (totally empty)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructVaRestRequest", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::VaRestSubsystem_eventConstructVaRestRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::VaRestSubsystem_eventConstructVaRestRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics
	{
		struct VaRestSubsystem_eventConstructVaRestRequestExt_Parms
		{
			EVaRestRequestVerb Verb;
			EVaRestRequestContentType ContentType;
			UVaRestRequestJSON* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Verb;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequestExt_Parms, Verb), Z_Construct_UEnum_VaRest_EVaRestRequestVerb, METADATA_PARAMS(0, nullptr) }; // 2600001411
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequestExt_Parms, ContentType), Z_Construct_UEnum_VaRest_EVaRestRequestContentType, METADATA_PARAMS(0, nullptr) }; // 3327806048
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventConstructVaRestRequestExt_Parms, ReturnValue), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Creates new request with defined verb and content type */" },
		{ "DisplayName", "Construct Json Request" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Creates new request with defined verb and content type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "ConstructVaRestRequestExt", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::VaRestSubsystem_eventConstructVaRestRequestExt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::VaRestSubsystem_eventConstructVaRestRequestExt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics
	{
		struct VaRestSubsystem_eventDecodeJsonObject_Parms
		{
			FString JsonString;
			UVaRestJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonObject_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Construct Json object from string */" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Construct Json object from string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "DecodeJsonObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::VaRestSubsystem_eventDecodeJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::VaRestSubsystem_eventDecodeJsonObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics
	{
		struct VaRestSubsystem_eventDecodeJsonValue_Parms
		{
			FString JsonString;
			UVaRestJsonValue* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonValue_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventDecodeJsonValue_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Subsystem" },
		{ "Comment", "/** Construct Json value from string */" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Construct Json value from string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "DecodeJsonValue", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::VaRestSubsystem_eventDecodeJsonValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::VaRestSubsystem_eventDecodeJsonValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics
	{
		struct VaRestSubsystem_eventLoadJsonFromFile_Parms
		{
			FString Path;
			bool bIsRelativeToContentDir;
			UVaRestJsonObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRelativeToContentDir_MetaData[];
#endif
		static void NewProp_bIsRelativeToContentDir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRelativeToContentDir;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventLoadJsonFromFile_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_SetBit(void* Obj)
	{
		((VaRestSubsystem_eventLoadJsonFromFile_Parms*)Obj)->bIsRelativeToContentDir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir = { "bIsRelativeToContentDir", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestSubsystem_eventLoadJsonFromFile_Parms), &Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_MetaData), Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventLoadJsonFromFile_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_bIsRelativeToContentDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Utility" },
		{ "Comment", "/**\n\x09 * Load JSON from formatted text file\n\x09 * @param    bIsRelativeToContentDir    if set to 'false' path is treated as absolute\n\x09 */" },
		{ "CPP_Default_bIsRelativeToContentDir", "true" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Load JSON from formatted text file\n@param    bIsRelativeToContentDir    if set to 'false' path is treated as absolute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "LoadJsonFromFile", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::VaRestSubsystem_eventLoadJsonFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::VaRestSubsystem_eventLoadJsonFromFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics
	{
		struct VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Create new Json object (static one for MakeJson node, hack for #293) */" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
		{ "ToolTip", "Create new Json object (static one for MakeJson node, hack for #293)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestSubsystem, nullptr, "StaticConstructVaRestJsonObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::VaRestSubsystem_eventStaticConstructVaRestJsonObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRestSubsystem);
	UClass* Z_Construct_UClass_UVaRestSubsystem_NoRegister()
	{
		return UVaRestSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RequestMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestSubsystem_CallURL, "CallURL" }, // 2994079571
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 2275651438
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 3553443319
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 3201095509
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 730748628
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructJsonValueString, "ConstructJsonValueString" }, // 2344398656
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestJsonObject, "ConstructVaRestJsonObject" }, // 684654916
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequest, "ConstructVaRestRequest" }, // 3120199302
		{ &Z_Construct_UFunction_UVaRestSubsystem_ConstructVaRestRequestExt, "ConstructVaRestRequestExt" }, // 1315023958
		{ &Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonObject, "DecodeJsonObject" }, // 3913744439
		{ &Z_Construct_UFunction_UVaRestSubsystem_DecodeJsonValue, "DecodeJsonValue" }, // 2619833850
		{ &Z_Construct_UFunction_UVaRestSubsystem_LoadJsonFromFile, "LoadJsonFromFile" }, // 1940520326
		{ &Z_Construct_UFunction_UVaRestSubsystem_StaticConstructVaRestJsonObject, "StaticConstructVaRestJsonObject" }, // 4063953608
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaRestSubsystem.h" },
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_ValueProp = { "RequestMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVaRestCallResponse, METADATA_PARAMS(0, nullptr) }; // 3163641722
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_Key_KeyProp = { "RequestMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/VaRestSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap = { "RequestMap", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVaRestSubsystem, RequestMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_MetaData), Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_MetaData) }; // 3163641722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaRestSubsystem_Statics::NewProp_RequestMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestSubsystem_Statics::ClassParams = {
		&UVaRestSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVaRestSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVaRestSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestSubsystem.OuterSingleton, Z_Construct_UClass_UVaRestSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVaRestSubsystem.OuterSingleton;
	}
	template<> VAREST_API UClass* StaticClass<UVaRestSubsystem>()
	{
		return UVaRestSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestSubsystem);
	UVaRestSubsystem::~UVaRestSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FVaRestCallResponse::StaticStruct, Z_Construct_UScriptStruct_FVaRestCallResponse_Statics::NewStructOps, TEXT("VaRestCallResponse"), &Z_Registration_Info_UScriptStruct_VaRestCallResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVaRestCallResponse), 3163641722U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestSubsystem, UVaRestSubsystem::StaticClass, TEXT("UVaRestSubsystem"), &Z_Registration_Info_UClass_UVaRestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestSubsystem), 1782072518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_2405152015(TEXT("/Script/VaRest"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
