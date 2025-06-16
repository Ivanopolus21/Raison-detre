// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAICallDALLE.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOpenAICallDALLE;
enum class EOAImageSize : uint8;
#ifdef OPENAIAPI_OpenAICallDALLE_generated_h
#error "OpenAICallDALLE.generated.h already included, missing '#pragma once' in OpenAICallDALLE.h"
#endif
#define OPENAIAPI_OpenAICallDALLE_generated_h

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_11_DELEGATE \
OPENAIAPI_API void FOnDalleResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnDalleResponseRecievedPin, TArray<FString> const& generatedImageUrls, const FString& errorMessage, bool Success);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAICallDALLE);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_ACCESSORS
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAICallDALLE(); \
	friend struct Z_Construct_UClass_UOpenAICallDALLE_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallDALLE, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallDALLE)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallDALLE(UOpenAICallDALLE&&); \
	NO_API UOpenAICallDALLE(const UOpenAICallDALLE&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallDALLE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallDALLE); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenAICallDALLE)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_16_PROLOG
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_ACCESSORS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UOpenAICallDALLE>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
