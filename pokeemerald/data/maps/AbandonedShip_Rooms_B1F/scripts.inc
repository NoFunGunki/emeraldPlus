AbandonedShip_Rooms_B1F_MapScripts:: @ 8237FB7
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Rooms_B1F_OnResume
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Rooms_B1F_OnLoad
	.byte 0

AbandonedShip_Rooms_B1F_OnLoad::
	compare VAR_ABANDONEDSHIP_DUSKULLDOLL, 4
	goto_if_ge AbandonedShip_Rooms_B1F_DhelmiseAppears
	setflag FLAG_DUSKULLDOLL_5
	end

AbandonedShip_Rooms_B1F_DhelmiseAppears::
	clearflag FLAG_DUSKULLDOLL_5
	end

AbandonedShip_Rooms_B1F_DhelmiseRiddleYesNo::
	lockall
	special HasEnoughMonsForDoubleBattle
	compare VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS
	goto_if_ne EventScript_NotEnoughMonsUpDanger
	msgbox AbandonedShip_Text_DoYouWantToPlay, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq AbandonedShip_EventScript_RunAway
	msgbox AbandonedShip_Text_Riddle, MSGBOX_DEFAULT
	multichoice 21, 1, MULTI_DHELMISERIDDLE, 1
	switch VAR_RESULT
	case 0, AbandonedShip_EventScript_Coffin
	case 1, AbandonedShip_EventScript_Creation
	case 2, AbandonedShip_EventScript_Word
	case 3, AbandonedShip_EventScript_Zebra
	case 4, AbandonedShip_EventScript_End
	case 5, AbandonedShip_EventScript_Beginning
	case 6, AbandonedShip_EventScript_GiveUp
	case 7, AbandonedShip_EventScript_Repeat
	releaseall
	end
	
AbandonedShip_EventScript_Coffin::
	trainerbattle_double TRAINER_INVIS_DHELMISE, AbandonedShip_Text_WrongAnswer, AbandonedShip_Text_DhelmiseDefeat, Doubles_Text_NotEnoughMonsDanger
	msgbox AbandonedShip_Text_DhelmiseDefeat, MSGBOX_DEFAULT
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq AbandonedShip_EventScript_PlayerHasFullParty
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end
	
AbandonedShip_EventScript_Creation::
	trainerbattle_double TRAINER_INVIS_DHELMISE, AbandonedShip_Text_WrongAnswer, AbandonedShip_Text_DhelmiseDefeat, Doubles_Text_NotEnoughMonsDanger
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq AbandonedShip_EventScript_PlayerHasFullParty
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end	

AbandonedShip_EventScript_Word::
	trainerbattle_double TRAINER_INVIS_DHELMISE, AbandonedShip_Text_WrongAnswer, AbandonedShip_Text_DhelmiseDefeat, Doubles_Text_NotEnoughMonsDanger
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq AbandonedShip_EventScript_PlayerHasFullParty
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end
	
AbandonedShip_EventScript_Zebra::
	msgbox AbandonedShip_Text_CorrectAnswer, MSGBOX_DEFAULT
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq AbandonedShip_EventScript_PlayerHasFullParty
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end	

AbandonedShip_EventScript_End::
	trainerbattle_double TRAINER_INVIS_DHELMISE, AbandonedShip_Text_WrongAnswer, AbandonedShip_Text_DhelmiseDefeat, Doubles_Text_NotEnoughMonsDanger
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq AbandonedShip_EventScript_PlayerHasFullParty
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end
	
AbandonedShip_EventScript_Beginning::
	trainerbattle_double TRAINER_INVIS_DHELMISE, AbandonedShip_Text_WrongAnswer, AbandonedShip_Text_DhelmiseDefeat, Doubles_Text_NotEnoughMonsDanger
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq AbandonedShip_EventScript_PlayerHasFullParty
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end	

AbandonedShip_EventScript_GiveUp::
	trainerbattle_double TRAINER_INVIS_DHELMISE, AbandonedShip_Text_GiveUp, AbandonedShip_Text_DhelmiseDefeat, Doubles_Text_NotEnoughMonsDanger
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq AbandonedShip_EventScript_PlayerHasFullParty
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end
	
AbandonedShip_EventScript_Repeat::
	goto AbandonedShip_Rooms_B1F_DhelmiseRiddleYesNo
	
	
AbandonedShip_EventScript_PlayerHasFullParty::
	msgbox AbandonedShip_Text_PlayerHasFullParty, MSGBOX_DEFAULT
	givemon SPECIES_DHELMISE, 30, ITEM_RARE_CANDY
	playfanfare MUS_FANFA4
	msgbox AbandonedShip_Text_ReceivedDhelmise, MSGBOX_DEFAULT
	waitfanfare
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_5
	fadescreen 0
	releaseall
	end
	
AbandonedShip_EventScript_RunAway::
	msgbox AbandonedShip_Text_RunAway, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms_B1F_OnResume: @ 8237FBD
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER2, 255, 17, 4
	end

AbandonedShip_Rooms_B1F_EventScript_FatMan:: @ 8237FC6
	msgbox AbandonedShip_Rooms_B1F_Text_GettingQueasy, MSGBOX_NPC
	end

AbandonedShip_Rooms_B1F_Text_GettingQueasy: @ 8237FCF
	.string "Urrrrppp…\p"
	.string "I'm getting queasy just being aboard\n"
	.string "this ship…\p"
	.string "It's not even moving, but…$"

AbandonedShip_Text_CorrectAnswer:
	.string "Correct!\p"
	.string "I did not expect a child to get\n"
	.string "the correct answer, but here you are.\p"
	.string "I will not eat you, {PLAYER}.\p"
	.string "You have proven your cleverness.\p"
	.string "Instead, I wish to follow you on your\n"
	.string "journey, wherever it takes you.$"

AbandonedShip_Text_WrongAnswer:
	.string "Hehehe...\p"
	.string "That is...incorrect!\p"
	.string "Get ready to become our dinner!$"

AbandonedShip_Text_DhelmiseDefeat:
	.string "Hmph...\p"
	.string "You're stronger than I thought.\p"
	.string "I conceded, {PLAYER}.\p"
	.string "I will not eat you and instead I\n"
	.string "wish to follow you on your journey.\p"
	.string "You have proven your strength.$"
	
AbandonedShip_Text_DoYouWantToPlay:
	.string "Answer my riddle, {PLAYER}.\p"
	.string "Choose correctly and you shall\n"
	.string "receive a reward.\p"
	.string "Choose incorrectly and you'll\n"
	.string "become our next meal...\p"
	.string "Are you sure you want to play?$"
	
AbandonedShip_Text_PlayerHasFullParty:
	.string "Your party is full!\p"
	.string "The POKéMON will be sent to\n"
	.string "the PC!$"
	
AbandonedShip_Text_ReceivedDhelmise:
	.string "{PLAYER} received a Dhelmise!$"
	
AbandonedShip_Text_GiveUp:
	.string "Giving up?!\p"
	.string "Don't think you'll be able to\n"
	.string "escape from us just like that!\p"
	
AbandonedShip_Text_RunAway:
	.string "Scared, {PLAYER}?\p"
	.string "Come back when you want to play...\p"
	.string "Hehehe...$"
	
AbandonedShip_Text_Riddle:
	.string "Here's the riddle:\p"
	.string "It begins with the end,\n"
	.string "And ends with the beginning.\p"
	.string "The fifth becomes the second,\n"
	.string "And the second becomes the third.\p"
	.string "And is followed by a pirate's\n"
	.string "favorite word.$"
