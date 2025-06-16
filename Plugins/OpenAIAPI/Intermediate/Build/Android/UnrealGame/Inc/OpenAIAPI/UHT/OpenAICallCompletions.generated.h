// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAICallCompletions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOpenAICallCompletions;
enum class EOACompletionsEngineType : uint8;
struct FCompletion;
struct FCompletionInfo;
struct FCompletionSettings;
#ifdef OPENAIAPI_OpenAICallCompletions_generated_h
#error "OpenAICallCompletions.generated.h already included, missing '#pragma once' in OpenAICallCompletions.h"
#endif
#define OPENAIAPI_OpenAICallCompletions_generated_h

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_11_DELEGATE \
OPENAIAPI_API void FOnGptResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnGptResponseRecievedPin, TArray<FCompletion> const& completions, const FString& errorMessage, FCompletionInfo const& completionInfo, bool Success);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAICallCompletions);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAICallCompletions(); \
	friend struct Z_Construct_UClass_UOpenAICallCompletions_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallCompletions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallCompletions)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallCompletions(UOpenAICallCompletions&&); \
	NO_API UOpenAICallCompletions(const UOpenAICallCompletions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallCompletions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallCompletions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenAICallCompletions)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_16_PROLOG
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UOpenAICallCompletions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallCompletions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
