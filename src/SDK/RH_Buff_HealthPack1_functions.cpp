// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Buff_HealthPack1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_HealthPack1.Buff_HealthPack1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_HealthPack1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_HealthPack1.Buff_HealthPack1_C.UserConstructionScript");

	ABuff_HealthPack1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
