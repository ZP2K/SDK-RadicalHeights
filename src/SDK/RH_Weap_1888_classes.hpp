#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Weap_1888_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Weap_1888.Weap_1887_C
// 0x0040 (0x0FE0 - 0x0FA0)
class AWeap_1887_C : public AShooterWeapon_Shotgun
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0FA0(0x0018) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              CallFunc_GetComponentsByClass_ReturnValue;                // 0x0FB8(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0FC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0FC9(0x0007) MISSED OFFSET
	TArray<int>                                        K2Node_MakeArray_Array;                                   // 0x0FD0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Weap_1888.Weap_1887_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnWeaponCustomizationCompleted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif