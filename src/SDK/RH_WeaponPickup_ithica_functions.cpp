// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_WeaponPickup_ithica_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponPickup_ithica.WeaponPickup_ithica_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AWeaponPickup_ithica_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPickup_ithica.WeaponPickup_ithica_C.UserConstructionScript");

	AWeaponPickup_ithica_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
