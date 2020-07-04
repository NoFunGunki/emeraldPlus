Route126_MapScripts:: @ 81F68C6
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
	.byte 0

Route126_OnTransition: @ 81F68CC
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

Route126_EventScript_Barry:: @ 81F68D6
	trainerbattle_double TRAINER_BARRY, Route126_Text_BarryIntro, Route126_Text_BarryDefeat, Doubles_Text_NotEnoughMons
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Dean:: @ 81F68ED
	trainerbattle_double TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat, Doubles_Text_NotEnoughMons
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Nikki:: @ 81F6904
	trainerbattle_double TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat, Doubles_Text_NotEnoughMons
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Brenda:: @ 81F691B
	trainerbattle_double TRAINER_BRENDA, Route126_Text_BrendaIntro, Route126_Text_BrendaDefeat, Doubles_Text_NotEnoughMons
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Leonardo:: @ 81F6932
	trainerbattle_double TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat, Doubles_Text_NotEnoughMons
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Isobel:: @ 81F6949
	trainerbattle_double TRAINER_ISOBEL, Route126_Text_IsobelIntro, Route126_Text_IsobelDefeat, Doubles_Text_NotEnoughMons
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Sienna:: @ 81F6960
	trainerbattle_double TRAINER_SIENNA, Route126_Text_SiennaIntro, Route126_Text_SiennaDefeat, Doubles_Text_NotEnoughMons
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
	end

Route126_EventScript_Pablo:: @ 81F6977
	trainerbattle_double TRAINER_PABLO_1, Route126_Text_PabloIntro, Route126_Text_PabloDefeat, Doubles_Text_NotEnoughMons, Route126_EventScript_RegisterPablo
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route126_EventScript_RematchPablo
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
	release
	end

Route126_EventScript_RegisterPablo:: @ 81F69A3
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_PABLO_1
	release
	end

Route126_EventScript_RematchPablo:: @ 81F69C2
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
	end

