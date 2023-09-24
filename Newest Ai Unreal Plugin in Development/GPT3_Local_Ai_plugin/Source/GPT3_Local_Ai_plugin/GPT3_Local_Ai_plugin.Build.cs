// Some copyright should be here...

using UnrealBuildTool;

public class GPT3_Local_Ai_plugin : ModuleRules
{
    public GPT3_Local_Ai_plugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
    
        PublicAdditionalLibraries.Add("E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/external/lib/sioclient.lib");
        PublicAdditionalLibraries.Add("E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp-build/Debug/sioclient.lib");
		PublicAdditionalLibraries.Add("E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Debug2/LollmsClientLib.lib");
        PublicAdditionalLibraries.Add("E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/lib/sioclient.lib");
        
        PublicDefinitions.Add("ASIO_STANDALONE=1");
        PublicDefinitions.Add("BOOST_VERSION=0");
        PublicDefinitions.Add("BOOST_NOEXCEPT=1");
        PublicDefinitions.Add("ASIO_NOEXCEPT_OR_NOTHROW");
        PublicDefinitions.Add("SSL_PACKAGE=1");
        PublicDefinitions.Add("WITH_SSL=1");
        PublicSystemLibraries.Add("crypt32.lib");
        
        PublicIncludePaths.AddRange(
            new string[] {
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/Public",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/websocketpp/docs",
                "E:/UE_5.3/Ai_Model_Local_8/Debug",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/asio/asio/include/",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp-build/_deps/catch2-src/src/catch2",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/websocketpp/",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/include",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/websocketpp/",
				"E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs",
				"E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/lib",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/websocketpp/websocketpp/config",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/websocketpp",
				"E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/asio/asio/include",
				"E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp/lib/asio/asio/src",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp-build/_deps/catch2-src/src/",
                "E:/UE_5.3/Ai_Model_Local_8/Plugins/GPT3_Local_Ai_plugin/Source/GPT3_Local_Ai_plugin/ThirdParty/Libs/external/src/socketio-client-cpp-build/_deps/catch2-src/src/catch2/internal/",
                "C:/Users/Admin/miniconda3/Library/include",
                "E:/UE_5.3/Engine/Source/",
                "C:/Users/Admin/miniconda3/Library/include/",
                "C:/Users/Admin/miniconda3/Library/include/openssl",
                "E:/UE_5.3/Engine/Source/Runtime/Online/SSL",
                "E:/UE_5.3/Engine/Source/Runtime/Online/",
                "E:/UE_5.3/Engine/Source/Runtime/Online/SSL/Public",
                "E:/UE_5.3/Engine/Source/Editor/AssetDefinition/Public",
                "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.36.32532/include",
                "E:/UE_5.3/Engine/Source/ThirdParty/Eigen/Eigen/src/Core/arch/ZVector",
                "E:/UE_5.3/Ai_Model_Local_8/external/src/socketio-client-cpp/examples/QT/SioChatDemo",
            }
        );
            

        PrivateIncludePaths.AddRange(
            new string[] {
                // ... add other private include paths required here ...
            }
        );
            
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                // ... add other public dependencies that you statically link with here ...
            }
        );
            
        PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "InputCore", "UMG" });
        PrivateDependencyModuleNames.AddRange(new string[] { "Core", "SSL" });

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                // ... add any modules that your module loads dynamically here ...
            }
        );
    }

    public class GPT3_Local_Ai_pluginSSL : ModuleRules
{
    protected virtual bool bPlatformSupportsSSL
    {
    get    
        {
            return
                Target.Platform == UnrealTargetPlatform.Mac ||
                Target.Platform == UnrealTargetPlatform.Win64 ||
                Target.IsInPlatformGroup(UnrealPlatformGroup.Unix) ||
                Target.Platform == UnrealTargetPlatform.IOS ||
                Target.Platform == UnrealTargetPlatform.Android;
        
        }
    }

    protected virtual bool bUseDefaultSSLCert
    {
        get
        {
            return
                Target.Platform == UnrealTargetPlatform.Mac ||
                Target.Platform == UnrealTargetPlatform.IOS;
        }
    }

    public GPT3_Local_Ai_pluginSSL(ReadOnlyTargetRules Target) : base(Target)
    {
        // ... other setup code ...

        if (bPlatformSupportsSSL)
        {
            PublicDefinitions.Add("WITH_SSL=1");
            // Other SSL related settings you need
            AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenSSL");
        }
        else
        {
            PublicDefinitions.Add("WITH_SSL=0");
        }

        // ... other setup code ...
    }
}

}
