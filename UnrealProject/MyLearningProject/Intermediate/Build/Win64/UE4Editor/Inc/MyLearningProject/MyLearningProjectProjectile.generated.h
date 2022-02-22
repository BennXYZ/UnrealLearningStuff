// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYLEARNINGPROJECT_MyLearningProjectProjectile_generated_h
#error "MyLearningProjectProjectile.generated.h already included, missing '#pragma once' in MyLearningProjectProjectile.h"
#endif
#define MYLEARNINGPROJECT_MyLearningProjectProjectile_generated_h

#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_SPARSE_DATA
#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyLearningProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyLearningProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyLearningProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyLearningProject"), NO_API) \
	DECLARE_SERIALIZER(AMyLearningProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyLearningProjectProjectile(); \
	friend struct Z_Construct_UClass_AMyLearningProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyLearningProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyLearningProject"), NO_API) \
	DECLARE_SERIALIZER(AMyLearningProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyLearningProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyLearningProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLearningProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLearningProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLearningProjectProjectile(AMyLearningProjectProjectile&&); \
	NO_API AMyLearningProjectProjectile(const AMyLearningProjectProjectile&); \
public:


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyLearningProjectProjectile(AMyLearningProjectProjectile&&); \
	NO_API AMyLearningProjectProjectile(const AMyLearningProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyLearningProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyLearningProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyLearningProjectProjectile)


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyLearningProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyLearningProjectProjectile, ProjectileMovement); }


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_12_PROLOG
#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_SPARSE_DATA \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_RPC_WRAPPERS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_INCLASS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_SPARSE_DATA \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYLEARNINGPROJECT_API UClass* StaticClass<class AMyLearningProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyLearningProject_Source_MyLearningProject_MyLearningProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
