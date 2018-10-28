#pragma once
#include "TM_CommonCPP/Properties.h"
#include <string>
#include <vector>
#include <set>

class Control
{
public:
	static const int VanillaControlID_Count = 29;
	enum VanillaControlID
	{
		Forward,
		Back,
		Left,
		Right,
		Attack,
		Activate,
		Block,
		Cast,
		ReadyWeapon,
		Sneak,
		Run,
		AlwaysRun,
		AutoMove,
		Jump,
		TogglePOV,
		OpenMenu,
		Rest,
		QuickMenu,
		Quick1,
		Quick2,
		Quick3,
		Quick4,
		Quick5,
		Quick6,
		Quick7,
		Quick8,
		QuickSave,
		QuickLoad,
		Grab
	};
	enum MenuModeType
	{
		Both = 0,
		GameMode,
		MenuMode,
	};
	//---Constructors
	Control(UInt32 _ControlID);
	Control(std::string sString);
	~Control(void);
	//---
	std::string ToString();
	std::string Narrate();
	bool IsDisabled();
	void SetOutcome();
	void ResolveModIndices();
	int GetDXScancode();
	//---Members
	std::set<UInt8> cModIndices_Disables;
	UInt32 ControlID;

	std::set<UInt8> cModIndices_UnreportedDisables;
	MenuModeType eMenuModeType;
};
