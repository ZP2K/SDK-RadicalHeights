// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_ConsumablePickup_Medkit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsumablePickup_Medkit.ConsumablePickup_Medkit_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AConsumablePickup_Medkit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsumablePickup_Medkit.ConsumablePickup_Medkit_C.UserConstructionScript");

	AConsumablePickup_Medkit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
