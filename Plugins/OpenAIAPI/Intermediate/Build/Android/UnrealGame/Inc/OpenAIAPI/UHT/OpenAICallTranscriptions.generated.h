// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAICallTranscriptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOpenAICallTranscriptions;
#ifdef OPENAIAPI_OpenAICallTranscriptions_generated_h
#error "OpenAICallTranscriptions.generated.h already included, missing '#pragma once' in OpenAICallTranscriptions.h"
#endif
#define OPENAIAPI_OpenAICallTranscriptions_generated_h

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_11_DELEGATE \
OPENAIAPI_API void FOnTranscriptionResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnTranscriptionResponseRecievedPin, const FString& Transcription, const FString& errorMessage, bool Success);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAICallTranscriptions);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAICallTranscriptions(); \
	friend struct Z_Construct_UClass_UOpenAICallTranscriptions_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallTranscriptions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallTranscriptions)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallTranscriptions(UOpenAICallTranscriptions&&); \
	NO_API UOpenAICallTranscriptions(const UOpenAICallTranscriptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallTranscriptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallTranscriptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenAICallTranscriptions)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_15_PROLOG
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UOpenAICallTranscriptions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
