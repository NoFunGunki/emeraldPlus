Route134_MapScripts:: @ 81F7644
	map_script MAP_SCRIPT_ON_RESUME, Route134_OnResume
	.byte 0

Route134_OnResume: @ 81F764A
	setdivewarp MAP_UNDERWATER_ROUTE134, 255, 8, 6
	end

Route134_EventScript_Jack:: @ 81F7653
	trainerbattle_double TRAINER_JACK, Route134_Text_JackIntro, Route134_Text_JackDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_JackPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Laurel:: @ 81F766A
	trainerbattle_double TRAINER_LAUREL, Route134_Text_LaurelIntro, Route134_Text_LaurelDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Alex:: @ 81F7681
	trainerbattle_double TRAINER_ALEX, Route134_Text_AlexIntro, Route134_Text_AlexDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Aaron:: @ 81F7698
	trainerbattle_double TRAINER_AARON, Route134_Text_AaronIntro, Route134_Text_AaronDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Hitoshi:: @ 81F76AF
	trainerbattle_double TRAINER_HITOSHI, Route134_Text_HitoshiIntro, Route134_Text_HitoshiDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Hudson:: @ 81F76C6
	trainerbattle_double TRAINER_HUDSON, Route134_Text_HudsonIntro, Route134_Text_HudsonDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_HudsonPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Reyna:: @ 81F76DD
	trainerbattle_double TRAINER_REYNA, Route134_Text_ReynaIntro, Route134_Text_ReynaDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_ReynaPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Marley:: @ 81F76F4
	trainerbattle_double TRAINER_MARLEY, Route134_Text_MarleyIntro, Route134_Text_MarleyDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_MarleyPostBattle, MSGBOX_AUTOCLOSE
	end

Route134_EventScript_Kelvin:: @ 81F770B
	trainerbattle_double TRAINER_KELVIN, Route134_Text_KelvinIntro, Route134_Text_KelvinDefeat, Doubles_Text_NotEnoughMons
	msgbox Route134_Text_KelvinPostBattle, MSGBOX_AUTOCLOSE
	end

