EverGrandeCity_Hall4_MapScripts:: @ 82295A8
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall4_OnWarp
	.byte 0

EverGrandeCity_Hall4_OnWarp: @ 82295AE
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall4_EventScript_TurnPlayerNorth
	.2byte 0


EverGrandeCity_Hall4_Trigger_CheckPlayerParty::
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne EverGrandeCity_Hall4_EventScript_NotEnoughMons
	releaseall
	end
	
EverGrandeCity_Hall4_EventScript_NotEnoughMons::
	msgbox EverGrandeCity_Hall4_Text_NotEnoughMons, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, EverGrandeCity_Hall4_Movement_NotEnoughMons
	waitmovement 0
	release
	end

EverGrandeCity_Hall4_EventScript_TurnPlayerNorth:: @ 82295B8
	turnobject EVENT_OBJ_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_Hall4_Movement_NotEnoughMons:
	walk_down
	step_end
	
EverGrandeCity_Hall4_Text_NotEnoughMons:
	.string "You don't have enough POKéMON to\n"
	.string "continue the challenge!\p"
	.string "Use items to heal up or use the\n"
	.string "teleporter to the left to quit.$"