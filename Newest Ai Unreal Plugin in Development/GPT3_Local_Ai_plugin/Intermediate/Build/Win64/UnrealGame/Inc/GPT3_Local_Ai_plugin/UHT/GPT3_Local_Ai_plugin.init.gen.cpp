// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPT3_Local_Ai_plugin_init() {}
	GPT3_LOCAL_AI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature();
	GPT3_LOCAL_AI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature();
	GPT3_LOCAL_AI_PLUGIN_API UFunction* Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GPT3_Local_Ai_plugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GPT3_Local_Ai_plugin()
	{
		if (!Z_Registration_Info_UPackage__Script_GPT3_Local_Ai_plugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnConnectedMulticastDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnDisconnectedMulticastDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GPT3_Local_Ai_plugin_OnTextChunkReceivedMulticastDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GPT3_Local_Ai_plugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x16A2E32E,
				0x336F2206,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GPT3_Local_Ai_plugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GPT3_Local_Ai_plugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GPT3_Local_Ai_plugin(Z_Construct_UPackage__Script_GPT3_Local_Ai_plugin, TEXT("/Script/GPT3_Local_Ai_plugin"), Z_Registration_Info_UPackage__Script_GPT3_Local_Ai_plugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x16A2E32E, 0x336F2206));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
