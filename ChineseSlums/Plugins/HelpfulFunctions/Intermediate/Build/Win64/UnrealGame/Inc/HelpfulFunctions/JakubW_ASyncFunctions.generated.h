// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UJakubW_ASyncFunctions;
#ifdef HELPFULFUNCTIONS_JakubW_ASyncFunctions_generated_h
#error "JakubW_ASyncFunctions.generated.h already included, missing '#pragma once' in JakubW_ASyncFunctions.h"
#endif
#define HELPFULFUNCTIONS_JakubW_ASyncFunctions_generated_h

#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_11_DELEGATE \
struct _Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms \
{ \
	float InputFloatPlusOne; \
	float InputFloatPlusTwo; \
}; \
static inline void FDelayOneFrameOutputPin_DelegateWrapper(const FMulticastScriptDelegate& DelayOneFrameOutputPin, float InputFloatPlusOne, float InputFloatPlusTwo) \
{ \
	_Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms Parms; \
	Parms.InputFloatPlusOne=InputFloatPlusOne; \
	Parms.InputFloatPlusTwo=InputFloatPlusTwo; \
	DelayOneFrameOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_SPARSE_DATA
#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteAfterOneFrame); \
	DECLARE_FUNCTION(execWaitForOneFrame);


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteAfterOneFrame); \
	DECLARE_FUNCTION(execWaitForOneFrame);


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJakubW_ASyncFunctions(); \
	friend struct Z_Construct_UClass_UJakubW_ASyncFunctions_Statics; \
public: \
	DECLARE_CLASS(UJakubW_ASyncFunctions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UJakubW_ASyncFunctions)


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUJakubW_ASyncFunctions(); \
	friend struct Z_Construct_UClass_UJakubW_ASyncFunctions_Statics; \
public: \
	DECLARE_CLASS(UJakubW_ASyncFunctions, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UJakubW_ASyncFunctions)


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubW_ASyncFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubW_ASyncFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubW_ASyncFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubW_ASyncFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJakubW_ASyncFunctions(UJakubW_ASyncFunctions&&); \
	NO_API UJakubW_ASyncFunctions(const UJakubW_ASyncFunctions&); \
public:


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubW_ASyncFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJakubW_ASyncFunctions(UJakubW_ASyncFunctions&&); \
	NO_API UJakubW_ASyncFunctions(const UJakubW_ASyncFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubW_ASyncFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubW_ASyncFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubW_ASyncFunctions)


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_13_PROLOG
#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_SPARSE_DATA \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_SPARSE_DATA \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JakubW_ASyncFunctions."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UJakubW_ASyncFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
