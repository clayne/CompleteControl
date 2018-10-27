#pragma once
#include "Control.h"
#include "TM_CommonCPP/Misc.h"

#include "obse/PluginAPI.h"
#include "obse/CommandTable.h"
#if OBLIVION
#include "obse/GameAPI.h"
#else
#include "obse_editor/EditorAPI.h"
#endif
#include "obse/ParamInfos.h"
#include <vector>
#include <set>
#include "Control.h"
#include <string>
#include "TM_CommonCPP/Misc.h"
#include "TM_CommonCPP/Narrate.h"
#include "TM_CommonCPP/StdStringFromFormatString.h"
#include "TM_CommonCPP_NarrateOverloads.h"
#include "obse/Script.h"
#include "obse/Hooks_DirectInput8Create.h"
#include <sstream>

void SetOutcome(Control vControl);
void SetOutcomeForAllControls(std::vector<Control> cControls);
std::string StringizeControls(std::vector<Control> cControls);
std::vector<Control> ControlsFromString(std::string sBigString);
void SafeConsolePrint(std::string sString);
double ExecuteCommand(Cmd_Execute vCmdExecute, double vArg, COMMAND_ARGS);
double ExecuteCommand(Cmd_Execute vCmdExecute, double vArg);
double ExecuteCommand(const CommandInfo* vCmd, double vArg, COMMAND_ARGS);
double ExecuteCommand(const CommandInfo* vCmd, double vArg);
std::vector<Control> InitializeControls();
