#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_DmgType_Rockets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Rockets.DmgType_Rockets_C
// 0x0000 (0x01E0 - 0x01E0)
class UDmgType_Rockets_C : public UShooterDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Rockets.DmgType_Rockets_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
