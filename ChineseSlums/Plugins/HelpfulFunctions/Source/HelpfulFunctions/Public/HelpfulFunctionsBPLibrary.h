// Copyright Jakub W, All Rights Reserved. 
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HelpfulFunctionsBPLibrary.generated.h"


/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

USTRUCT(BlueprintType)
struct FSingleClimbPoint
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClimbingPoint")
		bool ValidPoint = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClimbingPoint")
		FVector Location = FVector(0,0,0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClimbingPoint")
		FVector Normal = FVector(0,0,0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClimbingPoint")
		FTransform ActorTransform = FTransform(FRotator(0, 0, 0), FVector(0, 0, 0), FVector(0, 0, 0));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClimbingPoint")
		UPrimitiveComponent* Component = nullptr;

};

USTRUCT(BlueprintType)
struct FVelocityBlendCpp
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Velocity")
		float F = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Velocity")
		float B = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Velocity")
		float L = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Velocity")
		float R = 0.0;
};

UCLASS()
class UHelpfulFunctionsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "JakubW"), Category = "JakubW_FunctionsLibrary")
	static float HelpfulFunctionsSampleFunction(float Param);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Character Capsule Start Location", Keywords = "Character Capsule Component"))
		static FVector GetPlayerCapsuleStartLocation(const UObject* WorldContextObject, const ACharacter* TargetChar);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Component", meta = (DisplayName = "Force Destroy Component", Keywords = "Component"))
		static void ForceDestroyComponent(UActorComponent* ActorComponent);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Interpolation", meta = (DisplayName = "Elastic Out Interp (Vector)", Keywords = "Interpolation Vector"))
		static FVector ElasticOutInterpFast(FVector A, FVector B, float Alpha, float PowerBase=2);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Interpolation", meta = (DisplayName = "Bounce Out Interp (Vector)", Keywords = "Interpolation Vector"))
		static FVector BouceOutInterpFast(FVector A, FVector B, float Alpha);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Math", meta = (DisplayName = "Get Angle Between Vectors", Keywords = "Vector Math Angle"))
		static float GetAngleBetween(FVector A, FVector B);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Interpolation", meta = (DisplayName = "Slerp (Vector)", Keywords = "Vector Math Interpolation"))
		static FVector SlerpFast(FVector A, FVector B, float Alpha);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Interpolation", meta = (DisplayName = "SlerpTo (Vector)", Keywords = "Vector Math Interpolation"))
		static FVector SlerpToFast(FVector Current, FVector Target, float DeltaTime, float InterpSpeed);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Capsule Have Room (With Ignore)", Keywords = "Character Trace"))
		static bool CapsuleHaveRoomWithIgnore(const UObject* WorldContextObject, const ACharacter* TargetChar, FVector Location, TArray<AActor*> ToIgnore, 
											  float ScaleRadius=1, float ScaleHeight=1, const bool DrawTrace=false);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Capsule Have Room (With Ignore) Transform", Keywords = "Character Trace"))
		static bool CapsuleHaveRoomWithIgnoreTransform(const UObject* WorldContextObject, const ACharacter* TargetChar, FTransform TargetTransform, TArray<AActor*> ToIgnore,
			float ScaleRadius = 1, float ScaleHeight = 1, const bool DrawTrace = false);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| ClimbingSystem", meta = (WorldContext = "WorldContextObject", DisplayName = "Climbing Foot IK Trace V3", Keywords = "Character Trace IK Climbing"))
		static void ClimbingFootIK(const UObject* WorldContextObject, bool& ReturnHit, FVector& ReturnLocation, FVector& ReturnNormal, 
									const ACharacter* TargetChar, FVector FootLocation, FVector Direction, float UpOffset, float TraceRadius=18, FVector2D TraceLength=FVector2D(12.0,18.0), 
									bool UseTwoBoneIK=false, FName RootBoneName="Thigh_L", FName JoinBoneName="calf_L", FName EndBoneName="Foot_L", float FootUpOffsetGround=14, int DebugIndex=0);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Math", meta = (DisplayName = "Distance Point To Line", Keywords = "Vector Math Distance"))
		static float DistancePointToLine(FVector LineV1, FVector LineV2, FVector PointVector);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| ClimbingSystem", meta = (WorldContext = "WorldContextObject", DisplayName = "Find Single Ledge Point", Keywords = "Character Trace Climbing"))
		static void FindLedgePoint(const UObject* WorldContextObject, bool& ReturnValid, FVector& ReturnLocation, FVector& ReturnNormal, FTransform& ReturnActorT, UPrimitiveComponent*& ReturnComponent,
			const ACharacter* TargetChar, FVector StartLocation, FVector ForwardDirection, TArray<UClass*> NotThisClass, float ForwardScale = 40, float UpOffset = 20, bool preValid = false, 
			FVector preLocation = FVector(0, 0, 0), FVector preNormal = FVector(0, 0, 0), bool IsFirst = false, bool ForLeftSide = false, int DebugIndex = 0, ECollisionChannel TraceChannel= ECollisionChannel::ECC_Visibility);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Math", meta = (DisplayName = "N To F Vector (Yaw)", Keywords = "Vector Math Rotation"))
		static FVector NormalToVector(FVector Normal);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Array", meta = (DisplayName = "Check Is Not This Class", Keywords = "Actors Class Array"))
		static bool ClassToIgnore(UClass* Target,TArray<UClass*> ToIgnore);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| ClimbingSystem", meta = (WorldContext = "WorldContextObject", DisplayName = "Find Single Ledge Point (Structure)", Keywords = "Character Trace Climbing"))
		static FSingleClimbPoint FindLedgePointStructure(const UObject* WorldContextObject, const ACharacter* TargetChar, FVector StartLocation, FVector ForwardDirection, TArray<UClass*> NotThisClass,
			float ForwardScale = 40, float UpOffset = 20, bool preValid = false, FVector preLocation = FVector(0, 0, 0), FVector preNormal = FVector(0, 0, 0), bool IsFirst = false, 
			bool ForLeftSide = false, int DebugIndex = 0, ECollisionChannel TraceChannel = ECollisionChannel::ECC_Visibility, float NormalFindOffset=2.0);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| ClimbingSystem", meta = (WorldContext = "WorldContextObject", DisplayName = "Try Find Ledge Line", Keywords = "Climbing Trace Character"))
		static void TryFindLedgeLine(const UObject* WorldContextObject, bool& Valid, FSingleClimbPoint& LedgeStruct, const ACharacter* TargetChar, FVector StartLocation, FVector StartDirection, 
			FVector2D AxisNormal, float ZOffset, float ForwardTraceLength, float RightOffsetScale, bool LeftDirection, bool InverseTracing, int TraceDebugIndex, TArray<UClass*> NotThisClass,
			ECollisionChannel TraceChannel = ECollisionChannel::ECC_Visibility, float NormalFindOffset=0.2);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| ClimbingSystem", meta = (WorldContext = "WorldContextObject", DisplayName = "Climbing - Ledge Valid P1", Keywords = "Climbing Validation Character"))
		static bool ClimbingLedgeValidP1(const UObject* WorldContextObject, bool IsValid, FSingleClimbPoint LeftStruct, FSingleClimbPoint RightStruct, ECollisionChannel TraceChannel, float UpAxisTollerance = 25);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Find Foot IK Offset", Keywords = "Foots IK Character", AutoCreateRefTerm="CurrentLocation"))
		static void CalcFootsOffset(const UObject* WorldContextObject, ACharacter* Character, float EnableFootCurveValue, FName IKFootName, FName RootBone, FVector CurrentLocation, FVector CurrentLocationOffset, 
			FRotator CurrentRotationOffset, float DeltaSecond, float IKTraceDistanceAboveFoot, float TraceUpOffset, float IKTraceDistanceBelowFoot, float FootHeight, FVector& NewLocation, FVector& NewLocationOffset, 
			FRotator& NewRotationOffset, int DebugIndex, bool UseByFloorFinding, bool& TracingType);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (DisplayName = "Calculate Diagonal Scale Amount (Fast)", Keywords = "Movement Animations Character"))
		static float CalculateDiagonalScale(UCurveFloat* Curve, FVelocityBlendCpp VelocityBlend);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Calculate Relative Acceleration Amount (Fast)", Keywords = "Movement Animations Character"))
		static FVector CalculateRelativeAcceleration(const UObject* WorldContextObject, const ACharacter* Character, FVector Acceleration, FVector Velocity);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Calculate Velocity Blend Fast", Keywords = "Character AnimCurve"))
		static FVelocityBlendCpp CalcVelocityBlendFast(const UObject* WorldContextObject, FVector Velocity);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Update Movement Values (AnimBP)", Keywords = "Character Anim Graph"))
		static void UpdateMovementValues(const UObject* WorldContextObject, const ACharacter* TargetChar, FVelocityBlendCpp VelocityBlend, float DeltaX, float VelocityBlendInterpSpeed, float AnimatedWalkSpeed, 
			   float AnimatedRunSpeed, float AnimatedSprintSpeed, float AnimatedCrouchSpeed, float Speed, UCurveFloat* DiagonalScaleAmountCurve, UCurveFloat* StrideBlend_N_Walk, UCurveFloat* StrideBlend_N_Run, 
			   UCurveFloat* StrideBlend_C_Walk, FVector Velocity, FVector Acceleration, FVector2D LeanAmount, float GroundedLeanInterpSpeed, FName WeightCurveName, FName BasePoseCurveName, FVelocityBlendCpp& ReturnVelocityBlend, 
			   float& ReturnDiagonalScale, FVector& ReturnRelativeAcc, FVector2D& ReturnLeanAmount, float& ReturnWalkRunBlend, float& ReturnStrideBlend, float& ReturnStandingPlayRate, float& ReturnCrouchPlayRate);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Update Aiming Values (AnimBP)", Keywords = "Character Anim Graph"))
		static void UpdateAimingValues(const UObject* WorldContextObject, const ACharacter* TargetChar, FRotator AimingRotation, FRotator SmoothedAimRotation, float InputYawOffsetTime, int RotationMode, 
				bool HasMovementInput, FVector MovementInput, float DeltaX, float SmoothedAimingRotSpeed, float InputYawOffsetSpeed, FRotator& ReturnSmoothedAimRotation, FVector2D& ReturnAimingAngle, 
			    FVector2D& ReturnSmoothedAimingAngle, float& ReturnAimSweepTime, FRotator& ReturnSpineRotation, float& ReturnInputYawOffsetTime, float& ReturnLeftYawTime, float& ReturnRightYawTime, float& ReturnForwardYawTime);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Update Movement Values LOD (AnimBP)", Keywords = "Character Anim Graph", 
		AdvancedDisplay = "AnimatedWalkSpeed,AnimatedRunSpeed,AnimatedSprintSpeed,AnimatedCrouchSpeed,WeightCurveName"))
		static void UpdateMovementValuesLod(const UObject* WorldContextObject, const ACharacter* TargetChar, FVector MovementLowDetail, FVector& ReturnMovementLowDetail, float& ReturnStandingPlayRate, float& ReturnCrouchingPlayRate, 
			float Speed, float DeltaX, const float AnimatedWalkSpeed=150.0, const float AnimatedRunSpeed=350.0, const float AnimatedSprintSpeed=600.0, const float AnimatedCrouchSpeed=150.0, FName WeightCurveName = FName(TEXT("Weight_Gait")), bool ReturnOnlyDirection=false);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Update Rotation Values (AnimBP)", Keywords = "Character Anim Graph",
		AdvancedDisplay = "YawOffset_LR,YawOffset_FB"))
		static void UpdateRotationValues(const UObject* WorldContextObject, const ACharacter* Character, int& ReturnDirection, float& FYaw, float& BYaw, float& LYaw, float& RYaw, int Gait, int RotationMode, 
			int MovementDirection, FRotator AimingRotation, FVector Velocity, UCurveVector* YawOffset_FB, UCurveVector* YawOffset_LR);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Math", meta = (WorldContext = "WorldContextObject", DisplayName = "Angle In Range", Keywords = "Float State Direction"))
		static bool AngleInRange(float Angle, float MinAngle, float MaxAngle, float Buffer, bool IncreaseBuffer);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Calculate Quadrant", Keywords = "Float State Direction", AdvancedDisplay = "FL_Threshold,BR_Threshold,FR_Threshold,BL_Threshold"))
		static int CalculateQuadrant(int MovementDirection, float FR_Threshold, float FL_Threshold, float BR_Threshold, float BL_Threshold, float Buffer, float Angle);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Smoothed Character Rotation", Keywords = "Character Rotation", AdvancedDisplay = "TargetInterpSpeedConst,TargetInterpSpeedSmooth,UpdateControl"))
		static void SmoothCharacterRotation(const UObject* WorldContextObject, const ACharacter* Character, FRotator& NewTargetRotation, FRotator Target, FRotator CurrentTargetRotation, float DeltaSecond, float TargetInterpSpeedConst,
			float TargetInterpSpeedSmooth, bool UpdateControl, FRotator& NewControlRotation);

	// NOT WORKING!!!
	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Trace", meta = (WorldContext = "WorldContextObject", DisplayName = "Rotated Capsule Trace By Channel", Keywords = "Trace Collision"))
		static bool RotatedCapsuleTraceSingle(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, 
			bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, int DebugIndex, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime); 
	// Simple Line Trace Function With Loop
	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Trace", meta = (WorldContext = "WorldContextObject", DisplayName = "Find Gap By Line Trace", Keywords = "Trace Collision", AutoCreateRefTerm = "ActorsToIgnore", AdvancedDisplay = "TraceColor,TraceHitColor,DrawTime,MaxIteracion"))
		static bool WalkableLineTrace(const UObject* WorldContextObject, const FVector Start, const FVector End, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, 
			int DebugIndex, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor = FLinearColor::Red, FLinearColor TraceHitColor = FLinearColor::Green, float DrawTime=0.5f, int MaxIteracion=6);
	
	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Trace", meta = (WorldContext = "WorldContextObject", DisplayName = "Find Near Point To Wall Surface (Fast)", Keywords = "Trace CoverSystem Collision"))
		static void FindNearPointToWallSurface(const UObject* WorldContextObject, const ACharacter* Character,bool& ValidPoint, FHitResult& OutHitResult, FVector ForwardDirection, int Accuracy=7,bool UseNormalFromFirstTrace=false, 
			float ConstForwardOffset=15.0, FVector RightOffset=FVector(0,0,0), int DebugIndex=0);

	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Array", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Near From Actors Array ", Keywords = "Array Actor"))
		static void GetNearFromActorsArray(const UObject* WorldContextObject, TArray<AActor*> ActorsArray, FVector Origin, bool& ReturnValid, AActor*& OutActor);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Array", meta = (WorldContext = "WorldContextObject", DisplayName = "Class To Actors Array ", Keywords = "Array Actor"))
		static void ClassToActorsArray(const UObject* WorldContextObject, TArray<UClass*> ActorsClass, TArray<AActor*> SingleActorToIgnore, TArray<AActor*>& ReturnArray);

	//ENG: The function's task is to add an offset to the target point so as to eliminate the collision with other AI controllers. It may happen that several controllers will reach to one point. This function tries to eliminate this situation.
	//PL : Zadaniem funckji jest dodanie przesuni�cia wzgl�dem punktu celu, tak aby wyeliminowa� kolizj� wzgl�demi innych kontroler�w AI.Mo�e si� zda�y� taka sytuacja �e kilka kotroler�w b�dzie do�y� do jednego punktu.Ta funkcja stara si� wyeliminowa� tak� sytuacj�.
	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Navigation", meta = (WorldContext = "WorldContextObject", DisplayName = "Fix Move Point When Is Busy ", Keywords = "AI Navigation"))
		static FVector FixMovePointWhenIs(UObject* WorldContextObject, FVector TargetPoint, ACharacter* TargetCharacter, UClass* CharactersArray, float OffsetRadius=60, int MaxIteractions=6, float MinAccetableDistance=25);

	// Working Only When Navigation System Is Valid
	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Collision", meta = (WorldContext = "WorldContextObject", DisplayName = "Check Room By Sphere Ray Cast ", Keywords = "Collision Nav"))
		static float RayCastSphereRoomCheckFast(UObject* WorldContextObject, FTransform Origin, float InRadius=80);
	// Working Only When Navigation System Is Valid
	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Collision", meta = (WorldContext = "WorldContextObject", DisplayName = "Check Room By Sphere Complex Ray Cast ", Keywords = "Collision Nav"))
		static float RayCastSphereComplexRoomCheckFast(UObject* WorldContextObject, FTransform Origin, float InRadius = 80);
	// Function For AI Controllers
	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Check Is Not Hiding In Foliage ", Keywords = "Character Trace"))
		static bool IsNotHidingInFoliage(UObject* WorldContextObject, ACharacter* OwnerCharacter, ACharacter* Character, ECollisionChannel TraceChannel, int DebugIndex);
	
	UFUNCTION(BlueprintCallable, Category = "JakubW_FunctionsLibrary| Navigation", meta = (WorldContext = "WorldContextObject", DisplayName = "Find Base Jump Away Position ", Keywords = "Navigation RayCast"))
		static void FindBaseJumpAwayPosition(UObject* WorldContextObject, bool& ReturnValid, FVector& ReturnLocation, ACharacter* Character, FVector GrenadePosition, float MaxRadius=120, FVector2D Arc=FVector2D(-50,50));

private:
	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Interpolation", meta = (DisplayName = "Bounce Out Time Function", Keywords = "Interpolation Vector"))
		static float BounceOutTimeFunction(float time);

	UFUNCTION(BlueprintPure, Category = "JakubW_FunctionsLibrary| Character", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Anim Curve Value Clamped", Keywords = "Character AnimCurve"))
		static float GetClampedCurveValue(const UObject* WorldContextObject, FName Curve, float Bias=0, float ClampMin=0, float ClampMax=1);

};

