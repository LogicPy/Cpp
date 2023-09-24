// Copyright Epic Games, Inc. All Rights Reserved.

#include "GPT3_Local_Ai_plugin.h"
#include "LollmsClient.h"

void ULollmsClient::StartupModule()
{
	// This code will execute after your module is loaded into memory.
	client_ = new lollmsClient("http://localhost:9601");

	// Do other initialization tasks as required.
}

void ULollmsClient::ShutdownModule()
{
	if (client_)
	{
		delete client_;
		client_ = nullptr;
	}
	// Other cleanups
	// Do other cleanup tasks as required.
}BB