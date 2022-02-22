// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyLearningProject/MyLearningProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLearningProjectHUD() {}
// Cross Module References
	MYLEARNINGPROJECT_API UClass* Z_Construct_UClass_AMyLearningProjectHUD_NoRegister();
	MYLEARNINGPROJECT_API UClass* Z_Construct_UClass_AMyLearningProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyLearningProject();
// End Cross Module References
	void AMyLearningProjectHUD::StaticRegisterNativesAMyLearningProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AMyLearningProjectHUD_NoRegister()
	{
		return AMyLearningProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyLearningProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyLearningProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyLearningProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyLearningProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyLearningProjectHUD.h" },
		{ "ModuleRelativePath", "MyLearningProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyLearningProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLearningProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyLearningProjectHUD_Statics::ClassParams = {
		&AMyLearningProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyLearningProjectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyLearningProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyLearningProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyLearningProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyLearningProjectHUD, 2655494945);
	template<> MYLEARNINGPROJECT_API UClass* StaticClass<AMyLearningProjectHUD>()
	{
		return AMyLearningProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyLearningProjectHUD(Z_Construct_UClass_AMyLearningProjectHUD, &AMyLearningProjectHUD::StaticClass, TEXT("/Script/MyLearningProject"), TEXT("AMyLearningProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLearningProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
