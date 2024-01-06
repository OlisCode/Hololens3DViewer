// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WinRTFileOpenDialog.generated.h"
/*
#if (PLATFORM_WINDOWS || PLATFORM_HOLOLENS) 
//Before writing any code, you need to disable common warnings in WinRT headers
#pragma warning(disable : 5205 4265 4268 4946)

#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/AllowWindowsPlatformAtomics.h"
#include "Windows/PreWindowsApi.h"

#include <unknwn.h>
//#include <winrt/Windows.Foundation.h>
//#include <winrt/Windows.Perception.Spatial.h>
//#include <winrt/Windows.Foundation.Collections.h>

#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformAtomics.h"
#include "Windows/HideWindowsPlatformTypes.h"
#endif
*/
/**
 * 
 */
UCLASS()
class HOLOLENS3DVIEWER_API UWinRTFileOpenDialog : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	//tatic void WinRTFileOpenDialogue();
};
