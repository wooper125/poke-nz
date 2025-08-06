PohutuCity_2_MapScripts::
# 2 "data/maps/PohutuCity_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PohutuCity_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PohutuCity_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
	return


PohutuCity_EventScript_Dad::
# 8 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 9 "data/maps/PohutuCity_2/scripts.pory"
	faceplayer
# 10 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_Dad_2
# 14 "data/maps/PohutuCity_2/scripts.pory"
	goto PohutuCity_EventScript_DadLeaves
PohutuCity_EventScript_Dad_1:
	end

PohutuCity_EventScript_Dad_2:
# 11 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadGetGoing
# 12 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
	goto PohutuCity_EventScript_Dad_1


PohutuCity_EventScript_ChooseStarter::
# 20 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_ChooseStarter_2
PohutuCity_EventScript_ChooseStarter_1:
	end

PohutuCity_EventScript_ChooseStarter_2:
# 21 "data/maps/PohutuCity_2/scripts.pory"
	special ChooseStarter
# 22 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
	goto PohutuCity_EventScript_ChooseStarter_1


PohutuCity_EventScript_DadLeaves::
# 28 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 29 "data/maps/PohutuCity_2/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 3
	goto_if_eq PohutuCity_EventScript_DadLeaves_2
# 36 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadSeeYouLater
# 37 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
PohutuCity_EventScript_DadLeaves_1:
# 39 "data/maps/PohutuCity_2/scripts.pory"
	release
	end

PohutuCity_EventScript_DadLeaves_2:
# 30 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadLeaves
# 31 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
# 32 "data/maps/PohutuCity_2/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 33 "data/maps/PohutuCity_2/scripts.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 34 "data/maps/PohutuCity_2/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_23_DAD_BOAT
	goto PohutuCity_EventScript_DadLeaves_1


PohutuCity_Text_DadLandedInPohutu::
# 43 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Alright, deckhand, this is your\n"
	.string "stop!\p"
	.string "Go on and enjoy the Matariki\n"
	.string "festivities. I'll be here, keepin' the\l"
	.string "boat steady.\p"
	.string "Don't be too long!$"

PohutuCity_Text_DadGetGoing::
# 52 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Don't worry about me, go on and get\n"
	.string "your Pokémon!$"

PohutuCity_Text_DadLeaves::
# 58 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Aye, time to set a course for home.\n"
	.string "You take ROUTE 1, kiddo. See what the\l"
	.string "wild has in store for ya!$"

PohutuCity_Text_DadSeeYouLater::
# 65 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: See you at home, kiddo!$"
