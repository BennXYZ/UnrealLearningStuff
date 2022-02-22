// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYLEARNINGPROJECT_MyLearningProjectCharacter_generated_h
#error "MyLearningProjectCharacter.generated.h already included, missing '#pragma once' in MyLearningProjectCharacter.h"
#endif
#define MYLEARNINGPROJECT_MyLearningProjectCharacter_generated_h

#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_SPARSE_DATA
#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_RPC_WRAPPERS
#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyLearningProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyLearningProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyLearningProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyLearningProject"), NO_API) \
	DECLARE_SERIALIZER(AMyLearningProjectCharacter)


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyLearningProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyLearningProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyLearningProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyLearningProject"), NO_API) \
	DECLARE_SERIALIZER(AMyLearningProjectCharacter)


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyLearningProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyLearningProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLearningProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLearningProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLearningProjectCharacter(AMyLearningProjectCharacter&&); \
	NO_API AMyLearningProjectCharacter(const AMyLearningProjectCharacter&); \
public:


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLearningProjectCharacter(AMyLearningProjectCharacter&&); \
	NO_API AMyLearningProjectCharacter(const AMyLearningProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLearningProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLearningProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyLearningProjectCharacter)


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMyLearningProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMyLearningProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMyLearningProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMyLearningProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMyLearningProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMyLearningProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMyLearningProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMyLearningProjectCharacter, L_MotionController); }


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_17_PROLOG
#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_SPARSE_DATA \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_RPC_WRAPPERS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_INCLASS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_SPARSE_DATA \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_INCLASS_NO_PURE_DECLS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYLEARNINGPROJECT_API UClass* StaticClass<class AMyLearningProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyLearningProject_Source_MyLearningProject_MyLearningProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
