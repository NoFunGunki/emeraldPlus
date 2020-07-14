AbandonedShip_Corridors_1F_MapScripts:: @ 82379A4
	.byte 0

AbandonedShip_Corridors_1F_EventScript_DuskullDoll::
	msgbox AbandonedShip_Rooms_1F_Text_DuskullDoll_3, MSGBOX_NPC
	addvar VAR_ABANDONEDSHIP_DUSKULLDOLL, 1
	fadescreen 1
	removeobject 3
	setflag FLAG_DUSKULLDOLL_3
	fadescreen 0
	end

AbandonedShip_Corridors_1F_EventScript_Youngster:: @ 82379A5
	msgbox AbandonedShip_Corridors_1F_Text_IsntItFunHere, MSGBOX_NPC
	end

AbandonedShip_Corridors_1F_EventScript_Charlie:: @ 82379AE
	trainerbattle_double TRAINER_CHARLIE, AbandonedShip_Corridors_1F_Text_CharlieIntro, AbandonedShip_Corridors_1F_Text_CharlieDefeat, Doubles_Text_NotEnoughMons
	msgbox AbandonedShip_Corridors_1F_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Corridors_1F_Text_CharlieIntro: @ 82379C5
	.string "What's so funny about having my inner\n"
	.string "tube aboard the ship?$"

AbandonedShip_Corridors_1F_Text_CharlieDefeat: @ 8237A01
	.string "Whoa, you overwhelmed me!$"

AbandonedShip_Corridors_1F_Text_CharliePostBattle: @ 8237A1B
	.string "It's not easy throwing POKé BALLS\n"
	.string "while hanging on to an inner tube!$"

AbandonedShip_Corridors_1F_Text_IsntItFunHere: @ 8237A60
	.string "Isn't it fun here?\n"
	.string "I get excited just being here!$"

AbandonedShip_Rooms_1F_Text_DuskullDoll_3:
	.string "Once you find all 4 of us,\n"
	.string "you should go find a room where\l"
	.string "you could go for a swim in...\p"
	.string "hehehe...$"