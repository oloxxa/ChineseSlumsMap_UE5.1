// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIKTool/Public/AnimGraphNode_PowerIK.h"
#include "PowerIKRuntime/Public/AnimNode_PowerIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_PowerIK() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK();
	POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK();
	POWERIKTOOL_API UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PowerIKTool();
// End Cross Module References
	void UAnimGraphNode_PowerIK::StaticRegisterNativesUAnimGraphNode_PowerIK()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_PowerIK);
	UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK_NoRegister()
	{
		return UAnimGraphNode_PowerIK::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[];
#endif
		static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_PowerIK.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_PowerIK, Node), Z_Construct_UScriptStruct_FAnimNode_PowerIK, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_Node_MetaData)) }; // 331266743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable drawing of debug information in viewport. */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PowerIK.h" },
		{ "ToolTip", "Enable drawing of debug information in viewport." },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((UAnimGraphNode_PowerIK*)Obj)->bEnableDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_PowerIK), &Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::NewProp_bEnableDebugDraw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PowerIK>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::ClassParams = {
		&UAnimGraphNode_PowerIK::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_PowerIK()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PowerIK_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_PowerIK.OuterSingleton;
	}
	template<> POWERIKTOOL_API UClass* StaticClass<UAnimGraphNode_PowerIK>()
	{
		return UAnimGraphNode_PowerIK::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PowerIK);
	UAnimGraphNode_PowerIK::~UAnimGraphNode_PowerIK() {}
	struct Z_CompiledInDeferFile_FID_Project_IWALS_Retarget_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IWALS_Retarget_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_PowerIK, UAnimGraphNode_PowerIK::StaticClass, TEXT("UAnimGraphNode_PowerIK"), &Z_Registration_Info_UClass_UAnimGraphNode_PowerIK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PowerIK), 1577163533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IWALS_Retarget_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_3644630553(TEXT("/Script/PowerIKTool"),
		Z_CompiledInDeferFile_FID_Project_IWALS_Retarget_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_IWALS_Retarget_Plugins_PowerIK_Source_PowerIKTool_Public_AnimGraphNode_PowerIK_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
