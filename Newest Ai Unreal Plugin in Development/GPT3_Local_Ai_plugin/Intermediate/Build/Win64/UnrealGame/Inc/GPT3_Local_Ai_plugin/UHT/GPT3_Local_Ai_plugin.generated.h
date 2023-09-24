// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GPT3_Local_Ai_plugin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GPT3_LOCAL_AI_PLUGIN_GPT3_Local_Ai_plugin_generated_h
#error "GPT3_Local_Ai_plugin.generated.h already included, missing '#pragma once' in GPT3_Local_Ai_plugin.h"
#endif
#define GPT3_LOCAL_AI_PLUGIN_GPT3_Local_Ai_plugin_generated_h

#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_10_DELEGATE \
GPT3_LOCAL_AI_PLUGIN_API void FOnConnectedMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedMulticastDelegate);


#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_11_DELEGATE \
GPT3_LOCAL_AI_PLUGIN_API void FOnDisconnectedMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDisconnectedMulticastDelegate);


#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_12_DELEGATE \
GPT3_LOCAL_AI_PLUGIN_API void FOnTextChunkReceivedMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTextChunkReceivedMulticastDelegate, const FString& TextChunk);


#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_SPARSE_DATA
#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShutdownModule); \
	DECLARE_FUNCTION(execStartupModule); \
	DECLARE_FUNCTION(execGenerateText);


#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_ACCESSORS
#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULollmsClient(); \
	friend struct Z_Construct_UClass_ULollmsClient_Statics; \
public: \
	DECLARE_CLASS(ULollmsClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GPT3_Local_Ai_plugin"), NO_API) \
	DECLARE_SERIALIZER(ULollmsClient)


#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULollmsClient(ULollmsClient&&); \
	NO_API ULollmsClient(const ULollmsClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULollmsClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULollmsClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULollmsClient) \
	NO_API virtual ~ULollmsClient();


#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_15_PROLOG
#define FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_SPARSE_DATA \
	FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_ACCESSORS \
	FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_INCLASS_NO_PURE_DECLS \
	FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPT3_LOCAL_AI_PLUGIN_API UClass* StaticClass<class ULollmsClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Ai_Model_Local_9_Plugins_GPT3_Local_Ai_plugin_Source_GPT3_Local_Ai_plugin_Public_GPT3_Local_Ai_plugin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
