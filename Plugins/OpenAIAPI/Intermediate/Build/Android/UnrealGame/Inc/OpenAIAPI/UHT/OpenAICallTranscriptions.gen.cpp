// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAICallTranscriptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAICallTranscriptions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallTranscriptions();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallTranscriptions_NoRegister();
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics
	{
		struct _Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms
		{
			FString Transcription;
			FString errorMessage;
			bool Success;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transcription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Transcription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Transcription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Transcription = { "Transcription", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms, Transcription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Transcription_MetaData), Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Transcription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms, errorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData), Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData) };
	void Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms), &Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Transcription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAICallTranscriptions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI, nullptr, "OnTranscriptionResponseRecievedPin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::_Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::_Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnTranscriptionResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnTranscriptionResponseRecievedPin, const FString& Transcription, const FString& errorMessage, bool Success)
{
	struct _Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms
	{
		FString Transcription;
		FString errorMessage;
		bool Success;
	};
	_Script_OpenAIAPI_eventOnTranscriptionResponseRecievedPin_Parms Parms;
	Parms.Transcription=Transcription;
	Parms.errorMessage=errorMessage;
	Parms.Success=Success ? true : false;
	OnTranscriptionResponseRecievedPin.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UOpenAICallTranscriptions::execOpenAICallTranscriptions)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_fileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenAICallTranscriptions**)Z_Param__Result=UOpenAICallTranscriptions::OpenAICallTranscriptions(Z_Param_fileName);
		P_NATIVE_END;
	}
	void UOpenAICallTranscriptions::StaticRegisterNativesUOpenAICallTranscriptions()
	{
		UClass* Class = UOpenAICallTranscriptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenAICallTranscriptions", &UOpenAICallTranscriptions::execOpenAICallTranscriptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics
	{
		struct OpenAICallTranscriptions_eventOpenAICallTranscriptions_Parms
		{
			FString fileName;
			UOpenAICallTranscriptions* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_fileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::NewProp_fileName = { "fileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallTranscriptions_eventOpenAICallTranscriptions_Parms, fileName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OpenAICallTranscriptions_eventOpenAICallTranscriptions_Parms, ReturnValue), Z_Construct_UClass_UOpenAICallTranscriptions_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::NewProp_fileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallTranscriptions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAICallTranscriptions, nullptr, "OpenAICallTranscriptions", nullptr, nullptr, Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::OpenAICallTranscriptions_eventOpenAICallTranscriptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::OpenAICallTranscriptions_eventOpenAICallTranscriptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenAICallTranscriptions);
	UClass* Z_Construct_UClass_UOpenAICallTranscriptions_NoRegister()
	{
		return UOpenAICallTranscriptions::StaticClass();
	}
	struct Z_Construct_UClass_UOpenAICallTranscriptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenAICallTranscriptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallTranscriptions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenAICallTranscriptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAICallTranscriptions_OpenAICallTranscriptions, "OpenAICallTranscriptions" }, // 4038432148
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallTranscriptions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallTranscriptions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OpenAICallTranscriptions.h" },
		{ "ModuleRelativePath", "Public/OpenAICallTranscriptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallTranscriptions_Statics::NewProp_Finished_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallTranscriptions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenAICallTranscriptions_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOpenAICallTranscriptions, Finished), Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallTranscriptions_Statics::NewProp_Finished_MetaData), Z_Construct_UClass_UOpenAICallTranscriptions_Statics::NewProp_Finished_MetaData) }; // 1496577787
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenAICallTranscriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenAICallTranscriptions_Statics::NewProp_Finished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenAICallTranscriptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAICallTranscriptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenAICallTranscriptions_Statics::ClassParams = {
		&UOpenAICallTranscriptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenAICallTranscriptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallTranscriptions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallTranscriptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UOpenAICallTranscriptions_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallTranscriptions_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOpenAICallTranscriptions()
	{
		if (!Z_Registration_Info_UClass_UOpenAICallTranscriptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenAICallTranscriptions.OuterSingleton, Z_Construct_UClass_UOpenAICallTranscriptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenAICallTranscriptions.OuterSingleton;
	}
	template<> OPENAIAPI_API UClass* StaticClass<UOpenAICallTranscriptions>()
	{
		return UOpenAICallTranscriptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAICallTranscriptions);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenAICallTranscriptions, UOpenAICallTranscriptions::StaticClass, TEXT("UOpenAICallTranscriptions"), &Z_Registration_Info_UClass_UOpenAICallTranscriptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenAICallTranscriptions), 3825835443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_3398924967(TEXT("/Script/OpenAIAPI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallTranscriptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
