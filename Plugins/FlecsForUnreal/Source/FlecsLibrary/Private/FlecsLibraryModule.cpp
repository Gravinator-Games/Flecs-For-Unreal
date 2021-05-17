// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlecsLibraryModule.h"

DEFINE_LOG_CATEGORY(LogFlecsLibrary)
#define LOCTEXT_NAMESPACE "FFlecsLibraryModule"

void FFlecsLibraryModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
    UE_LOG(LogFlecsLibrary, Warning, TEXT("FlecsLibrary module has started!"));
}

void FFlecsLibraryModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
    UE_LOG(LogFlecsLibrary, Warning, TEXT("FlecsLibrary module has shut down"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FFlecsLibraryModule, FlecsLibrary)