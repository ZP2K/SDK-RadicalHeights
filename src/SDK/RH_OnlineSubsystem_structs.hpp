#pragma once

// Radical Heights (ALPHA-1-201356) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RH_Basic.hpp"
#include "RH_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown   = 0,
	EInAppPurchaseState__Success   = 1,
	EInAppPurchaseState__Failed    = 2,
	EInAppPurchaseState__Cancelled = 3,
	EInAppPurchaseState__Invalid   = 4,
	EInAppPurchaseState__NotAllowed = 5,
	EInAppPurchaseState__Restored  = 6,
	EInAppPurchaseState__AlreadyOwned = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 8
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     InterfaceObject;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      InterfaceClassName;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A8
struct FInAppPurchaseProductInfo
{
	class FString                                      Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      TransactionIdentifier;                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayDescription;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayPrice;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              RawPrice;                                                 // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class FString                                      CurrencyCode;                                             // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      CurrencySymbol;                                           // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DecimalSeparator;                                         // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      GroupingSeparator;                                        // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ReceiptData;                                              // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0030
struct FInAppPurchaseRestoreInfo
{
	class FString                                      Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ReceiptData;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      TransactionIdentifier;                                    // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	class FString                                      ProductIdentifier;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsConsumable;                                            // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
