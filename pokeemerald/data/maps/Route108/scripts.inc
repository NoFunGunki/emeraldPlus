Route108_MapScripts:: @ 81EE689
	.byte 0

Route108_EventScript_Jerome:: @ 81EE68A
	trainerbattle_double TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated, Doubles_Text_NotEnoughMons
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Matthew:: @ 81EE6A1
	trainerbattle_double TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated, Doubles_Text_NotEnoughMons
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Tara:: @ 81EE6B8
	trainerbattle_double TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated, Doubles_Text_NotEnoughMons
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Missy:: @ 81EE6CF
	trainerbattle_double TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated, Doubles_Text_NotEnoughMons
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Carolina:: @ 81EE6E6
	trainerbattle_double TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated, Doubles_Text_NotEnoughMons
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
	end

Route108_EventScript_Cory:: @ 81EE6FD
	trainerbattle_double TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Doubles_Text_NotEnoughMons, Route108_EventScript_CoryRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, TRUE
	goto_if_eq Route108_EventScript_CoryRematch
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
	release
	end

Route108_EventScript_CoryRegisterMatchCallAfterBattle:: @ 81EE729
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CORY_1
	release
	end

Route108_EventScript_CoryRematch:: @ 81EE748
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end

