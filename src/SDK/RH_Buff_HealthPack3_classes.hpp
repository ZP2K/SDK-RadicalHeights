#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Buff_HealthPack3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HealthPack3.Buff_HealthPack3_C
// 0x0008 (0x0478 - 0x0470)
class ABuff_HealthPack3_C : public AShooterBuff_HealOverTime
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HealthPack3.Buff_HealthPack3_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
