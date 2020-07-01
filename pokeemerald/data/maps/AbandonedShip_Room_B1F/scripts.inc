AbandonedShip_Room_B1F_MapScripts:: @ 82380A5
	.byte 0

AbandonedShip_Room_B1F_EventScript_DuskullDoll::
	msgbox AbandonedShip_Rooms_1F_Text_DuskullDoll_2, MSGBOX_NPC
	addvar VAR_ABANDONEDSHIP_DUSKULLDOLL, 1
	fadescreen 1
	setflag FLAG_DUSKULLDOLL_2
	fadescreen 0
	end
	
AbandonedShip_Rooms_1F_Text_DuskullDoll_2:
	.string "Have you found everyone yet?\p"
	.string "We're waiting...$"