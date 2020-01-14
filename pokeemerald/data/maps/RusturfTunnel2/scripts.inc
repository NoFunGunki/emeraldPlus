RusturfTunnel2_MapScripts::
	.byte 0


RusturfTunnel2_EventScript_HikerTed::
	trainerbattle_double TRAINER_HIKER_TED, RusturfTunnel2_Text_TedIntro, RusturfTunnel2_Text_TedDefeat, Doubles_Text_NotEnoughMons
	msgbox RusturfTunnel2_Text_TedPostBattle, MSGBOX_AUTOCLOSE
	end
	
RusturfTunnel2_EventScript_HikerJohn::
	trainerbattle_double TRAINER_HIKER_JOHN, RusturfTunnel2_Text_JohnIntro, RusturfTunnel2_Text_JohnDefeat, Doubles_Text_NotEnoughMons
	msgbox RusturfTunnel2_Text_JohnPostBattle, MSGBOX_AUTOCLOSE
	end
	
RusturfTunnel2_EventScript_HikerRaul::
	trainerbattle_double TRAINER_HIKER_RAUL, RusturfTunnel2_Text_RaulIntro, RusturfTunnel2_Text_RaulDefeat, Doubles_Text_NotEnoughMons
	msgbox RusturfTunnel2_Text_RaulPostBattle, MSGBOX_AUTOCLOSE
	end
	
RusturfTunnel2_EventScript_HikerGabriel::
	trainerbattle_double TRAINER_HIKER_GABRIEL, RusturfTunnel2_Text_GabrielIntro, RusturfTunnel2_Text_GabrielDefeat, Doubles_Text_NotEnoughMons
	msgbox RusturfTunnel2_Text_GabrielPostBattle, MSGBOX_AUTOCLOSE
	end
	
RusturfTunnel2_Text_TedIntro::
	.string "We just found a nest of rare POKéMON\n"
	.string "in the next area.\p"
	.string "You're gonna have to beat me if you\n"
	.string "want to get them!$"

RusturfTunnel2_Text_TedDefeat::
	.string "I wont be in your way anymore...$"

RusturfTunnel2_Text_TedPostBattle::
	.string "You might find something useful for\n"
	.string "capturing those rare POKéMON somewhere\l"
	.string "in this section of the tunnel.$"
	
RusturfTunnel2_Text_JohnIntro::
	.string "Are you here for the rare POKéMON?$"

RusturfTunnel2_Text_JohnDefeat::
	.string "Guess so.$"

RusturfTunnel2_Text_JohnPostBattle::
	.string "Just keep heading down the path\n"
	.string "and go south and you'll find the\l"
	.string "POKéMON's nest there!$"
	
RusturfTunnel2_Text_RaulIntro::
	.string "I can't find the nest, so lets\n"
	.string "have a quick battle!$"

RusturfTunnel2_Text_RaulDefeat::
	.string "Bah! Now I gotta get back to a\n"
	.string "POKéMON Center!$"

RusturfTunnel2_Text_RaulPostBattle::
	.string "At least our POKéMON have free\n"
	.string "health care.$"
	
RusturfTunnel2_Text_GabrielIntro::
	.string "Those POKéMON are right around this\n"
	.string "corner.\p"
	.string "You just have to beat me!$"

RusturfTunnel2_Text_GabrielDefeat::
	.string "I guess I gotta practice more.$"

RusturfTunnel2_Text_GabrielPostBattle::
	.string "The Rustboro City Gym Leader\n"
	.string "uses a similar strategy to mine.\p"
	.string "You should prepare for a tough\n"
	.string "fight against Roxanne.$"
