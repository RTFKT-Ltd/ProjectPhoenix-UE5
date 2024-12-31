// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaRest/Public/VaRestJsonValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestJsonValue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VaRest();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue();
	VAREST_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
	VAREST_API UEnum* Z_Construct_UEnum_VaRest_EVaJson();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVaJson;
	static UEnum* EVaJson_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVaJson.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVaJson.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VaRest_EVaJson, (UObject*)Z_Construct_UPackage__Script_VaRest(), TEXT("EVaJson"));
		}
		return Z_Registration_Info_UEnum_EVaJson.OuterSingleton;
	}
	template<> VAREST_API UEnum* StaticEnum<EVaJson>()
	{
		return EVaJson_StaticEnum();
	}
	struct Z_Construct_UEnum_VaRest_EVaJson_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VaRest_EVaJson_Statics::Enumerators[] = {
		{ "EVaJson::None", (int64)EVaJson::None },
		{ "EVaJson::Null", (int64)EVaJson::Null },
		{ "EVaJson::String", (int64)EVaJson::String },
		{ "EVaJson::Number", (int64)EVaJson::Number },
		{ "EVaJson::Boolean", (int64)EVaJson::Boolean },
		{ "EVaJson::Array", (int64)EVaJson::Array },
		{ "EVaJson::Object", (int64)EVaJson::Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VaRest_EVaJson_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "EVaJson::Array" },
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EVaJson::Boolean" },
		{ "Comment", "/**\n * Represents all the types a Json Value can be.\n */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "None.Name", "EVaJson::None" },
		{ "Null.Name", "EVaJson::Null" },
		{ "Number.Name", "EVaJson::Number" },
		{ "Object.Name", "EVaJson::Object" },
		{ "String.Name", "EVaJson::String" },
		{ "ToolTip", "Represents all the types a Json Value can be." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VaRest_EVaJson_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VaRest,
		nullptr,
		"EVaJson",
		"EVaJson",
		Z_Construct_UEnum_VaRest_EVaJson_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaJson_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VaRest_EVaJson_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VaRest_EVaJson_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_VaRest_EVaJson()
	{
		if (!Z_Registration_Info_UEnum_EVaJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVaJson.InnerSingleton, Z_Construct_UEnum_VaRest_EVaJson_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVaJson.InnerSingleton;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVaRestJsonObject**)Z_Param__Result=P_THIS->AsObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UVaRestJsonValue*>*)Z_Param__Result=P_THIS->AsArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsBool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AsBool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AsString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsInt64)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=P_THIS->AsInt64();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsInt32)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AsInt32();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execAsNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->AsNumber();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execIsNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execGetTypeString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTypeString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaJson*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVaRestJsonValue::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UVaRestJsonValue::StaticRegisterNativesUVaRestJsonValue()
	{
		UClass* Class = UVaRestJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsArray", &UVaRestJsonValue::execAsArray },
			{ "AsBool", &UVaRestJsonValue::execAsBool },
			{ "AsInt32", &UVaRestJsonValue::execAsInt32 },
			{ "AsInt64", &UVaRestJsonValue::execAsInt64 },
			{ "AsNumber", &UVaRestJsonValue::execAsNumber },
			{ "AsObject", &UVaRestJsonValue::execAsObject },
			{ "AsString", &UVaRestJsonValue::execAsString },
			{ "GetType", &UVaRestJsonValue::execGetType },
			{ "GetTypeString", &UVaRestJsonValue::execGetTypeString },
			{ "IsNull", &UVaRestJsonValue::execIsNull },
			{ "Reset", &UVaRestJsonValue::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics
	{
		struct VaRestJsonValue_eventAsArray_Parms
		{
			TArray<UVaRestJsonValue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as an array, throwing an error if this is not an Json Array */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsArray", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::VaRestJsonValue_eventAsArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::VaRestJsonValue_eventAsArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics
	{
		struct VaRestJsonValue_eventAsBool_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestJsonValue_eventAsBool_Parms), &Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a boolean, throwing an error if this is not an Json Bool */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsBool", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::VaRestJsonValue_eventAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::VaRestJsonValue_eventAsBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics
	{
		struct VaRestJsonValue_eventAsInt32_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a int32, throwing an error if this is not an Json Number */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a int32, throwing an error if this is not an Json Number" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsInt32", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::VaRestJsonValue_eventAsInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::VaRestJsonValue_eventAsInt32_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics
	{
		struct VaRestJsonValue_eventAsInt64_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsInt64_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a int64, throwing an error if this is not an Json Number */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a int64, throwing an error if this is not an Json Number" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsInt64", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::VaRestJsonValue_eventAsInt64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::VaRestJsonValue_eventAsInt64_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics
	{
		struct VaRestJsonValue_eventAsNumber_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a double, throwing an error if this is not an Json Number\n\x09 * Attn.!! float used instead of double to make the function blueprintable! */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsNumber", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::VaRestJsonValue_eventAsNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::VaRestJsonValue_eventAsNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics
	{
		struct VaRestJsonValue_eventAsObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as an object, throwing an error if this is not an Json Object */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsObject", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::VaRestJsonValue_eventAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::VaRestJsonValue_eventAsObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics
	{
		struct VaRestJsonValue_eventAsString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns this value as a string, throwing an error if this is not an Json String */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns this value as a string, throwing an error if this is not an Json String" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "AsString", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::VaRestJsonValue_eventAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::VaRestJsonValue_eventAsString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_AsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics
	{
		struct VaRestJsonValue_eventGetType_Parms
		{
			EVaJson ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_VaRest_EVaJson, METADATA_PARAMS(0, nullptr) }; // 3802084860
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get type of Json value (Enum) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (Enum)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::VaRestJsonValue_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::VaRestJsonValue_eventGetType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics
	{
		struct VaRestJsonValue_eventGetTypeString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VaRestJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Get type of Json value (String) */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Get type of Json value (String)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "GetTypeString", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::VaRestJsonValue_eventGetTypeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::VaRestJsonValue_eventGetTypeString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_GetTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics
	{
		struct VaRestJsonValue_eventIsNull_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaRestJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VaRestJsonValue_eventIsNull_Parms), &Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Returns true if this value is a 'null' */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Returns true if this value is a 'null'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "IsNull", nullptr, nullptr, Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::VaRestJsonValue_eventIsNull_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::VaRestJsonValue_eventIsNull_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_IsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_IsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaRest|Json" },
		{ "Comment", "/** Reset all internal data */" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Reset all internal data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVaRestJsonValue_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVaRestJsonValue);
	UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister()
	{
		return UVaRestJsonValue::StaticClass();
	}
	struct Z_Construct_UClass_UVaRestJsonValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaRestJsonValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaRest,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonValue_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVaRestJsonValue_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsArray, "AsArray" }, // 911103514
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsBool, "AsBool" }, // 1982232546
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsInt32, "AsInt32" }, // 348098469
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsInt64, "AsInt64" }, // 3110296745
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsNumber, "AsNumber" }, // 3098550808
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsObject, "AsObject" }, // 91133743
		{ &Z_Construct_UFunction_UVaRestJsonValue_AsString, "AsString" }, // 1247533953
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetType, "GetType" }, // 2227500694
		{ &Z_Construct_UFunction_UVaRestJsonValue_GetTypeString, "GetTypeString" }, // 3497984787
		{ &Z_Construct_UFunction_UVaRestJsonValue_IsNull, "IsNull" }, // 2904876667
		{ &Z_Construct_UFunction_UVaRestJsonValue_Reset, "Reset" }, // 2459024987
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonValue_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprintable FJsonValue wrapper\n */" },
		{ "IncludePath", "VaRestJsonValue.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaRestJsonValue.h" },
		{ "ToolTip", "Blueprintable FJsonValue wrapper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaRestJsonValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaRestJsonValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams = {
		&UVaRestJsonValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UVaRestJsonValue_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVaRestJsonValue()
	{
		if (!Z_Registration_Info_UClass_UVaRestJsonValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVaRestJsonValue.OuterSingleton, Z_Construct_UClass_UVaRestJsonValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVaRestJsonValue.OuterSingleton;
	}
	template<> VAREST_API UClass* StaticClass<UVaRestJsonValue>()
	{
		return UVaRestJsonValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestJsonValue);
	UVaRestJsonValue::~UVaRestJsonValue() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_Statics::EnumInfo[] = {
		{ EVaJson_StaticEnum, TEXT("EVaJson"), &Z_Registration_Info_UEnum_EVaJson, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3802084860U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVaRestJsonValue, UVaRestJsonValue::StaticClass, TEXT("UVaRestJsonValue"), &Z_Registration_Info_UClass_UVaRestJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVaRestJsonValue), 1819177017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_733156761(TEXT("/Script/VaRest"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VaRest_Source_VaRest_Public_VaRestJsonValue_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
