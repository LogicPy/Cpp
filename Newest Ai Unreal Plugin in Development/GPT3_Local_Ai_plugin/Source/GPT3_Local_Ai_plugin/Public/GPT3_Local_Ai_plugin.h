// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "LollmsClient.h"
#include "GPT3_Local_Ai_plugin.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConnectedMulticastDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisconnectedMulticastDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextChunkReceivedMulticastDelegate, FString, TextChunk);


UCLASS(Blueprintable)
class GPT3_LOCAL_AI_PLUGIN_API ULollmsClient : public UObject  //public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	ULollmsClient()
		: client_(nullptr)
	{}

	UFUNCTION(BlueprintCallable, Category = "LoLLMs")
	void GenerateText(FString Prompt, int32 Predicts = 128);

	UPROPERTY(BlueprintAssignable)
	FOnConnectedMulticastDelegate OnConnected;

	UPROPERTY(BlueprintAssignable)
	FOnDisconnectedMulticastDelegate OnDisconnected;

	UPROPERTY(BlueprintAssignable)
	FOnTextChunkReceivedMulticastDelegate OnTextChunkReceived;

	UFUNCTION(BlueprintCallable, Category = "LoLLMs")
	virtual void StartupModule();

	UFUNCTION(BlueprintCallable, Category = "LoLLMs")
	virtual void ShutdownModule();

private:
	lollmsClient* client_;
};

void ULollmsClient::GenerateText(FString Prompt, int32 Predicts)
{
	std::string StdPrompt = TCHAR_TO_UTF8(*Prompt);
	// Here, you'd call the corresponding method in your lollmsClient, using StdPrompt and Predicts as parameters.
}
