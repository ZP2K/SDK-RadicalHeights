#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Proj_Noisemaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass Proj_Noisemaker.Proj_Noisemaker_C
// 0x0008 (0x0640 - 0x0638)
class AProj_Noisemaker_C : public AShooterProjectile
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0638(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Proj_Noisemaker.Proj_Noisemaker_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
