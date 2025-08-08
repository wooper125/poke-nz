PohutuCity_2_MapScripts::
# 2 "data/maps/PohutuCity_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PohutuCity_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 5 "data/maps/PohutuCity_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PohutuCity_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PohutuCity_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_VISITED_POHUTU_CITY
	return

PohutuCity_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/PohutuCity_2/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 4
	goto_if_eq PohutuCity_2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

PohutuCity_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_HIDE_POHUTU_CITY_DAD
# 8 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_HIDE_DAD_BOAT_POHUTU_CITY
	return


PohutuCity_EventScript_Dad::
# 14 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 15 "data/maps/PohutuCity_2/scripts.pory"
	faceplayer
# 16 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_Dad_2
# 20 "data/maps/PohutuCity_2/scripts.pory"
	goto PohutuCity_EventScript_DadLeaves
PohutuCity_EventScript_Dad_1:
	end

PohutuCity_EventScript_Dad_2:
# 17 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadGetGoing
# 18 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
	goto PohutuCity_EventScript_Dad_1


PohutuCity_EventScript_ChooseStarter::
# 26 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 27 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_ChooseStarter_2
PohutuCity_EventScript_ChooseStarter_1:
# 39 "data/maps/PohutuCity_2/scripts.pory"
	release
	end

PohutuCity_EventScript_ChooseStarter_2:
# 28 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 29 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 30 "data/maps/PohutuCity_2/scripts.pory"
	special ChooseStarter
# 31 "data/maps/PohutuCity_2/scripts.pory"
	waitstate
# 32 "data/maps/PohutuCity_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 33 "data/maps/PohutuCity_2/scripts.pory"
	fwdtime 0, 0
# 34 "data/maps/PohutuCity_2/scripts.pory"
	pausefakertc
# 35 "data/maps/PohutuCity_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 36 "data/maps/PohutuCity_2/scripts.pory"
	waitfanfare
# 37 "data/maps/PohutuCity_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto PohutuCity_EventScript_ChooseStarter_1


PohutuCity_EventScript_DadLeaves::
# 44 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 45 "data/maps/PohutuCity_2/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 3
	goto_if_eq PohutuCity_EventScript_DadLeaves_2
# 52 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadSeeYouLater
# 53 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
PohutuCity_EventScript_DadLeaves_1:
# 55 "data/maps/PohutuCity_2/scripts.pory"
	release
	end

PohutuCity_EventScript_DadLeaves_2:
# 46 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadLeaves
# 47 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
# 48 "data/maps/PohutuCity_2/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 49 "data/maps/PohutuCity_2/scripts.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 50 "data/maps/PohutuCity_2/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_23_DAD_BOAT
	goto PohutuCity_EventScript_DadLeaves_1


PohutuCity_Text_DadLandedInPohutu::
# 59 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Alright, deckhand, this is your\n"
	.string "stop!\p"
	.string "Go on and enjoy the Matariki\n"
	.string "festivities. I'll be here, keepin' the\l"
	.string "boat steady.\p"
	.string "Don't be too long!$"

PohutuCity_Text_DadGetGoing::
# 68 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Don't worry about me, go on and get\n"
	.string "your Pokémon!$"

PohutuCity_Text_DadLeaves::
# 74 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Aye, time to set a course for home.\n"
	.string "You take ROUTE 1, kiddo. See what the\l"
	.string "wild has in store for ya!$"

PohutuCity_Text_DadSeeYouLater::
# 81 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: See you at home, kiddo!$"
