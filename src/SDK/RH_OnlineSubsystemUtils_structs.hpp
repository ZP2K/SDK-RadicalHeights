#pragma once

// Radical Heights (ALPHA-0-200211) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Basic.hpp"
#include "RH_Engine_classes.hpp"
#include "RH_OnlineSubsystem_classes.hpp"
#include "RH_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_Banned = 10,
	EPartyReservationResult__ReservationRequestCanceled = 11,
	EPartyReservationResult__ReservationInvalid = 12,
	EPartyReservationResult__BadSessionId = 13,
	EPartyReservationResult__EPartyReservationResult_MAX = 14
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__EClientRequestType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0030
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0018) (Transient)
	class FString                                      ValidationStr;                                            // 0x0018(0x0010) (ZeroConstructor, Transient)
	float                                              ElapsedTime;                                              // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0030
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0018) (Transient)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0020(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	class FString                                      ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Token;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Transient)
	class FString                                      Type;                                                     // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              TokenBytes;                                               // 0x0030(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
