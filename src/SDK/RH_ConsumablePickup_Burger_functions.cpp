// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ConsumablePickup_Burger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsumablePickup_Burger.ConsumablePickup_Burger_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AConsumablePickup_Burger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumablePickup_Burger.ConsumablePickup_Burger_C.UserConstructionScript");

	AConsumablePickup_Burger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
