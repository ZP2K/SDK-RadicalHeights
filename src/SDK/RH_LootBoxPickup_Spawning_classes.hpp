#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_LootBoxPickup_Spawning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass LootBoxPickup_Spawning.LootBoxPickup_Spawning_C
// 0x0110 (0x04E8 - 0x03D8)
class ALootBoxPickup_Spawning_C : public AShooterPickup
{
public:
	class UAkComponent*                                Box_Explosion_Sound;                                      // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Progress_Bar_Sound;                                       // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LootBox_Pos4;                                             // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LootBox_Pos3;                                             // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LootBox_Pos2;                                             // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LootBox_Pos1;                                             // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LootBox_Spawn;                                            // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterInteractComponent*                   ShooterInteract;                                          // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ChanceToSpawnGrandPrize;                                  // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Grand_Prize_Array;                                        // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DestroyTimer;                                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnedPrizes;                                            // 0x043C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               NewVar_1;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_CheckWarmUpPhase_Warmup;                         // 0x0448(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0449(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x044A(0x0006) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0450(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class AShooterCharacter*                           K2Node_CustomEvent_Interactor3;                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0468(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0478(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x0480(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class AShooterLootGroup*                           K2Node_DynamicCast_AsLoot_Group_Loot_Box_Spawn;           // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x0490(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0491(0x0007) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x0498(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UAkSoundInstance*                            CallFunc_PostAkEvent_ReturnValue;                         // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_Interactor2;                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkSoundInstance*                            CallFunc_PostAkEvent_ReturnValue2;                        // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_Interactor;                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue3;                       // 0x04C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x04D0(0x0014) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               CallFunc_CheckWarmUpPhase_Warmup2;                        // 0x04E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass LootBoxPickup_Spawning.LootBoxPickup_Spawning_C");
		return ptr;
	}


	void UserConstructionScript();
	void StopInteract(class AShooterCharacter* bpp__Interactor__pf);
	void StartInteract(class AShooterCharacter* bpp__Interactor__pf);
	void SpawnLoot(class AShooterCharacter* bpp__Interactor__pf);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LootBoxPickup_Spawning_2(int bpp__EntryPoint__pf);
	void CheckWarmUpPhase(bool* bpp__Warmup__pf);
	void OnStopInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
	void OnStartInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
	void OnInteractDelegate__DelegateSignature(class AShooterCharacter* Interactor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
