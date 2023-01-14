#pragma once
#include <Windows.h>

namespace NieR
{
	struct CModelWork
	{
		void* pVfTable;
	};

	struct CModelData
	{
		byte* pWMB;
	};

	struct CModelPart
	{
		char pad[0x70];
	};

	// entity struct
	struct PlayerModelInfo {
		BYTE gap0[0x390];
		struct CModelManager* m_pModelManager;	//0x0000
		CModelData* m_pModelData;				//0x0008
		CModelPart* m_pParts;					//0x0010
		int m_nParts;							//0x0018
		BYTE gap3AC[524];
		DWORD currentPlayer;
		BYTE gap5BC[65644];
		DWORD dword10628;
		BYTE gap1062C[26292];
		DWORD dword16CE0;
		DWORD dwordShowPants;
		BYTE gap16CE8[4];
		DWORD dword16CEC;
		BYTE gap16CF0[4];
		DWORD isBuddy;
		BYTE gap16CF8[908];
		const unsigned int unsigned_int17084;
		BYTE gap17088[48];
		DWORD dwordisFacialNormal;
		DWORD accessoryEquipped;
		unsigned int unsigned_int170C0;
		DWORD outfitEquipped;
		BYTE gap170C8[1808];
		DWORD dword177D8;
		BYTE gap177DC[256];
		DWORD dwordisDestructed;
		DWORD dword178E0;
	};

	//Known functions
	typedef __int64(__fastcall* FnManageMeshVisibilities)(__int64 pEntity);

	typedef int(__fastcall* FnSearchMeshGroupIndex)(CModelData* pModelData, const char* mesh_name);

	typedef __int64(__fastcall* FnSetDrawBasePlayerMeshes)(CModelWork* pModelWork, int a2);

	typedef __int64(__fastcall* FnUpdateAccessoryOnUnpause)(PlayerModelInfo* pEntity);

	typedef __int64(__fastcall* FnUpdateEquippedActive)(__int64, __int64, int);

	typedef void(__fastcall* FnAnotherAccessoryThing)(PlayerModelInfo*, int);

	typedef char* (__fastcall* FnResolveNameFromItemID)(__int64, __int64);

	typedef int(__fastcall* FnGetAccessoryIDFromItemID)(__int64, int);

	typedef int(__fastcall* FnGetOutfitIDFromItemID)(__int64, int);

	typedef bool(__fastcall* FnValidateAccessory)(__int64, __int64, int);

	typedef bool(__fastcall* FnValidateDLCArmor)(__int64, __int64, int);

	typedef bool(__fastcall* FnValidatePodSkins)(__int64, int);

	typedef bool(__fastcall* FnValidateNonCharacterSpecificEquippable)(__int64, int);

	typedef void(__fastcall* FnSetOutfitFromPause)(PlayerModelInfo*, int, int);

	typedef __int64(__fastcall* FnSetEquippedFromPause)(__int64, int);


	//Unknown functions
	typedef __int64(__fastcall* _sub_745c50)(int*);

	typedef __int64(__fastcall* _sub_45a850)(__int64);

	typedef __int64(__fastcall* _sub_28ed30)(void*, int);

	typedef __int64(__fastcall* _sub_150d80)(void*, void*, void*, int);

	typedef bool(__fastcall* _sub_495970)(void*, unsigned int);

	typedef void(__fastcall* _sub_150b70)(void*);

	typedef __int64(__fastcall* _sub_491170)(int*);

	typedef __int64(__fastcall* _sub_491400)(int*);

	typedef __int64(__fastcall* _sub_7463c0)(__int64);

	typedef void(__fastcall* _sub_3e6b70)(__int64);

	typedef __int64(__fastcall* FnSetMeshToGroup)(__int64, const char*, int, __int64);

	typedef int* (__fastcall* _sub_745c10)(__int64);

	typedef __int64(__fastcall* _sub_45a8c0)(__int64);

	typedef __int64(__fastcall* _sub_3876a0)(__int64*);

	typedef bool(__fastcall* _sub_7e6e60)(__int64, int, __int64);

	typedef __int64(__fastcall* FnGetPlayerFromPlayerNum)(__int64);

	typedef __int64(__fastcall* _sub_7c4b50)();

	typedef int(__fastcall* _sub_7c4b90)();

	typedef __int64(__fastcall* _sub_7c9cb0)(__int64, int, int);

	typedef void(__fastcall* _sub_52e9e0)(__int64, int);
	
	typedef int* (__fastcall* FnLambda)(int*, int*);

	//Known-function pointers
	extern FnManageMeshVisibilities ManageMeshVisibilities;
	extern FnSearchMeshGroupIndex SearchMeshGroupIndex;
	extern FnSetDrawBasePlayerMeshes SetDrawBasePlayerMeshes;
	extern FnUpdateAccessoryOnUnpause UpdateAccessoryOnUnpause;
	extern FnUpdateEquippedActive UpdateEquippedActive;
	extern FnAnotherAccessoryThing AnotherAccessoryThing;
	extern FnResolveNameFromItemID ResolveNameFromItemID;
	extern FnGetAccessoryIDFromItemID GetAccessoryIDFromItemID;
	extern FnGetOutfitIDFromItemID GetOutfitIDFromItemID;
	extern FnValidateAccessory ValidateAccessory;
	extern FnValidateDLCArmor ValidateDLCArmor;
	extern FnValidatePodSkins ValidatePodSkins;
	extern FnValidateNonCharacterSpecificEquippable ValidateNonCharacterSpecificEquippable;
	extern FnSetOutfitFromPause SetOutfitFromPause;
	extern FnSetEquippedFromPause SetEquippedFromPause;
	extern FnLambda Lambda;

	//Unknown-function pointers
	extern _sub_52e9e0 sub_52e9e0;
	extern _sub_7e6e60 sub_7e6e60;
	extern _sub_745c50 sub_745c50;
	extern _sub_45a850 sub_45a850;
	extern _sub_28ed30 sub_28ed30;
	extern _sub_150d80 sub_150d80;
	extern _sub_495970 sub_495970;
	extern _sub_150b70 sub_150b70;
	extern _sub_491170 sub_491170;
	extern _sub_491400 sub_491400;
	extern _sub_7463c0 sub_7463c0;
	extern _sub_3e6b70 sub_3e6b70;
	extern FnSetMeshToGroup SetMeshToGroup;
	extern _sub_745c10 sub_745c10;
	extern _sub_45a8c0 sub_45a8c0;
	extern _sub_3876a0 sub_3876a0;
	extern FnGetPlayerFromPlayerNum GetPlayerFromPlayerNum;
	extern _sub_7c4b50 sub_7c4b50;
	extern _sub_7c4b90 sub_7c4b90;
	extern _sub_7c9cb0 sub_7c9cb0;

	//Saved original functions from hooks
	extern FnManageMeshVisibilities ManageMeshVisiblities;
	extern FnGetOutfitIDFromItemID GetOutfitIDFromItemID;
	extern FnSetEquippedFromPause SetEquippedFromPause;
	extern FnUpdateAccessoryOnUnpause UpdateAccessoryOnUnpause;
	extern FnUpdateEquippedActive UpdateEquippedActive;
	extern FnValidateDLCArmor ValidateDLCArmor;
	extern FnValidateNonCharacterSpecificEquippable ValidateNonSpecificCharacterEquippable;
	extern FnSetMeshToGroup SetMeshToGroup;
}
