#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_HUD_INV_PRIZESLOTS_ENTRY_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass HUD_INV_PRIZESLOTS_ENTRY.HUD_INV_PRIZESLOTS_ENTRY_C
// 0x0010 (0x02A0 - 0x0290)
class UHUD_INV_PRIZESLOTS_ENTRY_C : public UShooterInventoryListSwitcherEntry
{
public:
	class UShooterCachedWidget*                        ShooterCachedWidget_3;                                    // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_INV_PRIZESLOTS_ENTRY.HUD_INV_PRIZESLOTS_ENTRY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
