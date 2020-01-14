GraniteCave_Boss_MapScripts::
	.byte 0

//Main Boss Script

GraniteCave_EventScript_Boss::
	lock
	faceplayer
	goto_if_set FLAG_GRANITE_CAVE_GIVEHERACROSS, GraniteCave_EventScript_PostBoss //Check if we beat boss and got Heracross
	goto_if_set FLAG_GRANITE_CAVE_BOSS, GraniteCave_EventScript_GiveHeracross //Check if we beat boss, but don't have Heracross
	msgbox GraniteCave_Text_BossYesNo, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_EventScript_PlayerNo
	msgbox GraniteCave_Text_PlayerYes, MSGBOX_DEFAULT
	trainerbattle_double TRAINER_GRANITE_CAVE_BOSS, GraniteCave_Text_BossIntro, GraniteCave_Text_BossDefeated, Doubles_Text_NotEnoughMons, GraniteCave_EventScript_BossDefeated
	release
	end

//Boss Defeated

GraniteCave_EventScript_BossDefeated::
	setflag FLAG_GRANITE_CAVE_BOSS 
	msgbox GraniteCave_Text_BossSurprised
	goto_if_set FLAG_GRANITE_CAVE_BOSS, GraniteCave_EventScript_GiveHeracross 
	release
	end

//Player refuses fight

GraniteCave_EventScript_PlayerNo::  
	msgbox GraniteCave_Text_PlayerPussiedOut
	release
	end
	
//Whenever we talk to Boss after the fight	

GraniteCave_EventScript_PostBoss::
	msgbox GraniteCave_Text_BossPostBattle, MSGBOX_DEFAULT
	release
	end

//Heracross given

GraniteCave_EventScript_GiveHeracross::
	msgbox GraniteCave_Text_TakeHeracross, MSGBOX_DEFAULT
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq GraniteCave_EventScript_FullParty
	givemon SPECIES_HERACROSS, 16, ITEM_NONE
	playfanfare MUS_FANFA4
	msgbox GraniteCave_Text_ReceivedHeracross, MSGBOX_DEFAULT
	waitfanfare
	setflag FLAG_GRANITE_CAVE_GIVEHERACROSS
	msgbox GraniteCave_Text_BossFarewell
	release
	end
	
//Party too full to accept	

GraniteCave_EventScript_FullParty::
	msgbox GraniteCave_Text_FullParty, MSGBOX_DEFAULT
	release
	end
	
//Strings
	
GraniteCave_Text_TakeHeracross::
	.string "Please, take this Heracross in\n"
	.string "honor of our fight!$"
	
GraniteCave_Text_FullParty::
	.string "Your party is full.\p"
	.string "Come back when you have room.$"
	
GraniteCave_Text_ReceivedHeracross::
	.string "{PLAYER} received a Heracross!$"
	
GraniteCave_Text_BossFarewell::
	.string "Take good care of Heracross.\n"
	.string "They'll be a great help against\l"
	.string "the Gym Leader, Brawly.\p"
	.string "A little bit more training and\n"
	.string "Heracross will learn BRICK BREAK!\p"
	.string "That move will shatter Brawly's\n"
	.string "protective shields and Heracross\l"
	.string "is more than capable of taking a\l"
	.string "few hits from Fighting-types.\p"
	.string "Good luck.$"

GraniteCave_Text_BossYesNo::
	.string "I've trained here for a long\n"
	.string "time with my Heracross team so\l"
	.string "that we can defeat the Gym.\p"
	.string "We've gotten pretty strong.\p"
	.string "You want to have a quick battle?\n"
	.string "Fair warning: I'm not going to\l"
	.string "go easy on you!$"
	
GraniteCave_Text_BossIntro::
	.string "UNITED STATES OF SMASH!!!$"

GraniteCave_Text_BossDefeated::
	.string "You're...too...strong...$"
	
GraniteCave_Text_PlayerPussiedOut::
	.string "Go train some more and come\n"
	.string "back when you feel you're\l"
	.string "ready for a challenge.$"

GraniteCave_Text_PlayerYes::
	.string "That's what I like to hear!$"
	
GraniteCave_Text_BossPostBattle::
	.string "Keep training, keep growing.$"
	
GraniteCave_Text_BossSurprised::
	.string "I can't believe it...$"

