// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ShooterGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShooterGame.ShooterState_RevivedFromDown.OnReviveCompleted
// (Final, Native, Public)

void UShooterState_RevivedFromDown::OnReviveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterState_RevivedFromDown.OnReviveCompleted");

	UShooterState_RevivedFromDown_OnReviveCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomAccountPortraitData.IsFlipBook
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomAccountPortraitData::IsFlipBook()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomAccountPortraitData.IsFlipBook");

	UCustomAccountPortraitData_IsFlipBook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomAccountPortraitData.GetSmallPortraitObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCustomAccountPortraitData::GetSmallPortraitObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomAccountPortraitData.GetSmallPortraitObject");

	UCustomAccountPortraitData_GetSmallPortraitObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomAccountPortraitData.GetMediumPortraitObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCustomAccountPortraitData::GetMediumPortraitObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomAccountPortraitData.GetMediumPortraitObject");

	UCustomAccountPortraitData_GetMediumPortraitObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomAccountPortraitData.GetLargePortraitObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UCustomAccountPortraitData::GetLargePortraitObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomAccountPortraitData.GetLargePortraitObject");

	UCustomAccountPortraitData_GetLargePortraitObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomizationBlueprintActor.PlayWeaponCustomFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         FirstPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ThirdPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           IdleSound                      (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         CustomMenuFX                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECustomFXPerspective> MenuPerspective                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimary                     (Parm, ZeroConstructor, IsPlainOldData)

void ACustomizationBlueprintActor::PlayWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound, class UParticleSystem* CustomMenuFX, TEnumAsByte<ECustomFXPerspective> MenuPerspective, bool bIsPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationBlueprintActor.PlayWeaponCustomFX");

	ACustomizationBlueprintActor_PlayWeaponCustomFX_Params params;
	params.FirstPersonFX = FirstPersonFX;
	params.ThirdPersonFX = ThirdPersonFX;
	params.AttachSocketName = AttachSocketName;
	params.IdleSound = IdleSound;
	params.CustomMenuFX = CustomMenuFX;
	params.MenuPerspective = MenuPerspective;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationBlueprintActor.PlayOffHandWeaponCustomFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         FirstPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ThirdPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           IdleSound                      (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         CustomMenuFX                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECustomFXPerspective> MenuPerspective                (Parm, ZeroConstructor, IsPlainOldData)

void ACustomizationBlueprintActor::PlayOffHandWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound, class UParticleSystem* CustomMenuFX, TEnumAsByte<ECustomFXPerspective> MenuPerspective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationBlueprintActor.PlayOffHandWeaponCustomFX");

	ACustomizationBlueprintActor_PlayOffHandWeaponCustomFX_Params params;
	params.FirstPersonFX = FirstPersonFX;
	params.ThirdPersonFX = ThirdPersonFX;
	params.AttachSocketName = AttachSocketName;
	params.IdleSound = IdleSound;
	params.CustomMenuFX = CustomMenuFX;
	params.MenuPerspective = MenuPerspective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationBlueprintActor.PlayCharacterCustomFX
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UParticleSystem*         TeamEmitterTemplate            (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EnemyEmitterTemplate           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayInFirst                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayInThird                   (Parm, ZeroConstructor, IsPlainOldData)

void ACustomizationBlueprintActor::PlayCharacterCustomFX(class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride, bool bPlayInFirst, bool bPlayInThird)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationBlueprintActor.PlayCharacterCustomFX");

	ACustomizationBlueprintActor_PlayCharacterCustomFX_Params params;
	params.TeamEmitterTemplate = TeamEmitterTemplate;
	params.EnemyEmitterTemplate = EnemyEmitterTemplate;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.IsFirstPersonOverride = IsFirstPersonOverride;
	params.bPlayInFirst = bPlayInFirst;
	params.bPlayInThird = bPlayInThird;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationBlueprintActor.OnStartCustomization
// (Event, Public, BlueprintEvent)

void ACustomizationBlueprintActor::OnStartCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationBlueprintActor.OnStartCustomization");

	ACustomizationBlueprintActor_OnStartCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationBlueprintActor.OnKickKill
// (Event, Public, BlueprintEvent)

void ACustomizationBlueprintActor::OnKickKill()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationBlueprintActor.OnKickKill");

	ACustomizationBlueprintActor_OnKickKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationBlueprintActor.GetLocalActiveCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* ACustomizationBlueprintActor::GetLocalActiveCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationBlueprintActor.GetLocalActiveCamera");

	ACustomizationBlueprintActor_GetLocalActiveCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.CustomizationContainerBlueprint.PlayWeaponCustomFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         FirstPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ThirdPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           IdleSound                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPrimary                     (Parm, ZeroConstructor, IsPlainOldData)

void ACustomizationContainerBlueprint::PlayWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound, bool bIsPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationContainerBlueprint.PlayWeaponCustomFX");

	ACustomizationContainerBlueprint_PlayWeaponCustomFX_Params params;
	params.FirstPersonFX = FirstPersonFX;
	params.ThirdPersonFX = ThirdPersonFX;
	params.AttachSocketName = AttachSocketName;
	params.IdleSound = IdleSound;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationContainerBlueprint.PlayOffHandWeaponCustomFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         FirstPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ThirdPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           IdleSound                      (Parm, ZeroConstructor, IsPlainOldData)

void ACustomizationContainerBlueprint::PlayOffHandWeaponCustomFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName, class UAkAudioEvent* IdleSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationContainerBlueprint.PlayOffHandWeaponCustomFX");

	ACustomizationContainerBlueprint_PlayOffHandWeaponCustomFX_Params params;
	params.FirstPersonFX = FirstPersonFX;
	params.ThirdPersonFX = ThirdPersonFX;
	params.AttachSocketName = AttachSocketName;
	params.IdleSound = IdleSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationContainerBlueprint.PlayCharacterCustomFX
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UParticleSystem*         TeamEmitterTemplate            (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EnemyEmitterTemplate           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayInFirst                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayInThird                   (Parm, ZeroConstructor, IsPlainOldData)

void ACustomizationContainerBlueprint::PlayCharacterCustomFX(class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride, bool bPlayInFirst, bool bPlayInThird)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationContainerBlueprint.PlayCharacterCustomFX");

	ACustomizationContainerBlueprint_PlayCharacterCustomFX_Params params;
	params.TeamEmitterTemplate = TeamEmitterTemplate;
	params.EnemyEmitterTemplate = EnemyEmitterTemplate;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.IsFirstPersonOverride = IsFirstPersonOverride;
	params.bPlayInFirst = bPlayInFirst;
	params.bPlayInThird = bPlayInThird;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.CustomizationContainerBlueprint.OnStartCustomization
// (Event, Public, BlueprintEvent)

void ACustomizationContainerBlueprint::OnStartCustomization()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.CustomizationContainerBlueprint.OnStartCustomization");

	ACustomizationContainerBlueprint_OnStartCustomization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DialogueBlueprint.PlayDialogue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           OnDiscardSound                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumReplayTimeInSeconds     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaximumWaitTimeBeforeInterruptingInSeconds (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopWhenOwnerDestroyed         (Parm, ZeroConstructor, IsPlainOldData)

void UDialogueBlueprint::PlayDialogue(class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds, bool StopWhenOwnerDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DialogueBlueprint.PlayDialogue");

	UDialogueBlueprint_PlayDialogue_Params params;
	params.Sound = Sound;
	params.OnDiscardSound = OnDiscardSound;
	params.Priority = Priority;
	params.SamePriorityConflictResolution = SamePriorityConflictResolution;
	params.LowerPriorityConflictResolution = LowerPriorityConflictResolution;
	params.MinimumReplayTimeInSeconds = MinimumReplayTimeInSeconds;
	params.MaximumWaitTimeBeforeInterruptingInSeconds = MaximumWaitTimeBeforeInterruptingInSeconds;
	params.StopWhenOwnerDestroyed = StopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.DialogueBlueprint.GetAssociatedWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UDialogueBlueprint::GetAssociatedWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DialogueBlueprint.GetAssociatedWorld");

	UDialogueBlueprint_GetAssociatedWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.DialogueBlueprint.GetAssociatedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UDialogueBlueprint::GetAssociatedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DialogueBlueprint.GetAssociatedActor");

	UDialogueBlueprint_GetAssociatedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.DialogueBlueprint.BlueprintTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UDialogueBlueprint::BlueprintTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.DialogueBlueprint.BlueprintTick");

	UDialogueBlueprint_BlueprintTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterVendingMachine.SetItemRarity
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ItemRarity                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterVendingMachine::SetItemRarity(int ItemRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterVendingMachine.SetItemRarity");

	AShooterVendingMachine_SetItemRarity_Params params;
	params.ItemRarity = ItemRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterVendingMachine.OnItemPurchased
// (Event, Public, BlueprintEvent)

void AShooterVendingMachine::OnItemPurchased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterVendingMachine.OnItemPurchased");

	AShooterVendingMachine_OnItemPurchased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterVendingMachine.OnInsufficientFunds
// (Event, Public, BlueprintEvent)

void AShooterVendingMachine::OnInsufficientFunds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterVendingMachine.OnInsufficientFunds");

	AShooterVendingMachine_OnInsufficientFunds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterVendingMachine.NetMulticastPurchaseSucceeded
// (Net, Native, Event, NetMulticast, Public)

void AShooterVendingMachine::NetMulticastPurchaseSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterVendingMachine.NetMulticastPurchaseSucceeded");

	AShooterVendingMachine_NetMulticastPurchaseSucceeded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterVendingMachine.NetMulticastPurchaseFailed
// (Net, Native, Event, NetMulticast, Public)

void AShooterVendingMachine::NetMulticastPurchaseFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterVendingMachine.NetMulticastPurchaseFailed");

	AShooterVendingMachine_NetMulticastPurchaseFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPickup.OnRep_VendingOwner
// (Native, Public)

void AShooterPickup::OnRep_VendingOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.OnRep_VendingOwner");

	AShooterPickup_OnRep_VendingOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPickup.OnRep_FinalCost
// (Final, Native, Public)

void AShooterPickup::OnRep_FinalCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.OnRep_FinalCost");

	AShooterPickup_OnRep_FinalCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPickup.OnPickupAlt
// (Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPickup::OnPickupAlt(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.OnPickupAlt");

	AShooterPickup_OnPickupAlt_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPickup.OnPickup
// (Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPickup::OnPickup(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.OnPickup");

	AShooterPickup_OnPickup_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPickup.NetMulticastPlayPickupFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPickup::NetMulticastPlayPickupFX(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup.NetMulticastPlayPickupFX");

	AShooterPickup_NetMulticastPlayPickupFX_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameData.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UShooterGameData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGameData* UShooterGameData::STATIC_Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameData.Get");

	UShooterGameData_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterDialogueAnnouncer.OnRoundEnd
// (Event, Public, BlueprintEvent)

void UShooterDialogueAnnouncer::OnRoundEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueAnnouncer.OnRoundEnd");

	UShooterDialogueAnnouncer_OnRoundEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueAnnouncer.OnGameStarted
// (Event, Public, BlueprintEvent)

void UShooterDialogueAnnouncer::OnGameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueAnnouncer.OnGameStarted");

	UShooterDialogueAnnouncer_OnGameStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueAnnouncer.OnGameEnded
// (Event, Public, BlueprintEvent)

void UShooterDialogueAnnouncer::OnGameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueAnnouncer.OnGameEnded");

	UShooterDialogueAnnouncer_OnGameEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueAnnouncer.GetLocalPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerController* UShooterDialogueAnnouncer::GetLocalPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueAnnouncer.GetLocalPlayerController");

	UShooterDialogueAnnouncer_GetLocalPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterDialogueAnnouncer.GetLocalCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterDialogueAnnouncer::GetLocalCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueAnnouncer.GetLocalCharacter");

	UShooterDialogueAnnouncer_GetLocalCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPhysicsVolume_Gravity.SetVolumeGravityType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EGravityBubble>    NewGravityType                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPhysicsVolume_Gravity::SetVolumeGravityType(TEnumAsByte<EGravityBubble> NewGravityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPhysicsVolume_Gravity.SetVolumeGravityType");

	AShooterPhysicsVolume_Gravity_SetVolumeGravityType_Params params;
	params.NewGravityType = NewGravityType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGravitySeed.GetProjectileGravityScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterGravitySeed::GetProjectileGravityScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGravitySeed.GetProjectileGravityScale");

	AShooterGravitySeed_GetProjectileGravityScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.SpawnBloodSplatterDecals
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  FromActor                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DecalArray                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RandomAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumDecals                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnOnActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_SpawnBloodSplatterDecals(class AActor* FromActor, class UClass* DecalArray, const struct FVector& StartLocation, const struct FVector& Direction, float RandomAngle, int NumDecals, bool bSpawnOnActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.SpawnBloodSplatterDecals");

	UShooterGameUtils_SpawnBloodSplatterDecals_Params params;
	params.FromActor = FromActor;
	params.DecalArray = DecalArray;
	params.StartLocation = StartLocation;
	params.Direction = Direction;
	params.RandomAngle = RandomAngle;
	params.NumDecals = NumDecals;
	params.bSpawnOnActor = bSpawnOnActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.ShooterSpawnEmitterAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UParticleSystem*         TeamEmitterTemplate            (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EnemyEmitterTemplate           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UShooterGameUtils::STATIC_ShooterSpawnEmitterAttached(class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, TEnumAsByte<EIsFirstPersonOverride> IsFirstPersonOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.ShooterSpawnEmitterAttached");

	UShooterGameUtils_ShooterSpawnEmitterAttached_Params params;
	params.TeamEmitterTemplate = TeamEmitterTemplate;
	params.EnemyEmitterTemplate = EnemyEmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;
	params.IsFirstPersonOverride = IsFirstPersonOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.ShooterSpawnEmitterAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         TeamEmitterTemplate            (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EnemyEmitterTemplate           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UShooterGameUtils::STATIC_ShooterSpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* TeamEmitterTemplate, class UParticleSystem* EnemyEmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.ShooterSpawnEmitterAtLocation");

	UShooterGameUtils_ShooterSpawnEmitterAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TeamEmitterTemplate = TeamEmitterTemplate;
	params.EnemyEmitterTemplate = EnemyEmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.SetSurfaceSwitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShooterPhysMaterialType> SurfaceType                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsImpact                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_SetSurfaceSwitch(TEnumAsByte<EShooterPhysMaterialType> SurfaceType, class AActor* Owner, bool bIsImpact)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.SetSurfaceSwitch");

	UShooterGameUtils_SetSurfaceSwitch_Params params;
	params.SurfaceType = SurfaceType;
	params.Owner = Owner;
	params.bIsImpact = bIsImpact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.SetScalarParamForAllMaterialsForAllMeshes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       playerCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ParamVal                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_SetScalarParamForAllMaterialsForAllMeshes(class AShooterCharacter* playerCharacter, const struct FName& ParamName, float ParamVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.SetScalarParamForAllMaterialsForAllMeshes");

	UShooterGameUtils_SetScalarParamForAllMaterialsForAllMeshes_Params params;
	params.playerCharacter = playerCharacter;
	params.ParamName = ParamName;
	params.ParamVal = ParamVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.SetScalarParamForAllMaterials
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InMesh                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ParamVal                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_SetScalarParamForAllMaterials(class USkeletalMeshComponent* InMesh, const struct FName& ParamName, float ParamVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.SetScalarParamForAllMaterials");

	UShooterGameUtils_SetScalarParamForAllMaterials_Params params;
	params.InMesh = InMesh;
	params.ParamName = ParamName;
	params.ParamVal = ParamVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.PredictProjectilePath
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// TArray<struct FVector>         OutPathPositions               (Parm, OutParm, ZeroConstructor)
// struct FVector                 OutLastTraceDestination        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartPos                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LaunchVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTracePath                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ProjectileRadius               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>   DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DrawDebugTime                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreNonBlocking             (Parm, ZeroConstructor, IsPlainOldData)
// float                          SimFrequency                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxSimTime                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideGravityZ               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_PredictProjectilePath(class UObject* WorldContextObject, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, bool bIgnoreNonBlocking, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.PredictProjectilePath");

	UShooterGameUtils_PredictProjectilePath_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StartPos = StartPos;
	params.LaunchVelocity = LaunchVelocity;
	params.bTracePath = bTracePath;
	params.ProjectileRadius = ProjectileRadius;
	params.ObjectTypes = ObjectTypes;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.DrawDebugTime = DrawDebugTime;
	params.bIgnoreNonBlocking = bIgnoreNonBlocking;
	params.SimFrequency = SimFrequency;
	params.MaxSimTime = MaxSimTime;
	params.OverrideGravityZ = OverrideGravityZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (OutPathPositions != nullptr)
		*OutPathPositions = params.OutPathPositions;
	if (OutLastTraceDestination != nullptr)
		*OutLastTraceDestination = params.OutLastTraceDestination;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.PlayVoiceOver
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVoiceOverData          VOData                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ObjectivePlayer                (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_PlayVoiceOver(class UObject* WorldContextObject, const struct FVoiceOverData& VOData, int TeamNum, class AShooterCharacter* ObjectivePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.PlayVoiceOver");

	UShooterGameUtils_PlayVoiceOver_Params params;
	params.WorldContextObject = WorldContextObject;
	params.VOData = VOData;
	params.TeamNum = TeamNum;
	params.ObjectivePlayer = ObjectivePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.PlayDialogueTeamSpecific
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           FriendlyEvent                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           EnemyEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           ObjectivePlayerEvent           (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           SpectatorLawEvent              (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           SpectatorBreakersEvent         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ObjectivePlayer                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinReplayTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> SamePrioConflictResolution     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> LowerPrioConflictResolution    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkipEnemyIfEmpty              (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_PlayDialogueTeamSpecific(class UObject* WorldContextObject, class UAkAudioEvent* FriendlyEvent, class UAkAudioEvent* EnemyEvent, class UAkAudioEvent* ObjectivePlayerEvent, class UAkAudioEvent* SpectatorLawEvent, class UAkAudioEvent* SpectatorBreakersEvent, int TeamNumber, class AShooterCharacter* ObjectivePlayer, int Priority, float MinReplayTime, float MaxWaitTime, float Delay, TEnumAsByte<EDialogueConflictResolution> SamePrioConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPrioConflictResolution, bool bSkipEnemyIfEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.PlayDialogueTeamSpecific");

	UShooterGameUtils_PlayDialogueTeamSpecific_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FriendlyEvent = FriendlyEvent;
	params.EnemyEvent = EnemyEvent;
	params.ObjectivePlayerEvent = ObjectivePlayerEvent;
	params.SpectatorLawEvent = SpectatorLawEvent;
	params.SpectatorBreakersEvent = SpectatorBreakersEvent;
	params.TeamNumber = TeamNumber;
	params.ObjectivePlayer = ObjectivePlayer;
	params.Priority = Priority;
	params.MinReplayTime = MinReplayTime;
	params.MaxWaitTime = MaxWaitTime;
	params.Delay = Delay;
	params.SamePrioConflictResolution = SamePrioConflictResolution;
	params.LowerPrioConflictResolution = LowerPrioConflictResolution;
	params.bSkipEnemyIfEmpty = bSkipEnemyIfEmpty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.PlayAkAudioEventInEarsTeamSpecific
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           FriendlyEvent                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           EnemyEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           SpectatorEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAkSoundInstance*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkSoundInstance* UShooterGameUtils::STATIC_PlayAkAudioEventInEarsTeamSpecific(class UObject* WorldContextObject, int TeamNum, class UAkAudioEvent* FriendlyEvent, class UAkAudioEvent* EnemyEvent, class UAkAudioEvent* SpectatorEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.PlayAkAudioEventInEarsTeamSpecific");

	UShooterGameUtils_PlayAkAudioEventInEarsTeamSpecific_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TeamNum = TeamNum;
	params.FriendlyEvent = FriendlyEvent;
	params.EnemyEvent = EnemyEvent;
	params.SpectatorEvent = SpectatorEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.PlayAkAudioEventInEars
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAkSoundInstance*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkSoundInstance* UShooterGameUtils::STATIC_PlayAkAudioEventInEars(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.PlayAkAudioEventInEars");

	UShooterGameUtils_PlayAkAudioEventInEars_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.LineTraceActors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Source                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Destination                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnorePlayers                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionOverride              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_LineTraceActors(class AActor* Source, class AActor* Destination, bool bIgnorePlayers, float MaxDistance, TEnumAsByte<ECollisionChannel> CollisionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.LineTraceActors");

	UShooterGameUtils_LineTraceActors_Params params;
	params.Source = Source;
	params.Destination = Destination;
	params.bIgnorePlayers = bIgnorePlayers;
	params.MaxDistance = MaxDistance;
	params.CollisionOverride = CollisionOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsPS4Build
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsPS4Build()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsPS4Build");

	UShooterGameUtils_IsPS4Build_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsPositionInWarningOrDangerZone
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsPositionInWarningOrDangerZone(class UObject* WorldContextObject, const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsPositionInWarningOrDangerZone");

	UShooterGameUtils_IsPositionInWarningOrDangerZone_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsPositionInsideDome
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CheckLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsPositionInsideDome(class UObject* WorldContextObject, const struct FVector& CheckLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsPositionInsideDome");

	UShooterGameUtils_IsPositionInsideDome_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CheckLocation = CheckLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsPositionInDangerZone
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsPositionInDangerZone(class UObject* WorldContextObject, const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsPositionInDangerZone");

	UShooterGameUtils_IsPositionInDangerZone_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsInEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludePlayInEditor           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsInEditor(class UObject* WorldContextObject, bool bIncludePlayInEditor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsInEditor");

	UShooterGameUtils_IsInEditor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bIncludePlayInEditor = bIncludePlayInEditor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsGoreEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsGoreEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsGoreEnabled");

	UShooterGameUtils_IsGoreEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsFriendlyTeamForViewedPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFreeCamIsFriendly             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsFriendlyTeamForViewedPlayer(class UObject* WorldContextObject, int TeamNum, bool bFreeCamIsFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsFriendlyTeamForViewedPlayer");

	UShooterGameUtils_IsFriendlyTeamForViewedPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TeamNum = TeamNum;
	params.bFreeCamIsFriendly = bFreeCamIsFriendly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.IsFriendlyTeamForLocalPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFreeCamIsFriendly             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_IsFriendlyTeamForLocalPlayer(class UObject* WorldContextObject, int TeamNum, bool bFreeCamIsFriendly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.IsFriendlyTeamForLocalPlayer");

	UShooterGameUtils_IsFriendlyTeamForLocalPlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TeamNum = TeamNum;
	params.bFreeCamIsFriendly = bFreeCamIsFriendly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.HideCharacter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_HideCharacter(class AShooterCharacter* Player, bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.HideCharacter");

	UShooterGameUtils_HideCharacter_Params params;
	params.Player = Player;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.GetViewedPlayerTeamNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShooterGameUtils::STATIC_GetViewedPlayerTeamNum(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetViewedPlayerTeamNum");

	UShooterGameUtils_GetViewedPlayerTeamNum_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetShooterProjectilesInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterProjectile*> OutShooterProjectiles          (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetShooterProjectilesInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterProjectile*>* OutShooterProjectiles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetShooterProjectilesInRadius");

	UShooterGameUtils_GetShooterProjectilesInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterProjectiles != nullptr)
		*OutShooterProjectiles = params.OutShooterProjectiles;
}


// Function ShooterGame.ShooterGameUtils.GetShooterHUD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterHUD* UShooterGameUtils::STATIC_GetShooterHUD(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetShooterHUD");

	UShooterGameUtils_GetShooterHUD_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetShooterDroidsInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterBaseDroid*> OutShooterDroids               (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetShooterDroidsInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterBaseDroid*>* OutShooterDroids)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetShooterDroidsInRadius");

	UShooterGameUtils_GetShooterDroidsInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterDroids != nullptr)
		*OutShooterDroids = params.OutShooterDroids;
}


// Function ShooterGame.ShooterGameUtils.GetShooterCharactersPartitionedByRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> OutShooterCharactersInRadius   (Parm, OutParm, ZeroConstructor)
// TArray<class AShooterCharacter*> OutShooterCharactersOutOfRadius (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetShooterCharactersPartitionedByRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterCharacter*>* OutShooterCharactersInRadius, TArray<class AShooterCharacter*>* OutShooterCharactersOutOfRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetShooterCharactersPartitionedByRadius");

	UShooterGameUtils_GetShooterCharactersPartitionedByRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterCharactersInRadius != nullptr)
		*OutShooterCharactersInRadius = params.OutShooterCharactersInRadius;
	if (OutShooterCharactersOutOfRadius != nullptr)
		*OutShooterCharactersOutOfRadius = params.OutShooterCharactersOutOfRadius;
}


// Function ShooterGame.ShooterGameUtils.GetShooterCharactersInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> OutShooterCharacters           (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetShooterCharactersInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetShooterCharactersInRadius");

	UShooterGameUtils_GetShooterCharactersInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterCharacters != nullptr)
		*OutShooterCharacters = params.OutShooterCharacters;
}


// Function ShooterGame.ShooterGameUtils.GetShooterCharacterCarryingFlag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AShooterCharacter*       Shooter                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterFlag*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterFlag* UShooterGameUtils::STATIC_GetShooterCharacterCarryingFlag(class AShooterCharacter* Shooter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetShooterCharacterCarryingFlag");

	UShooterGameUtils_GetShooterCharacterCarryingFlag_Params params;
	params.Shooter = Shooter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetPlayerMovementCardinalDirection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECardinalDirection> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECardinalDirection> UShooterGameUtils::STATIC_GetPlayerMovementCardinalDirection(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetPlayerMovementCardinalDirection");

	UShooterGameUtils_GetPlayerMovementCardinalDirection_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetNumLiveCharactersOnTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShooterGameUtils::STATIC_GetNumLiveCharactersOnTeam(class UWorld* World, int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetNumLiveCharactersOnTeam");

	UShooterGameUtils_GetNumLiveCharactersOnTeam_Params params;
	params.World = World;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetNeutralColorSecondary
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterGameUtils::STATIC_GetNeutralColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetNeutralColorSecondary");

	UShooterGameUtils_GetNeutralColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetNeutralColorPrimary
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterGameUtils::STATIC_GetNeutralColorPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetNeutralColorPrimary");

	UShooterGameUtils_GetNeutralColorPrimary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetMyTeamColorSecondary
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterGameUtils::STATIC_GetMyTeamColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetMyTeamColorSecondary");

	UShooterGameUtils_GetMyTeamColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetMyTeamColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterGameUtils::STATIC_GetMyTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetMyTeamColor");

	UShooterGameUtils_GetMyTeamColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetMainHudWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UShooterHudWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterHudWidget* UShooterGameUtils::STATIC_GetMainHudWidget(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetMainHudWidget");

	UShooterGameUtils_GetMainHudWidget_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetLocalTeamNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShooterGameUtils::STATIC_GetLocalTeamNum(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetLocalTeamNum");

	UShooterGameUtils_GetLocalTeamNum_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetLocallyControlledOrSpectatedCharacter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterGameUtils::STATIC_GetLocallyControlledOrSpectatedCharacter(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetLocallyControlledOrSpectatedCharacter");

	UShooterGameUtils_GetLocallyControlledOrSpectatedCharacter_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetLiveCharactersOnTeamAsActors
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AActor*> UShooterGameUtils::STATIC_GetLiveCharactersOnTeamAsActors(class UWorld* World, int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetLiveCharactersOnTeamAsActors");

	UShooterGameUtils_GetLiveCharactersOnTeamAsActors_Params params;
	params.World = World;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetLiveCharactersOnTeam
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AShooterCharacter*> UShooterGameUtils::STATIC_GetLiveCharactersOnTeam(class UWorld* World, int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetLiveCharactersOnTeam");

	UShooterGameUtils_GetLiveCharactersOnTeam_Params params;
	params.World = World;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetInterceptLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          ObjSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ObjPos                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetPos                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetAccel                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InMaxInterations               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShooterGameUtils::STATIC_GetInterceptLocation(float ObjSpeed, const struct FVector& ObjPos, const struct FVector& TargetPos, const struct FVector& TargetVelocity, const struct FVector& TargetAccel, int InMaxInterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetInterceptLocation");

	UShooterGameUtils_GetInterceptLocation_Params params;
	params.ObjSpeed = ObjSpeed;
	params.ObjPos = ObjPos;
	params.TargetPos = TargetPos;
	params.TargetVelocity = TargetVelocity;
	params.TargetAccel = TargetAccel;
	params.InMaxInterations = InMaxInterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetGravitySeedsInRadius
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterGravitySeed*> OutSeeds                       (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetGravitySeedsInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<class AShooterGravitySeed*>* OutSeeds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetGravitySeedsInRadius");

	UShooterGameUtils_GetGravitySeedsInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSeeds != nullptr)
		*OutSeeds = params.OutSeeds;
}


// Function ShooterGame.ShooterGameUtils.GetFriendsNearPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             InInstigator                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> OutShooterCharacters           (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetFriendsNearPosition(class AController* InInstigator, const struct FVector& Position, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetFriendsNearPosition");

	UShooterGameUtils_GetFriendsNearPosition_Params params;
	params.InInstigator = InInstigator;
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterCharacters != nullptr)
		*OutShooterCharacters = params.OutShooterCharacters;
}


// Function ShooterGame.ShooterGameUtils.GetFlagFromTeamNum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterFlag*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterFlag* UShooterGameUtils::STATIC_GetFlagFromTeamNum(class UObject* WorldContext, int TeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetFlagFromTeamNum");

	UShooterGameUtils_GetFlagFromTeamNum_Params params;
	params.WorldContext = WorldContext;
	params.TeamNumber = TeamNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetEnemyTeamColorSecondary
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterGameUtils::STATIC_GetEnemyTeamColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetEnemyTeamColorSecondary");

	UShooterGameUtils_GetEnemyTeamColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetEnemyTeamColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterGameUtils::STATIC_GetEnemyTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetEnemyTeamColor");

	UShooterGameUtils_GetEnemyTeamColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetEnemiesNearPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*             InInstigator                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> OutShooterCharacters           (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetEnemiesNearPosition(class AController* InInstigator, const struct FVector& Position, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetEnemiesNearPosition");

	UShooterGameUtils_GetEnemiesNearPosition_Params params;
	params.InInstigator = InInstigator;
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterCharacters != nullptr)
		*OutShooterCharacters = params.OutShooterCharacters;
}


// Function ShooterGame.ShooterGameUtils.GetEnemiesNearCharacter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AShooterCharacter*       InCharacter                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> OutShooterCharacters           (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetEnemiesNearCharacter(class AShooterCharacter* InCharacter, float Radius, TArray<class AShooterCharacter*>* OutShooterCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetEnemiesNearCharacter");

	UShooterGameUtils_GetEnemiesNearCharacter_Params params;
	params.InCharacter = InCharacter;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterCharacters != nullptr)
		*OutShooterCharacters = params.OutShooterCharacters;
}


// Function ShooterGame.ShooterGameUtils.GetDistanceToFloor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterGameUtils::STATIC_GetDistanceToFloor(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetDistanceToFloor");

	UShooterGameUtils_GetDistanceToFloor_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetCursorizedRightVelocity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterGameUtils::STATIC_GetCursorizedRightVelocity(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetCursorizedRightVelocity");

	UShooterGameUtils_GetCursorizedRightVelocity_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetCursorizedForwardVelocity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterGameUtils::STATIC_GetCursorizedForwardVelocity(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetCursorizedForwardVelocity");

	UShooterGameUtils_GetCursorizedForwardVelocity_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetClosestPointOnGroundAround
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Pos                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShooterGameUtils::STATIC_GetClosestPointOnGroundAround(class UObject* WorldContextObject, const struct FVector& Pos, float InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetClosestPointOnGroundAround");

	UShooterGameUtils_GetClosestPointOnGroundAround_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pos = Pos;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetClosestCharacterToPosition
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterGameUtils::STATIC_GetClosestCharacterToPosition(class UObject* WorldContextObject, const struct FVector& Position, float MaxRange, int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetClosestCharacterToPosition");

	UShooterGameUtils_GetClosestCharacterToPosition_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Position = Position;
	params.MaxRange = MaxRange;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetCardinalDirection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Input                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Forward                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Right                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECardinalDirection> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECardinalDirection> UShooterGameUtils::STATIC_GetCardinalDirection(const struct FVector& Input, const struct FVector& Forward, const struct FVector& Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetCardinalDirection");

	UShooterGameUtils_GetCardinalDirection_Params params;
	params.Input = Input;
	params.Forward = Forward;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetAnimMorphTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   MorphTargetName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterGameUtils::STATIC_GetAnimMorphTarget(class USkeletalMeshComponent* SkeletalMesh, const struct FName& MorphTargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetAnimMorphTarget");

	UShooterGameUtils_GetAnimMorphTarget_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.MorphTargetName = MorphTargetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetAmmoCursor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterGameUtils::STATIC_GetAmmoCursor(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetAmmoCursor");

	UShooterGameUtils_GetAmmoCursor_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.GetAllShooterCharacters
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> OutShooterCharacters           (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetAllShooterCharacters(class UObject* WorldContextObject, TArray<class AShooterCharacter*>* OutShooterCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetAllShooterCharacters");

	UShooterGameUtils_GetAllShooterCharacters_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterCharacters != nullptr)
		*OutShooterCharacters = params.OutShooterCharacters;
}


// Function ShooterGame.ShooterGameUtils.GetAllActorsOfClassFromWorld
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)

void UShooterGameUtils::STATIC_GetAllActorsOfClassFromWorld(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.GetAllActorsOfClassFromWorld");

	UShooterGameUtils_GetAllActorsOfClassFromWorld_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function ShooterGame.ShooterGameUtils.FindClosestLOSAllies
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AShooterCharacter*       SourceCharacter                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> OutShooterCharacters           (Parm, OutParm, ZeroConstructor)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_FindClosestLOSAllies(class AShooterCharacter* SourceCharacter, float MaxDistance, TArray<class AShooterCharacter*>* OutShooterCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.FindClosestLOSAllies");

	UShooterGameUtils_FindClosestLOSAllies_Params params;
	params.SourceCharacter = SourceCharacter;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShooterCharacters != nullptr)
		*OutShooterCharacters = params.OutShooterCharacters;
}


// Function ShooterGame.ShooterGameUtils.EnableMultiPassOnActorWithMaterial
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      MaterialForMultipass           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldIncludeWeapon           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameUtils::STATIC_EnableMultiPassOnActorWithMaterial(class AShooterCharacter* TheCharacter, class UMaterialInterface* MaterialForMultipass, bool bShouldIncludeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.EnableMultiPassOnActorWithMaterial");

	UShooterGameUtils_EnableMultiPassOnActorWithMaterial_Params params;
	params.TheCharacter = TheCharacter;
	params.MaterialForMultipass = MaterialForMultipass;
	params.bShouldIncludeWeapon = bShouldIncludeWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.DisableMultiPassOnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldIncludeWeapon           (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_DisableMultiPassOnActor(class AShooterCharacter* TheCharacter, bool bShouldIncludeWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.DisableMultiPassOnActor");

	UShooterGameUtils_DisableMultiPassOnActor_Params params;
	params.TheCharacter = TheCharacter;
	params.bShouldIncludeWeapon = bShouldIncludeWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameUtils.DampVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Source                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DampFactor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShooterGameUtils::STATIC_DampVector(const struct FVector& Source, const struct FVector& Target, float DeltaTime, float DampFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.DampVector");

	UShooterGameUtils_DampVector_Params params;
	params.Source = Source;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.DampFactor = DampFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.DampFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Source                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DampFactor                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterGameUtils::STATIC_DampFloat(float Source, float Target, float DeltaTime, float DampFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.DampFloat");

	UShooterGameUtils_DampFloat_Params params;
	params.Source = Source;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.DampFactor = DampFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.ComputePlayerMovementCardinalDirection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECardinalDirection> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECardinalDirection> UShooterGameUtils::STATIC_ComputePlayerMovementCardinalDirection(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.ComputePlayerMovementCardinalDirection");

	UShooterGameUtils_ComputePlayerMovementCardinalDirection_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.BluePrintSpawnNewBuff
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  BuffToCreate                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNum                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooter_BuffBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooter_BuffBase* UShooterGameUtils::STATIC_BluePrintSpawnNewBuff(class AActor* Target, class UClass* BuffToCreate, class AActor* Instigator, int TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.BluePrintSpawnNewBuff");

	UShooterGameUtils_BluePrintSpawnNewBuff_Params params;
	params.Target = Target;
	params.BuffToCreate = BuffToCreate;
	params.Instigator = Instigator;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.BlueprintGetClosestShooterCharacterToAim
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Source                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BillBoardX                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          BillBoardY                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSearchForTeammates            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSearchForAll                  (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterGameUtils::STATIC_BlueprintGetClosestShooterCharacterToAim(class AShooterCharacter* Source, float BillBoardX, float BillBoardY, float MaxRange, bool bSearchForTeammates, bool bSearchForAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.BlueprintGetClosestShooterCharacterToAim");

	UShooterGameUtils_BlueprintGetClosestShooterCharacterToAim_Params params;
	params.Source = Source;
	params.BillBoardX = BillBoardX;
	params.BillBoardY = BillBoardY;
	params.MaxRange = MaxRange;
	params.bSearchForTeammates = bSearchForTeammates;
	params.bSearchForAll = bSearchForAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.ActiveButton_SetButton
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FActiveButton           ActiveButton                   (Parm, OutParm, ReferenceParm)
// class UButton*                 B                              (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameUtils::STATIC_ActiveButton_SetButton(class UButton* B, struct FActiveButton* ActiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.ActiveButton_SetButton");

	UShooterGameUtils_ActiveButton_SetButton_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveButton != nullptr)
		*ActiveButton = params.ActiveButton;
}


// Function ShooterGame.ShooterGameUtils.ActiveButton_Deactivate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FActiveButton           ActiveButton                   (Parm, OutParm, ReferenceParm)

void UShooterGameUtils::STATIC_ActiveButton_Deactivate(struct FActiveButton* ActiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.ActiveButton_Deactivate");

	UShooterGameUtils_ActiveButton_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveButton != nullptr)
		*ActiveButton = params.ActiveButton;
}


// Function ShooterGame.ShooterGameUtils.ActiveButton_CreateButton
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UButton*                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveButton           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveButton UShooterGameUtils::STATIC_ActiveButton_CreateButton(class UButton* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.ActiveButton_CreateButton");

	UShooterGameUtils_ActiveButton_CreateButton_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameUtils.ActiveButton_Activate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FActiveButton           ActiveButton                   (Parm, OutParm, ReferenceParm)

void UShooterGameUtils::STATIC_ActiveButton_Activate(struct FActiveButton* ActiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameUtils.ActiveButton_Activate");

	UShooterGameUtils_ActiveButton_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveButton != nullptr)
		*ActiveButton = params.ActiveButton;
}


// Function ShooterGame.ShooterAbility.StopAbility
// (Final, Native, Public, BlueprintCallable)

void UShooterAbility::StopAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.StopAbility");

	UShooterAbility_StopAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.StartAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::StartAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.StartAbility");

	UShooterAbility_StartAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.ShouldOverrideMaxSpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::ShouldOverrideMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ShouldOverrideMaxSpeed");

	UShooterAbility_ShouldOverrideMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.ShouldOverrideBrakingFlyDecel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::ShouldOverrideBrakingFlyDecel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ShouldOverrideBrakingFlyDecel");

	UShooterAbility_ShouldOverrideBrakingFlyDecel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.ShouldOverrideAccel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::ShouldOverrideAccel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ShouldOverrideAccel");

	UShooterAbility_ShouldOverrideAccel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.SetOverrideMaxSpeed
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldOverride                 (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::SetOverrideMaxSpeed(bool ShouldOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.SetOverrideMaxSpeed");

	UShooterAbility_SetOverrideMaxSpeed_Params params;
	params.ShouldOverride = ShouldOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.SetOverrideBrakingFlyingDecel
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldOverride                 (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::SetOverrideBrakingFlyingDecel(bool ShouldOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.SetOverrideBrakingFlyingDecel");

	UShooterAbility_SetOverrideBrakingFlyingDecel_Params params;
	params.ShouldOverride = ShouldOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.SetOverrideAccel
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldOverride                 (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::SetOverrideAccel(bool ShouldOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.SetOverrideAccel");

	UShooterAbility_SetOverrideAccel_Params params;
	params.ShouldOverride = ShouldOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.SetIgnoreGravity
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldIgnore                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::SetIgnoreGravity(bool ShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.SetIgnoreGravity");

	UShooterAbility_SetIgnoreGravity_Params params;
	params.ShouldIgnore = ShouldIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ServerStopAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void UShooterAbility::ServerStopAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ServerStopAbility");

	UShooterAbility_ServerStopAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ServerStartAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void UShooterAbility::ServerStartAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ServerStartAbility");

	UShooterAbility_ServerStartAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.RequestCooldown
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void UShooterAbility::RequestCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.RequestCooldown");

	UShooterAbility_RequestCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ReplenishFuel
// (Native, Public, BlueprintCallable)

void UShooterAbility::ReplenishFuel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ReplenishFuel");

	UShooterAbility_ReplenishFuel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnRep_CurrentCooldownTimeCompressed
// (Final, Native, Protected)

void UShooterAbility::OnRep_CurrentCooldownTimeCompressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnRep_CurrentCooldownTimeCompressed");

	UShooterAbility_OnRep_CurrentCooldownTimeCompressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnReceiveDamagePreMitigation
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnReceiveDamagePreMitigation(float DamageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnReceiveDamagePreMitigation");

	UShooterAbility_OnReceiveDamagePreMitigation_Params params;
	params.DamageTaken = DamageTaken;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnLand
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Falldistance                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnLand(const struct FHitResult& Hit, float Falldistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnLand");

	UShooterAbility_OnLand_Params params;
	params.Hit = Hit;
	params.Falldistance = Falldistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnKillorAssist
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShooterPlayerState*     KilledPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnKillorAssist(class AShooterPlayerState* KilledPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnKillorAssist");

	UShooterAbility_OnKillorAssist_Params params;
	params.KilledPlayer = KilledPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnJump
// (Native, Public, BlueprintCallable)

void UShooterAbility::OnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnJump");

	UShooterAbility_OnJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnImpact
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UShooterAbility::OnImpact(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnImpact");

	UShooterAbility_OnImpact_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnHealReceived
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnHealReceived(float HealAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnHealReceived");

	UShooterAbility_OnHealReceived_Params params;
	params.HealAmount = HealAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnHealPerformed
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnHealPerformed(float HealAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnHealPerformed");

	UShooterAbility_OnHealPerformed_Params params;
	params.HealAmount = HealAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnGlobalDeath
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShooterPlayerState*     KilledPlayer                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnGlobalDeath(class AShooterPlayerState* KilledPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnGlobalDeath");

	UShooterAbility_OnGlobalDeath_Params params;
	params.KilledPlayer = KilledPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnFriendSpawned
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       SpawnedFriend                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnFriendSpawned(class AShooterCharacter* SpawnedFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnFriendSpawned");

	UShooterAbility_OnFriendSpawned_Params params;
	params.SpawnedFriend = SpawnedFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnFireWeapon
// (Native, Public, BlueprintCallable)

void UShooterAbility::OnFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnFireWeapon");

	UShooterAbility_OnFireWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnFall
// (Native, Public, BlueprintCallable)

void UShooterAbility::OnFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnFall");

	UShooterAbility_OnFall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnDeath
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AShooterPlayerState*     InKillerState                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            InDamageEvent                  (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterAbility::OnDeath(class AShooterPlayerState* InKillerState, const struct FDamageEvent& InDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnDeath");

	UShooterAbility_OnDeath_Params params;
	params.InKillerState = InKillerState;
	params.InDamageEvent = InDamageEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnDamageDealt
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DamageDealt                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility::OnDamageDealt(float DamageDealt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnDamageDealt");

	UShooterAbility_OnDamageDealt_Params params;
	params.DamageDealt = DamageDealt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnAbilityUpdate
// (Event, Public, BlueprintEvent)

void UShooterAbility::OnAbilityUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnAbilityUpdate");

	UShooterAbility_OnAbilityUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnAbilityStop
// (Event, Public, BlueprintEvent)

void UShooterAbility::OnAbilityStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnAbilityStop");

	UShooterAbility_OnAbilityStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.OnAbilityStart
// (Event, Public, BlueprintEvent)

void UShooterAbility::OnAbilityStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.OnAbilityStart");

	UShooterAbility_OnAbilityStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.NetMulticastStopAbility
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void UShooterAbility::NetMulticastStopAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.NetMulticastStopAbility");

	UShooterAbility_NetMulticastStopAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.NetMulticastStartFOVTransitionOut
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void UShooterAbility::NetMulticastStartFOVTransitionOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.NetMulticastStartFOVTransitionOut");

	UShooterAbility_NetMulticastStartFOVTransitionOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.NetMulticastStartAbility
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void UShooterAbility::NetMulticastStartAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.NetMulticastStartAbility");

	UShooterAbility_NetMulticastStartAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.IsCoolDownReady
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::IsCoolDownReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.IsCoolDownReady");

	UShooterAbility_IsCoolDownReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.IsAbilityAvailable
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::IsAbilityAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.IsAbilityAvailable");

	UShooterAbility_IsAbilityAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.IsAbilityActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::IsAbilityActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.IsAbilityActive");

	UShooterAbility_IsAbilityActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.HasCoolDown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::HasCoolDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.HasCoolDown");

	UShooterAbility_HasCoolDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetShooterCharacterOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterAbility::GetShooterCharacterOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetShooterCharacterOwner");

	UShooterAbility_GetShooterCharacterOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetOverrideAccel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::GetOverrideAccel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetOverrideAccel");

	UShooterAbility_GetOverrideAccel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetMaxSpeedMultiplier
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterAbility::GetMaxSpeedMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetMaxSpeedMultiplier");

	UShooterAbility_GetMaxSpeedMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetMaxSpeed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterAbility::GetMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetMaxSpeed");

	UShooterAbility_GetMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetMaxAcceleration
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterAbility::GetMaxAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetMaxAcceleration");

	UShooterAbility_GetMaxAcceleration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetIgnoreGravity
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbility::GetIgnoreGravity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetIgnoreGravity");

	UShooterAbility_GetIgnoreGravity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetFlyingBrakingDecel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterAbility::GetFlyingBrakingDecel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetFlyingBrakingDecel");

	UShooterAbility_GetFlyingBrakingDecel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetCurrentAcceleration
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UShooterAbility::GetCurrentAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetCurrentAcceleration");

	UShooterAbility_GetCurrentAcceleration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetCoolDownPercent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterAbility::GetCoolDownPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetCoolDownPercent");

	UShooterAbility_GetCoolDownPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.GetChargeCount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShooterAbility::GetChargeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.GetChargeCount");

	UShooterAbility_GetChargeCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility.ClientStopAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)

void UShooterAbility::ClientStopAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ClientStopAbility");

	UShooterAbility_ClientStopAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ClientStartAbility
// (Net, NetReliable, Native, Event, Public, NetClient)

void UShooterAbility::ClientStartAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ClientStartAbility");

	UShooterAbility_ClientStartAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ClientNotifyRechargeCompleted
// (Net, NetReliable, Native, Event, Protected, NetClient)

void UShooterAbility::ClientNotifyRechargeCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ClientNotifyRechargeCompleted");

	UShooterAbility_ClientNotifyRechargeCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ClientCooldownStarted
// (Net, NetReliable, Native, Event, Public, NetClient)

void UShooterAbility::ClientCooldownStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ClientCooldownStarted");

	UShooterAbility_ClientCooldownStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ClientCancelAbility
// (Net, NetReliable, Native, Event, Public, NetClient)

void UShooterAbility::ClientCancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ClientCancelAbility");

	UShooterAbility_ClientCancelAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility.ActivateSpecialAbilityKick
// (Native, Public, BlueprintCallable)

void UShooterAbility::ActivateSpecialAbilityKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility.ActivateSpecialAbilityKick");

	UShooterAbility_ActivateSpecialAbilityKick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.PlaySoundOnCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopWhenOwnerIsDestroyed       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::PlaySoundOnCharacter(class UAkAudioEvent* Sound, bool StopWhenOwnerIsDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.PlaySoundOnCharacter");

	UShooterDialogueCharacter_PlaySoundOnCharacter_Params params;
	params.Sound = Sound;
	params.StopWhenOwnerIsDestroyed = StopWhenOwnerIsDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnTaunt
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnTaunt()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnTaunt");

	UShooterDialogueCharacter_OnTaunt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnTargeting
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnTargeting");

	UShooterDialogueCharacter_OnTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnTargetHitConfirmation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           UsedPrimaryWeapon              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UsedSecondaryWeapon            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterClass>     HitClass                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnTargetHitConfirmation(bool UsedPrimaryWeapon, bool UsedSecondaryWeapon, TEnumAsByte<EShooterClass> HitClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnTargetHitConfirmation");

	UShooterDialogueCharacter_OnTargetHitConfirmation_Params params;
	params.UsedPrimaryWeapon = UsedPrimaryWeapon;
	params.UsedSecondaryWeapon = UsedSecondaryWeapon;
	params.HitClass = HitClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnSwipeHitFlesh
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnSwipeHitFlesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnSwipeHitFlesh");

	UShooterDialogueCharacter_OnSwipeHitFlesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnSwipeHitArmor
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnSwipeHitArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnSwipeHitArmor");

	UShooterDialogueCharacter_OnSwipeHitArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnStopAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// class UShooterAbility*         Ability                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShooterDialogueCharacter::OnStopAbility(class UShooterAbility* Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnStopAbility");

	UShooterDialogueCharacter_OnStopAbility_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnStartAbility
// (Event, Public, BlueprintEvent)
// Parameters:
// class UShooterAbility*         Ability                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShooterDialogueCharacter::OnStartAbility(class UShooterAbility* Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnStartAbility");

	UShooterDialogueCharacter_OnStartAbility_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnSplitterFullyCharged
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnSplitterFullyCharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnSplitterFullyCharged");

	UShooterDialogueCharacter_OnSplitterFullyCharged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnSelfHitConfirmation
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnSelfHitConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnSelfHitConfirmation");

	UShooterDialogueCharacter_OnSelfHitConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnRunStop
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnRunStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnRunStop");

	UShooterDialogueCharacter_OnRunStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnRunLoop
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnRunLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnRunLoop");

	UShooterDialogueCharacter_OnRunLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnRespawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UShooterCharacterDefinition* CharacterDefinition            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnRespawn(class UShooterCharacterDefinition* CharacterDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnRespawn");

	UShooterDialogueCharacter_OnRespawn_Params params;
	params.CharacterDefinition = CharacterDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnReceivedEnforcerBuff
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnReceivedEnforcerBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnReceivedEnforcerBuff");

	UShooterDialogueCharacter_OnReceivedEnforcerBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnOniWrathStart
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnOniWrathStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnOniWrathStart");

	UShooterDialogueCharacter_OnOniWrathStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnOniWrathEnd
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnOniWrathEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnOniWrathEnd");

	UShooterDialogueCharacter_OnOniWrathEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnNinjaKickImpact
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnNinjaKickImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnNinjaKickImpact");

	UShooterDialogueCharacter_OnNinjaKickImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnMedicHeal
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnMedicHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnMedicHeal");

	UShooterDialogueCharacter_OnMedicHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnMedicDroneSent
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnMedicDroneSent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnMedicDroneSent");

	UShooterDialogueCharacter_OnMedicDroneSent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnLowHealth
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnLowHealth");

	UShooterDialogueCharacter_OnLowHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnKill
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShooterGang>      KilledGang                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasKick                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterClass>     KilledClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAbilityType>      KillerAbilityType              (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnKill(TEnumAsByte<EShooterGang> KilledGang, bool WasKick, TEnumAsByte<EShooterClass> KilledClass, TEnumAsByte<EAbilityType> KillerAbilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnKill");

	UShooterDialogueCharacter_OnKill_Params params;
	params.KilledGang = KilledGang;
	params.WasKick = WasKick;
	params.KilledClass = KilledClass;
	params.KillerAbilityType = KillerAbilityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnHitVocal
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAudioDamageCategory> DamageCategory                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnHitVocal(TEnumAsByte<EAudioDamageCategory> DamageCategory, float DamageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnHitVocal");

	UShooterDialogueCharacter_OnHitVocal_Params params;
	params.DamageCategory = DamageCategory;
	params.DamageTaken = DamageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnHealSomeone
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       PawnYouHealed                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealthPercentage       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHealthPercentage            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnHealSomeone(int HealAmount, class AShooterCharacter* PawnYouHealed, float PreviousHealthPercentage, float NewHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnHealSomeone");

	UShooterDialogueCharacter_OnHealSomeone_Params params;
	params.HealAmount = HealAmount;
	params.PawnYouHealed = PawnYouHealed;
	params.PreviousHealthPercentage = PreviousHealthPercentage;
	params.NewHealthPercentage = NewHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnHealedBy
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Healer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HealCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealthPercentage       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHealthPercentage            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnHealedBy(int HealAmount, class AShooterCharacter* Healer, class AActor* HealCauser, float PreviousHealthPercentage, float NewHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnHealedBy");

	UShooterDialogueCharacter_OnHealedBy_Params params;
	params.HealAmount = HealAmount;
	params.Healer = Healer;
	params.HealCauser = HealCauser;
	params.PreviousHealthPercentage = PreviousHealthPercentage;
	params.NewHealthPercentage = NewHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnHawkeyeUntag
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnHawkeyeUntag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnHawkeyeUntag");

	UShooterDialogueCharacter_OnHawkeyeUntag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnHawkeyeTag
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnHawkeyeTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnHawkeyeTag");

	UShooterDialogueCharacter_OnHawkeyeTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnGrappleImpactWall
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnGrappleImpactWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnGrappleImpactWall");

	UShooterDialogueCharacter_OnGrappleImpactWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnGrappleImpactEnemy
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnGrappleImpactEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnGrappleImpactEnemy");

	UShooterDialogueCharacter_OnGrappleImpactEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnGaveEnforcerBuff
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnGaveEnforcerBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnGaveEnforcerBuff");

	UShooterDialogueCharacter_OnGaveEnforcerBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnFlagCapture
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnFlagCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnFlagCapture");

	UShooterDialogueCharacter_OnFlagCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnDeath
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAudioDamageCategory> KillingDamageCategory          (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnDeath(TEnumAsByte<EAudioDamageCategory> KillingDamageCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnDeath");

	UShooterDialogueCharacter_OnDeath_Params params;
	params.KillingDamageCategory = KillingDamageCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningBelow
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnDamageWarningBelow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningBelow");

	UShooterDialogueCharacter_OnDamageWarningBelow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningBehind
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnDamageWarningBehind()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningBehind");

	UShooterDialogueCharacter_OnDamageWarningBehind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningAbove
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnDamageWarningAbove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnDamageWarningAbove");

	UShooterDialogueCharacter_OnDamageWarningAbove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnCheerAllyKill
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShooterClass>     CheerTargetClass               (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::OnCheerAllyKill(TEnumAsByte<EShooterClass> CheerTargetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnCheerAllyKill");

	UShooterDialogueCharacter_OnCheerAllyKill_Params params;
	params.CheerTargetClass = CheerTargetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnBatteryPickup
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnBatteryPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnBatteryPickup");

	UShooterDialogueCharacter_OnBatteryPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnBatteryDrop
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnBatteryDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnBatteryDrop");

	UShooterDialogueCharacter_OnBatteryDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnArmorBreak
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnArmorBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnArmorBreak");

	UShooterDialogueCharacter_OnArmorBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnAllyObjectiveEncourage
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnAllyObjectiveEncourage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnAllyObjectiveEncourage");

	UShooterDialogueCharacter_OnAllyObjectiveEncourage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnAllyObjectiveAffirm
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnAllyObjectiveAffirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnAllyObjectiveAffirm");

	UShooterDialogueCharacter_OnAllyObjectiveAffirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.OnAbilityFail
// (Event, Public, BlueprintEvent)

void UShooterDialogueCharacter::OnAbilityFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.OnAbilityFail");

	UShooterDialogueCharacter_OnAbilityFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDialogueCharacter.GetShooterCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterDialogueCharacter::GetShooterCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.GetShooterCharacter");

	UShooterDialogueCharacter_GetShooterCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterDialogueCharacter.FindTauntTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaY                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterClass>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EShooterClass> UShooterDialogueCharacter::FindTauntTarget(float DeltaX, float DeltaY, float Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.FindTauntTarget");

	UShooterDialogueCharacter_FindTauntTarget_Params params;
	params.DeltaX = DeltaX;
	params.DeltaY = DeltaY;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterDialogueCharacter.FindKillCheerAlly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterDialogueCharacter::FindKillCheerAlly(class AShooterCharacter* Killer, float MaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDialogueCharacter.FindKillCheerAlly");

	UShooterDialogueCharacter_FindKillCheerAlly_Params params;
	params.Killer = Killer;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.FlyingDroneMovementComponent.ServerSetMovePosition
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 MovePos                        (Parm, ZeroConstructor, IsPlainOldData)

void UFlyingDroneMovementComponent::ServerSetMovePosition(const struct FVector& MovePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.FlyingDroneMovementComponent.ServerSetMovePosition");

	UFlyingDroneMovementComponent_ServerSetMovePosition_Params params;
	params.MovePos = MovePos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.FlyingDroneMovementComponent.ClientSetNewPos
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                 Pos                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UFlyingDroneMovementComponent::ClientSetNewPos(const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.FlyingDroneMovementComponent.ClientSetNewPos");

	UFlyingDroneMovementComponent_ClientSetNewPos_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.GraphWidget.AddSample
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UGraphWidget::AddSample(int InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.GraphWidget.AddSample");

	UGraphWidget_AddSample_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HealthBar.SetHealthValueDirectlyNoAnimation
// (Final, Native, Public, BlueprintCallable)

void UHealthBar::SetHealthValueDirectlyNoAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HealthBar.SetHealthValueDirectlyNoAnimation");

	UHealthBar_SetHealthValueDirectlyNoAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HealthBar.SetHealthFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData)

void UHealthBar::SetHealthFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HealthBar.SetHealthFillColorAndOpacity");

	UHealthBar_SetHealthFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HealthBar.SetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHealthBar::SetCharacter(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HealthBar.SetCharacter");

	UHealthBar_SetCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HealthBar.SetArmorFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, ZeroConstructor, IsPlainOldData)

void UHealthBar::SetArmorFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HealthBar.SetArmorFillColorAndOpacity");

	UHealthBar_SetArmorFillColorAndOpacity_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.MapMarkerManager.ComponentMarkerRemoved__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// uint32_t                       ComponentID                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapMarkerManager::ComponentMarkerRemoved__DelegateSignature(uint32_t ComponentID)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.MapMarkerManager.ComponentMarkerRemoved__DelegateSignature");

	UMapMarkerManager_ComponentMarkerRemoved__DelegateSignature_Params params;
	params.ComponentID = ComponentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.MapMarkerManager.ComponentMarkerAdded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// uint32_t                       ComponentID                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapMarkerManager::ComponentMarkerAdded__DelegateSignature(uint32_t ComponentID)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.MapMarkerManager.ComponentMarkerAdded__DelegateSignature");

	UMapMarkerManager_ComponentMarkerAdded__DelegateSignature_Params params;
	params.ComponentID = ComponentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBaseDroid.ReceiveDetonate
// (Event, Public, BlueprintEvent)

void AShooterBaseDroid::ReceiveDetonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBaseDroid.ReceiveDetonate");

	AShooterBaseDroid_ReceiveDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBaseDroid.OnRep_SetShooterOwner
// (Native, Protected)

void AShooterBaseDroid::OnRep_SetShooterOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBaseDroid.OnRep_SetShooterOwner");

	AShooterBaseDroid_OnRep_SetShooterOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBaseDroid.NetMultiCastStartFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class UParticleSystem*         FXtoPlay                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* StateFxComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UParticleSystem*         TeamFXtoPlay                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnAttached                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBaseDroid::NetMultiCastStartFX(class UParticleSystem* FXtoPlay, class UAkAudioEvent* SoundToPlay, class UParticleSystemComponent* StateFxComp, class UParticleSystem* TeamFXtoPlay, bool bSpawnAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBaseDroid.NetMultiCastStartFX");

	AShooterBaseDroid_NetMultiCastStartFX_Params params;
	params.FXtoPlay = FXtoPlay;
	params.SoundToPlay = SoundToPlay;
	params.StateFxComp = StateFxComp;
	params.TeamFXtoPlay = TeamFXtoPlay;
	params.bSpawnAttached = bSpawnAttached;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBaseDroid.NetMultiCastPlayDisableFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                           bDestroyed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBaseDroid::NetMultiCastPlayDisableFX(bool bDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBaseDroid.NetMultiCastPlayDisableFX");

	AShooterBaseDroid_NetMultiCastPlayDisableFX_Params params;
	params.bDestroyed = bDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBaseDroid.NetMultiCastPlayActiveFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShooterBaseDroid::NetMultiCastPlayActiveFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBaseDroid.NetMultiCastPlayActiveFX");

	AShooterBaseDroid_NetMultiCastPlayActiveFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBaseDroid.Detonate
// (Native, Public, BlueprintCallable)

void AShooterBaseDroid::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBaseDroid.Detonate");

	AShooterBaseDroid_Detonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBaseDroid.AttachToPlayer
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       PlayerToAttach                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBaseDroid::AttachToPlayer(class AShooterCharacter* PlayerToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBaseDroid.AttachToPlayer");

	AShooterBaseDroid_AttachToPlayer_Params params;
	params.PlayerToAttach = PlayerToAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterPlayerController.UserSettingsChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bUseGamePad                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::UserSettingsChangedEvent__DelegateSignature(bool bUseGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterPlayerController.UserSettingsChangedEvent__DelegateSignature");

	AShooterPlayerController_UserSettingsChangedEvent__DelegateSignature_Params params;
	params.bUseGamePad = bUseGamePad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.UserSettingsChanged
// (Final, Native, Public)

void AShooterPlayerController::UserSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.UserSettingsChanged");

	AShooterPlayerController_UserSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TurnPlayer
// (Final, Exec, Native, Public)
// Parameters:
// float                          TurnSpeed                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::TurnPlayer(float TurnSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TurnPlayer");

	AShooterPlayerController_TurnPlayer_Params params;
	params.TurnSpeed = TurnSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TryChangeClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ClassIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::TryChangeClass(int ClassIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TryChangeClass");

	AShooterPlayerController_TryChangeClass_Params params;
	params.ClassIndex = ClassIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TestWingsuit
// (Final, Exec, Native, Public)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::TestWingsuit(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TestWingsuit");

	AShooterPlayerController_TestWingsuit_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TestOpenHighlightSummary
// (Final, Exec, Native, Public)

void AShooterPlayerController::TestOpenHighlightSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TestOpenHighlightSummary");

	AShooterPlayerController_TestOpenHighlightSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TestGetMatchHighlightCount
// (Final, Exec, Native, Public)

void AShooterPlayerController::TestGetMatchHighlightCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TestGetMatchHighlightCount");

	AShooterPlayerController_TestGetMatchHighlightCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.TeleportToCosmetic
// (Final, Exec, Native, Public)
// Parameters:
// int                            CosmeticIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::TeleportToCosmetic(int CosmeticIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.TeleportToCosmetic");

	AShooterPlayerController_TeleportToCosmetic_Params params;
	params.CosmeticIndex = CosmeticIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.Suicide
// (Exec, Native, Protected)

void AShooterPlayerController::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Suicide");

	AShooterPlayerController_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.StartMapWithMode
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Map                            (Parm, ZeroConstructor)
// class FString                  Mode                           (Parm, ZeroConstructor)

void AShooterPlayerController::StartMapWithMode(const class FString& Map, const class FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.StartMapWithMode");

	AShooterPlayerController_StartMapWithMode_Params params;
	params.Map = Map;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.StartLocalPerfFlyThrough
// (Final, Exec, Native, Public)

void AShooterPlayerController::StartLocalPerfFlyThrough()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.StartLocalPerfFlyThrough");

	AShooterPlayerController_StartLocalPerfFlyThrough_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.StartFinalShowdown
// (Final, Exec, Native, Public)

void AShooterPlayerController::StartFinalShowdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.StartFinalShowdown");

	AShooterPlayerController_StartFinalShowdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.StartCountdown
// (Final, Exec, Native, Public)

void AShooterPlayerController::StartCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.StartCountdown");

	AShooterPlayerController_StartCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterPlayerController.SpectatorTargetChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AShooterCharacter*       NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SpectatorTargetChanged__DelegateSignature(class AShooterCharacter* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterPlayerController.SpectatorTargetChanged__DelegateSignature");

	AShooterPlayerController_SpectatorTargetChanged__DelegateSignature_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterPlayerController.SpectatorIndexChosen__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SpectatorIndexChosen__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterPlayerController.SpectatorIndexChosen__DelegateSignature");

	AShooterPlayerController_SpectatorIndexChosen__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterPlayerController.SpectatorFlagChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SpectatorFlagChanged__DelegateSignature(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterPlayerController.SpectatorFlagChanged__DelegateSignature");

	AShooterPlayerController_SpectatorFlagChanged__DelegateSignature_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SpawnVehicle
// (Final, Exec, Native, Protected)
// Parameters:
// int                            VehicleIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SpawnVehicle(int VehicleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SpawnVehicle");

	AShooterPlayerController_SpawnVehicle_Params params;
	params.VehicleIndex = VehicleIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SpawnLoot
// (Final, Exec, Native, Protected)
// Parameters:
// unsigned char                  LootIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SpawnLoot(unsigned char LootIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SpawnLoot");

	AShooterPlayerController_SpawnLoot_Params params;
	params.LootIndex = LootIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SpawnAllLoot
// (Final, Exec, Native, Protected)
// Parameters:
// unsigned char                  GridSize                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spacing                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SpawnAllLoot(unsigned char GridSize, float Spacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SpawnAllLoot");

	AShooterPlayerController_SpawnAllLoot_Params params;
	params.GridSize = GridSize;
	params.Spacing = Spacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SimulateInputKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKEY                    KEY                            (Parm)
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SimulateInputKey(const struct FKEY& KEY, bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SimulateInputKey");

	AShooterPlayerController_SimulateInputKey_Params params;
	params.KEY = KEY;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ShowExternalPlayers
// (Final, Exec, Native, Public)
// Parameters:
// int                            bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ShowExternalPlayers(int bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ShowExternalPlayers");

	AShooterPlayerController_ShowExternalPlayers_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetYControlRotation
// (Final, Exec, Native, Public)
// Parameters:
// float                          InNewRot                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetYControlRotation(float InNewRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetYControlRotation");

	AShooterPlayerController_SetYControlRotation_Params params;
	params.InNewRot = InNewRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetTeamScore
// (Final, Exec, Native, Public)
// Parameters:
// int                            TeamIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewScore                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetTeamScore(int TeamIndex, int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetTeamScore");

	AShooterPlayerController_SetTeamScore_Params params;
	params.TeamIndex = TeamIndex;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetSpectatorModeDelayTime
// (Final, Exec, Native, Public)
// Parameters:
// float                          SpectatorDelay                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetSpectatorModeDelayTime(float SpectatorDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetSpectatorModeDelayTime");

	AShooterPlayerController_SetSpectatorModeDelayTime_Params params;
	params.SpectatorDelay = SpectatorDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetSkipSpawnVO
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bSkipVO                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetSkipSpawnVO(bool bSkipVO)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetSkipSpawnVO");

	AShooterPlayerController_SetSkipSpawnVO_Params params;
	params.bSkipVO = bSkipVO;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetMaxImpactSounds
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewMaxSounds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetMaxImpactSounds(int NewMaxSounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetMaxImpactSounds");

	AShooterPlayerController_SetMaxImpactSounds_Params params;
	params.NewMaxSounds = NewMaxSounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetMaxImpactParticles
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewMaxParticles                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetMaxImpactParticles(int NewMaxParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetMaxImpactParticles");

	AShooterPlayerController_SetMaxImpactParticles_Params params;
	params.NewMaxParticles = NewMaxParticles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetMaxImpactDecals
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewMaxDecals                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetMaxImpactDecals(int NewMaxDecals)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetMaxImpactDecals");

	AShooterPlayerController_SetMaxImpactDecals_Params params;
	params.NewMaxDecals = NewMaxDecals;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetMaxFireSounds
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewFireSounds                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetMaxFireSounds(int NewFireSounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetMaxFireSounds");

	AShooterPlayerController_SetMaxFireSounds_Params params;
	params.NewFireSounds = NewFireSounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetGuest
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsGuest                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetGuest(bool IsGuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetGuest");

	AShooterPlayerController_SetGuest_Params params;
	params.IsGuest = IsGuest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetGodMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetGodMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetGodMode");

	AShooterPlayerController_SetGodMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetFixedVehicleCamera
// (Final, Exec, Native, Protected)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetFixedVehicleCamera(float X, float Y, float Z, float Pitch, float Yaw, float Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetFixedVehicleCamera");

	AShooterPlayerController_SetFixedVehicleCamera_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetDeathCameraDelayTime
// (Final, Exec, Native, Public)
// Parameters:
// float                          DeathCameraDelay               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetDeathCameraDelayTime(float DeathCameraDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetDeathCameraDelayTime");

	AShooterPlayerController_SetDeathCameraDelayTime_Params params;
	params.DeathCameraDelay = DeathCameraDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetCountdown
// (Final, Exec, Native, Public)
// Parameters:
// int                            CountdownTime                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetCountdown(int CountdownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetCountdown");

	AShooterPlayerController_SetCountdown_Params params;
	params.CountdownTime = CountdownTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SetCanChangeClassInPlace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SetCanChangeClassInPlace(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SetCanChangeClassInPlace");

	AShooterPlayerController_SetCanChangeClassInPlace_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerValidateClassChange
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Skin                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bChangeClassInPlace            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerValidateClassChange(const struct FName& Name, const struct FName& Skin, bool bChangeClassInPlace)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerValidateClassChange");

	AShooterPlayerController_ServerValidateClassChange_Params params;
	params.Name = Name;
	params.Skin = Skin;
	params.bChangeClassInPlace = bChangeClassInPlace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerTrySetDedicatedSpectatorMode
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bSpectator                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerTrySetDedicatedSpectatorMode(bool bSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerTrySetDedicatedSpectatorMode");

	AShooterPlayerController_ServerTrySetDedicatedSpectatorMode_Params params;
	params.bSpectator = bSpectator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerToggleQAStopMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerToggleQAStopMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerToggleQAStopMessage");

	AShooterPlayerController_ServerToggleQAStopMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerTestWingsuit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerTestWingsuit(float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerTestWingsuit");

	AShooterPlayerController_ServerTestWingsuit_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerTeleportToCosmetic
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// int                            CosmeticIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerTeleportToCosmetic(int CosmeticIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerTeleportToCosmetic");

	AShooterPlayerController_ServerTeleportToCosmetic_Params params;
	params.CosmeticIndex = CosmeticIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSuicide
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AShooterPlayerController::ServerSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSuicide");

	AShooterPlayerController_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerStartMapWithMode
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                  Map                            (Parm, ZeroConstructor)
// class FString                  Mode                           (Parm, ZeroConstructor)

void AShooterPlayerController::ServerStartMapWithMode(const class FString& Map, const class FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerStartMapWithMode");

	AShooterPlayerController_ServerStartMapWithMode_Params params;
	params.Map = Map;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerStartCountdown
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerStartCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerStartCountdown");

	AShooterPlayerController_ServerStartCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSpawnVehicle
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            VehicleIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSpawnVehicle(int VehicleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSpawnVehicle");

	AShooterPlayerController_ServerSpawnVehicle_Params params;
	params.VehicleIndex = VehicleIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSpawnLoot
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// TEnumAsByte<ELootType>         LootIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LootSpawnLocation              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterPlayerController::ServerSpawnLoot(TEnumAsByte<ELootType> LootIndex, const struct FVector& LootSpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSpawnLoot");

	AShooterPlayerController_ServerSpawnLoot_Params params;
	params.LootIndex = LootIndex;
	params.LootSpawnLocation = LootSpawnLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSpawnFinalShowdown
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerSpawnFinalShowdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSpawnFinalShowdown");

	AShooterPlayerController_ServerSpawnFinalShowdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetTeamScore
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            TeamIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewScore                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetTeamScore(int TeamIndex, int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetTeamScore");

	AShooterPlayerController_ServerSetTeamScore_Params params;
	params.TeamIndex = TeamIndex;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetSpectatorMode
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetSpectatorMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetSpectatorMode");

	AShooterPlayerController_ServerSetSpectatorMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetInCharacterSelect
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           InCharSelect                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetInCharacterSelect(bool InCharSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetInCharacterSelect");

	AShooterPlayerController_ServerSetInCharacterSelect_Params params;
	params.InCharSelect = InCharSelect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetCustomizationIDs
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FName                   CharacterSkinName              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   CharacterMaterialName          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponASkinName                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponAMaterialName            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponBSkinName                (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponBMaterialName            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponASticker                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponBSticker                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   KickDecalLoadName              (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponADeathDecalName          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   WeaponBDeathDecalName          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterPlayerController::ServerSetCustomizationIDs(const struct FName& CharacterSkinName, const struct FName& CharacterMaterialName, const struct FName& WeaponASkinName, const struct FName& WeaponAMaterialName, const struct FName& WeaponBSkinName, const struct FName& WeaponBMaterialName, const struct FName& WeaponASticker, const struct FName& WeaponBSticker, const struct FName& KickDecalLoadName, const struct FName& WeaponADeathDecalName, const struct FName& WeaponBDeathDecalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetCustomizationIDs");

	AShooterPlayerController_ServerSetCustomizationIDs_Params params;
	params.CharacterSkinName = CharacterSkinName;
	params.CharacterMaterialName = CharacterMaterialName;
	params.WeaponASkinName = WeaponASkinName;
	params.WeaponAMaterialName = WeaponAMaterialName;
	params.WeaponBSkinName = WeaponBSkinName;
	params.WeaponBMaterialName = WeaponBMaterialName;
	params.WeaponASticker = WeaponASticker;
	params.WeaponBSticker = WeaponBSticker;
	params.KickDecalLoadName = KickDecalLoadName;
	params.WeaponADeathDecalName = WeaponADeathDecalName;
	params.WeaponBDeathDecalName = WeaponBDeathDecalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetCountdown
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            CountdownTime                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetCountdown(int CountdownTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetCountdown");

	AShooterPlayerController_ServerSetCountdown_Params params;
	params.CountdownTime = CountdownTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetChosenLoadClassName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FName                   LoadClassName                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetChosenLoadClassName(const struct FName& LoadClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetChosenLoadClassName");

	AShooterPlayerController_ServerSetChosenLoadClassName_Params params;
	params.LoadClassName = LoadClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSetChosenClass
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            ClassIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerSetChosenClass(int ClassIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSetChosenClass");

	AShooterPlayerController_ServerSetChosenClass_Params params;
	params.ClassIndex = ClassIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSendPCPumpData
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FPumpData               PumpedData                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterPlayerController::ServerSendPCPumpData(const struct FPumpData& PumpedData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSendPCPumpData");

	AShooterPlayerController_ServerSendPCPumpData_Params params;
	params.PumpedData = PumpedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSendNGSMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<unsigned char>          Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterPlayerController::ServerSendNGSMessage(TArray<unsigned char> Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSendNGSMessage");

	AShooterPlayerController_ServerSendNGSMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerScoreLimit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            NewScoreLimit                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerScoreLimit(int NewScoreLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerScoreLimit");

	AShooterPlayerController_ServerScoreLimit_Params params;
	params.NewScoreLimit = NewScoreLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerSay
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                  Msg                            (Parm, ZeroConstructor)

void AShooterPlayerController::ServerSay(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerSay");

	AShooterPlayerController_ServerSay_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerResumeOrChasePrevPlayer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AShooterPlayerController::ServerResumeOrChasePrevPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerResumeOrChasePrevPlayer");

	AShooterPlayerController_ServerResumeOrChasePrevPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestPickupAttachments
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AShooterWeaponPickup*    RequestingPickup               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestPickupAttachments(class AShooterWeaponPickup* RequestingPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestPickupAttachments");

	AShooterPlayerController_ServerRequestPickupAttachments_Params params;
	params.RequestingPickup = RequestingPickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestCharacterChange
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerRequestCharacterChange(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestCharacterChange");

	AShooterPlayerController_ServerRequestCharacterChange_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerRequestChangeTeam
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerRequestChangeTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerRequestChangeTeam");

	AShooterPlayerController_ServerRequestChangeTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerPaxPlayerNameWasSet
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerPaxPlayerNameWasSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerPaxPlayerNameWasSet");

	AShooterPlayerController_ServerPaxPlayerNameWasSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerNextMap
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerNextMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerNextMap");

	AShooterPlayerController_ServerNextMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerFullyLoaded
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerFullyLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerFullyLoaded");

	AShooterPlayerController_ServerFullyLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerExit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerExit");

	AShooterPlayerController_ServerExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerEndMatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            ForceWinningTeam               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerEndMatch(int ForceWinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerEndMatch");

	AShooterPlayerController_ServerEndMatch_Params params;
	params.ForceWinningTeam = ForceWinningTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDisableIdleKick
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AShooterPlayerController::ServerDisableIdleKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDisableIdleKick");

	AShooterPlayerController_ServerDisableIdleKick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDemoStop
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerDemoStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDemoStop");

	AShooterPlayerController_ServerDemoStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDemoRecord
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterPlayerController::ServerDemoRecord()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDemoRecord");

	AShooterPlayerController_ServerDemoRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDebugHeadPositions
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerDebugHeadPositions(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDebugHeadPositions");

	AShooterPlayerController_ServerDebugHeadPositions_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerDamagePawn
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerDamagePawn(float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerDamagePawn");

	AShooterPlayerController_ServerDamagePawn_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerCheat
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                  Msg                            (Parm, ZeroConstructor)

void AShooterPlayerController::ServerCheat(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerCheat");

	AShooterPlayerController_ServerCheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerChaseNextPrevPlayerOrResume
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bNext                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ServerChaseNextPrevPlayerOrResume(bool bNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerChaseNextPrevPlayerOrResume");

	AShooterPlayerController_ServerChaseNextPrevPlayerOrResume_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ServerChaseCharacterFellFromWorld
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AShooterPlayerController::ServerChaseCharacterFellFromWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ServerChaseCharacterFellFromWorld");

	AShooterPlayerController_ServerChaseCharacterFellFromWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.Server_SetGuest
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           IsGuest                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::Server_SetGuest(bool IsGuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Server_SetGuest");

	AShooterPlayerController_Server_SetGuest_Params params;
	params.IsGuest = IsGuest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.Server_MicroprofileDump
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            DetailMode                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::Server_MicroprofileDump(int DetailMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Server_MicroprofileDump");

	AShooterPlayerController_Server_MicroprofileDump_Params params;
	params.DetailMode = DetailMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.Server_ExecuteConsoleCommand
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class FString                  Msg                            (Parm, ZeroConstructor)

void AShooterPlayerController::Server_ExecuteConsoleCommand(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Server_ExecuteConsoleCommand");

	AShooterPlayerController_Server_ExecuteConsoleCommand_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.SelectNextSpawnableClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::SelectNextSpawnableClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SelectNextSpawnableClass");

	AShooterPlayerController_SelectNextSpawnableClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.SelectDevClass
// (Final, Exec, Native, Public)
// Parameters:
// int                            ClassID                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::SelectDevClass(int ClassID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.SelectDevClass");

	AShooterPlayerController_SelectDevClass_Params params;
	params.ClassID = ClassID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ScoreLimit
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewScoreLimit                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ScoreLimit(int NewScoreLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ScoreLimit");

	AShooterPlayerController_ScoreLimit_Params params;
	params.NewScoreLimit = NewScoreLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.RequestStateSync
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AShooterCharacter*       PlayerToSync                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::RequestStateSync(class AShooterCharacter* PlayerToSync)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.RequestStateSync");

	AShooterPlayerController_RequestStateSync_Params params;
	params.PlayerToSync = PlayerToSync;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.Remote
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Msg                            (Parm, ZeroConstructor)

void AShooterPlayerController::Remote(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.Remote");

	AShooterPlayerController_Remote_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ProfanityMature
// (Final, Exec, Native, Public)

void AShooterPlayerController::ProfanityMature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ProfanityMature");

	AShooterPlayerController_ProfanityMature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ProfanityClean
// (Final, Exec, Native, Public)

void AShooterPlayerController::ProfanityClean()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ProfanityClean");

	AShooterPlayerController_ProfanityClean_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.PlayScoreSoundEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScoreSound             InSoundEvent                   (ConstParm, Parm, OutParm, ReferenceParm)

void AShooterPlayerController::PlayScoreSoundEvent(const struct FScoreSound& InSoundEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.PlayScoreSoundEvent");

	AShooterPlayerController_PlayScoreSoundEvent_Params params;
	params.InSoundEvent = InSoundEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.PickClassByNameAndSkin
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Skin                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::PickClassByNameAndSkin(const struct FName& Name, const struct FName& Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.PickClassByNameAndSkin");

	AShooterPlayerController_PickClassByNameAndSkin_Params params;
	params.Name = Name;
	params.Skin = Skin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction ShooterGame.ShooterPlayerController.PerfFlyThroughStarted__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void AShooterPlayerController::PerfFlyThroughStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterPlayerController.PerfFlyThroughStarted__DelegateSignature");

	AShooterPlayerController_PerfFlyThroughStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OpenHighlightsSummary
// (Final, Native, Static, Public, BlueprintCallable)

void AShooterPlayerController::STATIC_OpenHighlightsSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OpenHighlightsSummary");

	AShooterPlayerController_OpenHighlightsSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorXRayVision
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorXRayVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorXRayVision");

	AShooterPlayerController_OnToggleSpectatorXRayVision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorToolbar
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorToolbar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorToolbar");

	AShooterPlayerController_OnToggleSpectatorToolbar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorSettings
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorSettings");

	AShooterPlayerController_OnToggleSpectatorSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorScoreboard
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorScoreboard");

	AShooterPlayerController_OnToggleSpectatorScoreboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorReticle
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorReticle");

	AShooterPlayerController_OnToggleSpectatorReticle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorLoadout
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorLoadout");

	AShooterPlayerController_OnToggleSpectatorLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorKillFeed
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorKillFeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorKillFeed");

	AShooterPlayerController_OnToggleSpectatorKillFeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorHUD
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorHUD");

	AShooterPlayerController_OnToggleSpectatorHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorGameMode
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorGameMode");

	AShooterPlayerController_OnToggleSpectatorGameMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnToggleSpectatorChat
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnToggleSpectatorChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnToggleSpectatorChat");

	AShooterPlayerController_OnToggleSpectatorChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnSpectatorViewStats
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnSpectatorViewStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnSpectatorViewStats");

	AShooterPlayerController_OnSpectatorViewStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnRep_ObjectiveZoneChanged
// (Final, Native, Protected)

void AShooterPlayerController::OnRep_ObjectiveZoneChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnRep_ObjectiveZoneChanged");

	AShooterPlayerController_OnRep_ObjectiveZoneChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnRep_GUID
// (Final, Native, Protected)

void AShooterPlayerController::OnRep_GUID()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnRep_GUID");

	AShooterPlayerController_OnRep_GUID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnRep_CanChangeClassInPlace
// (Final, Native, Public)

void AShooterPlayerController::OnRep_CanChangeClassInPlace()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnRep_CanChangeClassInPlace");

	AShooterPlayerController_OnRep_CanChangeClassInPlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnPrevSpectatorSetting
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnPrevSpectatorSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnPrevSpectatorSetting");

	AShooterPlayerController_OnPrevSpectatorSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterPlayerController.OnOneTeammateLeftDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void AShooterPlayerController::OnOneTeammateLeftDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterPlayerController.OnOneTeammateLeftDelegate__DelegateSignature");

	AShooterPlayerController_OnOneTeammateLeftDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnNextSpectatorSetting
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnNextSpectatorSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnNextSpectatorSetting");

	AShooterPlayerController_OnNextSpectatorSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterPlayerController.OnInventoryUpdateDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void AShooterPlayerController::OnInventoryUpdateDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterPlayerController.OnInventoryUpdateDelegate__DelegateSignature");

	AShooterPlayerController_OnInventoryUpdateDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnChasePrevPlayer
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnChasePrevPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnChasePrevPlayer");

	AShooterPlayerController_OnChasePrevPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnChaseNextPlayer
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnChaseNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnChaseNextPlayer");

	AShooterPlayerController_OnChaseNextPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnChangeSpectatorSettingRight
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnChangeSpectatorSettingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnChangeSpectatorSettingRight");

	AShooterPlayerController_OnChangeSpectatorSettingRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.OnChangeSpectatorSettingLeft
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerController::OnChangeSpectatorSettingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.OnChangeSpectatorSettingLeft");

	AShooterPlayerController_OnChangeSpectatorSettingLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.NextMap
// (Final, Exec, Native, Public)

void AShooterPlayerController::NextMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.NextMap");

	AShooterPlayerController_NextMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.MusicUnMute
// (Final, Exec, Native, Public)

void AShooterPlayerController::MusicUnMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.MusicUnMute");

	AShooterPlayerController_MusicUnMute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.MusicMute
// (Final, Exec, Native, Public)

void AShooterPlayerController::MusicMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.MusicMute");

	AShooterPlayerController_MusicMute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.MovePlayerSideways
// (Final, Exec, Native, Public)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::MovePlayerSideways(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.MovePlayerSideways");

	AShooterPlayerController_MovePlayerSideways_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.MovePlayerRandomly
// (Final, Exec, Native, Public)
// Parameters:
// float                          MoveInterval                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::MovePlayerRandomly(float MoveInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.MovePlayerRandomly");

	AShooterPlayerController_MovePlayerRandomly_Params params;
	params.MoveInterval = MoveInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.MovePlayerForward
// (Final, Exec, Native, Public)
// Parameters:
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::MovePlayerForward(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.MovePlayerForward");

	AShooterPlayerController_MovePlayerForward_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.MicroprofileDumpServer
// (Final, Exec, Native, Public)
// Parameters:
// int                            DetailMode                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::MicroprofileDumpServer(int DetailMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.MicroprofileDumpServer");

	AShooterPlayerController_MicroprofileDumpServer_Params params;
	params.DetailMode = DetailMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.MaxVoices
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxNumberOfVoices              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::MaxVoices(int MaxNumberOfVoices)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.MaxVoices");

	AShooterPlayerController_MaxVoices_Params params;
	params.MaxNumberOfVoices = MaxNumberOfVoices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.IsSpectatorTargetLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsSpectatorTargetLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsSpectatorTargetLoading");

	AShooterPlayerController_IsSpectatorTargetLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.IsPlayerUsingGamepad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsPlayerUsingGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsPlayerUsingGamepad");

	AShooterPlayerController_IsPlayerUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.IsGameInputAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bAllowForInventoryMenu         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsGameInputAllowed(bool bAllowForInventoryMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsGameInputAllowed");

	AShooterPlayerController_IsGameInputAllowed_Params params;
	params.bAllowForInventoryMenu = bAllowForInventoryMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.IsEndMatchActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsEndMatchActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsEndMatchActive");

	AShooterPlayerController_IsEndMatchActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.IsClassIndexSpawnable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsClassIndexSpawnable(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsClassIndexSpawnable");

	AShooterPlayerController_IsClassIndexSpawnable_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.IsChosenClassIndexSpawnable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::IsChosenClassIndexSpawnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.IsChosenClassIndexSpawnable");

	AShooterPlayerController_IsChosenClassIndexSpawnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.HideZoneStatic
// (Final, Exec, Native, Protected)
// Parameters:
// unsigned char                  bHide                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::HideZoneStatic(unsigned char bHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.HideZoneStatic");

	AShooterPlayerController_HideZoneStatic_Params params;
	params.bHide = bHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.GetViewedPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerState*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerState* AShooterPlayerController::GetViewedPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetViewedPlayerState");

	AShooterPlayerController_GetViewedPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetViewedCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterPlayerController::GetViewedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetViewedCharacter");

	AShooterPlayerController_GetViewedCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetSpectatorCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* AShooterPlayerController::GetSpectatorCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetSpectatorCamera");

	AShooterPlayerController_GetSpectatorCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetShooterGameData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterGameData*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGameData* AShooterPlayerController::GetShooterGameData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetShooterGameData");

	AShooterPlayerController_GetShooterGameData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetShooterCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterPlayerController::GetShooterCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetShooterCharacter");

	AShooterPlayerController_GetShooterCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetPawnInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintFlowControl> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FShooterPawnInfo        OutPawnInfo                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::STATIC_GetPawnInfo(int Idx, TEnumAsByte<EBluePrintFlowControl>* OutResult, struct FShooterPawnInfo* OutPawnInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetPawnInfo");

	AShooterPlayerController_GetPawnInfo_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
	if (OutPawnInfo != nullptr)
		*OutPawnInfo = params.OutPawnInfo;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetKeysForBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BindingName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKEY>            ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FKEY> AShooterPlayerController::GetKeysForBinding(const struct FName& BindingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetKeysForBinding");

	AShooterPlayerController_GetKeysForBinding_Params params;
	params.BindingName = BindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetKeysForAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInputActionKeyMapping> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FInputActionKeyMapping> AShooterPlayerController::GetKeysForAction(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetKeysForAction");

	AShooterPlayerController_GetKeysForAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetIsControllerWinner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::GetIsControllerWinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetIsControllerWinner");

	AShooterPlayerController_GetIsControllerWinner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetChosenPawnInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FShooterPawnInfo        PawnInfo                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::GetChosenPawnInfo(struct FShooterPawnInfo* PawnInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetChosenPawnInfo");

	AShooterPlayerController_GetChosenPawnInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PawnInfo != nullptr)
		*PawnInfo = params.PawnInfo;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetChosenClassIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerController::GetChosenClassIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetChosenClassIndex");

	AShooterPlayerController_GetChosenClassIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetChaseCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterPlayerController::GetChaseCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetChaseCharacter");

	AShooterPlayerController_GetChaseCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.GetActiveCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* AShooterPlayerController::GetActiveCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.GetActiveCamera");

	AShooterPlayerController_GetActiveCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerController.ForceShoot
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ToForce                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ForceShoot(bool ToForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ForceShoot");

	AShooterPlayerController_ForceShoot_Params params;
	params.ToForce = ToForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ExitServer
// (Final, Exec, Native, Public)

void AShooterPlayerController::ExitServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ExitServer");

	AShooterPlayerController_ExitServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.EndMatch
// (Final, Exec, Native, Public)
// Parameters:
// int                            ForceWinningTeam               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::EndMatch(int ForceWinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.EndMatch");

	AShooterPlayerController_EndMatch_Params params;
	params.ForceWinningTeam = ForceWinningTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DumpNonDormantActors
// (Final, Exec, Native, Public)

void AShooterPlayerController::DumpNonDormantActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DumpNonDormantActors");

	AShooterPlayerController_DumpNonDormantActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DumpCollisionInfo
// (Final, Exec, Native, Public)

void AShooterPlayerController::DumpCollisionInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DumpCollisionInfo");

	AShooterPlayerController_DumpCollisionInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DisableIdleKick
// (Final, Exec, Native, Protected)

void AShooterPlayerController::DisableIdleKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DisableIdleKick");

	AShooterPlayerController_DisableIdleKick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DialogUnMute
// (Final, Exec, Native, Public)

void AShooterPlayerController::DialogUnMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DialogUnMute");

	AShooterPlayerController_DialogUnMute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DialogMute
// (Final, Exec, Native, Public)

void AShooterPlayerController::DialogMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DialogMute");

	AShooterPlayerController_DialogMute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DebugHeadPositions
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::DebugHeadPositions(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DebugHeadPositions");

	AShooterPlayerController_DebugHeadPositions_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.DamagePawn
// (Exec, Native, Protected)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::DamagePawn(float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.DamagePawn");

	AShooterPlayerController_DamagePawn_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientToggleCharacterAbilityUse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientToggleCharacterAbilityUse(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientToggleCharacterAbilityUse");

	AShooterPlayerController_ClientToggleCharacterAbilityUse_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientStartOnlineGame
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientStartOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStartOnlineGame");

	AShooterPlayerController_ClientStartOnlineGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientStartMatchSlowDown
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientStartMatchSlowDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStartMatchSlowDown");

	AShooterPlayerController_ClientStartMatchSlowDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientStartDemoRegistration
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientStartDemoRegistration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientStartDemoRegistration");

	AShooterPlayerController_ClientStartDemoRegistration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSpectatorNotifyAbilityKillAssist
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class APlayerState*            ForPlayer                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     KilledPlayerState              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSpectatorNotifyAbilityKillAssist(class APlayerState* ForPlayer, class AShooterPlayerState* KilledPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSpectatorNotifyAbilityKillAssist");

	AShooterPlayerController_ClientSpectatorNotifyAbilityKillAssist_Params params;
	params.ForPlayer = ForPlayer;
	params.KilledPlayerState = KilledPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSetLastKillerCharacter
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AShooterCharacter*       LastKiller                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSetLastKillerCharacter(class AShooterCharacter* LastKiller)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSetLastKillerCharacter");

	AShooterPlayerController_ClientSetLastKillerCharacter_Params params;
	params.LastKiller = LastKiller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSetInitialLocationAndRotation
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSetInitialLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSetInitialLocationAndRotation");

	AShooterPlayerController_ClientSetInitialLocationAndRotation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSetDedicatedSpectatorMode
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// bool                           bSpectator                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSetDedicatedSpectatorMode(bool bSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSetDedicatedSpectatorMode");

	AShooterPlayerController_ClientSetDedicatedSpectatorMode_Params params;
	params.bSpectator = bSpectator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSendRoundEndEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bIsWinner                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExpendedTimeInSeconds          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendRoundEndEvent");

	AShooterPlayerController_ClientSendRoundEndEvent_Params params;
	params.bIsWinner = bIsWinner;
	params.ExpendedTimeInSeconds = ExpendedTimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSendPickupAttachments
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AShooterWeaponPickup*    RequestingPickup               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBarrel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScope                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMag                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUnderbarrel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMisc                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientSendPickupAttachments(class AShooterWeaponPickup* RequestingPickup, bool bBarrel, bool bScope, bool bMag, bool bUnderbarrel, bool bMisc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendPickupAttachments");

	AShooterPlayerController_ClientSendPickupAttachments_Params params;
	params.RequestingPickup = RequestingPickup;
	params.bBarrel = bBarrel;
	params.bScope = bScope;
	params.bMag = bMag;
	params.bUnderbarrel = bUnderbarrel;
	params.bMisc = bMisc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientSendNGSMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<unsigned char>          Message                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterPlayerController::ClientSendNGSMessage(TArray<unsigned char> Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientSendNGSMessage");

	AShooterPlayerController_ClientSendNGSMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientResetPHACKSCharacterName
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientResetPHACKSCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientResetPHACKSCharacterName");

	AShooterPlayerController_ClientResetPHACKSCharacterName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientResetChosenClass
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientResetChosenClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientResetChosenClass");

	AShooterPlayerController_ClientResetChosenClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientOnClassChangeValidated
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Skin                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bChangeClassInPlace            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClassLimitReached             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientOnClassChangeValidated(const struct FName& Name, const struct FName& Skin, bool bChangeClassInPlace, bool bClassLimitReached)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientOnClassChangeValidated");

	AShooterPlayerController_ClientOnClassChangeValidated_Params params;
	params.Name = Name;
	params.Skin = Skin;
	params.bChangeClassInPlace = bChangeClassInPlace;
	params.bClassLimitReached = bClassLimitReached;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyShotFailed
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientNotifyShotFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyShotFailed");

	AShooterPlayerController_ClientNotifyShotFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientNotifyDamageDealt
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// uint16_t                       DamageDealt                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocationOffset                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint16_t                       MaxHealth                      (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHitType>          HitType                        (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeToTarget             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientNotifyDamageDealt(uint16_t DamageDealt, const struct FVector& LocationOffset, uint16_t MaxHealth, uint16_t CurrentHealth, TEnumAsByte<EHitType> HitType, class AShooterCharacter* Target, class UClass* DamageTypeToTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientNotifyDamageDealt");

	AShooterPlayerController_ClientNotifyDamageDealt_Params params;
	params.DamageDealt = DamageDealt;
	params.LocationOffset = LocationOffset;
	params.MaxHealth = MaxHealth;
	params.CurrentHealth = CurrentHealth;
	params.HitType = HitType;
	params.Target = Target;
	params.DamageTypeToTarget = DamageTypeToTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientIgnoreNextDisconnect
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientIgnoreNextDisconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientIgnoreNextDisconnect");

	AShooterPlayerController_ClientIgnoreNextDisconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientIdleWarning
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// float                          TimeBeforeKick                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasWarned                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientIdleWarning(float TimeBeforeKick, bool WasWarned)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientIdleWarning");

	AShooterPlayerController_ClientIdleWarning_Params params;
	params.TimeBeforeKick = TimeBeforeKick;
	params.WasWarned = WasWarned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientHideIdleWarning
// (Net, NetReliable, Native, Event, Protected, NetClient)

void AShooterPlayerController::ClientHideIdleWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientHideIdleWarning");

	AShooterPlayerController_ClientHideIdleWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientGoToEoM
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bIsWinner                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClientGoToEoM(bool bIsWinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientGoToEoM");

	AShooterPlayerController_ClientGoToEoM_Params params;
	params.bIsWinner = bIsWinner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientGameStarted
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientGameStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientGameStarted");

	AShooterPlayerController_ClientGameStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientFreeze
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientFreeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientFreeze");

	AShooterPlayerController_ClientFreeze_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientEndOnlineGame
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterPlayerController::ClientEndOnlineGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientEndOnlineGame");

	AShooterPlayerController_ClientEndOnlineGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClientDebugHeadPositions
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FVector>         HeadPositions                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterPlayerController::ClientDebugHeadPositions(TArray<struct FVector> HeadPositions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClientDebugHeadPositions");

	AShooterPlayerController_ClientDebugHeadPositions_Params params;
	params.HeadPositions = HeadPositions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.ClearMatchEndOverLay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsWinner                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerController::ClearMatchEndOverLay(bool bIsWinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.ClearMatchEndOverLay");

	AShooterPlayerController_ClearMatchEndOverLay_Params params;
	params.bIsWinner = bIsWinner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerController.CanChangeClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerController::CanChangeClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerController.CanChangeClass");

	AShooterPlayerController_CanChangeClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.Shooter_BuffBase.OnRep_SetTarget
// (Native, Public)

void AShooter_BuffBase::OnRep_SetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.Shooter_BuffBase.OnRep_SetTarget");

	AShooter_BuffBase_OnRep_SetTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.Shooter_BuffBase.NetMultiCastPlayBuffFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShooter_BuffBase::NetMultiCastPlayBuffFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.Shooter_BuffBase.NetMultiCastPlayBuffFX");

	AShooter_BuffBase_NetMultiCastPlayBuffFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.Shooter_BuffBase.GetBuffTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AShooter_BuffBase::GetBuffTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.Shooter_BuffBase.GetBuffTarget");

	AShooter_BuffBase_GetBuffTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.Shooter_BuffBase.GetBuffDurationCursorized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooter_BuffBase::GetBuffDurationCursorized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.Shooter_BuffBase.GetBuffDurationCursorized");

	AShooter_BuffBase_GetBuffDurationCursorized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.Shooter_BuffBase.ActivateMultiPassMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooter_BuffBase::ActivateMultiPassMaterials(class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.Shooter_BuffBase.ActivateMultiPassMaterials");

	AShooter_BuffBase_ActivateMultiPassMaterials_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.PlayDialogue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           OnDiscardSound                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumReplayTimeInSeconds     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaximumWaitTimeBeforeInterruptingInSeconds (Parm, ZeroConstructor, IsPlainOldData)

void UShooterBlueprintUtilities::STATIC_PlayDialogue(class UObject* WorldContextObject, class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.PlayDialogue");

	UShooterBlueprintUtilities_PlayDialogue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Sound = Sound;
	params.OnDiscardSound = OnDiscardSound;
	params.Priority = Priority;
	params.SamePriorityConflictResolution = SamePriorityConflictResolution;
	params.LowerPriorityConflictResolution = LowerPriorityConflictResolution;
	params.MinimumReplayTimeInSeconds = MinimumReplayTimeInSeconds;
	params.MaximumWaitTimeBeforeInterruptingInSeconds = MaximumWaitTimeBeforeInterruptingInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBlueprintUtilities.Pick
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FColorBlender           Fader                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::STATIC_Pick(float InValue, const struct FColorBlender& Fader)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.Pick");

	UShooterBlueprintUtilities_Pick_Params params;
	params.InValue = InValue;
	params.Fader = Fader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.IsEventBuild
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterBlueprintUtilities::STATIC_IsEventBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.IsEventBuild");

	UShooterBlueprintUtilities_IsEventBuild_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.GetVisibility
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UShooterBlueprintUtilities::STATIC_GetVisibility(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.GetVisibility");

	UShooterBlueprintUtilities_GetVisibility_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.GetShooterGameState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterGameState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterGameState* UShooterBlueprintUtilities::STATIC_GetShooterGameState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.GetShooterGameState");

	UShooterBlueprintUtilities_GetShooterGameState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.GetLocalPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterBlueprintUtilities::STATIC_GetLocalPlayer(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.GetLocalPlayer");

	UShooterBlueprintUtilities_GetLocalPlayer_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.GetLocalHUD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterHUD* UShooterBlueprintUtilities::STATIC_GetLocalHUD(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.GetLocalHUD");

	UShooterBlueprintUtilities_GetLocalHUD_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.GetLocalCurrentEquipedWeapon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterWeapon* UShooterBlueprintUtilities::STATIC_GetLocalCurrentEquipedWeapon(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.GetLocalCurrentEquipedWeapon");

	UShooterBlueprintUtilities_GetLocalCurrentEquipedWeapon_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.ColorPickerRef
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorA                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ValueA                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorB                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ValueB                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorC                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::STATIC_ColorPickerRef(float InValue, const struct FLinearColor& ColorA, float ValueA, const struct FLinearColor& ColorB, float ValueB, const struct FLinearColor& ColorC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.ColorPickerRef");

	UShooterBlueprintUtilities_ColorPickerRef_Params params;
	params.InValue = InValue;
	params.ColorA = ColorA;
	params.ValueA = ValueA;
	params.ColorB = ColorB;
	params.ValueB = ValueB;
	params.ColorC = ColorC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.ColorPicker
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorA                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorB                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::STATIC_ColorPicker(float InValue, const struct FLinearColor& ColorA, float A, const struct FLinearColor& ColorB, float B, const struct FLinearColor& ColorC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.ColorPicker");

	UShooterBlueprintUtilities_ColorPicker_Params params;
	params.InValue = InValue;
	params.ColorA = ColorA;
	params.A = A;
	params.ColorB = ColorB;
	params.B = B;
	params.ColorC = ColorC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.ColorFaderRef
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorA                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ValueA                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorB                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ValueB                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorC                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ValueC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::STATIC_ColorFaderRef(float InValue, const struct FLinearColor& ColorA, float ValueA, const struct FLinearColor& ColorB, float ValueB, const struct FLinearColor& ColorC, float ValueC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.ColorFaderRef");

	UShooterBlueprintUtilities_ColorFaderRef_Params params;
	params.InValue = InValue;
	params.ColorA = ColorA;
	params.ValueA = ValueA;
	params.ColorB = ColorB;
	params.ValueB = ValueB;
	params.ColorC = ColorC;
	params.ValueC = ValueC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.ColorFader
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorA                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueA                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorB                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueB                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorC                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::STATIC_ColorFader(float InValue, const struct FLinearColor& ColorA, float ValueA, const struct FLinearColor& ColorB, float ValueB, const struct FLinearColor& ColorC, float ValueC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.ColorFader");

	UShooterBlueprintUtilities_ColorFader_Params params;
	params.InValue = InValue;
	params.ColorA = ColorA;
	params.ValueA = ValueA;
	params.ColorB = ColorB;
	params.ValueB = ValueB;
	params.ColorC = ColorC;
	params.ValueC = ValueC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.BranchInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            ValueA                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ValueB                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintOperator> InOperator                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintBranchControl> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShooterBlueprintUtilities::STATIC_BranchInt(int ValueA, int ValueB, TEnumAsByte<EBluePrintOperator> InOperator, TEnumAsByte<EBluePrintBranchControl>* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.BranchInt");

	UShooterBlueprintUtilities_BranchInt_Params params;
	params.ValueA = ValueA;
	params.ValueB = ValueB;
	params.InOperator = InOperator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function ShooterGame.ShooterBlueprintUtilities.BranchFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          ValueA                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueB                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintOperator> InOperator                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintBranchControl> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShooterBlueprintUtilities::STATIC_BranchFloat(float ValueA, float ValueB, TEnumAsByte<EBluePrintOperator> InOperator, TEnumAsByte<EBluePrintBranchControl>* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.BranchFloat");

	UShooterBlueprintUtilities_BranchFloat_Params params;
	params.ValueA = ValueA;
	params.ValueB = ValueB;
	params.InOperator = InOperator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function ShooterGame.ShooterBlueprintUtilities.BranchBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           ValueA                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValueB                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintOperator> InOperator                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintBranchControl> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShooterBlueprintUtilities::STATIC_BranchBool(bool ValueA, bool ValueB, TEnumAsByte<EBluePrintOperator> InOperator, TEnumAsByte<EBluePrintBranchControl>* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.BranchBool");

	UShooterBlueprintUtilities_BranchBool_Params params;
	params.ValueA = ValueA;
	params.ValueB = ValueB;
	params.InOperator = InOperator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function ShooterGame.ShooterBlueprintUtilities.BlendColorClamped
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::STATIC_BlendColorClamped(const struct FLinearColor& A, const struct FLinearColor& B, float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.BlendColorClamped");

	UShooterBlueprintUtilities_BlendColorClamped_Params params;
	params.A = A;
	params.B = B;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.BlendColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          T                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::STATIC_BlendColor(const struct FLinearColor& A, const struct FLinearColor& B, float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.BlendColor");

	UShooterBlueprintUtilities_BlendColor_Params params;
	params.A = A;
	params.B = B;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBlueprintUtilities.Blend
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FColorBlender           Fader                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterBlueprintUtilities::Blend(float InValue, const struct FColorBlender& Fader)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlueprintUtilities.Blend");

	UShooterBlueprintUtilities_Blend_Params params;
	params.InValue = InValue;
	params.Fader = Fader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.WidgetReceiveChatMessage
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                  inString                       (Parm, ZeroConstructor)

void UShooterUserWidget::WidgetReceiveChatMessage(const class FString& inString)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.WidgetReceiveChatMessage");

	UShooterUserWidget_WidgetReceiveChatMessage_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.TriggerOnScreen
// (Event, Public, BlueprintEvent)

void UShooterUserWidget::TriggerOnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.TriggerOnScreen");

	UShooterUserWidget_TriggerOnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.TriggerOffScreen
// (Event, Public, BlueprintEvent)

void UShooterUserWidget::TriggerOffScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.TriggerOffScreen");

	UShooterUserWidget_TriggerOffScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidateWithType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 inWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InVisible                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateVisibility>  HiddenType                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetVisibleAndInvalidateWithType(class UWidget* inWidget, bool InVisible, TEnumAsByte<ESlateVisibility> HiddenType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidateWithType");

	UShooterUserWidget_SetVisibleAndInvalidateWithType_Params params;
	params.inWidget = inWidget;
	params.InVisible = InVisible;
	params.HiddenType = HiddenType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidateAndClear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 inWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetVisibleAndInvalidateAndClear(class UWidget* inWidget, bool InVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidateAndClear");

	UShooterUserWidget_SetVisibleAndInvalidateAndClear_Params params;
	params.inWidget = inWidget;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 inWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetVisibleAndInvalidate(class UWidget* inWidget, bool InVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetVisibleAndInvalidate");

	UShooterUserWidget_SetVisibleAndInvalidate_Params params;
	params.inWidget = inWidget;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetVisibilityOnChildren
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESlateVisibility>  InVisibility                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetVisibilityOnChildren(TEnumAsByte<ESlateVisibility> InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetVisibilityOnChildren");

	UShooterUserWidget_SetVisibilityOnChildren_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetTextAndInvalidate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTextBlock*              inWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterUserWidget::SetTextAndInvalidate(class UTextBlock* inWidget, const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetTextAndInvalidate");

	UShooterUserWidget_SetTextAndInvalidate_Params params;
	params.inWidget = inWidget;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetScrollingTextAndInvalidate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTextBlock*              inWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UScrollBox*              ScrollBox                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetScrollingTextAndInvalidate(class UTextBlock* inWidget, const struct FText& InText, class UScrollBox* ScrollBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetScrollingTextAndInvalidate");

	UShooterUserWidget_SetScrollingTextAndInvalidate_Params params;
	params.inWidget = inWidget;
	params.InText = InText;
	params.ScrollBox = ScrollBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetSafePositionInViewport
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Position                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRemoveDPIScale                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSnapToPixels                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetSafePositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale, bool bSnapToPixels)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetSafePositionInViewport");

	UShooterUserWidget_SetSafePositionInViewport_Params params;
	params.Position = Position;
	params.bRemoveDPIScale = bRemoveDPIScale;
	params.bSnapToPixels = bSnapToPixels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetOverrideTickFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFrequency                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetOverrideTickFrequency(float InFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetOverrideTickFrequency");

	UShooterUserWidget_SetOverrideTickFrequency_Params params;
	params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetOverrideCacheNodeVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetOverrideCacheNodeVisibility(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetOverrideCacheNodeVisibility");

	UShooterUserWidget_SetOverrideCacheNodeVisibility_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetColorOnChild
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UImage*                  InImage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterUserWidget::SetColorOnChild(class UImage* InImage, const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetColorOnChild");

	UShooterUserWidget_SetColorOnChild_Params params;
	params.InImage = InImage;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetColorAndInvalidateOnImage
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UImage*                  inWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterUserWidget::SetColorAndInvalidateOnImage(class UImage* inWidget, const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetColorAndInvalidateOnImage");

	UShooterUserWidget_SetColorAndInvalidateOnImage_Params params;
	params.inWidget = inWidget;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetColorAndInvalidate
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 inWidget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterUserWidget::SetColorAndInvalidate(class UWidget* inWidget, const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetColorAndInvalidate");

	UShooterUserWidget_SetColorAndInvalidate_Params params;
	params.inWidget = inWidget;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.SetActiveWidgetIndexAndInvalidate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetSwitcher*         WidgetSwitcher                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveWidgetIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::SetActiveWidgetIndexAndInvalidate(class UWidgetSwitcher* WidgetSwitcher, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.SetActiveWidgetIndexAndInvalidate");

	UShooterUserWidget_SetActiveWidgetIndexAndInvalidate_Params params;
	params.WidgetSwitcher = WidgetSwitcher;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.RequestTick
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget::RequestTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.RequestTick");

	UShooterUserWidget_RequestTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.RequestSlateWidgetTickDuringRender
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 WidgetToTickDuringRender       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::RequestSlateWidgetTickDuringRender(class UWidget* WidgetToTickDuringRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.RequestSlateWidgetTickDuringRender");

	UShooterUserWidget_RequestSlateWidgetTickDuringRender_Params params;
	params.WidgetToTickDuringRender = WidgetToTickDuringRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.RequestRenderAndClear
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget::RequestRenderAndClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.RequestRenderAndClear");

	UShooterUserWidget_RequestRenderAndClear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.RequestRender
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget::RequestRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.RequestRender");

	UShooterUserWidget_RequestRender_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.OnHUDWidgetShown
// (Event, Public, BlueprintEvent)

void UShooterUserWidget::OnHUDWidgetShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.OnHUDWidgetShown");

	UShooterUserWidget_OnHUDWidgetShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.OnHUDWidgetHidden
// (Event, Public, BlueprintEvent)

void UShooterUserWidget::OnHUDWidgetHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.OnHUDWidgetHidden");

	UShooterUserWidget_OnHUDWidgetHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.IsOnScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterUserWidget::IsOnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.IsOnScreen");

	UShooterUserWidget_IsOnScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.HasEverRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterUserWidget::HasEverRendered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.HasEverRendered");

	UShooterUserWidget_HasEverRendered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetOwningShooterPlayerState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerState*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerState* UShooterUserWidget::GetOwningShooterPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetOwningShooterPlayerState");

	UShooterUserWidget_GetOwningShooterPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetOwningShooterPlayerController
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerController* UShooterUserWidget::GetOwningShooterPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetOwningShooterPlayerController");

	UShooterUserWidget_GetOwningShooterPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetOwningShooterHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterHUD*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterHUD* UShooterUserWidget::GetOwningShooterHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetOwningShooterHUD");

	UShooterUserWidget_GetOwningShooterHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetOwningShooterCharacter
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterUserWidget::GetOwningShooterCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetOwningShooterCharacter");

	UShooterUserWidget_GetOwningShooterCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetOwningOrSpectatedShooterPlayerState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerState*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerState* UShooterUserWidget::GetOwningOrSpectatedShooterPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetOwningOrSpectatedShooterPlayerState");

	UShooterUserWidget_GetOwningOrSpectatedShooterPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetOwningOrSpectatedShooterCharacter
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UShooterUserWidget::GetOwningOrSpectatedShooterCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetOwningOrSpectatedShooterCharacter");

	UShooterUserWidget_GetOwningOrSpectatedShooterCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetNeutralColorSecondary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetNeutralColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetNeutralColorSecondary");

	UShooterUserWidget_GetNeutralColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetNeutralColorPrimary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetNeutralColorPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetNeutralColorPrimary");

	UShooterUserWidget_GetNeutralColorPrimary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetMyTeamColorSecondary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetMyTeamColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetMyTeamColorSecondary");

	UShooterUserWidget_GetMyTeamColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetMyTeamColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetMyTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetMyTeamColor");

	UShooterUserWidget_GetMyTeamColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetLawColorSecondary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetLawColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetLawColorSecondary");

	UShooterUserWidget_GetLawColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetLawColorPrimary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetLawColorPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetLawColorPrimary");

	UShooterUserWidget_GetLawColorPrimary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetHUDReleventActor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UShooterUserWidget::GetHUDReleventActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetHUDReleventActor");

	UShooterUserWidget_GetHUDReleventActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetEnemyTeamColorSecondary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetEnemyTeamColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetEnemyTeamColorSecondary");

	UShooterUserWidget_GetEnemyTeamColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetEnemyTeamColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetEnemyTeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetEnemyTeamColor");

	UShooterUserWidget_GetEnemyTeamColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetBreakerColorSecondary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetBreakerColorSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetBreakerColorSecondary");

	UShooterUserWidget_GetBreakerColorSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.GetBreakerColorPrimary
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UShooterUserWidget::GetBreakerColorPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.GetBreakerColorPrimary");

	UShooterUserWidget_GetBreakerColorPrimary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterUserWidget.EnableCacheNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::EnableCacheNode(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.EnableCacheNode");

	UShooterUserWidget_EnableCacheNode_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget.AddScrollBoxForAutoScrollingText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UScrollBox*              ScrollBox                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterUserWidget::AddScrollBoxForAutoScrollingText(class UScrollBox* ScrollBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget.AddScrollBoxForAutoScrollingText");

	UShooterUserWidget_AddScrollBoxForAutoScrollingText_Params params;
	params.ScrollBox = ScrollBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.SetGameModeWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UShooterGameModeWidget*  InGameModeWidget               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::SetGameModeWidget(class UShooterGameModeWidget* InGameModeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.SetGameModeWidget");

	AShooterGameState_SetGameModeWidget_Params params;
	params.InGameModeWidget = InGameModeWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.ScoreTeamEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InWinningTeamEventName         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   InLosingTeamEventName          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            InTeamNumber                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InCounter                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::ScoreTeamEvent(const struct FName& InWinningTeamEventName, const struct FName& InLosingTeamEventName, int InTeamNumber, float InCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.ScoreTeamEvent");

	AShooterGameState_ScoreTeamEvent_Params params;
	params.InWinningTeamEventName = InWinningTeamEventName;
	params.InLosingTeamEventName = InLosingTeamEventName;
	params.InTeamNumber = InTeamNumber;
	params.InCounter = InCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.RequestTimeDilation
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          InMultiplier                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::RequestTimeDilation(float InMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.RequestTimeDilation");

	AShooterGameState_RequestTimeDilation_Params params;
	params.InMultiplier = InMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.PreGameTimeChanged
// (Event, Public, BlueprintEvent)

void AShooterGameState::PreGameTimeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.PreGameTimeChanged");

	AShooterGameState_PreGameTimeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_WaitingForPlayersTimeRounded
// (Final, Native, Protected)

void AShooterGameState::OnRep_WaitingForPlayersTimeRounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_WaitingForPlayersTimeRounded");

	AShooterGameState_OnRep_WaitingForPlayersTimeRounded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_TeamScores
// (Native, Event, Public, BlueprintEvent)

void AShooterGameState::OnRep_TeamScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_TeamScores");

	AShooterGameState_OnRep_TeamScores_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_SetScoreProcessorClass
// (Final, Native, Protected)

void AShooterGameState::OnRep_SetScoreProcessorClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_SetScoreProcessorClass");

	AShooterGameState_OnRep_SetScoreProcessorClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_ServerPerformance
// (Final, Native, Public)

void AShooterGameState::OnRep_ServerPerformance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_ServerPerformance");

	AShooterGameState_OnRep_ServerPerformance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_ScoreLimit
// (Native, Event, Public, BlueprintEvent)

void AShooterGameState::OnRep_ScoreLimit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_ScoreLimit");

	AShooterGameState_OnRep_ScoreLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_PreGameTimeRounded
// (Final, Native, Protected)

void AShooterGameState::OnRep_PreGameTimeRounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_PreGameTimeRounded");

	AShooterGameState_OnRep_PreGameTimeRounded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_PreGameEnded
// (Final, Native, Protected)

void AShooterGameState::OnRep_PreGameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_PreGameEnded");

	AShooterGameState_OnRep_PreGameEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_ObjectiveTimeRounded
// (Final, Native, Public)

void AShooterGameState::OnRep_ObjectiveTimeRounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_ObjectiveTimeRounded");

	AShooterGameState_OnRep_ObjectiveTimeRounded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_FinalCountdownTimeRounded
// (Final, Native, Protected)

void AShooterGameState::OnRep_FinalCountdownTimeRounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_FinalCountdownTimeRounded");

	AShooterGameState_OnRep_FinalCountdownTimeRounded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnRep_FinalCountdownEnded
// (Event, Protected, BlueprintEvent)

void AShooterGameState::OnRep_FinalCountdownEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnRep_FinalCountdownEnded");

	AShooterGameState_OnRep_FinalCountdownEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnMatchEnding
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            WinnerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::OnMatchEnding(int WinnerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnMatchEnding");

	AShooterGameState_OnMatchEnding_Params params;
	params.WinnerIndex = WinnerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.OnLocalPlayerObjectiveZoneChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterObjectiveZone*   CurrentObjectiveZone           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::OnLocalPlayerObjectiveZoneChanged(class AShooterObjectiveZone* CurrentObjectiveZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.OnLocalPlayerObjectiveZoneChanged");

	AShooterGameState_OnLocalPlayerObjectiveZoneChanged_Params params;
	params.CurrentObjectiveZone = CurrentObjectiveZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.ObjectiveTimeChanged
// (Event, Public, BlueprintEvent)

void AShooterGameState::ObjectiveTimeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.ObjectiveTimeChanged");

	AShooterGameState_ObjectiveTimeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetMultiForceWinningTeamOnEndMatch
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            ForceWinningTeam               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::NetMultiForceWinningTeamOnEndMatch(int ForceWinningTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetMultiForceWinningTeamOnEndMatch");

	AShooterGameState_NetMultiForceWinningTeamOnEndMatch_Params params;
	params.ForceWinningTeam = ForceWinningTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetMulticastKickInDoor
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterDoor*            DoorToKick                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::NetMulticastKickInDoor(class AShooterDoor* DoorToKick)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetMulticastKickInDoor");

	AShooterGameState_NetMulticastKickInDoor_Params params;
	params.DoorToKick = DoorToKick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetMulticastDestroyComponent
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UActorComponent*         ToDestroy                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterGameState::NetMulticastDestroyComponent(class UActorComponent* ToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetMulticastDestroyComponent");

	AShooterGameState_NetMulticastDestroyComponent_Params params;
	params.ToDestroy = ToDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.NetMulticastCharacterSpawned
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       SpawnedCharacter               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::NetMulticastCharacterSpawned(class AShooterCharacter* SpawnedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.NetMulticastCharacterSpawned");

	AShooterGameState_NetMulticastCharacterSpawned_Params params;
	params.SpawnedCharacter = SpawnedCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.MulticastTimeDilation
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          InMuliplier                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::MulticastTimeDilation(float InMuliplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.MulticastTimeDilation");

	AShooterGameState_MulticastTimeDilation_Params params;
	params.InMuliplier = InMuliplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.MulticastMatchEnding
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            WinnerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::MulticastMatchEnding(int WinnerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.MulticastMatchEnding");

	AShooterGameState_MulticastMatchEnding_Params params;
	params.WinnerIndex = WinnerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.MulticastDebugString
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector_NetQuantize     Location                       (ConstParm, Parm, ReferenceParm)
// class FString                  Text                           (Parm, ZeroConstructor)
// class AActor*                  BaseActor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawShadow                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::MulticastDebugString(const struct FVector_NetQuantize& Location, const class FString& Text, class AActor* BaseActor, const struct FColor& Color, float Duration, bool bDrawShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.MulticastDebugString");

	AShooterGameState_MulticastDebugString_Params params;
	params.Location = Location;
	params.Text = Text;
	params.BaseActor = BaseActor;
	params.Color = Color;
	params.Duration = Duration;
	params.bDrawShadow = bDrawShadow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.MulticastDebugSphere
// (Net, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TIME                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::MulticastDebugSphere(const struct FVector_NetQuantize& Location, float Radius, float TIME, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.MulticastDebugSphere");

	AShooterGameState_MulticastDebugSphere_Params params;
	params.Location = Location;
	params.Radius = Radius;
	params.TIME = TIME;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.MulticastDebugLineList
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// TArray<struct FVector>         Points                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// float                          TIME                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::MulticastDebugLineList(TArray<struct FVector> Points, float TIME, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.MulticastDebugLineList");

	AShooterGameState_MulticastDebugLineList_Params params;
	params.Points = Points;
	params.TIME = TIME;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.MulticastDebugLine
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector_NetQuantize     StartLocation                  (Parm)
// struct FVector_NetQuantize     EndLocation                    (Parm)
// float                          TIME                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::MulticastDebugLine(const struct FVector_NetQuantize& StartLocation, const struct FVector_NetQuantize& EndLocation, float TIME, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.MulticastDebugLine");

	AShooterGameState_MulticastDebugLine_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.TIME = TIME;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.MulticastDebugCone
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector_NetQuantize     Origin                         (ConstParm, Parm, ReferenceParm)
// struct FVector_NetQuantize     Direction                      (ConstParm, Parm, ReferenceParm)
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSides                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  DrawColor                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bPersistentLines               (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  DepthPriority                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::MulticastDebugCone(const struct FVector_NetQuantize& Origin, const struct FVector_NetQuantize& Direction, float Length, float AngleWidth, float AngleHeight, int NumSides, const struct FColor& DrawColor, bool bPersistentLines, float LifeTime, unsigned char DepthPriority, float Thickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.MulticastDebugCone");

	AShooterGameState_MulticastDebugCone_Params params;
	params.Origin = Origin;
	params.Direction = Direction;
	params.Length = Length;
	params.AngleWidth = AngleWidth;
	params.AngleHeight = AngleHeight;
	params.NumSides = NumSides;
	params.DrawColor = DrawColor;
	params.bPersistentLines = bPersistentLines;
	params.LifeTime = LifeTime;
	params.DepthPriority = DepthPriority;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.IsTutorialGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameState::IsTutorialGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.IsTutorialGame");

	AShooterGameState_IsTutorialGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.IsMatchEnded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameState::IsMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.IsMatchEnded");

	AShooterGameState_IsMatchEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.GetLivePlayersArrayForTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AShooterCharacter*> AShooterGameState::GetLivePlayersArrayForTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.GetLivePlayersArrayForTeam");

	AShooterGameState_GetLivePlayersArrayForTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState.FinalCountdownTimeChanged
// (Event, Public, BlueprintEvent)

void AShooterGameState::FinalCountdownTimeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.FinalCountdownTimeChanged");

	AShooterGameState_FinalCountdownTimeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.CharacterSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AShooterCharacter*       SpawnedCharacter               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState::CharacterSpawned(class AShooterCharacter* SpawnedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.CharacterSpawned");

	AShooterGameState_CharacterSpawned_Params params;
	params.SpawnedCharacter = SpawnedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState.AreEOMResultsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameState::AreEOMResultsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState.AreEOMResultsActive");

	AShooterGameState_AreEOMResultsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterTutorialWorldWidget.UpdateKeyBinding
// (Final, Native, Public, BlueprintCallable)

void UShooterTutorialWorldWidget::UpdateKeyBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTutorialWorldWidget.UpdateKeyBinding");

	UShooterTutorialWorldWidget_UpdateKeyBinding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.UpdateTutorialCompletionPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InPercent                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_Tutorial::UpdateTutorialCompletionPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.UpdateTutorialCompletionPercent");

	AShooterGameState_Tutorial_UpdateTutorialCompletionPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.ShowTutorialToolTip
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTutorialToolTipInfo    ToolTipInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void AShooterGameState_Tutorial::ShowTutorialToolTip(const struct FTutorialToolTipInfo& ToolTipInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.ShowTutorialToolTip");

	AShooterGameState_Tutorial_ShowTutorialToolTip_Params params;
	params.ToolTipInfo = ToolTipInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.ServerEndTutorial
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterGameState_Tutorial::ServerEndTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.ServerEndTutorial");

	AShooterGameState_Tutorial_ServerEndTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.OnBotTookDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_Tutorial::OnBotTookDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.OnBotTookDamage");

	AShooterGameState_Tutorial_OnBotTookDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.NotifyPlayerClassUpdated
// (Final, Native, Public, BlueprintCallable)

void AShooterGameState_Tutorial::NotifyPlayerClassUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.NotifyPlayerClassUpdated");

	AShooterGameState_Tutorial_NotifyPlayerClassUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.NetMulticastBotTookDamage
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_Tutorial::NetMulticastBotTookDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.NetMulticastBotTookDamage");

	AShooterGameState_Tutorial_NetMulticastBotTookDamage_Params params;
	params.Damage = Damage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.MulticastFetchTutorialWidgets
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterGameState_Tutorial::MulticastFetchTutorialWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.MulticastFetchTutorialWidgets");

	AShooterGameState_Tutorial_MulticastFetchTutorialWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.HideTutorialToolTip
// (Final, Native, Public, BlueprintCallable)

void AShooterGameState_Tutorial::HideTutorialToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.HideTutorialToolTip");

	AShooterGameState_Tutorial_HideTutorialToolTip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Tutorial.EndTutorial
// (Final, Native, Public, BlueprintCallable)

void AShooterGameState_Tutorial::EndTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Tutorial.EndTutorial");

	AShooterGameState_Tutorial_EndTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterToolTipCatalogue.GetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EShooterClass>     ShooterClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowGeneric                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTutorialToolTipInfo    ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FTutorialToolTipInfo UShooterToolTipCatalogue::GetToolTip(TEnumAsByte<EShooterClass> ShooterClass, bool bAllowGeneric)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterToolTipCatalogue.GetToolTip");

	UShooterToolTipCatalogue_GetToolTip_Params params;
	params.ShooterClass = ShooterClass;
	params.bAllowGeneric = bAllowGeneric;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterZipLine.GetZipLineStart
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShooterZipLine::GetZipLineStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterZipLine.GetZipLineStart");

	AShooterZipLine_GetZipLineStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterZipLine.GetZipLineEnd
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShooterZipLine::GetZipLineEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterZipLine.GetZipLineEnd");

	AShooterZipLine_GetZipLineEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.WantsToRun
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::WantsToRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.WantsToRun");

	AShooterCharacter_WantsToRun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.WantsToFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::WantsToFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.WantsToFire");

	AShooterCharacter_WantsToFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.WantsToBlindFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::WantsToBlindFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.WantsToBlindFire");

	AShooterCharacter_WantsToBlindFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.WantsToAltFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::WantsToAltFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.WantsToAltFire");

	AShooterCharacter_WantsToAltFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.UpdatePerspectiveFXWithTrace
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ReferenceName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FPerspectiveFXData      FXData                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::UpdatePerspectiveFXWithTrace(const struct FName& ReferenceName, const struct FPerspectiveFXData& FXData, const struct FVector& Direction, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.UpdatePerspectiveFXWithTrace");

	AShooterCharacter_UpdatePerspectiveFXWithTrace_Params params;
	params.ReferenceName = ReferenceName;
	params.FXData = FXData;
	params.Direction = Direction;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.UpdateInventoryUI
// (Final, Native, Public)

void AShooterCharacter::UpdateInventoryUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.UpdateInventoryUI");

	AShooterCharacter_UpdateInventoryUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.StopPerspectiveFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReferenceName                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::StopPerspectiveFX(const struct FName& ReferenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.StopPerspectiveFX");

	AShooterCharacter_StopPerspectiveFX_Params params;
	params.ReferenceName = ReferenceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SpawnPerspectiveFX
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ReferenceName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FPerspectiveFXData      FXData                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AShooterWeapon*          OptionalWeapon                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOffHandWeapon                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SpawnPerspectiveFX(const struct FName& ReferenceName, const struct FPerspectiveFXData& FXData, class AShooterWeapon* OptionalWeapon, bool bOffHandWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SpawnPerspectiveFX");

	AShooterCharacter_SpawnPerspectiveFX_Params params;
	params.ReferenceName = ReferenceName;
	params.FXData = FXData;
	params.OptionalWeapon = OptionalWeapon;
	params.bOffHandWeapon = bOffHandWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetWantsToFire
// (Final, Native, Public)
// Parameters:
// bool                           Want                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetWantsToFire(bool Want)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetWantsToFire");

	AShooterCharacter_SetWantsToFire_Params params;
	params.Want = Want;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetWantsToAltFire
// (Final, Native, Public)
// Parameters:
// bool                           Want                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetWantsToAltFire(bool Want)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetWantsToAltFire");

	AShooterCharacter_SetWantsToAltFire_Params params;
	params.Want = Want;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetTurnOnPointAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InTurnOnPointCursor            (Parm, ZeroConstructor, IsPlainOldData)
// float                          inSpeed                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::SetTurnOnPointAlpha(float InTurnOnPointCursor, float inSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetTurnOnPointAlpha");

	AShooterCharacter_SetTurnOnPointAlpha_Params params;
	params.InTurnOnPointCursor = InTurnOnPointCursor;
	params.inSpeed = inSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.SetSurfaceSwitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FHitResult AShooterCharacter::SetSurfaceSwitch(const struct FName& Socket, float TraceDistance, TEnumAsByte<ECollisionChannel> CollisionChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetSurfaceSwitch");

	AShooterCharacter_SetSurfaceSwitch_Params params;
	params.Socket = Socket;
	params.TraceDistance = TraceDistance;
	params.CollisionChannel = CollisionChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.SetScalarParamForAllMaterialsIncludingWeapons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ParamVal                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnThirdPersonOnly             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetScalarParamForAllMaterialsIncludingWeapons(const struct FName& ParamName, float ParamVal, bool bOnThirdPersonOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetScalarParamForAllMaterialsIncludingWeapons");

	AShooterCharacter_SetScalarParamForAllMaterialsIncludingWeapons_Params params;
	params.ParamName = ParamName;
	params.ParamVal = ParamVal;
	params.bOnThirdPersonOnly = bOnThirdPersonOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetScalarParamForAllMaterials
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ParamVal                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetScalarParamForAllMaterials(const struct FName& ParamName, float ParamVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetScalarParamForAllMaterials");

	AShooterCharacter_SetScalarParamForAllMaterials_Params params;
	params.ParamName = ParamName;
	params.ParamVal = ParamVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetRenderCustomDepthForAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetRenderCustomDepthForAllMeshes(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetRenderCustomDepthForAllMeshes");

	AShooterCharacter_SetRenderCustomDepthForAllMeshes_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetLockSpawnAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetLockSpawnAnimation(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetLockSpawnAnimation");

	AShooterCharacter_SetLockSpawnAnimation_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetLockShiftAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetLockShiftAbility(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetLockShiftAbility");

	AShooterCharacter_SetLockShiftAbility_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetLockQAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetLockQAbility(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetLockQAbility");

	AShooterCharacter_SetLockQAbility_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetLockPrimaryFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetLockPrimaryFire(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetLockPrimaryFire");

	AShooterCharacter_SetLockPrimaryFire_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetLockMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetLockMovement(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetLockMovement");

	AShooterCharacter_SetLockMovement_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetLockEAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetLockEAbility(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetLockEAbility");

	AShooterCharacter_SetLockEAbility_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetLockAltFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetLockAltFire(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetLockAltFire");

	AShooterCharacter_SetLockAltFire_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetForceNoOcclusionForAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetForceNoOcclusionForAllMeshes(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetForceNoOcclusionForAllMeshes");

	AShooterCharacter_SetForceNoOcclusionForAllMeshes_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetCharacterScalarParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ShaderParamName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterCharacterMaterialPerson> WhichPerson                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterCharacterMaterialSetMode> SetMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetCharacterScalarParam(const struct FName& ShaderParamName, float NewValue, TEnumAsByte<EShooterCharacterMaterialPerson> WhichPerson, TEnumAsByte<EShooterCharacterMaterialSetMode> SetMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetCharacterScalarParam");

	AShooterCharacter_SetCharacterScalarParam_Params params;
	params.ShaderParamName = ShaderParamName;
	params.NewValue = NewValue;
	params.WhichPerson = WhichPerson;
	params.SetMode = SetMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetCharacterHealed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsHealed                       (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     Healer                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHealSoundType>    SoundType                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetCharacterHealed(bool IsHealed, class AShooterPlayerState* Healer, TEnumAsByte<EHealSoundType> SoundType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetCharacterHealed");

	AShooterCharacter_SetCharacterHealed_Params params;
	params.IsHealed = IsHealed;
	params.Healer = Healer;
	params.SoundType = SoundType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.SetBeingRevived
// (Final, Native, Protected)
// Parameters:
// class AShooterCharacter*       Unused                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::SetBeingRevived(class AShooterCharacter* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.SetBeingRevived");

	AShooterCharacter_SetBeingRevived_Params params;
	params.Unused = Unused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerUnstuck
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerUnstuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerUnstuck");

	AShooterCharacter_ServerUnstuck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerTryStartDoorKick
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::ServerTryStartDoorKick(class UShooterInteractComponent* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerTryStartDoorKick");

	AShooterCharacter_ServerTryStartDoorKick_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerToggleJumpStartState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           OnOff                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerToggleJumpStartState(bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerToggleJumpStartState");

	AShooterCharacter_ServerToggleJumpStartState_Params params;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerToggleDodgeStartState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           OnOff                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerToggleDodgeStartState(bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerToggleDodgeStartState");

	AShooterCharacter_ServerToggleDodgeStartState_Params params;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerThrowThrowable
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerThrowThrowable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerThrowThrowable");

	AShooterCharacter_ServerThrowThrowable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSwitchFireAction
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerSwitchFireAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSwitchFireAction");

	AShooterCharacter_ServerSwitchFireAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSwitchCameraShoulder
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bIsSwitched                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSwitchCameraShoulder(bool bIsSwitched)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSwitchCameraShoulder");

	AShooterCharacter_ServerSwitchCameraShoulder_Params params;
	params.bIsSwitched = bIsSwitched;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSwitchAmmoType
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerSwitchAmmoType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSwitchAmmoType");

	AShooterCharacter_ServerSwitchAmmoType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerStartSearchDestroy
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            AmmoToFire                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Impact                         (ConstParm, Parm, IsPlainOldData)

void AShooterCharacter::ServerStartSearchDestroy(int AmmoToFire, const struct FHitResult& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerStartSearchDestroy");

	AShooterCharacter_ServerStartSearchDestroy_Params params;
	params.AmmoToFire = AmmoToFire;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetThrowTarget
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetThrowTarget(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetThrowTarget");

	AShooterCharacter_ServerSetThrowTarget_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetTargeting
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bNewTargeting                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetTargeting(bool bNewTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetTargeting");

	AShooterCharacter_ServerSetTargeting_Params params;
	params.bNewTargeting = bNewTargeting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetRunning
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bNewRunning                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bToggle                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERunType>          RunType                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetRunning(bool bNewRunning, bool bToggle, TEnumAsByte<ERunType> RunType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetRunning");

	AShooterCharacter_ServerSetRunning_Params params;
	params.bNewRunning = bNewRunning;
	params.bToggle = bToggle;
	params.RunType = RunType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetPrimaryFireInput
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bIsPressed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetPrimaryFireInput(bool bIsPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetPrimaryFireInput");

	AShooterCharacter_ServerSetPrimaryFireInput_Params params;
	params.bIsPressed = bIsPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetMoveSpeedModifier
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          MoveSpeedModifier              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetMoveSpeedModifier(float MoveSpeedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetMoveSpeedModifier");

	AShooterCharacter_ServerSetMoveSpeedModifier_Params params;
	params.MoveSpeedModifier = MoveSpeedModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetJumpKeyDown
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bKeyDown                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetJumpKeyDown(bool bKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetJumpKeyDown");

	AShooterCharacter_ServerSetJumpKeyDown_Params params;
	params.bKeyDown = bKeyDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetJetGliderMaxSpeed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          MaxSpeed                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetJetGliderMaxSpeed(float MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetJetGliderMaxSpeed");

	AShooterCharacter_ServerSetJetGliderMaxSpeed_Params params;
	params.MaxSpeed = MaxSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetEnergyDamageMultiplier
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetEnergyDamageMultiplier(float Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetEnergyDamageMultiplier");

	AShooterCharacter_ServerSetEnergyDamageMultiplier_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetDesiredWeaponIndex
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            DesiredWeaponID                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetDesiredWeaponIndex(int DesiredWeaponID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetDesiredWeaponIndex");

	AShooterCharacter_ServerSetDesiredWeaponIndex_Params params;
	params.DesiredWeaponID = DesiredWeaponID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetChargeCursor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Cursor                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetChargeCursor(float Cursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetChargeCursor");

	AShooterCharacter_ServerSetChargeCursor_Params params;
	params.Cursor = Cursor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetBuoyancyActive
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetBuoyancyActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetBuoyancyActive");

	AShooterCharacter_ServerSetBuoyancyActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetBallisticDamageMultiplier
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetBallisticDamageMultiplier(float Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetBallisticDamageMultiplier");

	AShooterCharacter_ServerSetBallisticDamageMultiplier_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetArmStrengthAnimationSpeed
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                          SpeedMultiplier                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetArmStrengthAnimationSpeed(float SpeedMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetArmStrengthAnimationSpeed");

	AShooterCharacter_ServerSetArmStrengthAnimationSpeed_Params params;
	params.SpeedMultiplier = SpeedMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetAirDive
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           TryAirDive                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetAirDive(bool TryAirDive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetAirDive");

	AShooterCharacter_ServerSetAirDive_Params params;
	params.TryAirDive = TryAirDive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerSetAimState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TEnumAsByte<EAimState>         NewAimState                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerSetAimState(TEnumAsByte<EAimState> NewAimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerSetAimState");

	AShooterCharacter_ServerSetAimState_Params params;
	params.NewAimState = NewAimState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestUseItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerRequestUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestUseItem");

	AShooterCharacter_ServerRequestUseItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestStopInteract
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::ServerRequestStopInteract(class UShooterInteractComponent* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestStopInteract");

	AShooterCharacter_ServerRequestStopInteract_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestStartInteract
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::ServerRequestStartInteract(class UShooterInteractComponent* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestStartInteract");

	AShooterCharacter_ServerRequestStartInteract_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestSpawnKickDecal
// (Net, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class UTexture2D*              KickDecalTexture               (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Impact                         (ConstParm, Parm, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGolden                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerRequestSpawnKickDecal(class UTexture2D* KickDecalTexture, const struct FHitResult& Impact, const struct FRotator& SpawnRotation, bool IsGolden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestSpawnKickDecal");

	AShooterCharacter_ServerRequestSpawnKickDecal_Params params;
	params.KickDecalTexture = KickDecalTexture;
	params.Impact = Impact;
	params.SpawnRotation = SpawnRotation;
	params.IsGolden = IsGolden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestPickupAmmo
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TArray<class AShooterPickup_Ammo*> AmmoPickups                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterCharacter::ServerRequestPickupAmmo(TArray<class AShooterPickup_Ammo*> AmmoPickups)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestPickupAmmo");

	AShooterCharacter_ServerRequestPickupAmmo_Params params;
	params.AmmoPickups = AmmoPickups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestKickInDoor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::ServerRequestKickInDoor(class UShooterInteractComponent* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestKickInDoor");

	AShooterCharacter_ServerRequestKickInDoor_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestInteract
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            SwapInventoryIndex             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerRequestInteract(class UShooterInteractComponent* Interaction, int SwapInventoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestInteract");

	AShooterCharacter_ServerRequestInteract_Params params;
	params.Interaction = Interaction;
	params.SwapInventoryIndex = SwapInventoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestEquipWeapon
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            InventoryIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerRequestEquipWeapon(int InventoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestEquipWeapon");

	AShooterCharacter_ServerRequestEquipWeapon_Params params;
	params.InventoryIndex = InventoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestATM_Withdraw
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::ServerRequestATM_Withdraw(class UShooterInteractComponent* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestATM_Withdraw");

	AShooterCharacter_ServerRequestATM_Withdraw_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRequestATM_Deposit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::ServerRequestATM_Deposit(class UShooterInteractComponent* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRequestATM_Deposit");

	AShooterCharacter_ServerRequestATM_Deposit_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerReloadWeapon
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AShooterWeapon*          NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerReloadWeapon(class AShooterWeapon* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerReloadWeapon");

	AShooterCharacter_ServerReloadWeapon_Params params;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerRedirectProjectile
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerRedirectProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerRedirectProjectile");

	AShooterCharacter_ServerRedirectProjectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerPlayloopedSound
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        NewID                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerPlayloopedSound(class UAkAudioEvent* Sound, int64_t NewID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerPlayloopedSound");

	AShooterCharacter_ServerPlayloopedSound_Params params;
	params.Sound = Sound;
	params.NewID = NewID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerGoToState
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerGoToState(class UClass* StateClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerGoToState");

	AShooterCharacter_ServerGoToState_Params params;
	params.StateClass = StateClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDropCurrentItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bSpawnPickup                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerDropCurrentItem(bool bSpawnPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDropCurrentItem");

	AShooterCharacter_ServerDropCurrentItem_Params params;
	params.bSpawnPickup = bSpawnPickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDropCosmetic
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  CosmeticIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerDropCosmetic(unsigned char CosmeticIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDropCosmetic");

	AShooterCharacter_ServerDropCosmetic_Params params;
	params.CosmeticIndex = CosmeticIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDropAmmo
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TEnumAsByte<EAmmoType>         AmmoType                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerDropAmmo(TEnumAsByte<EAmmoType> AmmoType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDropAmmo");

	AShooterCharacter_ServerDropAmmo_Params params;
	params.AmmoType = AmmoType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDetonateLastProjectile
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerDetonateLastProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDetonateLastProjectile");

	AShooterCharacter_ServerDetonateLastProjectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerDeactivateDodge
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerDeactivateDodge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerDeactivateDodge");

	AShooterCharacter_ServerDeactivateDodge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerATMInteract
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UShooterInteractComponent* ATM                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerATMInteract(class UShooterInteractComponent* ATM, bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerATMInteract");

	AShooterCharacter_ServerATMInteract_Params params;
	params.ATM = ATM;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerArmProjectile
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterCharacter::ServerArmProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerArmProjectile");

	AShooterCharacter_ServerArmProjectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ServerAddForce
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ServerAddForce(const struct FVector& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ServerAddForce");

	AShooterCharacter_ServerAddForce_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.RequestProjectileHit
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AShooterCharacter*       Shooter                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            clientProjectileID             (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          DistanceTraveled               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::RequestProjectileHit(class AShooterCharacter* Shooter, int clientProjectileID, const struct FHitResult& HitInfo, float DistanceTraveled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.RequestProjectileHit");

	AShooterCharacter_RequestProjectileHit_Params params;
	params.Shooter = Shooter;
	params.clientProjectileID = clientProjectileID;
	params.HitInfo = HitInfo;
	params.DistanceTraveled = DistanceTraveled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.RequestInteract
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShooterInteractComponent* Interaction                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterCharacter::RequestInteract(class UShooterInteractComponent* Interaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.RequestInteract");

	AShooterCharacter_RequestInteract_Params params;
	params.Interaction = Interaction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ReplicasSetTargeting
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                           bNewTargeting                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ReplicasSetTargeting(bool bNewTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ReplicasSetTargeting");

	AShooterCharacter_ReplicasSetTargeting_Params params;
	params.bNewTargeting = bNewTargeting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ReplicasGoToState
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ReplicasGoToState(class UClass* StateClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ReplicasGoToState");

	AShooterCharacter_ReplicasGoToState_Params params;
	params.StateClass = StateClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ReceiveHealing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Heal                           (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HealCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           HealSound                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::ReceiveHealing(float Heal, class AController* EventInstigator, class AActor* HealCauser, class UAkAudioEvent* HealSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ReceiveHealing");

	AShooterCharacter_ReceiveHealing_Params params;
	params.Heal = Heal;
	params.EventInstigator = EventInstigator;
	params.HealCauser = HealCauser;
	params.HealSound = HealSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.PlayPerspectiveSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::PlayPerspectiveSound(class UAkAudioEvent* AkEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.PlayPerspectiveSound");

	AShooterCharacter_PlayPerspectiveSound_Params params;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.PlayDialogue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           OnDiscardSound                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumReplayTimeInSeconds     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaximumWaitTimeBeforeInterruptingInSeconds (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::PlayDialogue(class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.PlayDialogue");

	AShooterCharacter_PlayDialogue_Params params;
	params.Sound = Sound;
	params.OnDiscardSound = OnDiscardSound;
	params.Priority = Priority;
	params.SamePriorityConflictResolution = SamePriorityConflictResolution;
	params.LowerPriorityConflictResolution = LowerPriorityConflictResolution;
	params.MinimumReplayTimeInSeconds = MinimumReplayTimeInSeconds;
	params.MaximumWaitTimeBeforeInterruptingInSeconds = MaximumWaitTimeBeforeInterruptingInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.PlayAnimMontageAlt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Anim                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            AltAnim                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  PlayedInState                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::PlayAnimMontageAlt(class UAnimMontage* Anim, class UAnimMontage* AltAnim, float InPlayRate, class UClass* PlayedInState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.PlayAnimMontageAlt");

	AShooterCharacter_PlayAnimMontageAlt_Params params;
	params.Anim = Anim;
	params.AltAnim = AltAnim;
	params.InPlayRate = InPlayRate;
	params.PlayedInState = PlayedInState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.OnSwitchMeshPerspectives
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bThirdPerson                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnSwitchMeshPerspectives(bool bThirdPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnSwitchMeshPerspectives");

	AShooterCharacter_OnSwitchMeshPerspectives_Params params;
	params.bThirdPerson = bThirdPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnStopSpectating
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnStopSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnStopSpectating");

	AShooterCharacter_OnStopSpectating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnSpectatorTargetChange
// (Final, Native, Protected)
// Parameters:
// class AShooterCharacter*       NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnSpectatorTargetChange(class AShooterCharacter* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnSpectatorTargetChange");

	AShooterCharacter_OnSpectatorTargetChange_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnSlowTimeStart
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnSlowTimeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnSlowTimeStart");

	AShooterCharacter_OnSlowTimeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnSlowTimeEnd
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnSlowTimeEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnSlowTimeEnd");

	AShooterCharacter_OnSlowTimeEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnSendDrone
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isLeftDrone                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnSendDrone(bool isLeftDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnSendDrone");

	AShooterCharacter_OnSendDrone_Params params;
	params.isLeftDrone = isLeftDrone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_Vehicle
// (Final, Native, Public)
// Parameters:
// class AActor*                  PreviousVehicle                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnRep_Vehicle(class AActor* PreviousVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_Vehicle");

	AShooterCharacter_OnRep_Vehicle_Params params;
	params.PreviousVehicle = PreviousVehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_ServerEquippedWeapon
// (Final, Native, Protected)

void AShooterCharacter::OnRep_ServerEquippedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_ServerEquippedWeapon");

	AShooterCharacter_OnRep_ServerEquippedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_LastTakeHitInfo
// (Final, Native, Protected)

void AShooterCharacter::OnRep_LastTakeHitInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_LastTakeHitInfo");

	AShooterCharacter_OnRep_LastTakeHitInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_IsInDangerZone
// (Final, Native, Public)

void AShooterCharacter::OnRep_IsInDangerZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_IsInDangerZone");

	AShooterCharacter_OnRep_IsInDangerZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_IsCameraShoulderSwitched
// (Final, Native, Protected)

void AShooterCharacter::OnRep_IsCameraShoulderSwitched()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_IsCameraShoulderSwitched");

	AShooterCharacter_OnRep_IsCameraShoulderSwitched_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_Inventory
// (Final, Native, Protected)

void AShooterCharacter::OnRep_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_Inventory");

	AShooterCharacter_OnRep_Inventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_HelmetArmorData
// (Final, Native, Protected)

void AShooterCharacter::OnRep_HelmetArmorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_HelmetArmorData");

	AShooterCharacter_OnRep_HelmetArmorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_Health
// (Final, Native, Public)

void AShooterCharacter::OnRep_Health()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_Health");

	AShooterCharacter_OnRep_Health_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_CurrentZipLine
// (Final, Native, Public)

void AShooterCharacter::OnRep_CurrentZipLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_CurrentZipLine");

	AShooterCharacter_OnRep_CurrentZipLine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_CurrentWeaponSlots
// (Final, Native, Protected)

void AShooterCharacter::OnRep_CurrentWeaponSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_CurrentWeaponSlots");

	AShooterCharacter_OnRep_CurrentWeaponSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_CurrentItemSlots
// (Final, Native, Protected)

void AShooterCharacter::OnRep_CurrentItemSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_CurrentItemSlots");

	AShooterCharacter_OnRep_CurrentItemSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_CurrentAimState
// (Final, Native, Protected)

void AShooterCharacter::OnRep_CurrentAimState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_CurrentAimState");

	AShooterCharacter_OnRep_CurrentAimState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_bUsingWingsuit
// (Final, Native, Public)

void AShooterCharacter::OnRep_bUsingWingsuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_bUsingWingsuit");

	AShooterCharacter_OnRep_bUsingWingsuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_Boost
// (Final, Native, Protected)

void AShooterCharacter::OnRep_Boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_Boost");

	AShooterCharacter_OnRep_Boost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_BodyArmorData
// (Final, Native, Protected)

void AShooterCharacter::OnRep_BodyArmorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_BodyArmorData");

	AShooterCharacter_OnRep_BodyArmorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_AmmoCounts
// (Final, Native, Protected)

void AShooterCharacter::OnRep_AmmoCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_AmmoCounts");

	AShooterCharacter_OnRep_AmmoCounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnRep_Abilities
// (Final, Native, Public)

void AShooterCharacter::OnRep_Abilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnRep_Abilities");

	AShooterCharacter_OnRep_Abilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnLocalPlayerTookDamage
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnLocalPlayerTookDamage(float Damage, class UClass* DamageType, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnLocalPlayerTookDamage");

	AShooterCharacter_OnLocalPlayerTookDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnLocalPlayerDealtDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterCharacter*       DamagedPlayer                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            DamageDealt                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthFraction                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasHeadShot                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnLocalPlayerDealtDamage(class AShooterCharacter* DamagedPlayer, class UClass* DamageType, int DamageDealt, float HealthFraction, bool bWasHeadShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnLocalPlayerDealtDamage");

	AShooterCharacter_OnLocalPlayerDealtDamage_Params params;
	params.DamagedPlayer = DamagedPlayer;
	params.DamageType = DamageType;
	params.DamageDealt = DamageDealt;
	params.HealthFraction = HealthFraction;
	params.bWasHeadShot = bWasHeadShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnInteract
// (Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnInteract(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnInteract");

	AShooterCharacter_OnInteract_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnFootstep
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Event                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLeftFoot                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)

void AShooterCharacter::OnFootstep(class UAkAudioEvent* Event, bool bLeftFoot, class UAkComponent* AkComponent, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnFootstep");

	AShooterCharacter_OnFootstep_Params params;
	params.Event = Event;
	params.bLeftFoot = bLeftFoot;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
}


// Function ShooterGame.ShooterCharacter.OnFancyJump
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnFancyJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnFancyJump");

	AShooterCharacter_OnFancyJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnExitTooltipZone
// (Final, Native, Public, BlueprintCallable)

void AShooterCharacter::OnExitTooltipZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnExitTooltipZone");

	AShooterCharacter_OnExitTooltipZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnEnterTooltipZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ETutorialTooltipCategory> Category                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnEnterTooltipZone(TEnumAsByte<ETutorialTooltipCategory> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnEnterTooltipZone");

	AShooterCharacter_OnEnterTooltipZone_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnEnterExitNoProneZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEntered                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnEnterExitNoProneZone(bool bEntered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnEnterExitNoProneZone");

	AShooterCharacter_OnEnterExitNoProneZone_Params params;
	params.bEntered = bEntered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnEndOfMatchOverlaySet
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnEndOfMatchOverlaySet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnEndOfMatchOverlaySet");

	AShooterCharacter_OnEndOfMatchOverlaySet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnEndOfMatchOverlayCleared
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnEndOfMatchOverlayCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnEndOfMatchOverlayCleared");

	AShooterCharacter_OnEndOfMatchOverlayCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnEnableHighlight
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnEnableHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnEnableHighlight");

	AShooterCharacter_OnEnableHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnDroneSpawn
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           isLeftDrone                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnDroneSpawn(bool isLeftDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnDroneSpawn");

	AShooterCharacter_OnDroneSpawn_Params params;
	params.isLeftDrone = isLeftDrone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnDisableHighlight
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnDisableHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnDisableHighlight");

	AShooterCharacter_OnDisableHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnDedicatedSpectatorToggled
// (Final, Native, Protected)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnDedicatedSpectatorToggled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnDedicatedSpectatorToggled");

	AShooterCharacter_OnDedicatedSpectatorToggled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnCharacterShieldedEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasDestroyed                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnCharacterShieldedEnd(bool bFirstPerson, bool bWasDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnCharacterShieldedEnd");

	AShooterCharacter_OnCharacterShieldedEnd_Params params;
	params.bFirstPerson = bFirstPerson;
	params.bWasDestroyed = bWasDestroyed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnCharacterShieldedBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnCharacterShieldedBegin(bool bFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnCharacterShieldedBegin");

	AShooterCharacter_OnCharacterShieldedBegin_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnCharacterHealedEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnCharacterHealedEnd(bool bFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnCharacterHealedEnd");

	AShooterCharacter_OnCharacterHealedEnd_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnCharacterHealedBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFirstPerson                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::OnCharacterHealedBegin(bool bFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnCharacterHealedBegin");

	AShooterCharacter_OnCharacterHealedBegin_Params params;
	params.bFirstPerson = bFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnCharacterCustomizationCompleted
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnCharacterCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnCharacterCustomizationCompleted");

	AShooterCharacter_OnCharacterCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.OnAbilityStatusChanged
// (Event, Public, BlueprintEvent)

void AShooterCharacter::OnAbilityStatusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.OnAbilityStatusChanged");

	AShooterCharacter_OnAbilityStatusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NotifyBuffRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBuffType>         BuffType                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NotifyBuffRemoved(TEnumAsByte<EBuffType> BuffType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NotifyBuffRemoved");

	AShooterCharacter_NotifyBuffRemoved_Params params;
	params.BuffType = BuffType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NotifyBuffApplied
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBuffType>         BuffType                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NotifyBuffApplied(TEnumAsByte<EBuffType> BuffType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NotifyBuffApplied");

	AShooterCharacter_NotifyBuffApplied_Params params;
	params.BuffType = BuffType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastUnstuck
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterCharacter::NetMultiCastUnstuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastUnstuck");

	AShooterCharacter_NetMultiCastUnstuck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastToggleJumpStartState
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           OnOff                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastToggleJumpStartState(bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastToggleJumpStartState");

	AShooterCharacter_NetMultiCastToggleJumpStartState_Params params;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastToggleDodgeStartState
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           OnOff                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastToggleDodgeStartState(bool OnOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastToggleDodgeStartState");

	AShooterCharacter_NetMultiCastToggleDodgeStartState_Params params;
	params.OnOff = OnOff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastStopLoopedSound
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int64_t                        NewID                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastStopLoopedSound(int64_t NewID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastStopLoopedSound");

	AShooterCharacter_NetMultiCastStopLoopedSound_Params params;
	params.NewID = NewID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastStopFall
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterCharacter::NetMultiCastStopFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastStopFall");

	AShooterCharacter_NetMultiCastStopFall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastStopAttachedTeamFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterCharacter::NetMultiCastStopAttachedTeamFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastStopAttachedTeamFX");

	AShooterCharacter_NetMultiCastStopAttachedTeamFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastStartFall
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterCharacter::NetMultiCastStartFall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastStartFall");

	AShooterCharacter_NetMultiCastStartFall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMulticastSpawnKickDecal
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// class UTexture2D*              KickDecalTexture               (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Impact                         (ConstParm, Parm, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsGolden                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMulticastSpawnKickDecal(class UTexture2D* KickDecalTexture, const struct FHitResult& Impact, const struct FRotator& SpawnRotation, bool IsGolden)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMulticastSpawnKickDecal");

	AShooterCharacter_NetMulticastSpawnKickDecal_Params params;
	params.KickDecalTexture = KickDecalTexture;
	params.Impact = Impact;
	params.SpawnRotation = SpawnRotation;
	params.IsGolden = IsGolden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastSetSoundSwitch
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PerspectiveState               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastSetSoundSwitch(const struct FName& SwitchGroup, const struct FName& PerspectiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastSetSoundSwitch");

	AShooterCharacter_NetMultiCastSetSoundSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.PerspectiveState = PerspectiveState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastSetImpactSwitch
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<class AShooterCharacter*> Victims                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterCharacter::NetMultiCastSetImpactSwitch(TArray<class AShooterCharacter*> Victims)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastSetImpactSwitch");

	AShooterCharacter_NetMultiCastSetImpactSwitch_Params params;
	params.Victims = Victims;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastSetCharacterHealed
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           Healed                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     Healer                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHealSoundType>    SoundType                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastSetCharacterHealed(bool Healed, class AShooterPlayerState* Healer, TEnumAsByte<EHealSoundType> SoundType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastSetCharacterHealed");

	AShooterCharacter_NetMultiCastSetCharacterHealed_Params params;
	params.Healed = Healed;
	params.Healer = Healer;
	params.SoundType = SoundType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastServerBodyPositions
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// TArray<struct FDebugBodyPosition> BodyPositions                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastServerBodyPositions(TArray<struct FDebugBodyPosition> BodyPositions, const struct FColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastServerBodyPositions");

	AShooterCharacter_NetMultiCastServerBodyPositions_Params params;
	params.BodyPositions = BodyPositions;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMulticastRemoveCharacterScalar
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MatParamValue                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMulticastRemoveCharacterScalar(const struct FName& ParamName, float MatParamValue, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMulticastRemoveCharacterScalar");

	AShooterCharacter_NetMulticastRemoveCharacterScalar_Params params;
	params.ParamName = ParamName;
	params.MatParamValue = MatParamValue;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastPlaySoundInternal
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastPlaySoundInternal(class UAkAudioEvent* Sound, TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue, uint32_t RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastPlaySoundInternal");

	AShooterCharacter_NetMultiCastPlaySoundInternal_Params params;
	params.Sound = Sound;
	params.InDialogue = InDialogue;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastPlayLoopedSoundInternal
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        NewID                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastPlayLoopedSoundInternal(class UAkAudioEvent* Sound, int64_t NewID, uint32_t RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastPlayLoopedSoundInternal");

	AShooterCharacter_NetMultiCastPlayLoopedSoundInternal_Params params;
	params.Sound = Sound;
	params.NewID = NewID;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastPlayFXAtLocation
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class UParticleSystem*         FXtoPlay                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastPlayFXAtLocation(class UParticleSystem* FXtoPlay, class UAkAudioEvent* Sound, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastPlayFXAtLocation");

	AShooterCharacter_NetMultiCastPlayFXAtLocation_Params params;
	params.FXtoPlay = FXtoPlay;
	params.Sound = Sound;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastPlayAttachedTeamFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UParticleSystem*         TeamFXtoPlayFirstPerson        (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         TeamFXtoPlay                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EnemyFXtoPlay                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastPlayAttachedTeamFX(class UParticleSystem* TeamFXtoPlayFirstPerson, class UParticleSystem* TeamFXtoPlay, class UParticleSystem* EnemyFXtoPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastPlayAttachedTeamFX");

	AShooterCharacter_NetMultiCastPlayAttachedTeamFX_Params params;
	params.TeamFXtoPlayFirstPerson = TeamFXtoPlayFirstPerson;
	params.TeamFXtoPlay = TeamFXtoPlay;
	params.EnemyFXtoPlay = EnemyFXtoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastPlayAttachedFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UParticleSystem*         FXtoPlay                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastPlayAttachedFX(class UParticleSystem* FXtoPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastPlayAttachedFX");

	AShooterCharacter_NetMultiCastPlayAttachedFX_Params params;
	params.FXtoPlay = FXtoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastPlayAbilitySoundInternal
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UShooterAbility*         Ability                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EShooterAbilitySoundType> SoundType                      (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       RandomSeed                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastPlayAbilitySoundInternal(class UShooterAbility* Ability, TEnumAsByte<EShooterAbilitySoundType> SoundType, uint32_t RandomSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastPlayAbilitySoundInternal");

	AShooterCharacter_NetMultiCastPlayAbilitySoundInternal_Params params;
	params.Ability = Ability;
	params.SoundType = SoundType;
	params.RandomSeed = RandomSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastOnHealedByOther
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Healer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HealCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealthPercentage       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHealthPercentage            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastOnHealedByOther(int HealAmount, class AShooterCharacter* Healer, class AActor* HealCauser, float PreviousHealthPercentage, float NewHealthPercentage, uint32_t Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastOnHealedByOther");

	AShooterCharacter_NetMultiCastOnHealedByOther_Params params;
	params.HealAmount = HealAmount;
	params.Healer = Healer;
	params.HealCauser = HealCauser;
	params.PreviousHealthPercentage = PreviousHealthPercentage;
	params.NewHealthPercentage = NewHealthPercentage;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastOnHealCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       PawnYouHealed                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousHealthPercentage       (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHealthPercentage            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastOnHealCharacter(int HealAmount, class AShooterCharacter* PawnYouHealed, float PreviousHealthPercentage, float NewHealthPercentage, uint32_t Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastOnHealCharacter");

	AShooterCharacter_NetMultiCastOnHealCharacter_Params params;
	params.HealAmount = HealAmount;
	params.PawnYouHealed = PawnYouHealed;
	params.PreviousHealthPercentage = PreviousHealthPercentage;
	params.NewHealthPercentage = NewHealthPercentage;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMulticastDeath
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, ReferenceParm)
// class APawn*                   InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageCauserLocation           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   BoneHit                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            DeathAnimationIndex            (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     DeadManPlayerState             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMulticastDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, const struct FVector& DamageCauserLocation, const struct FName& BoneHit, int DeathAnimationIndex, uint32_t Seed, class AShooterPlayerState* DeadManPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMulticastDeath");

	AShooterCharacter_NetMulticastDeath_Params params;
	params.KillingDamage = KillingDamage;
	params.DamageEvent = DamageEvent;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauserLocation = DamageCauserLocation;
	params.BoneHit = BoneHit;
	params.DeathAnimationIndex = DeathAnimationIndex;
	params.Seed = Seed;
	params.DeadManPlayerState = DeadManPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMulticastBloodImpactFX
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// unsigned char                  BloodIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int16_t                        BoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize     Offset                         (ConstParm, Parm, ReferenceParm)
// struct FVector_NetQuantizeNormal Direction                      (ConstParm, Parm, ReferenceParm)

void AShooterCharacter::NetMulticastBloodImpactFX(unsigned char BloodIndex, int16_t BoneIndex, const struct FVector_NetQuantize& Offset, const struct FVector_NetQuantizeNormal& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMulticastBloodImpactFX");

	AShooterCharacter_NetMulticastBloodImpactFX_Params params;
	params.BloodIndex = BloodIndex;
	params.BoneIndex = BoneIndex;
	params.Offset = Offset;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastAddNewBuff
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooter_BuffBase*       NewBuff                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastAddNewBuff(class AShooter_BuffBase* NewBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastAddNewBuff");

	AShooterCharacter_NetMultiCastAddNewBuff_Params params;
	params.NewBuff = NewBuff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.NetMultiCastAddCharacterScalar
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParamName                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MatParamValue                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::NetMultiCastAddCharacterScalar(float Scale, float BlendTime, const struct FName& ParamName, float MatParamValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.NetMultiCastAddCharacterScalar");

	AShooterCharacter_NetMultiCastAddCharacterScalar_Params params;
	params.Scale = Scale;
	params.BlendTime = BlendTime;
	params.ParamName = ParamName;
	params.MatParamValue = MatParamValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MultiCastSpawnImpactEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, IsPlainOldData)
// class UClass*                  ImpactEffect                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MultiCastSpawnImpactEffect(const struct FHitResult& Impact, class UClass* ImpactEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MultiCastSpawnImpactEffect");

	AShooterCharacter_MultiCastSpawnImpactEffect_Params params;
	params.Impact = Impact;
	params.ImpactEffect = ImpactEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MultiCastSetVelocity
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, NetValidate)
// Parameters:
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MultiCastSetVelocity(class AShooterCharacter* Target, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MultiCastSetVelocity");

	AShooterCharacter_MultiCastSetVelocity_Params params;
	params.Target = Target;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MulticastSetDesiredWeaponIndex
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MulticastSetDesiredWeaponIndex(int DesiredWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MulticastSetDesiredWeaponIndex");

	AShooterCharacter_MulticastSetDesiredWeaponIndex_Params params;
	params.DesiredWeapon = DesiredWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MulticastRemoveTetheredCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// class AShooterCharacter*       CharacterToRemove              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MulticastRemoveTetheredCharacter(class AShooterCharacter* CharacterToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MulticastRemoveTetheredCharacter");

	AShooterCharacter_MulticastRemoveTetheredCharacter_Params params;
	params.CharacterToRemove = CharacterToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MultiCastImpulseTarget
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, NetValidate)
// Parameters:
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Impulse                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSelfImpulse                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MultiCastImpulseTarget(class AShooterCharacter* Target, const struct FVector& Impulse, bool IsSelfImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MultiCastImpulseTarget");

	AShooterCharacter_MultiCastImpulseTarget_Params params;
	params.Target = Target;
	params.Impulse = Impulse;
	params.IsSelfImpulse = IsSelfImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MulticastHealMe
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterCharacter::MulticastHealMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MulticastHealMe");

	AShooterCharacter_MulticastHealMe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MultiCastGoToState
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MultiCastGoToState(class UClass* StateClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MultiCastGoToState");

	AShooterCharacter_MultiCastGoToState_Params params;
	params.StateClass = StateClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MultiCastEvent_DisplacePawn
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 displaceVector                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MultiCastEvent_DisplacePawn(const struct FVector& displaceVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MultiCastEvent_DisplacePawn");

	AShooterCharacter_MultiCastEvent_DisplacePawn_Params params;
	params.displaceVector = displaceVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MultiCastApplyRadialImpulseTarget
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, NetValidate)
// Parameters:
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MultiCastApplyRadialImpulseTarget(class AShooterCharacter* Target, const struct FVector& Origin, float Radius, float Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MultiCastApplyRadialImpulseTarget");

	AShooterCharacter_MultiCastApplyRadialImpulseTarget_Params params;
	params.Target = Target;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MulticastAddTetheredCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Public, NetValidate)
// Parameters:
// class AShooterCharacter*       CharacterToAdd                 (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         TetherFX                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MulticastAddTetheredCharacter(class AShooterCharacter* CharacterToAdd, class UParticleSystem* TetherFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MulticastAddTetheredCharacter");

	AShooterCharacter_MulticastAddTetheredCharacter_Params params;
	params.CharacterToAdd = CharacterToAdd;
	params.TetherFX = TetherFX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.MultiCastAddForceToTarget
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, NetValidate)
// Parameters:
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Force                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::MultiCastAddForceToTarget(class AShooterCharacter* Target, const struct FVector& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.MultiCastAddForceToTarget");

	AShooterCharacter_MultiCastAddForceToTarget_Params params;
	params.Target = Target;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.IsUsingScope
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsUsingScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsUsingScope");

	AShooterCharacter_IsUsingScope_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsUpperBodyMontagePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsUpperBodyMontagePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsUpperBodyMontagePlaying");

	AShooterCharacter_IsUpperBodyMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsTurnOnPointMontagePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsTurnOnPointMontagePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsTurnOnPointMontagePlaying");

	AShooterCharacter_IsTurnOnPointMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsTargeting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsTargeting");

	AShooterCharacter_IsTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsSprinting");

	AShooterCharacter_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsRolling
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsRolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsRolling");

	AShooterCharacter_IsRolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsPerspectiveFXActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ReferenceName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsPerspectiveFXActive(const struct FName& ReferenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsPerspectiveFXActive");

	AShooterCharacter_IsPerspectiveFXActive_Params params;
	params.ReferenceName = ReferenceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsOnWall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsOnWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsOnWall");

	AShooterCharacter_IsOnWall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsMontagePlayingInSlotBranch
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SlotName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EBluePrintBranchControl> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsMontagePlayingInSlotBranch(const struct FName& SlotName, TEnumAsByte<EBluePrintBranchControl>* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsMontagePlayingInSlotBranch");

	AShooterCharacter_IsMontagePlayingInSlotBranch_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsMontagePlayingInSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   SlotName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsMontagePlayingInSlot(const struct FName& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsMontagePlayingInSlot");

	AShooterCharacter_IsMontagePlayingInSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsMontagePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsMontagePlaying(class UAnimMontage* AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsMontagePlaying");

	AShooterCharacter_IsMontagePlaying_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsMantleActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsMantleActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsMantleActive");

	AShooterCharacter_IsMantleActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsLowerBodyIdleRunActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsLowerBodyIdleRunActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsLowerBodyIdleRunActive");

	AShooterCharacter_IsLowerBodyIdleRunActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsLookingNearPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TargetPosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsLookingNearPosition(const struct FVector& TargetPosition, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsLookingNearPosition");

	AShooterCharacter_IsLookingNearPosition_Params params;
	params.TargetPosition = TargetPosition;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsJumpActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsJumpActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsJumpActive");

	AShooterCharacter_IsJumpActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsInOzone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsInOzone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsInOzone");

	AShooterCharacter_IsInOzone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFullBodySlotMontagePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFullBodySlotMontagePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFullBodySlotMontagePlaying");

	AShooterCharacter_IsFullBodySlotMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFullBodyMontagePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFullBodyMontagePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFullBodyMontagePlaying");

	AShooterCharacter_IsFullBodyMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFreightTrainDashActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFreightTrainDashActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFreightTrainDashActive");

	AShooterCharacter_IsFreightTrainDashActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFreightTrainActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFreightTrainActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFreightTrainActive");

	AShooterCharacter_IsFreightTrainActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFirstPerson
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFirstPerson");

	AShooterCharacter_IsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFiring
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFiring");

	AShooterCharacter_IsFiring_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsFallActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsFallActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsFallActive");

	AShooterCharacter_IsFallActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsDoubleJumpActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsDoubleJumpActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsDoubleJumpActive");

	AShooterCharacter_IsDoubleJumpActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsCurrentWeaponPrimary
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsCurrentWeaponPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsCurrentWeaponPrimary");

	AShooterCharacter_IsCurrentWeaponPrimary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsBuffed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsBuffed(class UClass* BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsBuffed");

	AShooterCharacter_IsBuffed_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsBeingViewedNotFromLevelCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsBeingViewedNotFromLevelCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsBeingViewedNotFromLevelCamera");

	AShooterCharacter_IsBeingViewedNotFromLevelCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsBeingViewed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsBeingViewed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsBeingViewed");

	AShooterCharacter_IsBeingViewed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsBeingSpectatedNotFromLevelCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsBeingSpectatedNotFromLevelCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsBeingSpectatedNotFromLevelCamera");

	AShooterCharacter_IsBeingSpectatedNotFromLevelCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsBeingSpectated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsBeingSpectated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsBeingSpectated");

	AShooterCharacter_IsBeingSpectated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsAlive");

	AShooterCharacter_IsAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.IsAirDiveActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::IsAirDiveActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.IsAirDiveActive");

	AShooterCharacter_IsAirDiveActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetXYSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetXYSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetXYSpeed");

	AShooterCharacter_GetXYSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetWeaponIKTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AShooterCharacter::GetWeaponIKTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetWeaponIKTransform");

	AShooterCharacter_GetWeaponIKTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetWeaponDownAimOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAimOffsetBlendSpace*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAimOffsetBlendSpace* AShooterCharacter::GetWeaponDownAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetWeaponDownAimOffset");

	AShooterCharacter_GetWeaponDownAimOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetWeaponByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterWeapon* AShooterCharacter::GetWeaponByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetWeaponByIndex");

	AShooterCharacter_GetWeaponByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterWeapon* AShooterCharacter::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetWeapon");

	AShooterCharacter_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetViewingPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerController* AShooterCharacter::GetViewingPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetViewingPlayerController");

	AShooterCharacter_GetViewingPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetVerticalSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetVerticalSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetVerticalSpeed");

	AShooterCharacter_GetVerticalSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetVehicleSeatState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EVehicleSeatState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EVehicleSeatState> AShooterCharacter::GetVehicleSeatState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetVehicleSeatState");

	AShooterCharacter_GetVehicleSeatState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetUpperBodyMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetUpperBodyMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetUpperBodyMontage");

	AShooterCharacter_GetUpperBodyMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetUpperBody2Montage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetUpperBody2Montage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetUpperBody2Montage");

	AShooterCharacter_GetUpperBody2Montage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetTotalAmmoByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EAmmoType>         TypeToCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetTotalAmmoByType(TEnumAsByte<EAmmoType> TypeToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetTotalAmmoByType");

	AShooterCharacter_GetTotalAmmoByType_Params params;
	params.TypeToCheck = TypeToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetThirdPersonCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* AShooterCharacter::GetThirdPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetThirdPersonCamera");

	AShooterCharacter_GetThirdPersonCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetThirdPersonAimOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAimOffsetBlendSpace*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAimOffsetBlendSpace* AShooterCharacter::GetThirdPersonAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetThirdPersonAimOffset");

	AShooterCharacter_GetThirdPersonAimOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetTeamNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetTeamNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetTeamNum");

	AShooterCharacter_GetTeamNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetTargetingSpeedModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetTargetingSpeedModifier");

	AShooterCharacter_GetTargetingSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECharacterMovementStance> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECharacterMovementStance> AShooterCharacter::GetStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetStance");

	AShooterCharacter_GetStance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetSpeed");

	AShooterCharacter_GetSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetSpecifcPawnMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPawnMesh>         MeshType                       (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AShooterCharacter::GetSpecifcPawnMesh(TEnumAsByte<EPawnMesh> MeshType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetSpecifcPawnMesh");

	AShooterCharacter_GetSpecifcPawnMesh_Params params;
	params.MeshType = MeshType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetSkeletonType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AShooterCharacter::GetSkeletonType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetSkeletonType");

	AShooterCharacter_GetSkeletonType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetShooterPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerController* AShooterCharacter::GetShooterPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetShooterPlayerController");

	AShooterCharacter_GetShooterPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetRunningSpeedModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetRunningSpeedModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetRunningSpeedModifier");

	AShooterCharacter_GetRunningSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetRollRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AShooterCharacter::GetRollRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetRollRotation");

	AShooterCharacter_GetRollRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetProceduralWeaponSway
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AShooterCharacter::GetProceduralWeaponSway()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetProceduralWeaponSway");

	AShooterCharacter_GetProceduralWeaponSway_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetPreviousWeaponIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetPreviousWeaponIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetPreviousWeaponIndex");

	AShooterCharacter_GetPreviousWeaponIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerState*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerState* AShooterCharacter::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetPlayerState");

	AShooterCharacter_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetPitch");

	AShooterCharacter_GetPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetPerspectiveFXSpawnedParticles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ReferenceName                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UParticleSystemComponent*> OutSpawnedParticles            (Parm, OutParm, ZeroConstructor)

void AShooterCharacter::GetPerspectiveFXSpawnedParticles(const struct FName& ReferenceName, TArray<class UParticleSystemComponent*>* OutSpawnedParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetPerspectiveFXSpawnedParticles");

	AShooterCharacter_GetPerspectiveFXSpawnedParticles_Params params;
	params.ReferenceName = ReferenceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSpawnedParticles != nullptr)
		*OutSpawnedParticles = params.OutSpawnedParticles;
}


// Function ShooterGame.ShooterCharacter.GetPawnMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AShooterCharacter::GetPawnMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetPawnMesh");

	AShooterCharacter_GetPawnMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetOverrideFX
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   OverrideName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class UParticleSystem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UParticleSystem*> AShooterCharacter::GetOverrideFX(const struct FName& OverrideName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetOverrideFX");

	AShooterCharacter_GetOverrideFX_Params params;
	params.OverrideName = OverrideName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetOtherWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterWeapon* AShooterCharacter::GetOtherWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetOtherWeapon");

	AShooterCharacter_GetOtherWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetOrComputeAimPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          TraceRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShooterCharacter::GetOrComputeAimPoint(float TraceRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetOrComputeAimPoint");

	AShooterCharacter_GetOrComputeAimPoint_Params params;
	params.TraceRadius = TraceRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetNormalizedHelmetHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetNormalizedHelmetHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetNormalizedHelmetHealth");

	AShooterCharacter_GetNormalizedHelmetHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetNormalizedHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetNormalizedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetNormalizedHealth");

	AShooterCharacter_GetNormalizedHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetNormalizedBodyArmorHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetNormalizedBodyArmorHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetNormalizedBodyArmorHealth");

	AShooterCharacter_GetNormalizedBodyArmorHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetMontagePlayingInSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   SlotName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetMontagePlayingInSlot(const struct FName& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetMontagePlayingInSlot");

	AShooterCharacter_GetMontagePlayingInSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetMeleeKickAttack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetMeleeKickAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetMeleeKickAttack");

	AShooterCharacter_GetMeleeKickAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetMaxHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetMaxHealth");

	AShooterCharacter_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetMasterAnimPackage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterAnimationPackage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterAnimationPackage* AShooterCharacter::GetMasterAnimPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetMasterAnimPackage");

	AShooterCharacter_GetMasterAnimPackage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetLastHitTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetLastHitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetLastHitTime");

	AShooterCharacter_GetLastHitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetLastHitByLocalPlayerTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetLastHitByLocalPlayerTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetLastHitByLocalPlayerTime");

	AShooterCharacter_GetLastHitByLocalPlayerTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetLastDamageDealtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetLastDamageDealtTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetLastDamageDealtTime");

	AShooterCharacter_GetLastDamageDealtTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetInventoryWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterWeapon* AShooterCharacter::GetInventoryWeapon(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetInventoryWeapon");

	AShooterCharacter_GetInventoryWeapon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetInventoryCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetInventoryCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetInventoryCount");

	AShooterCharacter_GetInventoryCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetInputRotation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::GetInputRotation(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetInputRotation");

	AShooterCharacter_GetInputRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function ShooterGame.ShooterCharacter.GetInitialWeaponReset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetInitialWeaponReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetInitialWeaponReset");

	AShooterCharacter_GetInitialWeaponReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterHUD*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterHUD* AShooterCharacter::GetHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetHUD");

	AShooterCharacter_GetHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetGravityScaleWithDecay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetGravityScaleWithDecay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetGravityScaleWithDecay");

	AShooterCharacter_GetGravityScaleWithDecay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetGravityScaleNormalized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bShouldIgnoreOverrides         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectedMinGravity             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectectedMaxGravity          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectedDefaultGravity         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetGravityScaleNormalized(bool bShouldIgnoreOverrides, float ExpectedMinGravity, float ExpectectedMaxGravity, float ExpectedDefaultGravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetGravityScaleNormalized");

	AShooterCharacter_GetGravityScaleNormalized_Params params;
	params.bShouldIgnoreOverrides = bShouldIgnoreOverrides;
	params.ExpectedMinGravity = ExpectedMinGravity;
	params.ExpectectedMaxGravity = ExpectectedMaxGravity;
	params.ExpectedDefaultGravity = ExpectedDefaultGravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetGravityScaleIgnoreOverrides
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetGravityScaleIgnoreOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetGravityScaleIgnoreOverrides");

	AShooterCharacter_GetGravityScaleIgnoreOverrides_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetFullBodyMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetFullBodyMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetFullBodyMontage");

	AShooterCharacter_GetFullBodyMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetFractionOfTurnRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseDampedTurnSpeed            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetFractionOfTurnRadius(float Radius, bool bUseDampedTurnSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetFractionOfTurnRadius");

	AShooterCharacter_GetFractionOfTurnRadius_Params params;
	params.Radius = Radius;
	params.bUseDampedTurnSpeed = bUseDampedTurnSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetFirstPersonCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* AShooterCharacter::GetFirstPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetFirstPersonCamera");

	AShooterCharacter_GetFirstPersonCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetCurrentWeaponIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetCurrentWeaponIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetCurrentWeaponIndex");

	AShooterCharacter_GetCurrentWeaponIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetCurrentWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterWeapon*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterWeapon* AShooterCharacter::GetCurrentWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetCurrentWeapon");

	AShooterCharacter_GetCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetCurrentAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetCurrentAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetCurrentAmmo");

	AShooterCharacter_GetCurrentAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetCharacterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AShooterCharacter::GetCharacterType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetCharacterType");

	AShooterCharacter_GetCharacterType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetCharacterDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterCharacterDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterCharacterDefinition* AShooterCharacter::GetCharacterDefinition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetCharacterDefinition");

	AShooterCharacter_GetCharacterDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetBuff
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooter_BuffBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooter_BuffBase* AShooterCharacter::GetBuff(class UClass* BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetBuff");

	AShooterCharacter_GetBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetBlindFireOut
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetBlindFireOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetBlindFireOut");

	AShooterCharacter_GetBlindFireOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetBlindFireIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetBlindFireIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetBlindFireIn");

	AShooterCharacter_GetBlindFireIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetBlindFireAimOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAimOffsetBlendSpace*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAimOffsetBlendSpace* AShooterCharacter::GetBlindFireAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetBlindFireAimOffset");

	AShooterCharacter_GetBlindFireAimOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAmmoByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EAmmoType>         TypeToCheck                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterCharacter::GetAmmoByType(TEnumAsByte<EAmmoType> TypeToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAmmoByType");

	AShooterCharacter_GetAmmoByType_Params params;
	params.TypeToCheck = TypeToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAimState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EAimState>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAimState> AShooterCharacter::GetAimState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAimState");

	AShooterCharacter_GetAimState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAimOffsetYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetAimOffsetYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAimOffsetYaw");

	AShooterCharacter_GetAimOffsetYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAimOffsets
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AShooterCharacter::GetAimOffsets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAimOffsets");

	AShooterCharacter_GetAimOffsets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAimOffsetPitch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetAimOffsetPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAimOffsetPitch");

	AShooterCharacter_GetAimOffsetPitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAimDirectionNoCollision
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShooterCharacter::GetAimDirectionNoCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAimDirectionNoCollision");

	AShooterCharacter_GetAimDirectionNoCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetADSTransOut
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            OutAltPerspective              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetADSTransOut(class UAnimMontage** OutAltPerspective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetADSTransOut");

	AShooterCharacter_GetADSTransOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAltPerspective != nullptr)
		*OutAltPerspective = params.OutAltPerspective;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetADSTransIn
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            OutAltPerspective              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AShooterCharacter::GetADSTransIn(class UAnimMontage** OutAltPerspective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetADSTransIn");

	AShooterCharacter_GetADSTransIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAltPerspective != nullptr)
		*OutAltPerspective = params.OutAltPerspective;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAdditionalMultipassMeshes
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// TArray<class UMeshComponent*>  Meshes                         (Parm, OutParm, ZeroConstructor)

void AShooterCharacter::GetAdditionalMultipassMeshes(TArray<class UMeshComponent*>* Meshes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAdditionalMultipassMeshes");

	AShooterCharacter_GetAdditionalMultipassMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
}


// Function ShooterGame.ShooterCharacter.GetActorLocalMoveYawFromInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetActorLocalMoveYawFromInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetActorLocalMoveYawFromInput");

	AShooterCharacter_GetActorLocalMoveYawFromInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetActorLocalMoveYaw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetActorLocalMoveYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetActorLocalMoveYaw");

	AShooterCharacter_GetActorLocalMoveYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetActorLocalMoveRawInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::GetActorLocalMoveRawInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetActorLocalMoveRawInput");

	AShooterCharacter_GetActorLocalMoveRawInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetActiveCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCameraComponent* AShooterCharacter::GetActiveCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetActiveCamera");

	AShooterCharacter_GetActiveCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAbilityUseAbilityBar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCharacter::GetAbilityUseAbilityBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAbilityUseAbilityBar");

	AShooterCharacter_GetAbilityUseAbilityBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.GetAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AbilityClass                   (Parm, ZeroConstructor, IsPlainOldData)
// class UShooterAbility*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UShooterAbility* AShooterCharacter::GetAbility(class UClass* AbilityClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.GetAbility");

	AShooterCharacter_GetAbility_Params params;
	params.AbilityClass = AbilityClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.ExitedLowGravityFX
// (Event, Protected, BlueprintEvent)

void AShooterCharacter::ExitedLowGravityFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ExitedLowGravityFX");

	AShooterCharacter_ExitedLowGravityFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ExitedIncreasedGravityFX
// (Event, Protected, BlueprintEvent)

void AShooterCharacter::ExitedIncreasedGravityFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ExitedIncreasedGravityFX");

	AShooterCharacter_ExitedIncreasedGravityFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.EventOnHealWidgetUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHealWidgetState>  HealWidgetState                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::EventOnHealWidgetUpdate(TEnumAsByte<EHealWidgetState> HealWidgetState, bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.EventOnHealWidgetUpdate");

	AShooterCharacter_EventOnHealWidgetUpdate_Params params;
	params.HealWidgetState = HealWidgetState;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.EnteredLowGravityFX
// (Event, Protected, BlueprintEvent)

void AShooterCharacter::EnteredLowGravityFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.EnteredLowGravityFX");

	AShooterCharacter_EnteredLowGravityFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.EnteredIncreasedGravityFX
// (Event, Protected, BlueprintEvent)

void AShooterCharacter::EnteredIncreasedGravityFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.EnteredIncreasedGravityFX");

	AShooterCharacter_EnteredIncreasedGravityFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.EndHealthPickupFX
// (Final, Native, Protected)

void AShooterCharacter::EndHealthPickupFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.EndHealthPickupFX");

	AShooterCharacter_EndHealthPickupFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ComputeTurnOnPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterCharacter::ComputeTurnOnPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ComputeTurnOnPoint");

	AShooterCharacter_ComputeTurnOnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacter.ClientUpdateThreatIndicator
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AShooterCharacter*       Threat                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DmgType                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientUpdateThreatIndicator(class AShooterCharacter* Threat, float DamageAmount, class UClass* DmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientUpdateThreatIndicator");

	AShooterCharacter_ClientUpdateThreatIndicator_Params params;
	params.Threat = Threat;
	params.DamageAmount = DamageAmount;
	params.DmgType = DmgType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientSwapToDesiredWeapon
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            DesiredWeapon                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientSwapToDesiredWeapon(int DesiredWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientSwapToDesiredWeapon");

	AShooterCharacter_ClientSwapToDesiredWeapon_Params params;
	params.DesiredWeapon = DesiredWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientStartReload
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientStartReload(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientStartReload");

	AShooterCharacter_ClientStartReload_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientSetThrowAmmoAmount
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            Ammo                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientSetThrowAmmoAmount(int Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientSetThrowAmmoAmount");

	AShooterCharacter_ClientSetThrowAmmoAmount_Params params;
	params.Ammo = Ammo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientSetLockPrimaryFire
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bNewLock                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientSetLockPrimaryFire(bool bNewLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientSetLockPrimaryFire");

	AShooterCharacter_ClientSetLockPrimaryFire_Params params;
	params.bNewLock = bNewLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientSetBeingRevived
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// bool                           InBeingRevived                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientSetBeingRevived(bool InBeingRevived)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientSetBeingRevived");

	AShooterCharacter_ClientSetBeingRevived_Params params;
	params.InBeingRevived = InBeingRevived;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientSetAccelDebuffTime
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          AccelDebuffTime                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientSetAccelDebuffTime(float AccelDebuffTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientSetAccelDebuffTime");

	AShooterCharacter_ClientSetAccelDebuffTime_Params params;
	params.AccelDebuffTime = AccelDebuffTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientPopupText
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class FString                  Text                           (Parm, ZeroConstructor)
// TEnumAsByte<EPopupTextTemplate> Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AShooterCharacter*       AroundCharacter                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientPopupText(const class FString& Text, TEnumAsByte<EPopupTextTemplate> Template, const struct FVector& Offset, class AShooterCharacter* AroundCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientPopupText");

	AShooterCharacter_ClientPopupText_Params params;
	params.Text = Text;
	params.Template = Template;
	params.Offset = Offset;
	params.AroundCharacter = AroundCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientPlaySoundAtLocation
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientPlaySoundAtLocation(class UAkAudioEvent* Sound, const struct FVector& Location, const struct FRotator& Orientation, TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientPlaySoundAtLocation");

	AShooterCharacter_ClientPlaySoundAtLocation_Params params;
	params.Sound = Sound;
	params.Location = Location;
	params.Orientation = Orientation;
	params.InDialogue = InDialogue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientPlaySound
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientPlaySound(class UAkAudioEvent* Sound, TEnumAsByte<EShooterDialogueCharacterFunction> InDialogue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientPlaySound");

	AShooterCharacter_ClientPlaySound_Params params;
	params.Sound = Sound;
	params.InDialogue = InDialogue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientPlayHealSound
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientPlayHealSound(class UAkAudioEvent* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientPlayHealSound");

	AShooterCharacter_ClientPlayHealSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientPlay2DHitSounds
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// float                          TargetRemainingHealth          (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetRemainingArmor           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientPlay2DHitSounds(float TargetRemainingHealth, float TargetRemainingArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientPlay2DHitSounds");

	AShooterCharacter_ClientPlay2DHitSounds_Params params;
	params.TargetRemainingHealth = TargetRemainingHealth;
	params.TargetRemainingArmor = TargetRemainingArmor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientPickupFail
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterCharacter::ClientPickupFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientPickupFail");

	AShooterCharacter_ClientPickupFail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientNotifyQuickUseItem
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterCharacter::ClientNotifyQuickUseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientNotifyQuickUseItem");

	AShooterCharacter_ClientNotifyQuickUseItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientNotifyItemWasUsed
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterCharacter::ClientNotifyItemWasUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientNotifyItemWasUsed");

	AShooterCharacter_ClientNotifyItemWasUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientEvent_Stagger
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterCharacter::ClientEvent_Stagger()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientEvent_Stagger");

	AShooterCharacter_ClientEvent_Stagger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientEvent_NotifyAbilityKillAssist
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AShooterPlayerState*     KilledPlayerState              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientEvent_NotifyAbilityKillAssist(class AShooterPlayerState* KilledPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientEvent_NotifyAbilityKillAssist");

	AShooterCharacter_ClientEvent_NotifyAbilityKillAssist_Params params;
	params.KilledPlayerState = KilledPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientEvent_FlagSound
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterCharacter::ClientEvent_FlagSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientEvent_FlagSound");

	AShooterCharacter_ClientEvent_FlagSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientDropCurrentItem
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterCharacter::ClientDropCurrentItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientDropCurrentItem");

	AShooterCharacter_ClientDropCurrentItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClientCheerObjective
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// int                            NumCheerers                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EShooterDialogueCharacterFunction> CalloutID                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClientCheerObjective(int NumCheerers, TEnumAsByte<EShooterDialogueCharacterFunction> CalloutID, float MaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClientCheerObjective");

	AShooterCharacter_ClientCheerObjective_Params params;
	params.NumCheerers = NumCheerers;
	params.CalloutID = CalloutID;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.ClearBeingRevived
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       Unused                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::ClearBeingRevived(class AShooterCharacter* Unused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.ClearBeingRevived");

	AShooterCharacter_ClearBeingRevived_Params params;
	params.Unused = Unused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.BPToggleDangerZone
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bEntered                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::BPToggleDangerZone(bool bEntered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.BPToggleDangerZone");

	AShooterCharacter_BPToggleDangerZone_Params params;
	params.bEntered = bEntered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.BlueprintEventDeath
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasFirstPerson                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::BlueprintEventDeath(class UClass* DamageType, bool bWasFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.BlueprintEventDeath");

	AShooterCharacter_BlueprintEventDeath_Params params;
	params.DamageType = DamageType;
	params.bWasFirstPerson = bWasFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.BeginZipLine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterZipLine*         ZipLineActor                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::BeginZipLine(class AShooterZipLine* ZipLineActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.BeginZipLine");

	AShooterCharacter_BeginZipLine_Params params;
	params.ZipLineActor = ZipLineActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.BeginDeathFX
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::BeginDeathFX(class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.BeginDeathFX");

	AShooterCharacter_BeginDeathFX_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AnimNotifyThrow
// (Final, Native, Public, BlueprintCallable)

void AShooterCharacter::AnimNotifyThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AnimNotifyThrow");

	AShooterCharacter_AnimNotifyThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AnimNotifyReload
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::AnimNotifyReload(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AnimNotifyReload");

	AShooterCharacter_AnimNotifyReload_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AnimNotifyAllowWeaponCancel
// (Final, Native, Public, BlueprintCallable)

void AShooterCharacter::AnimNotifyAllowWeaponCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AnimNotifyAllowWeaponCancel");

	AShooterCharacter_AnimNotifyAllowWeaponCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AdjustCashWallet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ToAdd                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::AdjustCashWallet(int ToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AdjustCashWallet");

	AShooterCharacter_AdjustCashWallet_Params params;
	params.ToAdd = ToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AdjustAmmoByType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EAmmoType>         TypeToAdjust                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoAmount                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::AdjustAmmoByType(TEnumAsByte<EAmmoType> TypeToAdjust, int AmmoAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AdjustAmmoByType");

	AShooterCharacter_AdjustAmmoByType_Params params;
	params.TypeToAdjust = TypeToAdjust;
	params.AmmoAmount = AmmoAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacter.AddOverrideFX
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   OverrideName                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UParticleSystem*         OverrideFX                     (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         OverrideTeamFX                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCharacter::AddOverrideFX(const struct FName& OverrideName, class UParticleSystem* OverrideFX, class UParticleSystem* OverrideTeamFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacter.AddOverrideFX");

	AShooterCharacter_AddOverrideFX_Params params;
	params.OverrideName = OverrideName;
	params.OverrideFX = OverrideFX;
	params.OverrideTeamFX = OverrideTeamFX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterIntelBuff.OnDedicatedSpectatorToggled
// (Final, Native, Protected)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterIntelBuff::OnDedicatedSpectatorToggled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterIntelBuff.OnDedicatedSpectatorToggled");

	AShooterIntelBuff_OnDedicatedSpectatorToggled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_AmpedUp.NetMultiCastStopBuffActiveFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void UShooterAbility_AmpedUp::NetMultiCastStopBuffActiveFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_AmpedUp.NetMultiCastStopBuffActiveFX");

	UShooterAbility_AmpedUp_NetMultiCastStopBuffActiveFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_AmpedUp.NetMultiCastPlayBuffActiveFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void UShooterAbility_AmpedUp::NetMultiCastPlayBuffActiveFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_AmpedUp.NetMultiCastPlayBuffActiveFX");

	UShooterAbility_AmpedUp_NetMultiCastPlayBuffActiveFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_BattleDroneAttack.ClientFire
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void UShooterAbility_BattleDroneAttack::ClientFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_BattleDroneAttack.ClientFire");

	UShooterAbility_BattleDroneAttack_ClientFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_BattleHeal.NotifyBattleBuff
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                           Start                          (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       PlayerGettingBuffed            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_BattleHeal::NotifyBattleBuff(bool Start, class AShooterCharacter* PlayerGettingBuffed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_BattleHeal.NotifyBattleBuff");

	UShooterAbility_BattleHeal_NotifyBattleBuff_Params params;
	params.Start = Start;
	params.PlayerGettingBuffed = PlayerGettingBuffed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_Throw.ServerRequestThrow
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UShooterAbility_Throw::ServerRequestThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_Throw.ServerRequestThrow");

	UShooterAbility_Throw_ServerRequestThrow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_Throw.ClientSetPredictionData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FShooterProjectilePredictionData PredictionData                 (ConstParm, Parm, ReferenceParm)

void UShooterAbility_Throw::ClientSetPredictionData(const struct FShooterProjectilePredictionData& PredictionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_Throw.ClientSetPredictionData");

	UShooterAbility_Throw_ClientSetPredictionData_Params params;
	params.PredictionData = PredictionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_DroneManager.ToggleDroneFrenzy
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFrenzy                        (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  LeftDrone                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  RightDrone                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UShooterAbility_DroneManager::ToggleDroneFrenzy(bool bFrenzy, class USkeletalMeshComponent* LeftDrone, class USkeletalMeshComponent* RightDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_DroneManager.ToggleDroneFrenzy");

	UShooterAbility_DroneManager_ToggleDroneFrenzy_Params params;
	params.bFrenzy = bFrenzy;
	params.LeftDrone = LeftDrone;
	params.RightDrone = RightDrone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_DroneManager.NetMulticastTPSendDroneFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// bool                           isLeftDrone                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_DroneManager::NetMulticastTPSendDroneFX(bool isLeftDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_DroneManager.NetMulticastTPSendDroneFX");

	UShooterAbility_DroneManager_NetMulticastTPSendDroneFX_Params params;
	params.isLeftDrone = isLeftDrone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_DroneManager.NetMulticastTPBeginSendDroneFX
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           isLeftDrone                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_DroneManager::NetMulticastTPBeginSendDroneFX(bool isLeftDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_DroneManager.NetMulticastTPBeginSendDroneFX");

	UShooterAbility_DroneManager_NetMulticastTPBeginSendDroneFX_Params params;
	params.isLeftDrone = isLeftDrone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_DroneManager.NetMulticastPlayDroneDeployDialogue
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_DroneManager::NetMulticastPlayDroneDeployDialogue(class AShooterCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_DroneManager.NetMulticastPlayDroneDeployDialogue");

	UShooterAbility_DroneManager_NetMulticastPlayDroneDeployDialogue_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_DroneManager.GetTPDrone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bLeftDrone                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHealMine*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterHealMine* UShooterAbility_DroneManager::GetTPDrone(bool bLeftDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_DroneManager.GetTPDrone");

	UShooterAbility_DroneManager_GetTPDrone_Params params;
	params.bLeftDrone = bLeftDrone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility_DroneManager.ClientResetDrone
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           isLeftDrone                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_DroneManager::ClientResetDrone(bool isLeftDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_DroneManager.ClientResetDrone");

	UShooterAbility_DroneManager_ClientResetDrone_Params params;
	params.isLeftDrone = isLeftDrone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_DroneManager.ClientHideDrone
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           isLeftDrone                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_DroneManager::ClientHideDrone(bool isLeftDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_DroneManager.ClientHideDrone");

	UShooterAbility_DroneManager_ClientHideDrone_Params params;
	params.isLeftDrone = isLeftDrone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_GhostScoutMode.OnRep_StealthActive
// (Final, Native, Public)

void UShooterAbility_GhostScoutMode::OnRep_StealthActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_GhostScoutMode.OnRep_StealthActive");

	UShooterAbility_GhostScoutMode_OnRep_StealthActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_HackerDrone.OnRep_Drone
// (Final, Native, Public)

void UShooterAbility_HackerDrone::OnRep_Drone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_HackerDrone.OnRep_Drone");

	UShooterAbility_HackerDrone_OnRep_Drone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_KneeSlide.ServerSetIsBackDash
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           InIsBackDash                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_KneeSlide::ServerSetIsBackDash(bool InIsBackDash)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_KneeSlide.ServerSetIsBackDash");

	UShooterAbility_KneeSlide_ServerSetIsBackDash_Params params;
	params.InIsBackDash = InIsBackDash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_LaunchLobberMine.ServerStopMine
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UShooterAbility_LaunchLobberMine::ServerStopMine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_LaunchLobberMine.ServerStopMine");

	UShooterAbility_LaunchLobberMine_ServerStopMine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_Paladin.NetMulticastPlayPushbackSound
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class AShooterCharacter*       Victim                         (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_Paladin::NetMulticastPlayPushbackSound(class AShooterCharacter* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_Paladin.NetMulticastPlayPushbackSound");

	UShooterAbility_Paladin_NetMulticastPlayPushbackSound_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_PaladinFervor.PlayPulseFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UShooterAbility_PaladinFervor::PlayPulseFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_PaladinFervor.PlayPulseFX");

	UShooterAbility_PaladinFervor_PlayPulseFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_PaladinFervor.BroadcastSetHealFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// TArray<class AShooterCharacter*> Characters                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// bool                           IsHealed                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_PaladinFervor::BroadcastSetHealFX(TArray<class AShooterCharacter*> Characters, bool IsHealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_PaladinFervor.BroadcastSetHealFX");

	UShooterAbility_PaladinFervor_BroadcastSetHealFX_Params params;
	params.Characters = Characters;
	params.IsHealed = IsHealed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_PassiveHeal.NetMulticastUpdateHealingFX
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// bool                           IsHealed                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_PassiveHeal::NetMulticastUpdateHealingFX(bool IsHealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_PassiveHeal.NetMulticastUpdateHealingFX");

	UShooterAbility_PassiveHeal_NetMulticastUpdateHealingFX_Params params;
	params.IsHealed = IsHealed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_PlaceShieldGen.ClientNotifyThumperPlaced
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AActor*                  Thumper                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_PlaceShieldGen::ClientNotifyThumperPlaced(class AActor* Thumper)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_PlaceShieldGen.ClientNotifyThumperPlaced");

	UShooterAbility_PlaceShieldGen_ClientNotifyThumperPlaced_Params params;
	params.Thumper = Thumper;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_PowerGun.GetCurrentCooldownCursorizedForDisplay
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterAbility_PowerGun::GetCurrentCooldownCursorizedForDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_PowerGun.GetCurrentCooldownCursorizedForDisplay");

	UShooterAbility_PowerGun_GetCurrentCooldownCursorizedForDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility_RailGun.NetMulticastSpawnChargeFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void UShooterAbility_RailGun::NetMulticastSpawnChargeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_RailGun.NetMulticastSpawnChargeFX");

	UShooterAbility_RailGun_NetMulticastSpawnChargeFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_SamuraiBoostJump.ServerStartBoost
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           Boost                          (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_SamuraiBoostJump::ServerStartBoost(bool Boost)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_SamuraiBoostJump.ServerStartBoost");

	UShooterAbility_SamuraiBoostJump_ServerStartBoost_Params params;
	params.Boost = Boost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.UseHUDAmmoCounter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::UseHUDAmmoCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.UseHUDAmmoCounter");

	AShooterWeapon_UseHUDAmmoCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.SetWeaponIDLEFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         FirstPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ThirdPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::SetWeaponIDLEFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.SetWeaponIDLEFX");

	AShooterWeapon_SetWeaponIDLEFX_Params params;
	params.FirstPersonFX = FirstPersonFX;
	params.ThirdPersonFX = ThirdPersonFX;
	params.AttachSocketName = AttachSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.SetRenderCustomDepthForAllMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::SetRenderCustomDepthForAllMeshes(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.SetRenderCustomDepthForAllMeshes");

	AShooterWeapon_SetRenderCustomDepthForAllMeshes_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.SetReloadHalfDone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isHalfDone                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::SetReloadHalfDone(bool isHalfDone)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.SetReloadHalfDone");

	AShooterWeapon_SetReloadHalfDone_Params params;
	params.isHalfDone = isHalfDone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.SetOffHandWeaponIDLEFX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         FirstPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ThirdPersonFX                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachSocketName               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::SetOffHandWeaponIDLEFX(class UParticleSystem* FirstPersonFX, class UParticleSystem* ThirdPersonFX, const struct FName& AttachSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.SetOffHandWeaponIDLEFX");

	AShooterWeapon_SetOffHandWeaponIDLEFX_Params params;
	params.FirstPersonFX = FirstPersonFX;
	params.ThirdPersonFX = ThirdPersonFX;
	params.AttachSocketName = AttachSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.SetOffhandIdleSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           NewSound                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::SetOffhandIdleSound(class UAkAudioEvent* NewSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.SetOffhandIdleSound");

	AShooterWeapon_SetOffhandIdleSound_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.SetIdleSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           NewSound                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::SetIdleSound(class UAkAudioEvent* NewSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.SetIdleSound");

	AShooterWeapon_SetIdleSound_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStopReload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AShooterWeapon::ServerStopReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStopReload");

	AShooterWeapon_ServerStopReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStopFire
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::ServerStopFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStopFire");

	AShooterWeapon_ServerStopFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerStartReload
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)

void AShooterWeapon::ServerStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerStartReload");

	AShooterWeapon_ServerStartReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerRotateFirePattern
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bNewFirePatternRotated         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::ServerRotateFirePattern(bool bNewFirePatternRotated)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerRotateFirePattern");

	AShooterWeapon_ServerRotateFirePattern_Params params;
	params.bNewFirePatternRotated = bNewFirePatternRotated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerRequestReload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::ServerRequestReload(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerRequestReload");

	AShooterWeapon_ServerRequestReload_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerRequestFire
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::ServerRequestFire(unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerRequestFire");

	AShooterWeapon_ServerRequestFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ServerActiveReload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void AShooterWeapon::ServerActiveReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ServerActiveReload");

	AShooterWeapon_ServerActiveReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnWeaponCustomizationCompleted
// (Event, Public, BlueprintEvent)

void AShooterWeapon::OnWeaponCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnWeaponCustomizationCompleted");

	AShooterWeapon_OnWeaponCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_Reload
// (Final, Native, Protected)

void AShooterWeapon::OnRep_Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_Reload");

	AShooterWeapon_OnRep_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_MyPawn
// (Final, Native, Protected)

void AShooterWeapon::OnRep_MyPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_MyPawn");

	AShooterWeapon_OnRep_MyPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_ExtendedMagAmmo
// (Final, Native, Public)

void AShooterWeapon::OnRep_ExtendedMagAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_ExtendedMagAmmo");

	AShooterWeapon_OnRep_ExtendedMagAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_CurrentUnderbarrel
// (Final, Native, Public)

void AShooterWeapon::OnRep_CurrentUnderbarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_CurrentUnderbarrel");

	AShooterWeapon_OnRep_CurrentUnderbarrel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_CurrentScope
// (Final, Native, Public)

void AShooterWeapon::OnRep_CurrentScope()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_CurrentScope");

	AShooterWeapon_OnRep_CurrentScope_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_CurrentMag
// (Final, Native, Public)

void AShooterWeapon::OnRep_CurrentMag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_CurrentMag");

	AShooterWeapon_OnRep_CurrentMag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.OnRep_CurrentBarrel
// (Final, Native, Public)

void AShooterWeapon::OnRep_CurrentBarrel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.OnRep_CurrentBarrel");

	AShooterWeapon_OnRep_CurrentBarrel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.NotifyRefireCooldownComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            FireModeIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::NotifyRefireCooldownComplete(int FireModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.NotifyRefireCooldownComplete");

	AShooterWeapon_NotifyRefireCooldownComplete_Params params;
	params.FireModeIndex = FireModeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.NotifyRefireCooldown
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            FireModeIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CursorizedTimeLeft             (Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::NotifyRefireCooldown(int FireModeIndex, float CursorizedTimeLeft, float TotalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.NotifyRefireCooldown");

	AShooterWeapon_NotifyRefireCooldown_Params params;
	params.FireModeIndex = FireModeIndex;
	params.CursorizedTimeLeft = CursorizedTimeLeft;
	params.TotalTime = TotalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.NetMultiCastSimulateWeaponFire
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           OnOff                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::NetMultiCastSimulateWeaponFire(bool OnOff, unsigned char FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.NetMultiCastSimulateWeaponFire");

	AShooterWeapon_NetMultiCastSimulateWeaponFire_Params params;
	params.OnOff = OnOff;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.MulticastInstantHits
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// TArray<struct FVector_NetQuantize> ImpactLocations                (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterWeapon::MulticastInstantHits(TArray<struct FVector_NetQuantize> ImpactLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.MulticastInstantHits");

	AShooterWeapon_MulticastInstantHits_Params params;
	params.ImpactLocations = ImpactLocations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.MulticastInstantHit
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FVector_NetQuantize     ImpactLocation                 (ConstParm, Parm, ReferenceParm)

void AShooterWeapon::MulticastInstantHit(const struct FVector_NetQuantize& ImpactLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.MulticastInstantHit");

	AShooterWeapon_MulticastInstantHit_Params params;
	params.ImpactLocation = ImpactLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.IsThrown
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::IsThrown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.IsThrown");

	AShooterWeapon_IsThrown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.IsMeleeWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::IsMeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.IsMeleeWeapon");

	AShooterWeapon_IsMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.IsLowAmmo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::IsLowAmmo(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.IsLowAmmo");

	AShooterWeapon_IsLowAmmo_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.IsConsumable
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::IsConsumable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.IsConsumable");

	AShooterWeapon_IsConsumable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetWeaponPackage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AShooterWeapon::GetWeaponPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetWeaponPackage");

	AShooterWeapon_GetWeaponPackage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetWeaponNameForAnim
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AShooterWeapon::GetWeaponNameForAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetWeaponNameForAnim");

	AShooterWeapon_GetWeaponNameForAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetWeaponName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterWeapon::GetWeaponName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetWeaponName");

	AShooterWeapon_GetWeaponName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetWeaponMesh
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AShooterWeapon::GetWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetWeaponMesh");

	AShooterWeapon_GetWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetWeaponIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EWeaponIconType>   DesiredIconType                (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FSlateBrush AShooterWeapon::GetWeaponIcon(TEnumAsByte<EWeaponIconType> DesiredIconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetWeaponIcon");

	AShooterWeapon_GetWeaponIcon_Params params;
	params.DesiredIconType = DesiredIconType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetWeaponConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWeaponData             ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FWeaponData AShooterWeapon::GetWeaponConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetWeaponConfig");

	AShooterWeapon_GetWeaponConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetWeaponClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EWeaponClass>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWeaponClass> AShooterWeapon::GetWeaponClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetWeaponClass");

	AShooterWeapon_GetWeaponClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetUseDefaultReticle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::GetUseDefaultReticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetUseDefaultReticle");

	AShooterWeapon_GetUseDefaultReticle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetTimeBetweenShots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterWeapon::GetTimeBetweenShots(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetTimeBetweenShots");

	AShooterWeapon_GetTimeBetweenShots_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetThirdPersonAnimPackage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterAnimationPackage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterAnimationPackage* AShooterWeapon::GetThirdPersonAnimPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetThirdPersonAnimPackage");

	AShooterWeapon_GetThirdPersonAnimPackage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetSetMasterPose
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::GetSetMasterPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetSetMasterPose");

	AShooterWeapon_GetSetMasterPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetScopeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EAttachmentScope>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAttachmentScope> AShooterWeapon::GetScopeType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetScopeType");

	AShooterWeapon_GetScopeType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetPawnOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterWeapon::GetPawnOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetPawnOwner");

	AShooterWeapon_GetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetOffhandWeaponMeshForThirdPerson
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AShooterWeapon::GetOffhandWeaponMeshForThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetOffhandWeaponMeshForThirdPerson");

	AShooterWeapon_GetOffhandWeaponMeshForThirdPerson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetOffhandWeaponMeshForFirstPerson
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AShooterWeapon::GetOffhandWeaponMeshForFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetOffhandWeaponMeshForFirstPerson");

	AShooterWeapon_GetOffhandWeaponMeshForFirstPerson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetOffhandWeaponMesh
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AShooterWeapon::GetOffhandWeaponMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetOffhandWeaponMesh");

	AShooterWeapon_GetOffhandWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetMesh3P
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AShooterWeapon::GetMesh3P()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetMesh3P");

	AShooterWeapon_GetMesh3P_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetLastFireTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ModeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterWeapon::GetLastFireTime(int ModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetLastFireTime");

	AShooterWeapon_GetLastFireTime_Params params;
	params.ModeIndex = ModeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetIsReloadHalfDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::GetIsReloadHalfDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetIsReloadHalfDone");

	AShooterWeapon_GetIsReloadHalfDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetFirstPersonAnimPackage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterAnimationPackage* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterAnimationPackage* AShooterWeapon::GetFirstPersonAnimPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetFirstPersonAnimPackage");

	AShooterWeapon_GetFirstPersonAnimPackage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetCurrentFireModeNum
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char AShooterWeapon::GetCurrentFireModeNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetCurrentFireModeNum");

	AShooterWeapon_GetCurrentFireModeNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetCurrentAmmoInClip
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterWeapon::GetCurrentAmmoInClip(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetCurrentAmmoInClip");

	AShooterWeapon_GetCurrentAmmoInClip_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetCurrentAmmo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterWeapon::GetCurrentAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetCurrentAmmo");

	AShooterWeapon_GetCurrentAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetCurrentAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EWeaponAction>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EWeaponAction> AShooterWeapon::GetCurrentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetCurrentAction");

	AShooterWeapon_GetCurrentAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetAmmoPerClip
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterWeapon::GetAmmoPerClip(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetAmmoPerClip");

	AShooterWeapon_GetAmmoPerClip_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.GetAmmoCursor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterWeapon::GetAmmoCursor(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.GetAmmoCursor");

	AShooterWeapon_GetAmmoCursor_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.ClientStartReload
// (Net, NetReliable, Native, Event, Public, NetClient)

void AShooterWeapon::ClientStartReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientStartReload");

	AShooterWeapon_ClientStartReload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientDrawRejectedWeaponTrace
// (Net, NetReliable, Native, Event, Protected, HasDefaults, NetClient)
// Parameters:
// struct FVector                 TraceStart                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceEnd                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::ClientDrawRejectedWeaponTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientDrawRejectedWeaponTrace");

	AShooterWeapon_ClientDrawRejectedWeaponTrace_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.ClientDrawDebugShot
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                 TraceStart                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterWeapon::ClientDrawDebugShot(const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.ClientDrawDebugShot");

	AShooterWeapon_ClientDrawDebugShot_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.CanMoveAndUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::CanMoveAndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.CanMoveAndUse");

	AShooterWeapon_CanMoveAndUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterWeapon.BlueprintSimulateFire
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsFirstPerson                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeaponFireIndex                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeapon::BlueprintSimulateFire(bool IsFirstPerson, int WeaponFireIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.BlueprintSimulateFire");

	AShooterWeapon_BlueprintSimulateFire_Params params;
	params.IsFirstPerson = IsFirstPerson;
	params.WeaponFireIndex = WeaponFireIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.BlueprintReloadStop
// (Event, Public, BlueprintEvent)

void AShooterWeapon::BlueprintReloadStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.BlueprintReloadStop");

	AShooterWeapon_BlueprintReloadStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.BlueprintReloadStart
// (Event, Public, BlueprintEvent)

void AShooterWeapon::BlueprintReloadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.BlueprintReloadStart");

	AShooterWeapon_BlueprintReloadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.AnimNotify_FullAuto_Settle
// (Final, Native, Public, BlueprintCallable)

void AShooterWeapon::AnimNotify_FullAuto_Settle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.AnimNotify_FullAuto_Settle");

	AShooterWeapon_AnimNotify_FullAuto_Settle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.AnimNotify_AmmoDiscardedStart
// (Final, Native, Public, BlueprintCallable)

void AShooterWeapon::AnimNotify_AmmoDiscardedStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.AnimNotify_AmmoDiscardedStart");

	AShooterWeapon_AnimNotify_AmmoDiscardedStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.AnimNotify_AmmoDiscardedEnd
// (Final, Native, Public, BlueprintCallable)

void AShooterWeapon::AnimNotify_AmmoDiscardedEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.AnimNotify_AmmoDiscardedEnd");

	AShooterWeapon_AnimNotify_AmmoDiscardedEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon.AllowADS
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterWeapon::AllowADS()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon.AllowADS");

	AShooterWeapon_AllowADS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbility_ShockWavePunch.ServerSetPunchFinisher
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_ShockWavePunch::ServerSetPunchFinisher(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_ShockWavePunch.ServerSetPunchFinisher");

	UShooterAbility_ShockWavePunch_ServerSetPunchFinisher_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_ShockWavePunch.ServerSetInputPressed
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// bool                           bPressed                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_ShockWavePunch::ServerSetInputPressed(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_ShockWavePunch.ServerSetInputPressed");

	UShooterAbility_ShockWavePunch_ServerSetInputPressed_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_SkyGrab.NetMultiCastReflectDamageFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       TargetEnemy                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_SkyGrab::NetMultiCastReflectDamageFX(class AShooterCharacter* TargetEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_SkyGrab.NetMultiCastReflectDamageFX");

	UShooterAbility_SkyGrab_NetMultiCastReflectDamageFX_Params params;
	params.TargetEnemy = TargetEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_Sprint.OnLand
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Falldistance                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_Sprint::OnLand(const struct FHitResult& Hit, float Falldistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_Sprint.OnLand");

	UShooterAbility_Sprint_OnLand_Params params;
	params.Hit = Hit;
	params.Falldistance = Falldistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTotem.OnRep_CurrentHealth
// (Final, Native, Protected)

void AShooterTotem::OnRep_CurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTotem.OnRep_CurrentHealth");

	AShooterTotem_OnRep_CurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTotem.OnHealthChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AShooterTotem::OnHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTotem.OnHealthChanged");

	AShooterTotem_OnHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTotem.MulticastTotemHitSound
// (Net, Native, Event, NetMulticast, Protected)

void AShooterTotem::MulticastTotemHitSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTotem.MulticastTotemHitSound");

	AShooterTotem_MulticastTotemHitSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTotem.BeginDestroyTotem
// (Native, Event, Public, BlueprintEvent)

void AShooterTotem::BeginDestroyTotem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTotem.BeginDestroyTotem");

	AShooterTotem_BeginDestroyTotem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_Totem.ServerDestroyShield
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UShooterAbility_Totem::ServerDestroyShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_Totem.ServerDestroyShield");

	UShooterAbility_Totem_ServerDestroyShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_TPNade.RequestTP
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UShooterAbility_TPNade::RequestTP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_TPNade.RequestTP");

	UShooterAbility_TPNade_RequestTP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_TPNade.ReplyTP
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           Success                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbility_TPNade::ReplyTP(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_TPNade.ReplyTP");

	UShooterAbility_TPNade_ReplyTP_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_TPNade.NetMultiCastNotifyTP
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Pos                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterAbility_TPNade::NetMultiCastNotifyTP(const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_TPNade.NetMultiCastNotifyTP");

	UShooterAbility_TPNade_NetMultiCastNotifyTP_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbility_TripWire.RequestSpawnTripWire
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 StartPos                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 EndPos                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterAbility_TripWire::RequestSpawnTripWire(const struct FVector& StartPos, const struct FVector& EndPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbility_TripWire.RequestSpawnTripWire");

	UShooterAbility_TripWire_RequestSpawnTripWire_Params params;
	params.StartPos = StartPos;
	params.EndPos = EndPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBotAIController.NotifyInventoryChanged
// (Final, Native, Protected)
// Parameters:
// class AShooterWeapon*          InWeapon                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAdded                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBotAIController::NotifyInventoryChanged(class AShooterWeapon* InWeapon, bool bAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBotAIController.NotifyInventoryChanged");

	AShooterBotAIController_NotifyInventoryChanged_Params params;
	params.InWeapon = InWeapon;
	params.bAdded = bAdded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAirDrone.OnRep_TotalAmountHealed
// (Final, Native, Protected)

void AShooterAirDrone::OnRep_TotalAmountHealed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAirDrone.OnRep_TotalAmountHealed");

	AShooterAirDrone_OnRep_TotalAmountHealed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAirDrone.OnRep_SetFollowTarget
// (Final, Native, Protected)

void AShooterAirDrone::OnRep_SetFollowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAirDrone.OnRep_SetFollowTarget");

	AShooterAirDrone_OnRep_SetFollowTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAirDrone.NetMultiCastPlayIdleSound
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShooterAirDrone::NetMultiCastPlayIdleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAirDrone.NetMultiCastPlayIdleSound");

	AShooterAirDrone_NetMultiCastPlayIdleSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAnimHelpers.FacialSystemMorphNormals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SourceMesh                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  DestinationMesh                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          FacialLayerAlpha               (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAnimHelpers::STATIC_FacialSystemMorphNormals(class USkeletalMeshComponent* SourceMesh, class USkeletalMeshComponent* DestinationMesh, float FacialLayerAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAnimHelpers.FacialSystemMorphNormals");

	UShooterAnimHelpers_FacialSystemMorphNormals_Params params;
	params.SourceMesh = SourceMesh;
	params.DestinationMesh = DestinationMesh;
	params.FacialLayerAlpha = FacialLayerAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacterMovement.ServerSetDebugSprintSpeedModifier
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Modifier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterCharacterMovement::ServerSetDebugSprintSpeedModifier(float Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterMovement.ServerSetDebugSprintSpeedModifier");

	UShooterCharacterMovement_ServerSetDebugSprintSpeedModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacterMovement.ServerRequestCompressedMoves
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// TArray<struct FCompressedMove> CompressedMoves                (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UShooterCharacterMovement::ServerRequestCompressedMoves(TArray<struct FCompressedMove> CompressedMoves)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterMovement.ServerRequestCompressedMoves");

	UShooterCharacterMovement_ServerRequestCompressedMoves_Params params;
	params.CompressedMoves = CompressedMoves;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacterMovement.ServerOverrideMaxAccel
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Modifier                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterCharacterMovement::ServerOverrideMaxAccel(float Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterMovement.ServerOverrideMaxAccel");

	UShooterCharacterMovement_ServerOverrideMaxAccel_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacterMovement.IsFallingForAnim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterCharacterMovement::IsFallingForAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterMovement.IsFallingForAnim");

	UShooterCharacterMovement_IsFallingForAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCharacterMovement.ClientAckCompressedMove
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// struct FCompressedMoveAck      AckMove                        (ConstParm, Parm, ReferenceParm)

void UShooterCharacterMovement::ClientAckCompressedMove(const struct FCompressedMoveAck& AckMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterMovement.ClientAckCompressedMove");

	UShooterCharacterMovement_ClientAckCompressedMove_Params params;
	params.AckMove = AckMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAnimInstance.OnBlueprintTickKillJumpOnLand
// (Event, Public, BlueprintEvent)

void UShooterAnimInstance::OnBlueprintTickKillJumpOnLand()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAnimInstance.OnBlueprintTickKillJumpOnLand");

	UShooterAnimInstance_OnBlueprintTickKillJumpOnLand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAnimInstance.OnBlueprintTickFacialSystemLogic
// (Event, Public, BlueprintEvent)

void UShooterAnimInstance::OnBlueprintTickFacialSystemLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAnimInstance.OnBlueprintTickFacialSystemLogic");

	UShooterAnimInstance_OnBlueprintTickFacialSystemLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAnimInstance.OnBlueprintTickCharacterSpecificLogic
// (Event, Public, BlueprintEvent)

void UShooterAnimInstance::OnBlueprintTickCharacterSpecificLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAnimInstance.OnBlueprintTickCharacterSpecificLogic");

	UShooterAnimInstance_OnBlueprintTickCharacterSpecificLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAnimInstance.OnBlueprintPackageInit
// (Event, Public, BlueprintEvent)

void UShooterAnimInstance::OnBlueprintPackageInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAnimInstance.OnBlueprintPackageInit");

	UShooterAnimInstance_OnBlueprintPackageInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAnimInstance.OnBlueprintDirectionChangeAnimLogic
// (Event, Public, BlueprintEvent)

void UShooterAnimInstance::OnBlueprintDirectionChangeAnimLogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAnimInstance.OnBlueprintDirectionChangeAnimLogic");

	UShooterAnimInstance_OnBlueprintDirectionChangeAnimLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterATM.OnWithdraw
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterATM::OnWithdraw(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterATM.OnWithdraw");

	AShooterATM_OnWithdraw_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterATM.OnDeposit
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterATM::OnDeposit(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterATM.OnDeposit");

	AShooterATM_OnDeposit_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBeamSentry.MulticastRemoveTetheredCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// Parameters:
// class AShooterCharacter*       CharacterToRemove              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBeamSentry::MulticastRemoveTetheredCharacter(class AShooterCharacter* CharacterToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBeamSentry.MulticastRemoveTetheredCharacter");

	AShooterBeamSentry_MulticastRemoveTetheredCharacter_Params params;
	params.CharacterToRemove = CharacterToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBeamSentry.MulticastPullTarget
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 TractorForce                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBeamSentry::MulticastPullTarget(const struct FVector& TractorForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBeamSentry.MulticastPullTarget");

	AShooterBeamSentry_MulticastPullTarget_Params params;
	params.TractorForce = TractorForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBeamSentry.MulticastAddTetheredCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// Parameters:
// class AShooterCharacter*       CharacterToAdd                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBeamSentry::MulticastAddTetheredCharacter(class AShooterCharacter* CharacterToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBeamSentry.MulticastAddTetheredCharacter");

	AShooterBeamSentry_MulticastAddTetheredCharacter_Params params;
	params.CharacterToAdd = CharacterToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBlackjack.OnRep_MyPawn
// (Final, Native, Protected)

void AShooterBlackjack::OnRep_MyPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlackjack.OnRep_MyPawn");

	AShooterBlackjack_OnRep_MyPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.SetOverrideTickFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFrequency                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::SetOverrideTickFrequency(float InFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.SetOverrideTickFrequency");

	UShooterCachedWidget_SetOverrideTickFrequency_Params params;
	params.InFrequency = InFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.SetOverlayEffectDrawState
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECachedWidgetEffect> InState                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterCachedWidget::SetOverlayEffectDrawState(TEnumAsByte<ECachedWidgetEffect> InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.SetOverlayEffectDrawState");

	UShooterCachedWidget_SetOverlayEffectDrawState_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.SetColorAndOpacity
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::SetColorAndOpacity(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.SetColorAndOpacity");

	UShooterCachedWidget_SetColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InColor != nullptr)
		*InColor = params.InColor;
}


// Function ShooterGame.ShooterCachedWidget.RequestTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::RequestTick(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.RequestTick");

	UShooterCachedWidget_RequestTick_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.RequestSlateWidgetTickDuringRender
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 WidgetToTickDuringRender       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::RequestSlateWidgetTickDuringRender(class UWidget* WidgetToTickDuringRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.RequestSlateWidgetTickDuringRender");

	UShooterCachedWidget_RequestSlateWidgetTickDuringRender_Params params;
	params.WidgetToTickDuringRender = WidgetToTickDuringRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.RequestRenderAndClear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::RequestRenderAndClear(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.RequestRenderAndClear");

	UShooterCachedWidget_RequestRenderAndClear_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.RequestRender
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::RequestRender(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.RequestRender");

	UShooterCachedWidget_RequestRender_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.RequestFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::RequestFocus(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.RequestFocus");

	UShooterCachedWidget_RequestFocus_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.GetActiveTickFrequency
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterCachedWidget::GetActiveTickFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.GetActiveTickFrequency");

	UShooterCachedWidget_GetActiveTickFrequency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCachedWidget.ForceInvalidateCache
// (Final, Native, Public, BlueprintCallable)

void UShooterCachedWidget::ForceInvalidateCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.ForceInvalidateCache");

	UShooterCachedWidget_ForceInvalidateCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCachedWidget.AddScrollBoxForAutoScrollingText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UScrollBox*              ScrollBox                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCachedWidget::AddScrollBoxForAutoScrollingText(class UScrollBox* ScrollBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCachedWidget.AddScrollBoxForAutoScrollingText");

	UShooterCachedWidget_AddScrollBoxForAutoScrollingText_Params params;
	params.ScrollBox = ScrollBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCashDrop.OnStartCashDrop
// (Event, Protected, BlueprintEvent)

void AShooterCashDrop::OnStartCashDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCashDrop.OnStartCashDrop");

	AShooterCashDrop_OnStartCashDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCashDrop.OnEndCashDrop
// (Event, Protected, BlueprintEvent)

void AShooterCashDrop::OnEndCashDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCashDrop.OnEndCashDrop");

	AShooterCashDrop_OnEndCashDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCashDrop.MulticastEndCashDrop
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShooterCashDrop::MulticastEndCashDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCashDrop.MulticastEndCashDrop");

	AShooterCashDrop_MulticastEndCashDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.TogglePickupRarityFX
// (Final, Exec, Native, Public)
// Parameters:
// int                            ToggleOn                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::TogglePickupRarityFX(int ToggleOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.TogglePickupRarityFX");

	UShooterCheatManager_TogglePickupRarityFX_Params params;
	params.ToggleOn = ToggleOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ToggleMatchTimer
// (Final, Exec, Native, Public)

void UShooterCheatManager::ToggleMatchTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ToggleMatchTimer");

	UShooterCheatManager_ToggleMatchTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SpawnPlayerSim
// (Final, Exec, Native, Public)

void UShooterCheatManager::SpawnPlayerSim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SpawnPlayerSim");

	UShooterCheatManager_SpawnPlayerSim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetTeamScore
// (Final, Exec, Native, Public)
// Parameters:
// int                            TeamIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewScore                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetTeamScore(int TeamIndex, int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetTeamScore");

	UShooterCheatManager_SetTeamScore_Params params;
	params.TeamIndex = TeamIndex;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.SetSprintSpeedModifier
// (Final, Exec, Native, Public)
// Parameters:
// float                          InMoveSpeedModifier            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::SetSprintSpeedModifier(float InMoveSpeedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.SetSprintSpeedModifier");

	UShooterCheatManager_SetSprintSpeedModifier_Params params;
	params.InMoveSpeedModifier = InMoveSpeedModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ForceMatchStart
// (Final, Exec, Native, Public)

void UShooterCheatManager::ForceMatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ForceMatchStart");

	UShooterCheatManager_ForceMatchStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.Cheat
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  Msg                            (Parm, ZeroConstructor)

void UShooterCheatManager::Cheat(const class FString& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.Cheat");

	UShooterCheatManager_Cheat_Params params;
	params.Msg = Msg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCheatManager.ChangeTeam
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewTeamNumber                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCheatManager::ChangeTeam(int NewTeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCheatManager.ChangeTeam");

	UShooterCheatManager_ChangeTeam_Params params;
	params.NewTeamNumber = NewTeamNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterClientProjectile.OnDeactivateBegin
// (Event, Public, BlueprintEvent)

void AShooterClientProjectile::OnDeactivateBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterClientProjectile.OnDeactivateBegin");

	AShooterClientProjectile_OnDeactivateBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterClientProjectile.OnBeginTimedExplodeFX
// (Event, Public, BlueprintEvent)

void AShooterClientProjectile::OnBeginTimedExplodeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterClientProjectile.OnBeginTimedExplodeFX");

	AShooterClientProjectile_OnBeginTimedExplodeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCustomizationComponent.SetLoadoutItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   PartName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ItemName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterCustomizationComponent::SetLoadoutItem(const struct FName& PartName, const struct FName& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCustomizationComponent.SetLoadoutItem");

	UShooterCustomizationComponent_SetLoadoutItem_Params params;
	params.PartName = PartName;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCustomizationComponent.SetLoadout
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FShooterCustomizationLoadout Loadout                        (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterCustomizationComponent::SetLoadout(const struct FShooterCustomizationLoadout& Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCustomizationComponent.SetLoadout");

	UShooterCustomizationComponent_SetLoadout_Params params;
	params.Loadout = Loadout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCustomizationComponent.SetBodyType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   BodyType                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterCustomizationComponent::SetBodyType(const struct FName& BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCustomizationComponent.SetBodyType");

	UShooterCustomizationComponent_SetBodyType_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCustomizationComponent.OnRep_NetworkDebugId
// (Final, Native, Private)

void UShooterCustomizationComponent::OnRep_NetworkDebugId()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCustomizationComponent.OnRep_NetworkDebugId");

	UShooterCustomizationComponent_OnRep_NetworkDebugId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCustomizationComponent.OnRep_CompressedDesiredLoadout
// (Final, Native, Private)

void UShooterCustomizationComponent::OnRep_CompressedDesiredLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCustomizationComponent.OnRep_CompressedDesiredLoadout");

	UShooterCustomizationComponent_OnRep_CompressedDesiredLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCustomizationComponent.GetDesiredLoadout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FShooterCustomizationLoadout ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FShooterCustomizationLoadout UShooterCustomizationComponent::GetDesiredLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCustomizationComponent.GetDesiredLoadout");

	UShooterCustomizationComponent_GetDesiredLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.SetLastKnownPosition
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 Pos                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::SetLastKnownPosition(const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.SetLastKnownPosition");

	AShooterPlayerState_SetLastKnownPosition_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.SetClientCashValues
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            NewCarriedCashAmount           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewDeathTaxAmount              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewWinnerBonusAmount           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InFinalCashAmount              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::SetClientCashValues(int NewCarriedCashAmount, int NewDeathTaxAmount, int NewWinnerBonusAmount, int InFinalCashAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.SetClientCashValues");

	AShooterPlayerState_SetClientCashValues_Params params;
	params.NewCarriedCashAmount = NewCarriedCashAmount;
	params.NewDeathTaxAmount = NewDeathTaxAmount;
	params.NewWinnerBonusAmount = NewWinnerBonusAmount;
	params.InFinalCashAmount = InFinalCashAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerSetIsTrial
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// bool                           bIsTrial                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerSetIsTrial(bool bIsTrial)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerSetIsTrial");

	AShooterPlayerState_ServerSetIsTrial_Params params;
	params.bIsTrial = bIsTrial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerScoreAnEvent
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FName                   InEventName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InCounter                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerScoreAnEvent(const struct FName& InEventName, float InCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerScoreAnEvent");

	AShooterPlayerState_ServerScoreAnEvent_Params params;
	params.InEventName = InEventName;
	params.InCounter = InCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ServerNotifySquadMarkerChanged
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector2D               MarkerPosition                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bMarkerActive                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ServerNotifySquadMarkerChanged(const struct FVector2D& MarkerPosition, bool bMarkerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ServerNotifySquadMarkerChanged");

	AShooterPlayerState_ServerNotifySquadMarkerChanged_Params params;
	params.MarkerPosition = MarkerPosition;
	params.bMarkerActive = bMarkerActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ScoreAnEventWithVictim
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InEventName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AShooterPlayerState*     Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InCounter                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ScoreAnEventWithVictim(const struct FName& InEventName, class AShooterPlayerState* Victim, float InCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ScoreAnEventWithVictim");

	AShooterPlayerState_ScoreAnEventWithVictim_Params params;
	params.InEventName = InEventName;
	params.Victim = Victim;
	params.InCounter = InCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ScoreAnEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InEventName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          InCounter                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ScoreAnEvent(const struct FName& InEventName, float InCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ScoreAnEvent");

	AShooterPlayerState_ScoreAnEvent_Params params;
	params.InEventName = InEventName;
	params.InCounter = InCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.RequestTeamChange
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::RequestTeamChange(int NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.RequestTeamChange");

	AShooterPlayerState_RequestTeamChange_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_TeamColor
// (Final, Native, Public)

void AShooterPlayerState::OnRep_TeamColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_TeamColor");

	AShooterPlayerState_OnRep_TeamColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_Position
// (Final, Native, Public)

void AShooterPlayerState::OnRep_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_Position");

	AShooterPlayerState_OnRep_Position_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_CosmeticItems
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_CosmeticItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_CosmeticItems");

	AShooterPlayerState_OnRep_CosmeticItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoStickerName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenWeaponTwoStickerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoStickerName");

	AShooterPlayerState_OnRep_ChosenWeaponTwoStickerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoSkinName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenWeaponTwoSkinName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoSkinName");

	AShooterPlayerState_OnRep_ChosenWeaponTwoSkinName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoDeathDecalName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenWeaponTwoDeathDecalName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponTwoDeathDecalName");

	AShooterPlayerState_OnRep_ChosenWeaponTwoDeathDecalName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneStickerName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenWeaponOneStickerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneStickerName");

	AShooterPlayerState_OnRep_ChosenWeaponOneStickerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneSkinName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenWeaponOneSkinName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneSkinName");

	AShooterPlayerState_OnRep_ChosenWeaponOneSkinName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneDeathDecalName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenWeaponOneDeathDecalName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenWeaponOneDeathDecalName");

	AShooterPlayerState_OnRep_ChosenWeaponOneDeathDecalName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenMVPTauntName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenMVPTauntName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenMVPTauntName");

	AShooterPlayerState_OnRep_ChosenMVPTauntName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenClassIndex
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenClassIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenClassIndex");

	AShooterPlayerState_OnRep_ChosenClassIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenCharacterSkineName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenCharacterSkineName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenCharacterSkineName");

	AShooterPlayerState_OnRep_ChosenCharacterSkineName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_ChosenAccounterPortraitName
// (Final, Native, Protected)

void AShooterPlayerState::OnRep_ChosenAccounterPortraitName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_ChosenAccounterPortraitName");

	AShooterPlayerState_OnRep_ChosenAccounterPortraitName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_Cash
// (Final, Native, Public)

void AShooterPlayerState::OnRep_Cash()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_Cash");

	AShooterPlayerState_OnRep_Cash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.OnRep_bIsPlayerLoadedInWorld
// (Final, Native, Public)

void AShooterPlayerState::OnRep_bIsPlayerLoadedInWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.OnRep_bIsPlayerLoadedInWorld");

	AShooterPlayerState_OnRep_bIsPlayerLoadedInWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NetMulticastSetIsExternalPlayer
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// bool                           bInIsExternalPlayer            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::NetMulticastSetIsExternalPlayer(bool bInIsExternalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NetMulticastSetIsExternalPlayer");

	AShooterPlayerState_NetMulticastSetIsExternalPlayer_Params params;
	params.bInIsExternalPlayer = bInIsExternalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.NetMulticastLoadCharacterCustomization
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            ClassIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FCustomizationData      CustomizationData              (ConstParm, Parm, ReferenceParm)

void AShooterPlayerState::NetMulticastLoadCharacterCustomization(int ClassIndex, const struct FCustomizationData& CustomizationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.NetMulticastLoadCharacterCustomization");

	AShooterPlayerState_NetMulticastLoadCharacterCustomization_Params params;
	params.ClassIndex = ClassIndex;
	params.CustomizationData = CustomizationData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.IsQuitter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerState::IsQuitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.IsQuitter");

	AShooterPlayerState_IsQuitter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.IsPawnAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerState::IsPawnAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.IsPawnAlive");

	AShooterPlayerState_IsPawnAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.InformAboutKill
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class AShooterPlayerState*     KillerPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  KillerDamageType               (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     KilledPlayerState              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::InformAboutKill(class AShooterPlayerState* KillerPlayerState, class UClass* KillerDamageType, class AShooterPlayerState* KilledPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.InformAboutKill");

	AShooterPlayerState_InformAboutKill_Params params;
	params.KillerPlayerState = KillerPlayerState;
	params.KillerDamageType = KillerDamageType;
	params.KilledPlayerState = KilledPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.GetWeaponBSticker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomStickerData*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCustomStickerData* AShooterPlayerState::GetWeaponBSticker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetWeaponBSticker");

	AShooterPlayerState_GetWeaponBSticker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetWeaponBDeathDecalObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* AShooterPlayerState::GetWeaponBDeathDecalObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetWeaponBDeathDecalObject");

	AShooterPlayerState_GetWeaponBDeathDecalObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetWeaponASticker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomStickerData*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCustomStickerData* AShooterPlayerState::GetWeaponASticker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetWeaponASticker");

	AShooterPlayerState_GetWeaponASticker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetWeaponADeathDecalObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* AShooterPlayerState::GetWeaponADeathDecalObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetWeaponADeathDecalObject");

	AShooterPlayerState_GetWeaponADeathDecalObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetShortPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterPlayerState::GetShortPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetShortPlayerName");

	AShooterPlayerState_GetShortPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetShooterPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterPlayerState::GetShooterPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetShooterPawn");

	AShooterPlayerState_GetShooterPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetScore
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetScore");

	AShooterPlayerState_GetScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetPositionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetPositionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetPositionIndex");

	AShooterPlayerState_GetPositionIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetPersonalCashBoost
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterPlayerState::GetPersonalCashBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetPersonalCashBoost");

	AShooterPlayerState_GetPersonalCashBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetNumRocketsFired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetNumRocketsFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetNumRocketsFired");

	AShooterPlayerState_GetNumRocketsFired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetNumBulletsFired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetNumBulletsFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetNumBulletsFired");

	AShooterPlayerState_GetNumBulletsFired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetLastValidPositionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetLastValidPositionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetLastValidPositionIndex");

	AShooterPlayerState_GetLastValidPositionIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetLastKnowPosition
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AShooterPlayerState::GetLastKnowPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetLastKnowPosition");

	AShooterPlayerState_GetLastKnowPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetLastKillType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDamageType*             ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDamageType* AShooterPlayerState::GetLastKillType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetLastKillType");

	AShooterPlayerState_GetLastKillType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetLastKillMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKillFeedMessage        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKillFeedMessage AShooterPlayerState::GetLastKillMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetLastKillMessage");

	AShooterPlayerState_GetLastKillMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetLastKiller
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerState*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterPlayerState* AShooterPlayerState::GetLastKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetLastKiller");

	AShooterPlayerState_GetLastKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetLastKillChanged
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerState::GetLastKillChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetLastKillChanged");

	AShooterPlayerState_GetLastKillChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetKills
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetKills");

	AShooterPlayerState_GetKills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetDeaths
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetDeaths");

	AShooterPlayerState_GetDeaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetChosenPawnInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FShooterPawnInfo        PawnInfo                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterPlayerState::GetChosenPawnInfo(struct FShooterPawnInfo* PawnInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetChosenPawnInfo");

	AShooterPlayerState_GetChosenPawnInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PawnInfo != nullptr)
		*PawnInfo = params.PawnInfo;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetAssists
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterPlayerState::GetAssists()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetAssists");

	AShooterPlayerState_GetAssists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.GetAccountPortraitObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* AShooterPlayerState::GetAccountPortraitObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.GetAccountPortraitObject");

	AShooterPlayerState_GetAccountPortraitObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerState.ClientSetCanSeeExternalPlayer
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           bInCanSeeExternalPlayer        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ClientSetCanSeeExternalPlayer(bool bInCanSeeExternalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientSetCanSeeExternalPlayer");

	AShooterPlayerState_ClientSetCanSeeExternalPlayer_Params params;
	params.bInCanSeeExternalPlayer = bInCanSeeExternalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientProcessScoreEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            InScoreAmount                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            InScoreMultiplier              (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InScoreIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     InVictimPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            TriggerCounter                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ClientProcessScoreEvent(int InScoreAmount, int InScoreMultiplier, unsigned char InScoreIndex, class AShooterPlayerState* InVictimPlayer, int TriggerCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientProcessScoreEvent");

	AShooterPlayerState_ClientProcessScoreEvent_Params params;
	params.InScoreAmount = InScoreAmount;
	params.InScoreMultiplier = InScoreMultiplier;
	params.InScoreIndex = InScoreIndex;
	params.InVictimPlayer = InVictimPlayer;
	params.TriggerCounter = TriggerCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientNotifySquadMarkerChanged
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class AShooterPlayerState*     MarkerOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               MarkerPosition                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            ColorIndex                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bMarkerActive                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::ClientNotifySquadMarkerChanged(class AShooterPlayerState* MarkerOwner, const struct FVector2D& MarkerPosition, int ColorIndex, bool bMarkerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientNotifySquadMarkerChanged");

	AShooterPlayerState_ClientNotifySquadMarkerChanged_Params params;
	params.MarkerOwner = MarkerOwner;
	params.MarkerPosition = MarkerPosition;
	params.ColorIndex = ColorIndex;
	params.bMarkerActive = bMarkerActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClientInformAboutDeath
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FDamageSource>   DamageSources                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FPlayerCustomizationBodyPart> kill_card                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterPlayerState::ClientInformAboutDeath(TArray<struct FDamageSource> DamageSources, TArray<struct FPlayerCustomizationBodyPart> kill_card)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClientInformAboutDeath");

	AShooterPlayerState_ClientInformAboutDeath_Params params;
	params.DamageSources = DamageSources;
	params.kill_card = kill_card;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.ClearLastKillChanged
// (Final, Native, Public, BlueprintCallable)

void AShooterPlayerState::ClearLastKillChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.ClearLastKillChanged");

	AShooterPlayerState_ClearLastKillChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.BroadcastScoreEvent
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            InScoreAmount                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            InScoreMultiplier              (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InScoreIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     InKillerr                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     InVictim                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            TriggerCounter                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::BroadcastScoreEvent(int InScoreAmount, int InScoreMultiplier, unsigned char InScoreIndex, class AShooterPlayerState* InKillerr, class AShooterPlayerState* InVictim, int TriggerCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.BroadcastScoreEvent");

	AShooterPlayerState_BroadcastScoreEvent_Params params;
	params.InScoreAmount = InScoreAmount;
	params.InScoreMultiplier = InScoreMultiplier;
	params.InScoreIndex = InScoreIndex;
	params.InKillerr = InKillerr;
	params.InVictim = InVictim;
	params.TriggerCounter = TriggerCounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.BroadcastGoodbyeMessage
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterPlayerState::BroadcastGoodbyeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.BroadcastGoodbyeMessage");

	AShooterPlayerState_BroadcastGoodbyeMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerState.BroadcastDeath
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     KillerPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  KillerDamageType               (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     KilledPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTriggerCounter               (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerState::BroadcastDeath(float KillingDamage, class AShooterCharacter* Killer, class AShooterPlayerState* KillerPlayerState, class UClass* KillerDamageType, class AShooterPlayerState* KilledPlayerState, class AActor* DamageCauser, int InTriggerCounter, uint32_t Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerState.BroadcastDeath");

	AShooterPlayerState_BroadcastDeath_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.KillerPlayerState = KillerPlayerState;
	params.KillerDamageType = KillerDamageType;
	params.KilledPlayerState = KilledPlayerState;
	params.DamageCauser = DamageCauser;
	params.InTriggerCounter = InTriggerCounter;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.UpdateMouseWheelDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuLevelMessageHandler::UpdateMouseWheelDelta(float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.UpdateMouseWheelDelta");

	AShooterMenuLevelMessageHandler_UpdateMouseWheelDelta_Params params;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.UpdateFollowCamDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuLevelMessageHandler::UpdateFollowCamDelta(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.UpdateFollowCamDelta");

	AShooterMenuLevelMessageHandler_UpdateFollowCamDelta_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.StartMouseDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuLevelMessageHandler::StartMouseDown(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.StartMouseDown");

	AShooterMenuLevelMessageHandler_StartMouseDown_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.OnSetupComplete
// (Final, Native, Public, BlueprintCallable)

void AShooterMenuLevelMessageHandler::OnSetupComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.OnSetupComplete");

	AShooterMenuLevelMessageHandler_OnSetupComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.OnEndMouseDown
// (Final, Native, Public, BlueprintCallable)

void AShooterMenuLevelMessageHandler::OnEndMouseDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.OnEndMouseDown");

	AShooterMenuLevelMessageHandler_OnEndMouseDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.GetMenuActorData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ID                             (Parm, ZeroConstructor)
// struct FShooterFrontEndMenuData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FShooterFrontEndMenuData AShooterMenuLevelMessageHandler::GetMenuActorData(const class FString& ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.GetMenuActorData");

	AShooterMenuLevelMessageHandler_GetMenuActorData_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.GetMenuActorClasses
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> AShooterMenuLevelMessageHandler::GetMenuActorClasses()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.GetMenuActorClasses");

	AShooterMenuLevelMessageHandler_GetMenuActorClasses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMenuLevelMessageHandler.DebugStepMenuStates
// (Final, Native, Public, BlueprintCallable)

void AShooterMenuLevelMessageHandler::DebugStepMenuStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuLevelMessageHandler.DebugStepMenuStates");

	AShooterMenuLevelMessageHandler_DebugStepMenuStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.WasCustomizationApplied
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterMenuActor::WasCustomizationApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.WasCustomizationApplied");

	AShooterMenuActor_WasCustomizationApplied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMenuActor.SetIsSpawning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsSpawning                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceInstant                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideSpawnRate              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuActor::SetIsSpawning(bool bIsSpawning, bool bForceInstant, float OverrideSpawnRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.SetIsSpawning");

	AShooterMenuActor_SetIsSpawning_Params params;
	params.bIsSpawning = bIsSpawning;
	params.bForceInstant = bForceInstant;
	params.OverrideSpawnRate = OverrideSpawnRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.SetIsDespawning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsDespawning                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceInstant                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideSpawnRate              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuActor::SetIsDespawning(bool bIsDespawning, bool bForceInstant, float OverrideSpawnRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.SetIsDespawning");

	AShooterMenuActor_SetIsDespawning_Params params;
	params.bIsDespawning = bIsDespawning;
	params.bForceInstant = bForceInstant;
	params.OverrideSpawnRate = OverrideSpawnRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.OnMenuActorCustomizationCompleted
// (Native, Event, Public, BlueprintEvent)

void AShooterMenuActor::OnMenuActorCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.OnMenuActorCustomizationCompleted");

	AShooterMenuActor_OnMenuActorCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.NotifyCustomizationCompleted
// (Final, Native, Public, BlueprintCallable)

void AShooterMenuActor::NotifyCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.NotifyCustomizationCompleted");

	AShooterMenuActor_NotifyCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.GetScaleForScene
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EMenuWorldState>   MenuScene                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterMenuActor::GetScaleForScene(TEnumAsByte<EMenuWorldState> MenuScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.GetScaleForScene");

	AShooterMenuActor_GetScaleForScene_Params params;
	params.MenuScene = MenuScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMenuActor.ForceFinishSpawn
// (Final, Native, Protected, BlueprintCallable)

void AShooterMenuActor::ForceFinishSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.ForceFinishSpawn");

	AShooterMenuActor_ForceFinishSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.ForceFinishDespawn
// (Final, Native, Protected, BlueprintCallable)

void AShooterMenuActor::ForceFinishDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.ForceFinishDespawn");

	AShooterMenuActor_ForceFinishDespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.EnableDemoMode
// (Final, Native, Protected, BlueprintCallable)

void AShooterMenuActor::EnableDemoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.EnableDemoMode");

	AShooterMenuActor_EnableDemoMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.DestroyMenuActor
// (Final, Native, Public, BlueprintCallable)

void AShooterMenuActor::DestroyMenuActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.DestroyMenuActor");

	AShooterMenuActor_DestroyMenuActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.BPToggleCustomizationFocus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWeaponFocused                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeaponPrimary                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMenuWorldState>   CurrentScene                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuActor::BPToggleCustomizationFocus(bool bWeaponFocused, bool bWeaponPrimary, TEnumAsByte<EMenuWorldState> CurrentScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.BPToggleCustomizationFocus");

	AShooterMenuActor_BPToggleCustomizationFocus_Params params;
	params.bWeaponFocused = bWeaponFocused;
	params.bWeaponPrimary = bWeaponPrimary;
	params.CurrentScene = CurrentScene;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.BPSetupForLobby
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuActor::BPSetupForLobby(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.BPSetupForLobby");

	AShooterMenuActor_BPSetupForLobby_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.BPSetupForCustomization
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWeaponFocused                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeaponPrimary                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuActor::BPSetupForCustomization(bool bWeaponFocused, bool bWeaponPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.BPSetupForCustomization");

	AShooterMenuActor_BPSetupForCustomization_Params params;
	params.bWeaponFocused = bWeaponFocused;
	params.bWeaponPrimary = bWeaponPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.BPSetupForCharacterSelect
// (Event, Public, BlueprintEvent)

void AShooterMenuActor::BPSetupForCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.BPSetupForCharacterSelect");

	AShooterMenuActor_BPSetupForCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActor.BPOnLoadoutApplied
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            LobbySlot                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuActor::BPOnLoadoutApplied(int LobbySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActor.BPOnLoadoutApplied");

	AShooterMenuActor_BPOnLoadoutApplied_Params params;
	params.LobbySlot = LobbySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMenuActorSpawner.SpawnMenuActorFromClass
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  InMenuActorClass               (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPlayerCustomizationLoadoutPreference CustomizationData              (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EMenuActorAnimState> SpawnState                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            AnimSlot                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceNoLoadParticles           (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterMenuActor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterMenuActor* AShooterMenuActorSpawner::SpawnMenuActorFromClass(class UClass* InMenuActorClass, const struct FTransform& SpawnTransform, const struct FPlayerCustomizationLoadoutPreference& CustomizationData, TEnumAsByte<EMenuActorAnimState> SpawnState, int AnimSlot, bool ForceNoLoadParticles)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActorSpawner.SpawnMenuActorFromClass");

	AShooterMenuActorSpawner_SpawnMenuActorFromClass_Params params;
	params.InMenuActorClass = InMenuActorClass;
	params.SpawnTransform = SpawnTransform;
	params.CustomizationData = CustomizationData;
	params.SpawnState = SpawnState;
	params.AnimSlot = AnimSlot;
	params.ForceNoLoadParticles = ForceNoLoadParticles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMenuActorSpawner.DestroyMenuActor
// (Final, Native, Public, BlueprintCallable)

void AShooterMenuActorSpawner::DestroyMenuActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMenuActorSpawner.DestroyMenuActor");

	AShooterMenuActorSpawner_DestroyMenuActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDestructibleObject.StageDestroyed
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            StageIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDestructibleObject::StageDestroyed(int StageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDestructibleObject.StageDestroyed");

	AShooterDestructibleObject_StageDestroyed_Params params;
	params.StageIndex = StageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDestructibleObject.ResetDestruction
// (Final, Native, Protected, BlueprintCallable)

void AShooterDestructibleObject::ResetDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDestructibleObject.ResetDestruction");

	AShooterDestructibleObject_ResetDestruction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDestructibleObject.OnRep_DestructionStage
// (Final, Native, Protected)

void AShooterDestructibleObject::OnRep_DestructionStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDestructibleObject.OnRep_DestructionStage");

	AShooterDestructibleObject_OnRep_DestructionStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDestructibleObject.DestructionReset
// (Event, Protected, BlueprintEvent)

void AShooterDestructibleObject::DestructionReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDestructibleObject.DestructionReset");

	AShooterDestructibleObject_DestructionReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDomeSpawnPlatform.OnWingsuitOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShooterDomeSpawnPlatform::OnWingsuitOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDomeSpawnPlatform.OnWingsuitOverlap");

	AShooterDomeSpawnPlatform_OnWingsuitOverlap_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDomeSpawnPlatform.NetMulticastStartSlowFall
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class AShooterCharacter*       OverlappingCharacter           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDomeSpawnPlatform::NetMulticastStartSlowFall(class AShooterCharacter* OverlappingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDomeSpawnPlatform.NetMulticastStartSlowFall");

	AShooterDomeSpawnPlatform_NetMulticastStartSlowFall_Params params;
	params.OverlappingCharacter = OverlappingCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           OpenReverse                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDoor::Open(bool OpenReverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.Open");

	AShooterDoor_Open_Params params;
	params.OpenReverse = OpenReverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnTweenCompleted
// (Final, Native, Public)

void AShooterDoor::OnTweenCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnTweenCompleted");

	AShooterDoor_OnTweenCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnRep_DoorOpenState
// (Final, Native, Public)

void AShooterDoor::OnRep_DoorOpenState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnRep_DoorOpenState");

	AShooterDoor_OnRep_DoorOpenState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnInteractAlt
// (Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDoor::OnInteractAlt(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnInteractAlt");

	AShooterDoor_OnInteractAlt_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnInteract
// (Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDoor::OnInteract(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnInteract");

	AShooterDoor_OnInteract_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnDoorPieceDestroy
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActorComponent*         CompToDestroy                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterDoor::OnDoorPieceDestroy(class UActorComponent* CompToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnDoorPieceDestroy");

	AShooterDoor_OnDoorPieceDestroy_Params params;
	params.CompToDestroy = CompToDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnDoorOpened
// (Event, Public, BlueprintEvent)

void AShooterDoor::OnDoorOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnDoorOpened");

	AShooterDoor_OnDoorOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnDoorKickedIn
// (Event, Public, BlueprintEvent)

void AShooterDoor::OnDoorKickedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnDoorKickedIn");

	AShooterDoor_OnDoorKickedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnDoorClosed
// (Event, Public, BlueprintEvent)

void AShooterDoor::OnDoorClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnDoorClosed");

	AShooterDoor_OnDoorClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.OnBeginPlayerOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShooterDoor::OnBeginPlayerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.OnBeginPlayerOverlap");

	AShooterDoor_OnBeginPlayerOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.NotifyBotTriggerOverlap
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShooterDoor::NotifyBotTriggerOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.NotifyBotTriggerOverlap");

	AShooterDoor_NotifyBotTriggerOverlap_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.DestroyDoorPiece
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActorComponent*         CompToDestroy                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AShooterDoor::DestroyDoorPiece(class UActorComponent* CompToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.DestroyDoorPiece");

	AShooterDoor_DestroyDoorPiece_Params params;
	params.CompToDestroy = CompToDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.Close
// (Final, Native, Public, BlueprintCallable)

void AShooterDoor::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.Close");

	AShooterDoor_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDoor.AttemptCloseAutomatic
// (Final, Native, Public)

void AShooterDoor::AttemptCloseAutomatic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDoor.AttemptCloseAutomatic");

	AShooterDoor_AttemptCloseAutomatic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterEliminationCore.UpdateSphereSize
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterEliminationCore::UpdateSphereSize(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterEliminationCore.UpdateSphereSize");

	AShooterEliminationCore_UpdateSphereSize_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterFinalShowdown.OnShowdownSpawn
// (Event, Public, BlueprintEvent)

void AShooterFinalShowdown::OnShowdownSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterFinalShowdown.OnShowdownSpawn");

	AShooterFinalShowdown_OnShowdownSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterFinalShowdown.OnShowdownLowered
// (Event, Public, BlueprintEvent)

void AShooterFinalShowdown::OnShowdownLowered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterFinalShowdown.OnShowdownLowered");

	AShooterFinalShowdown_OnShowdownLowered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameInstance.IsPartyLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterGameInstance::IsPartyLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameInstance.IsPartyLeader");

	UShooterGameInstance_IsPartyLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameInstance.GotoPlayingState
// (Final, Native, Public, BlueprintCallable)

void UShooterGameInstance::GotoPlayingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameInstance.GotoPlayingState");

	UShooterGameInstance_GotoPlayingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.SetRespawnTimeForTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          RespawnTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::SetRespawnTimeForTeam(int Team, float RespawnTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.SetRespawnTimeForTeam");

	AShooterGameMode_SetRespawnTimeForTeam_Params params;
	params.Team = Team;
	params.RespawnTime = RespawnTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.ReinitializeTeams
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bResetScoresAndCooldowns       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::ReinitializeTeams(bool bResetScoresAndCooldowns)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.ReinitializeTeams");

	AShooterGameMode_ReinitializeTeams_Params params;
	params.bResetScoresAndCooldowns = bResetScoresAndCooldowns;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.OnGameModeModifiersUpdated
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UShooterGameModeModifier* InUpdatedModifier              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::OnGameModeModifiersUpdated(class UShooterGameModeModifier* InUpdatedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.OnGameModeModifiersUpdated");

	AShooterGameMode_OnGameModeModifiersUpdated_Params params;
	params.InUpdatedModifier = InUpdatedModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.OnCompletionCriteriaReached
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinnerIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::OnCompletionCriteriaReached(int WinnerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.OnCompletionCriteriaReached");

	AShooterGameMode_OnCompletionCriteriaReached_Params params;
	params.WinnerIndex = WinnerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.ObjectiveTimerEnded
// (Event, Protected, BlueprintEvent)

void AShooterGameMode::ObjectiveTimerEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.ObjectiveTimerEnded");

	AShooterGameMode_ObjectiveTimerEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.MatchStartedEvent
// (Event, Protected, BlueprintEvent)

void AShooterGameMode::MatchStartedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.MatchStartedEvent");

	AShooterGameMode_MatchStartedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.KilledOrDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             KilledPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   KilledPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::KilledOrDestroyed(float KillingDamage, class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.KilledOrDestroyed");

	AShooterGameMode_KilledOrDestroyed_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.DamageEvent = DamageEvent;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.Killed
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             KilledPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   KilledPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode::Killed(float KillingDamage, class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, const struct FDamageEvent& DamageEvent, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.Killed");

	AShooterGameMode_Killed_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.KilledPlayer = KilledPlayer;
	params.KilledPawn = KilledPawn;
	params.DamageEvent = DamageEvent;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.IsWinner
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerState*     PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::IsWinner(class AShooterPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.IsWinner");

	AShooterGameMode_IsWinner_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.IsCustomGame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::IsCustomGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.IsCustomGame");

	AShooterGameMode_IsCustomGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.HasWinner
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameMode::HasWinner()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.HasWinner");

	AShooterGameMode_HasWinner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetShooterGameState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterGameState*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterGameState* AShooterGameMode::GetShooterGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetShooterGameState");

	AShooterGameMode_GetShooterGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.GetRespawnTimeForTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterGameMode::GetRespawnTimeForTeam(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.GetRespawnTimeForTeam");

	AShooterGameMode_GetRespawnTimeForTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode.FinishMatch
// (Final, Exec, Native, Protected)

void AShooterGameMode::FinishMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.FinishMatch");

	AShooterGameMode_FinishMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode.AssistedKill
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AShooterPlayerState*     Assister                       (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterPlayerState*     KilledPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FScoreTriggerType       InTriggerType                  (ConstParm, Parm, OutParm, ReferenceParm)

void AShooterGameMode::AssistedKill(class AShooterPlayerState* Assister, class AShooterPlayerState* KilledPlayer, const struct FScoreTriggerType& InTriggerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode.AssistedKill");

	AShooterGameMode_AssistedKill_Params params;
	params.Assister = Assister;
	params.KilledPlayer = KilledPlayer;
	params.InTriggerType = InTriggerType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_RoundBased.OnRep_TimeToRespawnRounded
// (Native, Protected)

void AShooterGameState_RoundBased::OnRep_TimeToRespawnRounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_RoundBased.OnRep_TimeToRespawnRounded");

	AShooterGameState_RoundBased_OnRep_TimeToRespawnRounded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_RoundBased.OnRep_RoundState
// (Native, Protected)

void AShooterGameState_RoundBased::OnRep_RoundState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_RoundBased.OnRep_RoundState");

	AShooterGameState_RoundBased_OnRep_RoundState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameMode_RoundBased.GetRoundState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERoundState>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERoundState> AShooterGameMode_RoundBased::GetRoundState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode_RoundBased.GetRoundState");

	AShooterGameMode_RoundBased_GetRoundState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameMode_RoundBased.ChangeRoundState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERoundState>       NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameMode_RoundBased::ChangeRoundState(TEnumAsByte<ERoundState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameMode_RoundBased.ChangeRoundState");

	AShooterGameMode_RoundBased_ChangeRoundState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterKeyMapSettings.GetKeyMapSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UShooterKeyMapSettings*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterKeyMapSettings* UShooterKeyMapSettings::STATIC_GetKeyMapSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterKeyMapSettings.GetKeyMapSettings");

	UShooterKeyMapSettings_GetKeyMapSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGamepadMapSettings.GetGamepadMapSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UShooterGamepadMapSettings* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGamepadMapSettings* UShooterGamepadMapSettings::STATIC_GetGamepadMapSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGamepadMapSettings.GetGamepadMapSettings");

	UShooterGamepadMapSettings_GetGamepadMapSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState_KillConf.SetMVP
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// class AShooterPlayerState*     ShooterPlayerState             (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_KillConf::SetMVP(class AShooterPlayerState* ShooterPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_KillConf.SetMVP");

	AShooterGameState_KillConf_SetMVP_Params params;
	params.ShooterPlayerState = ShooterPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_KillConf.IsPlayerMVP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterPlayerState*     ShooterPlayerState             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterGameState_KillConf::IsPlayerMVP(class AShooterPlayerState* ShooterPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_KillConf.IsPlayerMVP");

	AShooterGameState_KillConf_IsPlayerMVP_Params params;
	params.ShooterPlayerState = ShooterPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState_LastManStanding.ShowEndOfMatch
// (Final, Native, Private)

void AShooterGameState_LastManStanding::ShowEndOfMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.ShowEndOfMatch");

	AShooterGameState_LastManStanding_ShowEndOfMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnVictory
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterCharacter*       Victor                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_LastManStanding::OnVictory(class AShooterCharacter* Victor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnVictory");

	AShooterGameState_LastManStanding_OnVictory_Params params;
	params.Victor = Victor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnSpinToWinFinished
// (Final, Native, Public, BlueprintCallable)

void AShooterGameState_LastManStanding::OnSpinToWinFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnSpinToWinFinished");

	AShooterGameState_LastManStanding_OnSpinToWinFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnShowdownClosureBegan
// (Event, Public, BlueprintEvent)

void AShooterGameState_LastManStanding::OnShowdownClosureBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnShowdownClosureBegan");

	AShooterGameState_LastManStanding_OnShowdownClosureBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_Zones
// (Final, Native, Private)

void AShooterGameState_LastManStanding::OnRep_Zones()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnRep_Zones");

	AShooterGameState_LastManStanding_OnRep_Zones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_WarningTimer
// (Final, Native, Private)

void AShooterGameState_LastManStanding::OnRep_WarningTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnRep_WarningTimer");

	AShooterGameState_LastManStanding_OnRep_WarningTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_NumAlive
// (Final, Native, Private)

void AShooterGameState_LastManStanding::OnRep_NumAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnRep_NumAlive");

	AShooterGameState_LastManStanding_OnRep_NumAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_FinalShowdown
// (Final, Native, Private)

void AShooterGameState_LastManStanding::OnRep_FinalShowdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnRep_FinalShowdown");

	AShooterGameState_LastManStanding_OnRep_FinalShowdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnRep_CashDrop
// (Final, Native, Private)

void AShooterGameState_LastManStanding::OnRep_CashDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnRep_CashDrop");

	AShooterGameState_LastManStanding_OnRep_CashDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnPreludeVOFinished
// (Final, Native, Public)

void AShooterGameState_LastManStanding::OnPreludeVOFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnPreludeVOFinished");

	AShooterGameState_LastManStanding_OnPreludeVOFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnPreludeCountdownFinished
// (Final, Native, Public)

void AShooterGameState_LastManStanding::OnPreludeCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnPreludeCountdownFinished");

	AShooterGameState_LastManStanding_OnPreludeCountdownFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnMatchFinished
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       Victor                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_LastManStanding::OnMatchFinished(class AShooterCharacter* Victor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnMatchFinished");

	AShooterGameState_LastManStanding_OnMatchFinished_Params params;
	params.Victor = Victor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.OnBikeFaceFinished
// (Final, Native, Public, BlueprintCallable)

void AShooterGameState_LastManStanding::OnBikeFaceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.OnBikeFaceFinished");

	AShooterGameState_LastManStanding_OnBikeFaceFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.NetMulticastPlayPrelude
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            AnnouncerVOIndex               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_LastManStanding::NetMulticastPlayPrelude(int AnnouncerVOIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.NetMulticastPlayPrelude");

	AShooterGameState_LastManStanding_NetMulticastPlayPrelude_Params params;
	params.AnnouncerVOIndex = AnnouncerVOIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.NetMulticastFinalShowdown
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 ShowdownPos                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterGameState_LastManStanding::NetMulticastFinalShowdown(const struct FVector& ShowdownPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.NetMulticastFinalShowdown");

	AShooterGameState_LastManStanding_NetMulticastFinalShowdown_Params params;
	params.ShowdownPos = ShowdownPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.MulticastSpinToWin
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_LastManStanding::MulticastSpinToWin(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.MulticastSpinToWin");

	AShooterGameState_LastManStanding_MulticastSpinToWin_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.MulticastBikeRace
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterGameState_LastManStanding::MulticastBikeRace(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.MulticastBikeRace");

	AShooterGameState_LastManStanding_MulticastBikeRace_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_LastManStanding.GetZoneCountdown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AShooterGameState_LastManStanding::GetZoneCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.GetZoneCountdown");

	AShooterGameState_LastManStanding_GetZoneCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState_LastManStanding.GetStartingPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameState_LastManStanding::GetStartingPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.GetStartingPlayerCount");

	AShooterGameState_LastManStanding_GetStartingPlayerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState_LastManStanding.GetNumAlive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameState_LastManStanding::GetNumAlive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.GetNumAlive");

	AShooterGameState_LastManStanding_GetNumAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState_LastManStanding.GetFinalShowdownRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterGameState_LastManStanding::GetFinalShowdownRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_LastManStanding.GetFinalShowdownRadius");

	AShooterGameState_LastManStanding_GetFinalShowdownRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameState_Elimination.OnRep_EliminationSphereRadius
// (Final, Native, Public)

void AShooterGameState_Elimination::OnRep_EliminationSphereRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Elimination.OnRep_EliminationSphereRadius");

	AShooterGameState_Elimination_OnRep_EliminationSphereRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameState_Uplink.GetTeamViewCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterGameState_Uplink::GetTeamViewCount(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameState_Uplink.GetTeamViewCount");

	AShooterGameState_Uplink_GetTeamViewCount_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterGameViewportClient.SpectateNextMatch
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameViewportClient::SpectateNextMatch(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameViewportClient.SpectateNextMatch");

	UShooterGameViewportClient_SpectateNextMatch_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameViewportClient.SkipLobbyTimer
// (Final, Exec, Native, Public)

void UShooterGameViewportClient::SkipLobbyTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameViewportClient.SkipLobbyTimer");

	UShooterGameViewportClient_SkipLobbyTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameViewportClient.MatchSpectate
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ServerAddress                  (Parm, ZeroConstructor)

void UShooterGameViewportClient::MatchSpectate(const class FString& ServerAddress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameViewportClient.MatchSpectate");

	UShooterGameViewportClient_MatchSpectate_Params params;
	params.ServerAddress = ServerAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGravityComponent.RemoveGravityScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 GravityObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterGravityComponent::RemoveGravityScale(class UObject* GravityObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGravityComponent.RemoveGravityScale");

	UShooterGravityComponent_RemoveGravityScale_Params params;
	params.GravityObject = GravityObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGravityComponent.AddGravityScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          GravityScale                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          FallingDownGravityScale        (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             GravityScaleOverTime           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            GravityPriority                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 GravityObject                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterGravityComponent::AddGravityScale(float GravityScale, float FallingDownGravityScale, class UCurveFloat* GravityScaleOverTime, float StartTime, int GravityPriority, class UObject* GravityObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGravityComponent.AddGravityScale");

	UShooterGravityComponent_AddGravityScale_Params params;
	params.GravityScale = GravityScale;
	params.FallingDownGravityScale = FallingDownGravityScale;
	params.GravityScaleOverTime = GravityScaleOverTime;
	params.StartTime = StartTime;
	params.GravityPriority = GravityPriority;
	params.GravityObject = GravityObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterVoipEntryWidget.SetVoipState
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EVoipState>        VoipState                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterVoipEntryWidget::SetVoipState(TEnumAsByte<EVoipState> VoipState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterVoipEntryWidget.SetVoipState");

	UShooterVoipEntryWidget_SetVoipState_Params params;
	params.VoipState = VoipState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterVoipEntryWidget.SetVoipName
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterVoipEntryWidget::SetVoipName(const struct FText& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterVoipEntryWidget.SetVoipName");

	UShooterVoipEntryWidget_SetVoipName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.ToggleChat
// (Final, Native, Public, BlueprintCallable)

void AShooterHUD::ToggleChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.ToggleChat");

	AShooterHUD_ToggleChat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.SwitchChatMode
// (Final, Native, Public, BlueprintCallable)

void AShooterHUD::SwitchChatMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.SwitchChatMode");

	AShooterHUD_SwitchChatMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.ShowToolTip
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTutorialToolTipInfo    InToolTipInfo                  (ConstParm, Parm, OutParm, ReferenceParm)

void AShooterHUD::ShowToolTip(const struct FTutorialToolTipInfo& InToolTipInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.ShowToolTip");

	AShooterHUD_ShowToolTip_Params params;
	params.InToolTipInfo = InToolTipInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.SendChatLine
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   ChatString                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSendToAll                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterHUD::SendChatLine(const struct FText& ChatString, bool bSendToAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.SendChatLine");

	AShooterHUD_SendChatLine_Params params;
	params.ChatString = ChatString;
	params.bSendToAll = bSendToAll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.ReceiveChatLine
// (Final, Native, Public)
// Parameters:
// class FString                  PlayerName                     (Parm, ZeroConstructor)
// class FString                  MessageBody                    (Parm, ZeroConstructor)
// class FString                  PlayerId                       (Parm, ZeroConstructor)
// TEnumAsByte<EChatMode>         Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AShooterHUD::ReceiveChatLine(const class FString& PlayerName, const class FString& MessageBody, const class FString& PlayerId, TEnumAsByte<EChatMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.ReceiveChatLine");

	AShooterHUD_ReceiveChatLine_Params params;
	params.PlayerName = PlayerName;
	params.MessageBody = MessageBody;
	params.PlayerId = PlayerId;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.NotifyBoxVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> AShooterHUD::NotifyBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.NotifyBoxVisibility");

	AShooterHUD_NotifyBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.NotifyBatteryInCenter
// (Final, Native, Public, BlueprintCallable)

void AShooterHUD::NotifyBatteryInCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.NotifyBatteryInCenter");

	AShooterHUD_NotifyBatteryInCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.IsInBatteryZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterHUD::IsInBatteryZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.IsInBatteryZone");

	AShooterHUD_IsInBatteryZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.HideToolTip
// (Final, Native, Public, BlueprintCallable)

void AShooterHUD::HideToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.HideToolTip");

	AShooterHUD_HideToolTip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD.GetTeamScoreByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterHUD::GetTeamScoreByIndex(int TeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetTeamScoreByIndex");

	AShooterHUD_GetTeamScoreByIndex_Params params;
	params.TeamNumber = TeamNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetShooterCharacterForHealthUserWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             HealthWidget                   (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterHUD::GetShooterCharacterForHealthUserWidget(class UUserWidget* HealthWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetShooterCharacterForHealthUserWidget");

	AShooterHUD_GetShooterCharacterForHealthUserWidget_Params params;
	params.HealthWidget = HealthWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetRespawnTimerAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterHUD::GetRespawnTimerAsFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetRespawnTimerAsFloat");

	AShooterHUD_GetRespawnTimerAsFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetRankedPlayerNameByIndexAndTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterHUD::GetRankedPlayerNameByIndexAndTeam(int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetRankedPlayerNameByIndexAndTeam");

	AShooterHUD_GetRankedPlayerNameByIndexAndTeam_Params params;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetRankedPlayerKillsByIndexAndTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterHUD::GetRankedPlayerKillsByIndexAndTeam(int Team, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetRankedPlayerKillsByIndexAndTeam");

	AShooterHUD_GetRankedPlayerKillsByIndexAndTeam_Params params;
	params.Team = Team;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetOptionsMenuWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterOptionsMenu*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterOptionsMenu* AShooterHUD::GetOptionsMenuWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetOptionsMenuWidget");

	AShooterHUD_GetOptionsMenuWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetObjectiveTimeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterHUD::GetObjectiveTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetObjectiveTimeString");

	AShooterHUD_GetObjectiveTimeString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetNotifyItemByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterHUD::GetNotifyItemByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetNotifyItemByIndex");

	AShooterHUD_GetNotifyItemByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetMyPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterHUD::GetMyPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetMyPlayerName");

	AShooterHUD_GetMyPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetMyPlayerKills
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterHUD::GetMyPlayerKills()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetMyPlayerKills");

	AShooterHUD_GetMyPlayerKills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetMyLastKiller
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterHUD::GetMyLastKiller()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetMyLastKiller");

	AShooterHUD_GetMyLastKiller_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetMatchTimeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AShooterHUD::GetMatchTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetMatchTimeString");

	AShooterHUD_GetMatchTimeString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetMapWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterMapWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterMapWidget* AShooterHUD::GetMapWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetMapWidget");

	AShooterHUD_GetMapWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetHudWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterHudWidget*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterHudWidget* AShooterHUD::GetHudWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetHudWidget");

	AShooterHUD_GetHudWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetHUDRelevantActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AShooterHUD::GetHUDRelevantActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetHUDRelevantActor");

	AShooterHUD_GetHUDRelevantActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetGlobalUIData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterGlobalUIData*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGlobalUIData* AShooterHUD::GetGlobalUIData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetGlobalUIData");

	AShooterHUD_GetGlobalUIData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetGameTextWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterGameTextWidget*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGameTextWidget* AShooterHUD::GetGameTextWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetGameTextWidget");

	AShooterHUD_GetGameTextWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetGameModeStatusWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterGameModeStatusWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterGameModeStatusWidget* AShooterHUD::GetGameModeStatusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetGameModeStatusWidget");

	AShooterHUD_GetGameModeStatusWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHUD.GetFrontendKillcardWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterEomKillCardWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterEomKillCardWidget* AShooterHUD::GetFrontendKillcardWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD.GetFrontendKillcardWidget");

	AShooterHUD_GetFrontendKillcardWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterIconComponent.SetGameplayVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterIconComponent::SetGameplayVisibility(bool NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterIconComponent.SetGameplayVisibility");

	UShooterIconComponent_SetGameplayVisibility_Params params;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterIconComponent.Enable
// (Final, Native, Public, BlueprintCallable)

void UShooterIconComponent::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterIconComponent.Enable");

	UShooterIconComponent_Enable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterIconComponent.Disable
// (Final, Native, Public, BlueprintCallable)

void UShooterIconComponent::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterIconComponent.Disable");

	UShooterIconComponent_Disable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterInteractComponent.OnStopInteractDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterInteractComponent::OnStopInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterInteractComponent.OnStopInteractDelegate__DelegateSignature");

	UShooterInteractComponent_OnStopInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterInteractComponent.OnStartInteractDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterInteractComponent::OnStartInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterInteractComponent.OnStartInteractDelegate__DelegateSignature");

	UShooterInteractComponent_OnStartInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterInteractComponent.OnRep_InteractActive
// (Final, Native, Public)

void UShooterInteractComponent::OnRep_InteractActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterInteractComponent.OnRep_InteractActive");

	UShooterInteractComponent_OnRep_InteractActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterInteractComponent.OnInteractDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterInteractComponent::OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterInteractComponent.OnInteractDelegate__DelegateSignature");

	UShooterInteractComponent_OnInteractDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction ShooterGame.ShooterInteractComponent.OnInteractAltDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AShooterCharacter*       Interactor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterInteractComponent::OnInteractAltDelegate__DelegateSignature(class AShooterCharacter* Interactor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction ShooterGame.ShooterInteractComponent.OnInteractAltDelegate__DelegateSignature");

	UShooterInteractComponent_OnInteractAltDelegate__DelegateSignature_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedTargetInfo
// (Final, Native, Protected)

void AShooterLiveSpectatorCharacterData::OnRep_SpectatedTargetInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedTargetInfo");

	AShooterLiveSpectatorCharacterData_OnRep_SpectatedTargetInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedPing
// (Final, Native, Public)

void AShooterLiveSpectatorCharacterData::OnRep_SpectatedPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedPing");

	AShooterLiveSpectatorCharacterData_OnRep_SpectatedPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedMovement
// (Final, Native, Public)

void AShooterLiveSpectatorCharacterData::OnRep_SpectatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterLiveSpectatorCharacterData.OnRep_SpectatedMovement");

	AShooterLiveSpectatorCharacterData_OnRep_SpectatedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterLootGroup.SpawnAllItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           SkipTrace                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterLootGroup::SpawnAllItems(bool SkipTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterLootGroup.SpawnAllItems");

	AShooterLootGroup_SpawnAllItems_Params params;
	params.SkipTrace = SkipTrace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMysteryDoor.UpdateProgressBars
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMysteryDoor::UpdateProgressBars(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMysteryDoor.UpdateProgressBars");

	AShooterMysteryDoor_UpdateProgressBars_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMysteryDoor.OnStopMusic
// (Event, Protected, BlueprintEvent)

void AShooterMysteryDoor::OnStopMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMysteryDoor.OnStopMusic");

	AShooterMysteryDoor_OnStopMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMysteryDoor.OnStartMusic
// (Event, Protected, BlueprintEvent)

void AShooterMysteryDoor::OnStartMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMysteryDoor.OnStartMusic");

	AShooterMysteryDoor_OnStartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMysteryDoor.OnDoorOpened
// (Event, Protected, BlueprintEvent)

void AShooterMysteryDoor::OnDoorOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMysteryDoor.OnDoorOpened");

	AShooterMysteryDoor_OnDoorOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterObjectiveZone.PlayerLeftOnHost
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterObjectiveZone::PlayerLeftOnHost(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveZone.PlayerLeftOnHost");

	AShooterObjectiveZone_PlayerLeftOnHost_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterObjectiveZone.PlayerEnteredOnHost
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterObjectiveZone::PlayerEnteredOnHost(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveZone.PlayerEnteredOnHost");

	AShooterObjectiveZone_PlayerEnteredOnHost_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterObjectiveZone.GetTeamPlayersInZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InTeamNum                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AShooterCharacter*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AShooterCharacter*> AShooterObjectiveZone::GetTeamPlayersInZone(int InTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveZone.GetTeamPlayersInZone");

	AShooterObjectiveZone_GetTeamPlayersInZone_Params params;
	params.InTeamNum = InTeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterObjectiveZone.GetNumTeamPlayersInZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            InTeamNum                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterObjectiveZone::GetNumTeamPlayersInZone(int InTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveZone.GetNumTeamPlayersInZone");

	AShooterObjectiveZone_GetNumTeamPlayersInZone_Params params;
	params.InTeamNum = InTeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterObjectiveZone.GetNumPlayersTeam1
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterObjectiveZone::GetNumPlayersTeam1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveZone.GetNumPlayersTeam1");

	AShooterObjectiveZone_GetNumPlayersTeam1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterObjectiveZone.GetNumPlayersTeam0
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterObjectiveZone::GetNumPlayersTeam0()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveZone.GetNumPlayersTeam0");

	AShooterObjectiveZone_GetNumPlayersTeam0_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterObjectiveZone.GetNumPlayersInZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AShooterObjectiveZone::GetNumPlayersInZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveZone.GetNumPlayersInZone");

	AShooterObjectiveZone_GetNumPlayersInZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPawnHelpers.IsThirdPersonPawnNative
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterPawnHelpers::STATIC_IsThirdPersonPawnNative(class AShooterCharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPawnHelpers.IsThirdPersonPawnNative");

	UShooterPawnHelpers_IsThirdPersonPawnNative_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPawnHelpers.IsThirdPersonAndBranch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBluePrintBranchControl> OutResult                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShooterPawnHelpers::STATIC_IsThirdPersonAndBranch(class AShooterCharacter* InCharacter, TEnumAsByte<EBluePrintBranchControl>* OutResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPawnHelpers.IsThirdPersonAndBranch");

	UShooterPawnHelpers_IsThirdPersonAndBranch_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResult != nullptr)
		*OutResult = params.OutResult;
}


// Function ShooterGame.ShooterPawnHelpers.IsAliveFirstPersonPawnNative
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterPawnHelpers::STATIC_IsAliveFirstPersonPawnNative(class AShooterCharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPawnHelpers.IsAliveFirstPersonPawnNative");

	UShooterPawnHelpers_IsAliveFirstPersonPawnNative_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPawnHelpers.FergNormalizeFloatToOne
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          EventTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxTime                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterPawnHelpers::STATIC_FergNormalizeFloatToOne(float CurrentTime, float EventTime, float MaxTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPawnHelpers.FergNormalizeFloatToOne");

	UShooterPawnHelpers_FergNormalizeFloatToOne_Params params;
	params.CurrentTime = CurrentTime;
	params.EventTime = EventTime;
	params.MaxTime = MaxTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCosmeticLootSpawner.OnRep_CosmeticData
// (Final, Native, Protected)

void AShooterCosmeticLootSpawner::OnRep_CosmeticData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCosmeticLootSpawner.OnRep_CosmeticData");

	AShooterCosmeticLootSpawner_OnRep_CosmeticData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCosmeticLootSpawner.OnLoadoutApplied
// (Final, Native, Protected)

void AShooterCosmeticLootSpawner::OnLoadoutApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCosmeticLootSpawner.OnLoadoutApplied");

	AShooterCosmeticLootSpawner_OnLoadoutApplied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPickup_Armor.OnPickup
// (Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPickup_Armor::OnPickup(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup_Armor.OnPickup");

	AShooterPickup_Armor_OnPickup_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPickup_Armor.NetMulticastSetHealthPercentage
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// float                          NewHealthPercentage            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPickup_Armor::NetMulticastSetHealthPercentage(float NewHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPickup_Armor.NetMulticastSetHealthPercentage");

	AShooterPickup_Armor_NetMulticastSetHealthPercentage_Params params;
	params.NewHealthPercentage = NewHealthPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeaponPickup.SetItemAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseVendingAmount              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeaponPickup::SetItemAmount(int Amount, bool bUseVendingAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeaponPickup.SetItemAmount");

	AShooterWeaponPickup_SetItemAmount_Params params;
	params.Amount = Amount;
	params.bUseVendingAmount = bUseVendingAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeaponPickup_BouncePad.NetMulticastPlayBounceFX
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class AShooterCharacter*       UserCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWeaponPickup_BouncePad::NetMulticastPlayBounceFX(class AShooterCharacter* UserCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeaponPickup_BouncePad.NetMulticastPlayBounceFX");

	AShooterWeaponPickup_BouncePad_NetMulticastPlayBounceFX_Params params;
	params.UserCharacter = UserCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerCameraManager.HandleFOVUpdatedFromUI
// (Final, Native, Public)
// Parameters:
// float                          NewFOV                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterPlayerCameraManager::HandleFOVUpdatedFromUI(float NewFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerCameraManager.HandleFOVUpdatedFromUI");

	AShooterPlayerCameraManager_HandleFOVUpdatedFromUI_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPrimitiveImpactHandler.SetSoundsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsOn                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterPrimitiveImpactHandler::SetSoundsEnabled(bool bIsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPrimitiveImpactHandler.SetSoundsEnabled");

	UShooterPrimitiveImpactHandler_SetSoundsEnabled_Params params;
	params.bIsOn = bIsOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPrimitiveImpactHandler.SetDecalsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsOn                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterPrimitiveImpactHandler::SetDecalsEnabled(bool bIsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPrimitiveImpactHandler.SetDecalsEnabled");

	UShooterPrimitiveImpactHandler_SetDecalsEnabled_Params params;
	params.bIsOn = bIsOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPrimitiveImpactHandler.OnImpact
// (Final, Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UShooterPrimitiveImpactHandler::OnImpact(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPrimitiveImpactHandler.OnImpact");

	UShooterPrimitiveImpactHandler_OnImpact_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRecycleBin.OnInteract
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterRecycleBin::OnInteract(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRecycleBin.OnInteract");

	AShooterRecycleBin_OnInteract_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRecycleBin.OnCashOutDelayFinished
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            CashOutValue                   (Parm, ZeroConstructor, IsPlainOldData)

void AShooterRecycleBin::OnCashOutDelayFinished(class AShooterCharacter* OtherActor, int CashOutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRecycleBin.OnCashOutDelayFinished");

	AShooterRecycleBin_OnCashOutDelayFinished_Params params;
	params.OtherActor = OtherActor;
	params.CashOutValue = CashOutValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRecycleBin.NetMulticastInteractStarted
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterRecycleBin::NetMulticastInteractStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRecycleBin.NetMulticastInteractStarted");

	AShooterRecycleBin_NetMulticastInteractStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRecycleBin.NetMulticastInteractCompleted
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterRecycleBin::NetMulticastInteractCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRecycleBin.NetMulticastInteractCompleted");

	AShooterRecycleBin_NetMulticastInteractCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HackerDrone.ClientAckDroneMovement
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FDroneMoveAck           MoveAck                        (ConstParm, Parm, ReferenceParm)

void AHackerDrone::ClientAckDroneMovement(const struct FDroneMoveAck& MoveAck)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HackerDrone.ClientAckDroneMovement");

	AHackerDrone_ClientAckDroneMovement_Params params;
	params.MoveAck = MoveAck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.Shooter_FireZone.PlayTeamFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            MyTeamNum                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooter_FireZone::PlayTeamFX(int MyTeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.Shooter_FireZone.PlayTeamFX");

	AShooter_FireZone_PlayTeamFX_Params params;
	params.MyTeamNum = MyTeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAccelGate.OnGateOverlapped
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShooterAccelGate::OnGateOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAccelGate.OnGateOverlapped");

	AShooterAccelGate_OnGateOverlapped_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDeployableShield.NetMultiCastSetShieldPosRot
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 Pos                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rot                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDeployableShield::NetMultiCastSetShieldPosRot(const struct FVector& Pos, const struct FRotator& Rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDeployableShield.NetMultiCastSetShieldPosRot");

	AShooterDeployableShield_NetMultiCastSetShieldPosRot_Params params;
	params.Pos = Pos;
	params.Rot = Rot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroid_Bomb.NetMulticastPlayDetonateFX
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AShooterDroid_Bomb::NetMulticastPlayDetonateFX(const struct FHitResult& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroid_Bomb.NetMulticastPlayDetonateFX");

	AShooterDroid_Bomb_NetMulticastPlayDetonateFX_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroidShield.OnSpectatorTargetChanged
// (Final, Native, Protected)
// Parameters:
// class AShooterCharacter*       NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDroidShield::OnSpectatorTargetChanged(class AShooterCharacter* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroidShield.OnSpectatorTargetChanged");

	AShooterDroidShield_OnSpectatorTargetChanged_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroidShield.OnDedicatedSpectatorToggled
// (Final, Native, Protected)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDroidShield::OnDedicatedSpectatorToggled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroidShield.OnDedicatedSpectatorToggled");

	AShooterDroidShield_OnDedicatedSpectatorToggled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroidShield.NetMulticastSetEnterExitFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// TArray<class AShooterCharacter*> Characters                     (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// bool                           IsEntering                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterDroidShield::NetMulticastSetEnterExitFX(TArray<class AShooterCharacter*> Characters, bool IsEntering)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroidShield.NetMulticastSetEnterExitFX");

	AShooterDroidShield_NetMulticastSetEnterExitFX_Params params;
	params.Characters = Characters;
	params.IsEntering = IsEntering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroidShield.NetMulticastBeginDestroy
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShooterDroidShield::NetMulticastBeginDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroidShield.NetMulticastBeginDestroy");

	AShooterDroidShield_NetMulticastBeginDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroidShield.HandleDestroyFX
// (Event, Protected, BlueprintEvent)

void AShooterDroidShield::HandleDestroyFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroidShield.HandleDestroyFX");

	AShooterDroidShield_HandleDestroyFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHealMine.OnRep_IsLeftDrone
// (Final, Native, Protected)

void AShooterHealMine::OnRep_IsLeftDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHealMine.OnRep_IsLeftDrone");

	AShooterHealMine_OnRep_IsLeftDrone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHealMine.NetMulticastSpawnDroneWarpInFX
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterHealMine::NetMulticastSpawnDroneWarpInFX(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHealMine.NetMulticastSpawnDroneWarpInFX");

	AShooterHealMine_NetMulticastSpawnDroneWarpInFX_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHealMine.AttachToPlayer
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       PlayerToAttach                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterHealMine::AttachToPlayer(class AShooterCharacter* PlayerToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHealMine.AttachToPlayer");

	AShooterHealMine_AttachToPlayer_Params params;
	params.PlayerToAttach = PlayerToAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterLightingSphere.MulticastRemoveShockedCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// Parameters:
// class AShooterCharacter*       CharacterToRemove              (Parm, ZeroConstructor, IsPlainOldData)

void AShooterLightingSphere::MulticastRemoveShockedCharacter(class AShooterCharacter* CharacterToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterLightingSphere.MulticastRemoveShockedCharacter");

	AShooterLightingSphere_MulticastRemoveShockedCharacter_Params params;
	params.CharacterToRemove = CharacterToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterLightingSphere.MulticastAddShockedCharacter
// (Net, NetReliable, Native, Event, NetMulticast, Protected, NetValidate)
// Parameters:
// class AShooterCharacter*       CharacterToAdd                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterLightingSphere::MulticastAddShockedCharacter(class AShooterCharacter* CharacterToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterLightingSphere.MulticastAddShockedCharacter");

	AShooterLightingSphere_MulticastAddShockedCharacter_Params params;
	params.CharacterToAdd = CharacterToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterReconTrackerBomb.NetMultiCastPlayPingFX
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShooterReconTrackerBomb::NetMultiCastPlayPingFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterReconTrackerBomb.NetMultiCastPlayPingFX");

	AShooterReconTrackerBomb_NetMultiCastPlayPingFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterReconTrackerBomb.MulticastNotifyExplosion
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<class AActor*>          DamagedActors                  (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// class AShooterCharacter*       PlayerOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// class AShooterCharacter*       Attached                       (Parm, ZeroConstructor, IsPlainOldData)

void AShooterReconTrackerBomb::MulticastNotifyExplosion(TArray<class AActor*> DamagedActors, class AShooterCharacter* PlayerOwner, const struct FHitResult& Impact, class AShooterCharacter* Attached)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterReconTrackerBomb.MulticastNotifyExplosion");

	AShooterReconTrackerBomb_MulticastNotifyExplosion_Params params;
	params.DamagedActors = DamagedActors;
	params.PlayerOwner = PlayerOwner;
	params.Impact = Impact;
	params.Attached = Attached;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterReconTrackerBomb.AttachToPlayer
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AShooterCharacter*       PlayerToAttach                 (Parm, ZeroConstructor, IsPlainOldData)

void AShooterReconTrackerBomb::AttachToPlayer(class AShooterCharacter* PlayerToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterReconTrackerBomb.AttachToPlayer");

	AShooterReconTrackerBomb_AttachToPlayer_Params params;
	params.PlayerToAttach = PlayerToAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTripWire.OnRep_EndPoint
// (Final, Native, Public)

void AShooterTripWire::OnRep_EndPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTripWire.OnRep_EndPoint");

	AShooterTripWire_OnRep_EndPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.OnRep_Exploded
// (Final, Native, Public)

void AShooterProjectile::OnRep_Exploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.OnRep_Exploded");

	AShooterProjectile_OnRep_Exploded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.NotifyReturnToPool
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterProjectile::NotifyReturnToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.NotifyReturnToPool");

	AShooterProjectile_NotifyReturnToPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.BlueprintExplode
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShooterProjectile::BlueprintExplode(const struct FHitResult& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.BlueprintExplode");

	AShooterProjectile_BlueprintExplode_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile.BlueprintEnableTicking
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterProjectile::BlueprintEnableTicking(bool InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile.BlueprintEnableTicking");

	AShooterProjectile_BlueprintEnableTicking_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_Bomb.NetMulticastSpawnExplosionFX
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void AShooterProjectile_Bomb::NetMulticastSpawnExplosionFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_Bomb.NetMulticastSpawnExplosionFX");

	AShooterProjectile_Bomb_NetMulticastSpawnExplosionFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_Bomb.Detonate
// (Final, Native, Private)

void AShooterProjectile_Bomb::Detonate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_Bomb.Detonate");

	AShooterProjectile_Bomb_Detonate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_BounceNade.OnRep_TimedExplodeFXStarted
// (Native, Public)

void AShooterProjectile_BounceNade::OnRep_TimedExplodeFXStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_BounceNade.OnRep_TimedExplodeFXStarted");

	AShooterProjectile_BounceNade_OnRep_TimedExplodeFXStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_BounceNade.OnBounce
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterProjectile_BounceNade::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_BounceNade.OnBounce");

	AShooterProjectile_BounceNade_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_BounceNade.OnBeginTimedExplodeFX
// (Event, Public, BlueprintEvent)

void AShooterProjectile_BounceNade::OnBeginTimedExplodeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_BounceNade.OnBeginTimedExplodeFX");

	AShooterProjectile_BounceNade_OnBeginTimedExplodeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_BounceNade.NotifyBounce
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AShooterProjectile_BounceNade::NotifyBounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_BounceNade.NotifyBounce");

	AShooterProjectile_BounceNade_NotifyBounce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_Disruptor.OnBounce
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterProjectile_Disruptor::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_Disruptor.OnBounce");

	AShooterProjectile_Disruptor_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_Flame.OnOverlapBegin
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShooterProjectile_Flame::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_Flame.OnOverlapBegin");

	AShooterProjectile_Flame_OnOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComponent = OtherComponent;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_GroundDetonate.OnBounce
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterProjectile_GroundDetonate::OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_GroundDetonate.OnBounce");

	AShooterProjectile_GroundDetonate_OnBounce_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_QuickThrow.OnBounce
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AShooterProjectile_QuickThrow::OnBounce(const struct FHitResult& Hit, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_QuickThrow.OnBounce");

	AShooterProjectile_QuickThrow_OnBounce_Params params;
	params.Hit = Hit;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterProjectile_QuickThrow.NetMulticastSetMesh
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class USkeletalMesh*           NewMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           BarrelMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           ScopeMesh                      (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           MagMesh                        (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMesh*           UnderbarrelMesh                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterProjectile_QuickThrow::NetMulticastSetMesh(class USkeletalMesh* NewMesh, class USkeletalMesh* BarrelMesh, class USkeletalMesh* ScopeMesh, class USkeletalMesh* MagMesh, class USkeletalMesh* UnderbarrelMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterProjectile_QuickThrow.NetMulticastSetMesh");

	AShooterProjectile_QuickThrow_NetMulticastSetMesh_Params params;
	params.NewMesh = NewMesh;
	params.BarrelMesh = BarrelMesh;
	params.ScopeMesh = ScopeMesh;
	params.MagMesh = MagMesh;
	params.UnderbarrelMesh = UnderbarrelMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShieldedObject.SpawnShield
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterShield*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterShield* AShooterShieldedObject::SpawnShield(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShieldedObject.SpawnShield");

	AShooterShieldedObject_SpawnShield_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterShieldedObject.ShieldDamaged
// (Event, Public, BlueprintEvent)

void AShooterShieldedObject::ShieldDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShieldedObject.ShieldDamaged");

	AShooterShieldedObject_ShieldDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShieldedObject.SetShieldFullHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Health                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterShieldedObject::SetShieldFullHealth(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShieldedObject.SetShieldFullHealth");

	AShooterShieldedObject_SetShieldFullHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShieldedObject.GetShieldCursorizedHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterShieldedObject::GetShieldCursorizedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShieldedObject.GetShieldCursorizedHealth");

	AShooterShieldedObject_GetShieldCursorizedHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterShieldedObject.AdjustShieldHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HealthIncrement                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterShieldedObject::AdjustShieldHealth(float HealthIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShieldedObject.AdjustShieldHealth");

	AShooterShieldedObject_AdjustShieldHealth_Params params;
	params.HealthIncrement = HealthIncrement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.UserDrop
// (Native, Public, BlueprintCallable)

void AShooterCarryObject::UserDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.UserDrop");

	AShooterCarryObject_UserDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.SetPickupAllowed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInPickupAllowed               (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCarryObject::SetPickupAllowed(bool bInPickupAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.SetPickupAllowed");

	AShooterCarryObject_SetPickupAllowed_Params params;
	params.bInPickupAllowed = bInPickupAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.ResetToNearestPoint
// (Final, Native, Public, BlueprintCallable)

void AShooterCarryObject::ResetToNearestPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.ResetToNearestPoint");

	AShooterCarryObject_ResetToNearestPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.ResetPosition
// (Native, Public, BlueprintCallable)

void AShooterCarryObject::ResetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.ResetPosition");

	AShooterCarryObject_ResetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.PlayDialogueTeamSpecific
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           FriendlyEvent                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           EnemyEvent                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           SpectatorEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           CarrierEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       CarrierPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinReplayTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCarryObject::PlayDialogueTeamSpecific(class UAkAudioEvent* FriendlyEvent, class UAkAudioEvent* EnemyEvent, class UAkAudioEvent* SpectatorEvent, class UAkAudioEvent* CarrierEvent, int TeamNumber, class AShooterCharacter* CarrierPlayer, int Priority, float MinReplayTime, float MaxWaitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.PlayDialogueTeamSpecific");

	AShooterCarryObject_PlayDialogueTeamSpecific_Params params;
	params.FriendlyEvent = FriendlyEvent;
	params.EnemyEvent = EnemyEvent;
	params.SpectatorEvent = SpectatorEvent;
	params.CarrierEvent = CarrierEvent;
	params.TeamNumber = TeamNumber;
	params.CarrierPlayer = CarrierPlayer;
	params.Priority = Priority;
	params.MinReplayTime = MinReplayTime;
	params.MaxWaitTime = MaxWaitTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.PlayDialogue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           OnDiscardSound                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumReplayTimeInSeconds     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaximumWaitTimeBeforeInterruptingInSeconds (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopWhenOwnerDestroyed         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCarryObject::PlayDialogue(class UAkAudioEvent* Sound, class UAkAudioEvent* OnDiscardSound, int Priority, TEnumAsByte<EDialogueConflictResolution> SamePriorityConflictResolution, TEnumAsByte<EDialogueConflictResolution> LowerPriorityConflictResolution, float MinimumReplayTimeInSeconds, float MaximumWaitTimeBeforeInterruptingInSeconds, bool StopWhenOwnerDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.PlayDialogue");

	AShooterCarryObject_PlayDialogue_Params params;
	params.Sound = Sound;
	params.OnDiscardSound = OnDiscardSound;
	params.Priority = Priority;
	params.SamePriorityConflictResolution = SamePriorityConflictResolution;
	params.LowerPriorityConflictResolution = LowerPriorityConflictResolution;
	params.MinimumReplayTimeInSeconds = MinimumReplayTimeInSeconds;
	params.MaximumWaitTimeBeforeInterruptingInSeconds = MaximumWaitTimeBeforeInterruptingInSeconds;
	params.StopWhenOwnerDestroyed = StopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.PickUp
// (Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Other                          (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCarryObject::PickUp(class AShooterCharacter* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.PickUp");

	AShooterCarryObject_PickUp_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.PickedUpOnHost
// (Event, Public, BlueprintEvent)

void AShooterCarryObject::PickedUpOnHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.PickedUpOnHost");

	AShooterCarryObject_PickedUpOnHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.PickedUpOnClient
// (Event, Public, BlueprintEvent)

void AShooterCarryObject::PickedUpOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.PickedUpOnClient");

	AShooterCarryObject_PickedUpOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.OnRep_Carrier
// (Final, Native, Public)

void AShooterCarryObject::OnRep_Carrier()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.OnRep_Carrier");

	AShooterCarryObject_OnRep_Carrier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.OnOzoneReset
// (Event, Public, BlueprintEvent)

void AShooterCarryObject::OnOzoneReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.OnOzoneReset");

	AShooterCarryObject_OnOzoneReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.OnOutOfWorld
// (Event, Public, BlueprintEvent)

void AShooterCarryObject::OnOutOfWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.OnOutOfWorld");

	AShooterCarryObject_OnOutOfWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.IsPickupAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterCarryObject::IsPickupAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.IsPickupAllowed");

	AShooterCarryObject_IsPickupAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterCarryObject.DroppedOnHost
// (Event, Public, BlueprintEvent)

void AShooterCarryObject::DroppedOnHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.DroppedOnHost");

	AShooterCarryObject_DroppedOnHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.DroppedOnClient
// (Event, Public, BlueprintEvent)

void AShooterCarryObject::DroppedOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.DroppedOnClient");

	AShooterCarryObject_DroppedOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCarryObject.Drop
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnableMovement                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterCarryObject::Drop(bool bEnableMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCarryObject.Drop");

	AShooterCarryObject_Drop_Params params;
	params.bEnableMovement = bEnableMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicle.OnInteract
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterSimpleVehicle::OnInteract(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicle.OnInteract");

	AShooterSimpleVehicle_OnInteract_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicle.GetDriver
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* AShooterSimpleVehicle::GetDriver()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicle.GetDriver");

	AShooterSimpleVehicle_GetDriver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterSimpleVehicle.ClientAckVehicleMovement
// (Net, Native, Event, Protected, NetClient)
// Parameters:
// struct FVehicleMoveAck         MoveAck                        (Parm)

void AShooterSimpleVehicle::ClientAckVehicleMovement(const struct FVehicleMoveAck& MoveAck)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicle.ClientAckVehicleMovement");

	AShooterSimpleVehicle_ClientAckVehicleMovement_Params params;
	params.MoveAck = MoveAck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBike.SetBikeRaceActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void AShooterBike::SetBikeRaceActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBike.SetBikeRaceActive");

	AShooterBike_SetBikeRaceActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBike.OnRep_BikeRace
// (Final, Native, Protected)

void AShooterBike::OnRep_BikeRace()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBike.OnRep_BikeRace");

	AShooterBike_OnRep_BikeRace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.ShieldDamaged
// (Event, Protected, BlueprintEvent)

void AShooterShield::ShieldDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.ShieldDamaged");

	AShooterShield_ShieldDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.SetFullHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Health                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterShield::SetFullHealth(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.SetFullHealth");

	AShooterShield_SetFullHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.SetCurrentHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewHealth                      (Parm, ZeroConstructor, IsPlainOldData)

void AShooterShield::SetCurrentHealth(float NewHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.SetCurrentHealth");

	AShooterShield_SetCurrentHealth_Params params;
	params.NewHealth = NewHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.PlayersExitedDepletionZoneHost
// (Event, Public, BlueprintEvent)

void AShooterShield::PlayersExitedDepletionZoneHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.PlayersExitedDepletionZoneHost");

	AShooterShield_PlayersExitedDepletionZoneHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.PlayersEnteredDepletionZoneHost
// (Event, Public, BlueprintEvent)

void AShooterShield::PlayersEnteredDepletionZoneHost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.PlayersEnteredDepletionZoneHost");

	AShooterShield_PlayersEnteredDepletionZoneHost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.OnRep_MaxHealth
// (Final, Native, Public)

void AShooterShield::OnRep_MaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.OnRep_MaxHealth");

	AShooterShield_OnRep_MaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.OnRep_CurrentHealthCompressed
// (Final, Native, Public)

void AShooterShield::OnRep_CurrentHealthCompressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.OnRep_CurrentHealthCompressed");

	AShooterShield_OnRep_CurrentHealthCompressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterShield.IsLocalPlayerWithinRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AShooterShield::IsLocalPlayerWithinRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.IsLocalPlayerWithinRadius");

	AShooterShield_IsLocalPlayerWithinRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterShield.GetCursorizedHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterShield::GetCursorizedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.GetCursorizedHealth");

	AShooterShield_GetCursorizedHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterShield.GetCurrentHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AShooterShield::GetCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.GetCurrentHealth");

	AShooterShield_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterShield.AdjustHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HealthIncrement                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AShooterShield::AdjustHealth(float HealthIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShield.AdjustHealth");

	AShooterShield_AdjustHealth_Params params;
	params.HealthIncrement = HealthIncrement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleStopped
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleStopped");

	UShooterSimpleVehicleAnimInstance_OnVehicleStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleStartedMoving
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleStartedMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleStartedMoving");

	UShooterSimpleVehicleAnimInstance_OnVehicleStartedMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleSprintingStopped
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleSprintingStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleSprintingStopped");

	UShooterSimpleVehicleAnimInstance_OnVehicleSprintingStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleSprinting
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleSprinting");

	UShooterSimpleVehicleAnimInstance_OnVehicleSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleLiftoff
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleLiftoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleLiftoff");

	UShooterSimpleVehicleAnimInstance_OnVehicleLiftoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleLanded
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleLanded");

	UShooterSimpleVehicleAnimInstance_OnVehicleLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleJumped
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleJumped");

	UShooterSimpleVehicleAnimInstance_OnVehicleJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleJumpCharging
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleJumpCharging()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleJumpCharging");

	UShooterSimpleVehicleAnimInstance_OnVehicleJumpCharging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleExited
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterSimpleVehicleAnimInstance::OnVehicleExited(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleExited");

	UShooterSimpleVehicleAnimInstance_OnVehicleExited_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleEntered
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            SeatIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterSimpleVehicleAnimInstance::OnVehicleEntered(int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleEntered");

	UShooterSimpleVehicleAnimInstance_OnVehicleEntered_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleBraking
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bWasMovingForward              (Parm, ZeroConstructor, IsPlainOldData)

void UShooterSimpleVehicleAnimInstance::OnVehicleBraking(bool bWasMovingForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleBraking");

	UShooterSimpleVehicleAnimInstance_OnVehicleBraking_Params params;
	params.bWasMovingForward = bWasMovingForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAnimValuesUpdated
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleAnimValuesUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAnimValuesUpdated");

	UShooterSimpleVehicleAnimInstance_OnVehicleAnimValuesUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAccelerationStopped
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleAccelerationStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAccelerationStopped");

	UShooterSimpleVehicleAnimInstance_OnVehicleAccelerationStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAcceleration
// (Event, Public, BlueprintEvent)

void UShooterSimpleVehicleAnimInstance::OnVehicleAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSimpleVehicleAnimInstance.OnVehicleAcceleration");

	UShooterSimpleVehicleAnimInstance_OnVehicleAcceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpectatorPawn.ResetLookRoll
// (Final, Native, Protected, BlueprintCallable)

void AShooterSpectatorPawn::ResetLookRoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpectatorPawn.ResetLookRoll");

	AShooterSpectatorPawn_ResetLookRoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpectatorPawn.AddMoveSpeedInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterSpectatorPawn::AddMoveSpeedInput(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpectatorPawn.AddMoveSpeedInput");

	AShooterSpectatorPawn_AddMoveSpeedInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpectatorPawn.AddMoveDeccelInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterSpectatorPawn::AddMoveDeccelInput(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpectatorPawn.AddMoveDeccelInput");

	AShooterSpectatorPawn_AddMoveDeccelInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpectatorPawn.AddMoveAccelInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterSpectatorPawn::AddMoveAccelInput(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpectatorPawn.AddMoveAccelInput");

	AShooterSpectatorPawn_AddMoveAccelInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpectatorPawn.AddLookSpeedInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterSpectatorPawn::AddLookSpeedInput(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpectatorPawn.AddLookSpeedInput");

	AShooterSpectatorPawn_AddLookSpeedInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpectatorPawn.AddDOFScaleInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterSpectatorPawn::AddDOFScaleInput(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpectatorPawn.AddDOFScaleInput");

	AShooterSpectatorPawn_AddDOFScaleInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpectatorPawn.AddDOFFocalDistanceInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AShooterSpectatorPawn::AddDOFFocalDistanceInput(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpectatorPawn.AddDOFFocalDistanceInput");

	AShooterSpectatorPawn_AddDOFFocalDistanceInput_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpin2WinCrate.OnStartSpin2WinCrateEvent
// (Event, Protected, BlueprintEvent)

void AShooterSpin2WinCrate::OnStartSpin2WinCrateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpin2WinCrate.OnStartSpin2WinCrateEvent");

	AShooterSpin2WinCrate_OnStartSpin2WinCrateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpin2WinCrate.OnRep_IsDropping
// (Final, Native, Protected)

void AShooterSpin2WinCrate::OnRep_IsDropping()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpin2WinCrate.OnRep_IsDropping");

	AShooterSpin2WinCrate_OnRep_IsDropping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpin2WinCrate.OnReleaseSpin2WinCrateEvent
// (Event, Protected, BlueprintEvent)

void AShooterSpin2WinCrate::OnReleaseSpin2WinCrateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpin2WinCrate.OnReleaseSpin2WinCrateEvent");

	AShooterSpin2WinCrate_OnReleaseSpin2WinCrateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpin2WinCrate.OnLandSpin2WinCrateEvent
// (Event, Protected, BlueprintEvent)

void AShooterSpin2WinCrate::OnLandSpin2WinCrateEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpin2WinCrate.OnLandSpin2WinCrateEvent");

	AShooterSpin2WinCrate_OnLandSpin2WinCrateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpin2WinCrate.NetMulticast_OnLandSpin2WinCrate
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShooterSpin2WinCrate::NetMulticast_OnLandSpin2WinCrate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpin2WinCrate.NetMulticast_OnLandSpin2WinCrate");

	AShooterSpin2WinCrate_NetMulticast_OnLandSpin2WinCrate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterStashBox.NotifySpawnFXFinished
// (Final, Native, Protected, BlueprintCallable)

void AShooterStashBox::NotifySpawnFXFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterStashBox.NotifySpawnFXFinished");

	AShooterStashBox_NotifySpawnFXFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterStashBox.BPSpawnContents
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERarityLevel>      ContentsQuality                (Parm, ZeroConstructor, IsPlainOldData)

void AShooterStashBox::BPSpawnContents(TEnumAsByte<ERarityLevel> ContentsQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterStashBox.BPSpawnContents");

	AShooterStashBox_BPSpawnContents_Params params;
	params.ContentsQuality = ContentsQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterStashBox.BPDisableLoopingParticles
// (Event, Public, BlueprintEvent)

void AShooterStashBox::BPDisableLoopingParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterStashBox.BPDisableLoopingParticles");

	AShooterStashBox_BPDisableLoopingParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterStashBox.BPCleanupBox
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bForceInstant                  (Parm, ZeroConstructor, IsPlainOldData)

void AShooterStashBox::BPCleanupBox(bool bForceInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterStashBox.BPCleanupBox");

	AShooterStashBox_BPCleanupBox_Params params;
	params.bForceInstant = bForceInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSupplyLinePackage.SpawnItems
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AShooterSupplyLinePackage::SpawnItems(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSupplyLinePackage.SpawnItems");

	AShooterSupplyLinePackage_SpawnItems_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTimeOfDayController.OnMatchStart
// (Event, Public, BlueprintEvent)

void AShooterTimeOfDayController::OnMatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTimeOfDayController.OnMatchStart");

	AShooterTimeOfDayController_OnMatchStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTimeOfDayController.OnFinalShowdownStart
// (Event, Public, BlueprintEvent)

void AShooterTimeOfDayController::OnFinalShowdownStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTimeOfDayController.OnFinalShowdownStart");

	AShooterTimeOfDayController_OnFinalShowdownStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTimeOfDayController.OnFinalShowdownReachGround
// (Event, Public, BlueprintEvent)

void AShooterTimeOfDayController::OnFinalShowdownReachGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTimeOfDayController.OnFinalShowdownReachGround");

	AShooterTimeOfDayController_OnFinalShowdownReachGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUrgentCare.OnInteractStop
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterUrgentCare::OnInteractStop(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUrgentCare.OnInteractStop");

	AShooterUrgentCare_OnInteractStop_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUrgentCare.OnInteractStart
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AShooterUrgentCare::OnInteractStart(class AShooterCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUrgentCare.OnInteractStart");

	AShooterUrgentCare_OnInteractStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.AbilityLayoutWidget.SetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityLayoutWidget::SetCharacter(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.AbilityLayoutWidget.SetCharacter");

	UAbilityLayoutWidget_SetCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.AbilityLayoutWidget.GetAttachedCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AShooterCharacter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AShooterCharacter* UAbilityLayoutWidget::GetAttachedCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.AbilityLayoutWidget.GetAttachedCharacter");

	UAbilityLayoutWidget_GetAttachedCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.GameStateWidgetRnR.SlideOut
// (Event, Public, BlueprintEvent)

void UGameStateWidgetRnR::SlideOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.GameStateWidgetRnR.SlideOut");

	UGameStateWidgetRnR_SlideOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.GameStateWidgetRnR.SlideIn
// (Event, Public, BlueprintEvent)

void UGameStateWidgetRnR::SlideIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.GameStateWidgetRnR.SlideIn");

	UGameStateWidgetRnR_SlideIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.GameStateWidgetRnR.AliveCountChanged
// (Event, Public, BlueprintEvent)

void UGameStateWidgetRnR::AliveCountChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.GameStateWidgetRnR.AliveCountChanged");

	UGameStateWidgetRnR_AliveCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.GaugeWidget.SetNewColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            InColor                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGaugeWidget::SetNewColor(const struct FLinearColor& InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.GaugeWidget.SetNewColor");

	UGaugeWidget_SetNewColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HealthGaugeWidget.SetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UHealthGaugeWidget::SetCharacter(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HealthGaugeWidget.SetCharacter");

	UHealthGaugeWidget_SetCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HealthGaugeWidget.GetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UHealthGaugeWidget::GetColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HealthGaugeWidget.GetColor");

	UHealthGaugeWidget_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.HudGameModesWidget.NotifyBatteryInCenter
// (Native, Event, Public, BlueprintEvent)

void UHudGameModesWidget::NotifyBatteryInCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HudGameModesWidget.NotifyBatteryInCenter");

	UHudGameModesWidget_NotifyBatteryInCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.HudGameModesWidget.HideBatteryInCenter
// (Event, Public, BlueprintEvent)

void UHudGameModesWidget::HideBatteryInCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.HudGameModesWidget.HideBatteryInCenter");

	UHudGameModesWidget_HideBatteryInCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbilityWidget.UpdateKeyMapping
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bGamepad                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterAbilityWidget::UpdateKeyMapping(bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.UpdateKeyMapping");

	UShooterAbilityWidget_UpdateKeyMapping_Params params;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterAbilityWidget.IsAbilityReadyVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UShooterAbilityWidget::IsAbilityReadyVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.IsAbilityReadyVisible");

	UShooterAbilityWidget_IsAbilityReadyVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbilityWidget.IsAbilityReady
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbilityWidget::IsAbilityReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.IsAbilityReady");

	UShooterAbilityWidget_IsAbilityReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbilityWidget.IsAbilityActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShooterAbilityWidget::IsAbilityActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.IsAbilityActive");

	UShooterAbilityWidget_IsAbilityActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbilityWidget.GetCoolDownVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UShooterAbilityWidget::GetCoolDownVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.GetCoolDownVisible");

	UShooterAbilityWidget_GetCoolDownVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbilityWidget.GetCoolDownPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShooterAbilityWidget::GetCoolDownPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.GetCoolDownPercent");

	UShooterAbilityWidget_GetCoolDownPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbilityWidget.GetChargeCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShooterAbilityWidget::GetChargeCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.GetChargeCount");

	UShooterAbilityWidget_GetChargeCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterAbilityWidget.GetAbility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UShooterAbility*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UShooterAbility* UShooterAbilityWidget::GetAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterAbilityWidget.GetAbility");

	UShooterAbilityWidget_GetAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterBindableKeyWidget.UpdateKeyBinding
// (Final, Native, Public)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterBindableKeyWidget::UpdateKeyBinding(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBindableKeyWidget.UpdateKeyBinding");

	UShooterBindableKeyWidget_UpdateKeyBinding_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterBlitzGoalWidget.UpdateColor
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Team                           (Parm, ZeroConstructor, IsPlainOldData)

void UShooterBlitzGoalWidget::UpdateColor(int Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterBlitzGoalWidget.UpdateColor");

	UShooterBlitzGoalWidget_UpdateColor_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterInputHoldWidget.UpdateButtonImage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKEY                    KEY                            (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterInputHoldWidget::UpdateButtonImage(const struct FKEY& KEY)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterInputHoldWidget.UpdateButtonImage");

	UShooterInputHoldWidget_UpdateButtonImage_Params params;
	params.KEY = KEY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacterInfoWidget.ShowSupplyLineError
// (Event, Public, BlueprintEvent)

void UShooterCharacterInfoWidget::ShowSupplyLineError()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterInfoWidget.ShowSupplyLineError");

	UShooterCharacterInfoWidget_ShowSupplyLineError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacterInfoWidget.ShowProneError
// (Event, Public, BlueprintEvent)

void UShooterCharacterInfoWidget::ShowProneError()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterInfoWidget.ShowProneError");

	UShooterCharacterInfoWidget_ShowProneError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCharacterInfoWidget.SetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCharacterInfoWidget::SetCharacter(class AShooterCharacter* InCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCharacterInfoWidget.SetCharacter");

	UShooterCharacterInfoWidget_SetCharacter_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterChatMasterWidget.TextCommitted
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterChatMasterWidget::TextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterChatMasterWidget.TextCommitted");

	UShooterChatMasterWidget_TextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterChatMasterWidget.TextChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterChatMasterWidget::TextChanged(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterChatMasterWidget.TextChanged");

	UShooterChatMasterWidget_TextChanged_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterChatWidget.TextCommitted
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterChatWidget::TextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterChatWidget.TextCommitted");

	UShooterChatWidget_TextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterChatWidget.TextChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterChatWidget::TextChanged(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterChatWidget.TextChanged");

	UShooterChatWidget_TextChanged_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCompassWidget.ComponentMarkerRemoved
// (Final, Native, Protected)
// Parameters:
// uint32_t                       ComponentID                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCompassWidget::ComponentMarkerRemoved(uint32_t ComponentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCompassWidget.ComponentMarkerRemoved");

	UShooterCompassWidget_ComponentMarkerRemoved_Params params;
	params.ComponentID = ComponentID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCompassWidget.ComponentMarkerAdded
// (Final, Native, Protected)
// Parameters:
// uint32_t                       ComponentID                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCompassWidget::ComponentMarkerAdded(uint32_t ComponentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCompassWidget.ComponentMarkerAdded");

	UShooterCompassWidget_ComponentMarkerAdded_Params params;
	params.ComponentID = ComponentID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponSwapFireMode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           StandardMode                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCrosshairWidget::WeaponSwapFireMode(bool StandardMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponSwapFireMode");

	UShooterCrosshairWidget_WeaponSwapFireMode_Params params;
	params.StandardMode = StandardMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponSuperFireStop
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponSuperFireStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponSuperFireStop");

	UShooterCrosshairWidget_WeaponSuperFireStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponSuperFireStart
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponSuperFireStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponSuperFireStart");

	UShooterCrosshairWidget_WeaponSuperFireStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponStartCharge
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponStartCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponStartCharge");

	UShooterCrosshairWidget_WeaponStartCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponRemoteDetonateInRange
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponRemoteDetonateInRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponRemoteDetonateInRange");

	UShooterCrosshairWidget_WeaponRemoteDetonateInRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponReloadStart
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponReloadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponReloadStart");

	UShooterCrosshairWidget_WeaponReloadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponReloadFinished
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponReloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponReloadFinished");

	UShooterCrosshairWidget_WeaponReloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponPumpStart
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponPumpStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponPumpStart");

	UShooterCrosshairWidget_WeaponPumpStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponLoseKillTarget
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponLoseKillTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponLoseKillTarget");

	UShooterCrosshairWidget_WeaponLoseKillTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponGainKillTarget
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponGainKillTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponGainKillTarget");

	UShooterCrosshairWidget_WeaponGainKillTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponFired
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponFired");

	UShooterCrosshairWidget_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponEquipStarted
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponEquipStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponEquipStarted");

	UShooterCrosshairWidget_WeaponEquipStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponEquipFinished
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponEquipFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponEquipFinished");

	UShooterCrosshairWidget_WeaponEquipFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.WeaponChargeFire
// (Event, Public, BlueprintEvent)

void UShooterCrosshairWidget::WeaponChargeFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.WeaponChargeFire");

	UShooterCrosshairWidget_WeaponChargeFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.UserSettingsChanged
// (Final, Native, Protected)

void UShooterCrosshairWidget::UserSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.UserSettingsChanged");

	UShooterCrosshairWidget_UserSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.ItemRecharge
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCrosshairWidget::ItemRecharge(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.ItemRecharge");

	UShooterCrosshairWidget_ItemRecharge_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.ItemReady
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCrosshairWidget::ItemReady(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.ItemReady");

	UShooterCrosshairWidget_ItemReady_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.ItemDeployed
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCrosshairWidget::ItemDeployed(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.ItemDeployed");

	UShooterCrosshairWidget_ItemDeployed_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterCrosshairWidget.CrosshairColorChanged
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterCrosshairWidget::CrosshairColorChanged(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterCrosshairWidget.CrosshairColorChanged");

	UShooterCrosshairWidget_CrosshairColorChanged_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroneHealWidget.StopHealingAnimation
// (Native, Event, Public, BlueprintEvent)

void UShooterDroneHealWidget::StopHealingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroneHealWidget.StopHealingAnimation");

	UShooterDroneHealWidget_StopHealingAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterDroneHealWidget.PlayHealingAnimation
// (Native, Event, Public, BlueprintEvent)

void UShooterDroneHealWidget::PlayHealingAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterDroneHealWidget.PlayHealingAnimation");

	UShooterDroneHealWidget_PlayHealingAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterEomRankWidget.SuperlativeChanged
// (Event, Public, BlueprintEvent)

void UShooterEomRankWidget::SuperlativeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterEomRankWidget.SuperlativeChanged");

	UShooterEomRankWidget_SuperlativeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterEomRankWidget.RankCountdownComplete
// (Event, Public, BlueprintEvent)

void UShooterEomRankWidget::RankCountdownComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterEomRankWidget.RankCountdownComplete");

	UShooterEomRankWidget_RankCountdownComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterEoMWidgetRNR.SpectateClicked
// (Final, Native, Protected)

void UShooterEoMWidgetRNR::SpectateClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterEoMWidgetRNR.SpectateClicked");

	UShooterEoMWidgetRNR_SpectateClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterEoMWidgetRNR.ExitClicked
// (Final, Native, Protected)

void UShooterEoMWidgetRNR::ExitClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterEoMWidgetRNR.ExitClicked");

	UShooterEoMWidgetRNR_ExitClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterFadeWidget.OnFadeComplete
// (Final, Native, Protected, BlueprintCallable)

void UShooterFadeWidget::OnFadeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterFadeWidget.OnFadeComplete");

	UShooterFadeWidget_OnFadeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterFadeWidget.Cut
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bToBlack                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterFadeWidget::Cut(bool bToBlack)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterFadeWidget.Cut");

	UShooterFadeWidget_Cut_Params params;
	params.bToBlack = bToBlack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterFadeWidget.BeginFade
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bToBlack                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeLength                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterFadeWidget::BeginFade(bool bToBlack, float FadeLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterFadeWidget.BeginFade");

	UShooterFadeWidget_BeginFade_Params params;
	params.bToBlack = bToBlack;
	params.FadeLength = FadeLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameModeStatusWidget.StatusTextShown
// (Event, Public, BlueprintEvent)

void UShooterGameModeStatusWidget::StatusTextShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameModeStatusWidget.StatusTextShown");

	UShooterGameModeStatusWidget_StatusTextShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameModeStatusWidget.StatusTextHidden
// (Event, Public, BlueprintEvent)

void UShooterGameModeStatusWidget::StatusTextHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameModeStatusWidget.StatusTextHidden");

	UShooterGameModeStatusWidget_StatusTextHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameModeStatusWidget.SetAndShowStatusText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UShooterGameModeStatusWidget::SetAndShowStatusText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameModeStatusWidget.SetAndShowStatusText");

	UShooterGameModeStatusWidget_SetAndShowStatusText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameModeStatusWidget.HideStatusText
// (Final, Native, Public, BlueprintCallable)

void UShooterGameModeStatusWidget::HideStatusText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameModeStatusWidget.HideStatusText");

	UShooterGameModeStatusWidget_HideStatusText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameModeWidget.ScoreLimitChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            NewScoreLimit                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameModeWidget::ScoreLimitChanged(int NewScoreLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameModeWidget.ScoreLimitChanged");

	UShooterGameModeWidget_ScoreLimitChanged_Params params;
	params.NewScoreLimit = NewScoreLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameModeWidget.OnTeamUpdate
// (Event, Public, BlueprintEvent)

void UShooterGameModeWidget::OnTeamUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameModeWidget.OnTeamUpdate");

	UShooterGameModeWidget_OnTeamUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterGameModeWidget.LivePlayerCountsChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            LivePlayersTeam0               (Parm, ZeroConstructor, IsPlainOldData)
// int                            LivePlayersTeam1               (Parm, ZeroConstructor, IsPlainOldData)

void UShooterGameModeWidget::LivePlayerCountsChanged(int LivePlayersTeam0, int LivePlayersTeam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterGameModeWidget.LivePlayerCountsChanged");

	UShooterGameModeWidget_LivePlayerCountsChanged_Params params;
	params.LivePlayersTeam0 = LivePlayersTeam0;
	params.LivePlayersTeam1 = LivePlayersTeam1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTurfWarWidget.TurfWarZoneOwnership
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            ZoneIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ZoneTeam                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterTurfWarWidget::TurfWarZoneOwnership(int ZoneIndex, int ZoneTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTurfWarWidget.TurfWarZoneOwnership");

	UShooterTurfWarWidget_TurfWarZoneOwnership_Params params;
	params.ZoneIndex = ZoneIndex;
	params.ZoneTeam = ZoneTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTurfWarWidget.TurfWarInIntermissionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIntermissionActive            (Parm, ZeroConstructor, IsPlainOldData)

void UShooterTurfWarWidget::TurfWarInIntermissionChanged(bool bIntermissionActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTurfWarWidget.TurfWarInIntermissionChanged");

	UShooterTurfWarWidget_TurfWarInIntermissionChanged_Params params;
	params.bIntermissionActive = bIntermissionActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHitReticleWidget.UpdateHitPipParameters
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          StartFraction                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndFraction                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHitType>          HitType                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bKill                          (Parm, ZeroConstructor, IsPlainOldData)

void UShooterHitReticleWidget::UpdateHitPipParameters(float StartFraction, float EndFraction, TEnumAsByte<EHitType> HitType, bool bKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHitReticleWidget.UpdateHitPipParameters");

	UShooterHitReticleWidget_UpdateHitPipParameters_Params params;
	params.StartFraction = StartFraction;
	params.EndFraction = EndFraction;
	params.HitType = HitType;
	params.bKill = bKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHitReticleWidget.UpdateHitColorIntensity
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          TimeSinceDamage                (Parm, ZeroConstructor, IsPlainOldData)

void UShooterHitReticleWidget::UpdateHitColorIntensity(float TimeSinceDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHitReticleWidget.UpdateHitColorIntensity");

	UShooterHitReticleWidget_UpdateHitColorIntensity_Params params;
	params.TimeSinceDamage = TimeSinceDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnZoneCloseWarning
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   WarningText                    (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterHUD_LMS::OnZoneCloseWarning(const struct FText& WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnZoneCloseWarning");

	UShooterHUD_LMS_OnZoneCloseWarning_Params params;
	params.WarningText = WarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnSpinToWinStart
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnSpinToWinStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnSpinToWinStart");

	UShooterHUD_LMS_OnSpinToWinStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnSpinToWinEnd
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnSpinToWinEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnSpinToWinEnd");

	UShooterHUD_LMS_OnSpinToWinEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnHideAdvice
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnHideAdvice()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnHideAdvice");

	UShooterHUD_LMS_OnHideAdvice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnFinalShowdownCountdown
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnFinalShowdownCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnFinalShowdownCountdown");

	UShooterHUD_LMS_OnFinalShowdownCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnFinalShowdownClosing
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnFinalShowdownClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnFinalShowdownClosing");

	UShooterHUD_LMS_OnFinalShowdownClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnEnterWarningZone
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnEnterWarningZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnEnterWarningZone");

	UShooterHUD_LMS_OnEnterWarningZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnEnterDangerZone
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnEnterDangerZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnEnterDangerZone");

	UShooterHUD_LMS_OnEnterDangerZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnBikeRaceStart
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnBikeRaceStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnBikeRaceStart");

	UShooterHUD_LMS_OnBikeRaceStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.OnBikeRaceEnd
// (Event, Public, BlueprintEvent)

void UShooterHUD_LMS::OnBikeRaceEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.OnBikeRaceEnd");

	UShooterHUD_LMS_OnBikeRaceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterHUD_LMS.GetCurrentStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECharacterMovementStance> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECharacterMovementStance> UShooterHUD_LMS::GetCurrentStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHUD_LMS.GetCurrentStance");

	UShooterHUD_LMS_GetCurrentStance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterHudWidget.OnLocalRespawn
// (Event, Public, BlueprintEvent)

void UShooterHudWidget::OnLocalRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterHudWidget.OnLocalRespawn");

	UShooterHudWidget_OnLocalRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterInvCard.OnInventoryUpdate
// (Final, Native, Public)

void UShooterInvCard::OnInventoryUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterInvCard.OnInventoryUpdate");

	UShooterInvCard_OnInventoryUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterInventoryButtons.UpdateKeyBinding
// (Final, Native, Protected)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UShooterInventoryButtons::UpdateKeyBinding(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterInventoryButtons.UpdateKeyBinding");

	UShooterInventoryButtons_UpdateKeyBinding_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterInventoryEquippedItemInfo.OnInventoryUpdate
// (Final, Native, Public)

void UShooterInventoryEquippedItemInfo::OnInventoryUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterInventoryEquippedItemInfo.OnInventoryUpdate");

	UShooterInventoryEquippedItemInfo_OnInventoryUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterInventoryBaseList.OnInventoryUpdate
// (Native, Public)

void UShooterInventoryBaseList::OnInventoryUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterInventoryBaseList.OnInventoryUpdate");

	UShooterInventoryBaseList_OnInventoryUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterJuggernautWidget.ToggleFuelState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterJuggernautWidget::ToggleFuelState(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterJuggernautWidget.ToggleFuelState");

	UShooterJuggernautWidget_ToggleFuelState_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterKillFeed.OnDedicatedSpectatorToggled
// (Final, Native, Private)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UShooterKillFeed::OnDedicatedSpectatorToggled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterKillFeed.OnDedicatedSpectatorToggled");

	UShooterKillFeed_OnDedicatedSpectatorToggled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterLockOnIcon.UpdateLockCursor
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          LockCursor                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterLockOnIcon::UpdateLockCursor(float LockCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterLockOnIcon.UpdateLockCursor");

	UShooterLockOnIcon_UpdateLockCursor_Params params;
	params.LockCursor = LockCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMapWidget.MyMarkerClicked
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGeometry               InGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShooterMapWidget::MyMarkerClicked(const struct FGeometry& InGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMapWidget.MyMarkerClicked");

	UShooterMapWidget_MyMarkerClicked_Params params;
	params.InGeometry = InGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMapWidget.MapScrolled
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGeometry               InGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShooterMapWidget::MapScrolled(const struct FGeometry& InGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMapWidget.MapScrolled");

	UShooterMapWidget_MapScrolled_Params params;
	params.InGeometry = InGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMapWidget.MapClicked
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGeometry               InGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UShooterMapWidget::MapClicked(const struct FGeometry& InGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMapWidget.MapClicked");

	UShooterMapWidget_MapClicked_Params params;
	params.InGeometry = InGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterMapWidget.ComponentMarkerRemoved
// (Final, Native, Protected)
// Parameters:
// uint32_t                       ComponentID                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterMapWidget::ComponentMarkerRemoved(uint32_t ComponentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMapWidget.ComponentMarkerRemoved");

	UShooterMapWidget_ComponentMarkerRemoved_Params params;
	params.ComponentID = ComponentID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterMapWidget.ComponentMarkerAdded
// (Final, Native, Protected)
// Parameters:
// uint32_t                       ComponentID                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterMapWidget::ComponentMarkerAdded(uint32_t ComponentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterMapWidget.ComponentMarkerAdded");

	UShooterMapWidget_ComponentMarkerAdded_Params params;
	params.ComponentID = ComponentID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCHealMeWidget.ToggleHealLockOn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterNPCHealMeWidget::ToggleHealLockOn(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCHealMeWidget.ToggleHealLockOn");

	UShooterNPCHealMeWidget_ToggleHealLockOn_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCHealMeWidget.OnResetVisuals
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShooterNPCHealMeWidget::OnResetVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCHealMeWidget.OnResetVisuals");

	UShooterNPCHealMeWidget_OnResetVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCHealMeWidget.OnRequestHeal
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShooterNPCHealMeWidget::OnRequestHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCHealMeWidget.OnRequestHeal");

	UShooterNPCHealMeWidget_OnRequestHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCHealMeWidget.OnHealPerformed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShooterNPCHealMeWidget::OnHealPerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCHealMeWidget.OnHealPerformed");

	UShooterNPCHealMeWidget_OnHealPerformed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCHealthBar.SetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForSpectatorScoreboard        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterNPCHealthBar::SetCharacter(class AShooterCharacter* Character, bool bForSpectatorScoreboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCHealthBar.SetCharacter");

	UShooterNPCHealthBar_SetCharacter_Params params;
	params.Character = Character;
	params.bForSpectatorScoreboard = bForSpectatorScoreboard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCHealthBar.OnRequestHeal
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShooterNPCHealthBar::OnRequestHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCHealthBar.OnRequestHeal");

	UShooterNPCHealthBar_OnRequestHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCHealthBar.OnLowHealthStateChange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLowHealth                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterNPCHealthBar::OnLowHealthStateChange(bool bLowHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCHealthBar.OnLowHealthStateChange");

	UShooterNPCHealthBar_OnLowHealthStateChange_Params params;
	params.bLowHealth = bLowHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCMasterWidget.SetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterNPCMasterWidget::SetCharacter(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCMasterWidget.SetCharacter");

	UShooterNPCMasterWidget_SetCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCMasterWidget.GetScaleCanvasWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCanvasPanel* UShooterNPCMasterWidget::GetScaleCanvasWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCMasterWidget.GetScaleCanvasWidget");

	UShooterNPCMasterWidget_GetScaleCanvasWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterNPCMasterWidget.GetNameWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShooterNPCNameWidget*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterNPCNameWidget* UShooterNPCMasterWidget::GetNameWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCMasterWidget.GetNameWidget");

	UShooterNPCMasterWidget_GetNameWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterNPCMasterWidget.GetHealthBarWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShooterNPCHealthBar*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterNPCHealthBar* UShooterNPCMasterWidget::GetHealthBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCMasterWidget.GetHealthBarWidget");

	UShooterNPCMasterWidget_GetHealthBarWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterNPCMasterWidget.GetHealMeWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UShooterNPCHealMeWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShooterNPCHealMeWidget* UShooterNPCMasterWidget::GetHealMeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCMasterWidget.GetHealMeWidget");

	UShooterNPCMasterWidget_GetHealMeWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterNPCNameWidget.ToggleHealLockOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)

void UShooterNPCNameWidget::ToggleHealLockOn(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCNameWidget.ToggleHealLockOn");

	UShooterNPCNameWidget_ToggleHealLockOn_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCNameWidget.SetCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AShooterCharacter*       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterNPCNameWidget::SetCharacter(class AShooterCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCNameWidget.SetCharacter");

	UShooterNPCNameWidget_SetCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterNPCNameWidget.OnUpdatePlayerName
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   NewName                        (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterNPCNameWidget::OnUpdatePlayerName(const struct FText& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterNPCNameWidget.OnUpdatePlayerName");

	UShooterNPCNameWidget_OnUpdatePlayerName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterObjectiveWorldWidget.SetCountdownTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewTimeInSeconds               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterObjectiveWorldWidget::SetCountdownTimer(int NewTimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterObjectiveWorldWidget.SetCountdownTimer");

	UShooterObjectiveWorldWidget_SetCountdownTimer_Params params;
	params.NewTimeInSeconds = NewTimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.ToggleOptionsMenu
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::ToggleOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.ToggleOptionsMenu");

	UShooterOptionsMenu_ToggleOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.SetMapAndModeNames
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ModeName                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   MapName                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ModeDescription                (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterOptionsMenu::SetMapAndModeNames(const struct FText& ModeName, const struct FText& MapName, const struct FText& ModeDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.SetMapAndModeNames");

	UShooterOptionsMenu_SetMapAndModeNames_Params params;
	params.ModeName = ModeName;
	params.MapName = MapName;
	params.ModeDescription = ModeDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.QuitGame
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.QuitGame");

	UShooterOptionsMenu_QuitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.PreGameEnded
// (Event, Public, BlueprintEvent)

void UShooterOptionsMenu::PreGameEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.PreGameEnded");

	UShooterOptionsMenu_PreGameEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.OnSpectatorToggled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSpectator                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterOptionsMenu::OnSpectatorToggled(bool bSpectator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.OnSpectatorToggled");

	UShooterOptionsMenu_OnSpectatorToggled_Params params;
	params.bSpectator = bSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.LeaveWithParty
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::LeaveWithParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.LeaveWithParty");

	UShooterOptionsMenu_LeaveWithParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.LeaveMatch
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::LeaveMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.LeaveMatch");

	UShooterOptionsMenu_LeaveMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.GoToSettings
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::GoToSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.GoToSettings");

	UShooterOptionsMenu_GoToSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.GoToRoleDetails
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::GoToRoleDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.GoToRoleDetails");

	UShooterOptionsMenu_GoToRoleDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.GoToProfile
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::GoToProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.GoToProfile");

	UShooterOptionsMenu_GoToProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.GoToPlayerOptions
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::GoToPlayerOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.GoToPlayerOptions");

	UShooterOptionsMenu_GoToPlayerOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.GoToCharacterSelect
// (Final, Native, Public, BlueprintCallable)

void UShooterOptionsMenu::GoToCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.GoToCharacterSelect");

	UShooterOptionsMenu_GoToCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterOptionsMenu.GetModeImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UShooterOptionsMenu::GetModeImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.GetModeImage");

	UShooterOptionsMenu_GetModeImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterOptionsMenu.GetMapImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UShooterOptionsMenu::GetMapImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterOptionsMenu.GetMapImage");

	UShooterOptionsMenu_GetMapImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ShooterGame.ShooterPlayerList.OnEntryVisibilityChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UShooterPlayerListEntry* Entry                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsVisible                     (Parm, ZeroConstructor, IsPlainOldData)

void UShooterPlayerList::OnEntryVisibilityChanged(class UShooterPlayerListEntry* Entry, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerList.OnEntryVisibilityChanged");

	UShooterPlayerList_OnEntryVisibilityChanged_Params params;
	params.Entry = Entry;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerImageEntry.OnPlayerStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EShooterPlayerStatus> PlayerStatus                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterPlayerImageEntry::OnPlayerStatusChanged(TEnumAsByte<EShooterPlayerStatus> PlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerImageEntry.OnPlayerStatusChanged");

	UShooterPlayerImageEntry_OnPlayerStatusChanged_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterSpecScoreboardEntry.OnCarryObjectChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AShooterCarryObject*     CarryObject                    (Parm, ZeroConstructor, IsPlainOldData)

void UShooterSpecScoreboardEntry::OnCarryObjectChanged(class AShooterCarryObject* CarryObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterSpecScoreboardEntry.OnCarryObjectChanged");

	UShooterSpecScoreboardEntry_OnCarryObjectChanged_Params params;
	params.CarryObject = CarryObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerScoreWidget.OnSpectatorTargetChanged
// (Final, Native, Protected)
// Parameters:
// class AShooterCharacter*       NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void UShooterPlayerScoreWidget::OnSpectatorTargetChanged(class AShooterCharacter* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerScoreWidget.OnSpectatorTargetChanged");

	UShooterPlayerScoreWidget_OnSpectatorTargetChanged_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterPlayerStatusWidget.OnAdrenalineBoost
// (Event, Public, BlueprintEvent)

void UShooterPlayerStatusWidget::OnAdrenalineBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterPlayerStatusWidget.OnAdrenalineBoost");

	UShooterPlayerStatusWidget_OnAdrenalineBoost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRadarIcon.HideImages
// (Event, Public, BlueprintEvent)

void UShooterRadarIcon::HideImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRadarIcon.HideImages");

	UShooterRadarIcon_HideImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRadarIcon.FadeOutWidget
// (Event, Public, BlueprintEvent)

void UShooterRadarIcon::FadeOutWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRadarIcon.FadeOutWidget");

	UShooterRadarIcon_FadeOutWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRadarIcon.FadeInWidget
// (Event, Public, BlueprintEvent)

void UShooterRadarIcon::FadeInWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRadarIcon.FadeInWidget");

	UShooterRadarIcon_FadeInWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRadar.UpdateRadarIcon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UShooterRadarIcon*       RadarIcon                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FShooterRadarIconSet    EnemyIconSet                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FShooterRadarIconSet    TeamIconSet                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UShooterRadar::UpdateRadarIcon(class UShooterRadarIcon* RadarIcon, const struct FShooterRadarIconSet& EnemyIconSet, const struct FShooterRadarIconSet& TeamIconSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRadar.UpdateRadarIcon");

	UShooterRadar_UpdateRadarIcon_Params params;
	params.RadarIcon = RadarIcon;
	params.EnemyIconSet = EnemyIconSet;
	params.TeamIconSet = TeamIconSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterRadar.GatherActiveRadarIcons
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UOverlay*                ParentOverlay                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UShooterRadarIcon*> OutActiveRadarIcons            (Parm, OutParm, ZeroConstructor)

void UShooterRadar::GatherActiveRadarIcons(class UOverlay* ParentOverlay, TArray<class UShooterRadarIcon*>* OutActiveRadarIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterRadar.GatherActiveRadarIcons");

	UShooterRadar_GatherActiveRadarIcons_Params params;
	params.ParentOverlay = ParentOverlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActiveRadarIcons != nullptr)
		*OutActiveRadarIcons = params.OutActiveRadarIcons;
}


// Function ShooterGame.ShooterShieldGenWidget.UpdateHealth
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          healthCursor                   (Parm, ZeroConstructor, IsPlainOldData)

void UShooterShieldGenWidget::UpdateHealth(float healthCursor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterShieldGenWidget.UpdateHealth");

	UShooterShieldGenWidget_UpdateHealth_Params params;
	params.healthCursor = healthCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterThreatIndicator.PlayHitAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterThreatIndicator::PlayHitAnim(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterThreatIndicator.PlayHitAnim");

	UShooterThreatIndicator_PlayHitAnim_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterThreatIndicator.ClearThreatIndicators
// (Final, Native, Public, BlueprintCallable)

void UShooterThreatIndicator::ClearThreatIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterThreatIndicator.ClearThreatIndicators");

	UShooterThreatIndicator_ClearThreatIndicators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterToastWidget.QueueToastMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   ToastDescription               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ToastLabel                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   FlairText1                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   FlairText2                     (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ToastImageName                 (Parm, ZeroConstructor)

void UShooterToastWidget::QueueToastMessage(const struct FText& ToastDescription, const struct FText& ToastLabel, const struct FText& FlairText1, const struct FText& FlairText2, const class FString& ToastImageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterToastWidget.QueueToastMessage");

	UShooterToastWidget_QueueToastMessage_Params params;
	params.ToastDescription = ToastDescription;
	params.ToastLabel = ToastLabel;
	params.FlairText1 = FlairText1;
	params.FlairText2 = FlairText2;
	params.ToastImageName = ToastImageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterToastWidget.BPToastMessage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   ToastDescription               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ToastLabel                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   FlairText1                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   FlairText2                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UTexture2D*              AchievementImage               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UShooterToastWidget::BPToastMessage(const struct FText& ToastDescription, const struct FText& ToastLabel, const struct FText& FlairText1, const struct FText& FlairText2, class UTexture2D* AchievementImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterToastWidget.BPToastMessage");

	UShooterToastWidget_BPToastMessage_Params params;
	params.ToastDescription = ToastDescription;
	params.ToastLabel = ToastLabel;
	params.FlairText1 = FlairText1;
	params.FlairText2 = FlairText2;
	params.AchievementImage = AchievementImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterToastWidget.BPHideToast
// (Event, Public, BlueprintEvent)

void UShooterToastWidget::BPHideToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterToastWidget.BPHideToast");

	UShooterToastWidget_BPHideToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTooltipWidget.SetText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterTooltipWidget::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTooltipWidget.SetText");

	UShooterTooltipWidget_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTutorialTooltipWidget.UpdateAndShowTooltipInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FTutorialToolTipInfo    ToolTipInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UShooterTutorialTooltipWidget::UpdateAndShowTooltipInfo(const struct FTutorialToolTipInfo& ToolTipInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTutorialTooltipWidget.UpdateAndShowTooltipInfo");

	UShooterTutorialTooltipWidget_UpdateAndShowTooltipInfo_Params params;
	params.ToolTipInfo = ToolTipInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTutorialTooltipWidget.SetTooltipKeybinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMovementAction                (Parm, ZeroConstructor, IsPlainOldData)

void UShooterTutorialTooltipWidget::SetTooltipKeybinding(const struct FName& ActionName, bool bMovementAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTutorialTooltipWidget.SetTooltipKeybinding");

	UShooterTutorialTooltipWidget_SetTooltipKeybinding_Params params;
	params.ActionName = ActionName;
	params.bMovementAction = bMovementAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterTutorialTooltipWidget.HideToolTip
// (Final, Native, Public)

void UShooterTutorialTooltipWidget::HideToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterTutorialTooltipWidget.HideToolTip");

	UShooterTutorialTooltipWidget_HideToolTip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget_ATM.ToggleMenu
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget_ATM::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget_ATM.ToggleMenu");

	UShooterUserWidget_ATM_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget_ATM.ShowMenu
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget_ATM::ShowMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget_ATM.ShowMenu");

	UShooterUserWidget_ATM_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget_ATM.OnWithdraw
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget_ATM::OnWithdraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget_ATM.OnWithdraw");

	UShooterUserWidget_ATM_OnWithdraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget_ATM.OnDeposit
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget_ATM::OnDeposit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget_ATM.OnDeposit");

	UShooterUserWidget_ATM_OnDeposit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterUserWidget_ATM.HideMenu
// (Final, Native, Public, BlueprintCallable)

void UShooterUserWidget_ATM::HideMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterUserWidget_ATM.HideMenu");

	UShooterUserWidget_ATM_HideMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ZonelockTimerWidget.OnZoneTimerWarningStop
// (Event, Public, BlueprintEvent)

void UZonelockTimerWidget::OnZoneTimerWarningStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ZonelockTimerWidget.OnZoneTimerWarningStop");

	UZonelockTimerWidget_OnZoneTimerWarningStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ZonelockTimerWidget.OnZoneTimerWarningStart
// (Event, Public, BlueprintEvent)

void UZonelockTimerWidget::OnZoneTimerWarningStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ZonelockTimerWidget.OnZoneTimerWarningStart");

	UZonelockTimerWidget_OnZoneTimerWarningStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Detonator.ServerDetonatePlacedExplosives
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void AShooterWeapon_Detonator::ServerDetonatePlacedExplosives()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Detonator.ServerDetonatePlacedExplosives");

	AShooterWeapon_Detonator_ServerDetonatePlacedExplosives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_SupplyLine.ClientNotifyUseFailed
// (Final, Net, NetReliable, Native, Event, Private, NetClient, Const)

void AShooterWeapon_SupplyLine::ClientNotifyUseFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_SupplyLine.ClientNotifyUseFailed");

	AShooterWeapon_SupplyLine_ClientNotifyUseFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWeapon_Scanner.ClientPingEnemies
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// TArray<struct FVector>         EnemyPositionsInRange          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void AShooterWeapon_Scanner::ClientPingEnemies(TArray<struct FVector> EnemyPositionsInRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWeapon_Scanner.ClientPingEnemies");

	AShooterWeapon_Scanner_ClientPingEnemies_Params params;
	params.EnemyPositionsInRange = EnemyPositionsInRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.ShooterWheeledVehicle.OnInteract
// (Final, Native, Public)
// Parameters:
// class AShooterCharacter*       OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterWheeledVehicle::OnInteract(class AShooterCharacter* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.ShooterWheeledVehicle.OnInteract");

	AShooterWheeledVehicle_OnInteract_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterGame.TerminatorSpawner.NetMulticast_OnSpawnDone
// (Final, Net, Native, Event, NetMulticast, Private)

void ATerminatorSpawner::NetMulticast_OnSpawnDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterGame.TerminatorSpawner.NetMulticast_OnSpawnDone");

	ATerminatorSpawner_NetMulticast_OnSpawnDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
