// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_Noisemaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Noisemaker.Proj_Noisemaker_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AProj_Noisemaker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Noisemaker.Proj_Noisemaker_C.UserConstructionScript");

	AProj_Noisemaker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
