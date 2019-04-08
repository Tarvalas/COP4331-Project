// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCARYMAZE_ScaryMazeBaseCharacter_generated_h
#error "ScaryMazeBaseCharacter.generated.h already included, missing '#pragma once' in ScaryMazeBaseCharacter.h"
#endif
#define SCARYMAZE_ScaryMazeBaseCharacter_generated_h

#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateDefense) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaDefense); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateDefense(Z_Param_DeltaDefense); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateAttackPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaAttackPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateAttackPower(Z_Param_DeltaAttackPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_DeltaHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateAttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateAttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLightTimeRunsOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLightTimeRunsOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightTime(Z_Param_Time); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateDefense) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaDefense); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateDefense(Z_Param_DeltaDefense); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateAttackPower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaAttackPower); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateAttackPower(Z_Param_DeltaAttackPower); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaHealth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_DeltaHealth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateAttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateAttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ValidateHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateDead) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateDead(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefense) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDefense(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttackPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAttackPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnLightTimeRunsOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnLightTimeRunsOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLightTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLightTime(Z_Param_Time); \
		P_NATIVE_END; \
	}


#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScaryMazeBaseCharacter(); \
	friend struct Z_Construct_UClass_AScaryMazeBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AScaryMazeBaseCharacter)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAScaryMazeBaseCharacter(); \
	friend struct Z_Construct_UClass_AScaryMazeBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(AScaryMazeBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScaryMaze"), NO_API) \
	DECLARE_SERIALIZER(AScaryMazeBaseCharacter)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScaryMazeBaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScaryMazeBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScaryMazeBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScaryMazeBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScaryMazeBaseCharacter(AScaryMazeBaseCharacter&&); \
	NO_API AScaryMazeBaseCharacter(const AScaryMazeBaseCharacter&); \
public:


#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScaryMazeBaseCharacter(AScaryMazeBaseCharacter&&); \
	NO_API AScaryMazeBaseCharacter(const AScaryMazeBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScaryMazeBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScaryMazeBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScaryMazeBaseCharacter)


#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_10_PROLOG
#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_RPC_WRAPPERS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_INCLASS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
	ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScaryMaze_Source_ScaryMaze_ScaryMazeBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
