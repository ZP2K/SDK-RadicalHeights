#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Burger_WeaponPackage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Burger_WeaponPackage.Burger_WeaponPackage_C
// 0x0000 (0x0658 - 0x0658)
class UBurger_WeaponPackage_C : public UWeaponAnimationPackage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Burger_WeaponPackage.Burger_WeaponPackage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
