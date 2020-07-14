Std_RegisteredInMatchCall:: @ 82742C9
	buffertrainerclassname 0, VAR_0x8000
	buffertrainername 1, VAR_0x8000
	closemessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox gText_RegisteredTrainerinPokeNav, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	return

EventScript_TryGetTrainerScript:: @ 82742E6
	special ShouldTryGetTrainerScript
	compare VAR_RESULT, 1
	goto_if_eq EventScript_GotoTrainerScript
	releaseall
	end

EventScript_GotoTrainerScript:: @ 82742F6
	gotobeatenscript
	releaseall
	end

// The following scripts are for checking if a player is ready
// for a Double battle and will push them in the appropriate
// direction if they are not.

EventScript_NotEnoughMonsDown::
	msgbox Doubles_Text_NotEnoughMons, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerDown
	waitmovement 0
	releaseall
	end
	
EventScript_NotEnoughMonsRight::
	msgbox Doubles_Text_NotEnoughMons, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerRight
	waitmovement 0
	releaseall
	end

	
EventScript_NotEnoughMonsLeft::
	msgbox Doubles_Text_NotEnoughMons, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerLeft
	waitmovement 0
	releaseall
	end
	
EventScript_NotEnoughMonsUp::
	msgbox Doubles_Text_NotEnoughMons, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerUp
	waitmovement 0
	releaseall
	end

// The following scripts are for checking if a player is ready
// for a Double battle and will push them in the appropriate
// direction if they are not. These are specifically for 
// plot moments, when there is no NPC to talk to the player

EventScript_NotEnoughMonsDownDanger::
	msgbox Doubles_Text_NotEnoughMonsDanger, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerDown
	waitmovement 0
	releaseall
	end
	
EventScript_NotEnoughMonsRightDanger::
	msgbox Doubles_Text_NotEnoughMonsDanger, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerRight
	waitmovement 0
	releaseall
	end

	
EventScript_NotEnoughMonsLeftDanger::
	msgbox Doubles_Text_NotEnoughMonsDanger, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerLeft
	waitmovement 0
	releaseall
	end
	
EventScript_NotEnoughMonsUpDanger::
	msgbox Doubles_Text_NotEnoughMonsDanger, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, Movement_PushPlayerUp
	waitmovement 0
	releaseall
	end	

// The movements for the above EventScripts	
	
Movement_PushPlayerDown::
	walk_down
	step_end

Movement_PushPlayerRight::
	walk_right
	step_end	
	
Movement_PushPlayerLeft::
	walk_left
	step_end		

Movement_PushPlayerUp::
	walk_up
	step_end	
	
	