// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../Ai_Model_Local_9/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/Public/GPT3_Local_Ai_plugin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPT3_Local_Ai_plugin() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GPT3_LOCAL_AI_PLUGIN_API UClass* Z_Construct_UClass_ULollmsClient();
	GPT3_LOCAL_AI_PLUGIN_API UClass* Z_Construct_UClass_ULollmsClient_NoRegister();
	GPT3_LOCAL_AI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature();
	GPT3_LOCAL_AI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature();
	GPT3_LOCAL_AI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GPT3_Local_Ai_plugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GPT3_Local_Ai_plugin, nullptr, "OnConnectedMulticastDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConnectedMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedMulticastDelegate)
{
	OnConnectedMulticastDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GPT3_Local_Ai_plugin, nullptr, "OnDisconnectedMulticastDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDisconnectedMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDisconnectedMulticastDelegate)
{
	OnDisconnectedMulticastDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics
	{
		struct _Script_GPT3_Local_Ai_plugin_eventOnTextChunkReceivedMulticastDelegate_Parms
		{
			FString TextChunk;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextChunk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::NewProp_TextChunk = { "TextChunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GPT3_Local_Ai_plugin_eventOnTextChunkReceivedMulticastDelegate_Parms, TextChunk), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::NewProp_TextChunk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GPT3_Local_Ai_plugin, nullptr, "OnTextChunkReceivedMulticastDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::_Script_GPT3_Local_Ai_plugin_eventOnTextChunkReceivedMulticastDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::_Script_GPT3_Local_Ai_plugin_eventOnTextChunkReceivedMulticastDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTextChunkReceivedMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTextChunkReceivedMulticastDelegate, const FString& TextChunk)
{
	struct _Script_GPT3_Local_Ai_plugin_eventOnTextChunkReceivedMulticastDelegate_Parms
	{
		FString TextChunk;
	};
	_Script_GPT3_Local_Ai_plugin_eventOnTextChunkReceivedMulticastDelegate_Parms Parms;
	Parms.TextChunk=TextChunk;
	OnTextChunkReceivedMulticastDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULollmsClient::execShutdownModule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShutdownModule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULollmsClient::execStartupModule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartupModule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULollmsClient::execGenerateText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_GET_PROPERTY(FIntProperty,Z_Param_Predicts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateText(Z_Param_Prompt,Z_Param_Predicts);
		P_NATIVE_END;
	}
	void ULollmsClient::StaticRegisterNativesULollmsClient()
	{
		UClass* Class = ULollmsClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateText", &ULollmsClient::execGenerateText },
			{ "ShutdownModule", &ULollmsClient::execShutdownModule },
			{ "StartupModule", &ULollmsClient::execStartupModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULollmsClient_GenerateText_Statics
	{
		struct LollmsClient_eventGenerateText_Parms
		{
			FString Prompt;
			int32 Predicts;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Predicts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LollmsClient_eventGenerateText_Parms, Prompt), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::NewProp_Predicts = { "Predicts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LollmsClient_eventGenerateText_Parms, Predicts), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::NewProp_Prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::NewProp_Predicts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoLLMs" },
		{ "CPP_Default_Predicts", "128" },
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULollmsClient, nullptr, "GenerateText", nullptr, nullptr, Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::LollmsClient_eventGenerateText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::LollmsClient_eventGenerateText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULollmsClient_GenerateText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULollmsClient_GenerateText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULollmsClient_ShutdownModule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULollmsClient_ShutdownModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoLLMs" },
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULollmsClient_ShutdownModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULollmsClient, nullptr, "ShutdownModule", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULollmsClient_ShutdownModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULollmsClient_ShutdownModule_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULollmsClient_ShutdownModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULollmsClient_ShutdownModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULollmsClient_StartupModule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULollmsClient_StartupModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoLLMs" },
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULollmsClient_StartupModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULollmsClient, nullptr, "StartupModule", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULollmsClient_StartupModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULollmsClient_StartupModule_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULollmsClient_StartupModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULollmsClient_StartupModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULollmsClient);
	UClass* Z_Construct_UClass_ULollmsClient_NoRegister()
	{
		return ULollmsClient::StaticClass();
	}
	struct Z_Construct_UClass_ULollmsClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTextChunkReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextChunkReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULollmsClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GPT3_Local_Ai_plugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULollmsClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULollmsClient_GenerateText, "GenerateText" }, // 879353597
		{ &Z_Construct_UFunction_ULollmsClient_ShutdownModule, "ShutdownModule" }, // 3135359067
		{ &Z_Construct_UFunction_ULollmsClient_StartupModule, "StartupModule" }, // 4249355310
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULollmsClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GPT3_Local_Ai_plugin.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnConnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULollmsClient, OnConnected), Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnConnected_MetaData), Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnConnected_MetaData) }; // 1885909898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULollmsClient, OnDisconnected), Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnDisconnected_MetaData), Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnDisconnected_MetaData) }; // 3760984765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnTextChunkReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/GPT3_Local_Ai_plugin.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnTextChunkReceived = { "OnTextChunkReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULollmsClient, OnTextChunkReceived), Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnTextChunkReceived_MetaData), Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnTextChunkReceived_MetaData) }; // 262409605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULollmsClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULollmsClient_Statics::NewProp_OnTextChunkReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULollmsClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULollmsClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULollmsClient_Statics::ClassParams = {
		&ULollmsClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULollmsClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::Class_MetaDataParams), Z_Construct_UClass_ULollmsClient_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULollmsClient_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULollmsClient()
	{
		if (!Z_Registration_Info_UClass_ULollmsClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULollmsClient.OuterSingleton, Z_Construct_UClass_ULollmsClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULollmsClient.OuterSingleton;
	}
	template<> GPT3_LOCAL_AI_PLUGIN_API UClass* StaticClass<ULollmsClient>()
	{
		return ULollmsClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULollmsClient);
	ULollmsClient::~ULollmsClient() {}
	struct Z_CompiledInDeferFile_FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULollmsClient, ULollmsClient::StaticClass, TEXT("ULollmsClient"), &Z_Registration_Info_UClass_ULollmsClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULollmsClient), 2252669670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_326108051(TEXT("/Script/GPT3_Local_Ai_plugin"),
		Z_CompiledInDeferFile_FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
