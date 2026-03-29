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
	goto_if_ge PohutuCity_2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

PohutuCity_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_HIDE_POHUTU_CITY_DAD
# 8 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_HIDE_DAD_BOAT_POHUTU_CITY
# 9 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_HIDE_POHUTU_CITY_STARTER_BAG
	return


PohutuCity_EventScript_Dad::
# 25 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 26 "data/maps/PohutuCity_2/scripts.pory"
	faceplayer
# 27 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_Dad_2
# 31 "data/maps/PohutuCity_2/scripts.pory"
	goto PohutuCity_EventScript_DadLeaves
PohutuCity_EventScript_Dad_1:
	end

PohutuCity_EventScript_Dad_2:
# 28 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadGetGoing
# 29 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
	goto PohutuCity_EventScript_Dad_1


PohutuCity_EventScript_ChooseStarter::
# 37 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 38 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_ChooseStarter_2
PohutuCity_EventScript_ChooseStarter_1:
# 50 "data/maps/PohutuCity_2/scripts.pory"
	release
	end

PohutuCity_EventScript_ChooseStarter_2:
# 39 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 40 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 41 "data/maps/PohutuCity_2/scripts.pory"
	special ChooseStarter
# 42 "data/maps/PohutuCity_2/scripts.pory"
	waitstate
# 43 "data/maps/PohutuCity_2/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 44 "data/maps/PohutuCity_2/scripts.pory"
	fwdtime 0, 0
# 45 "data/maps/PohutuCity_2/scripts.pory"
	pausefakertc
# 46 "data/maps/PohutuCity_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/PohutuCity_2/scripts.pory"
	waitfanfare
# 48 "data/maps/PohutuCity_2/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto PohutuCity_EventScript_ChooseStarter_1


PohutuCity_Trigger_BlockRoute1::
# 55 "data/maps/PohutuCity_2/scripts.pory"
	lockall
# 56 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_ShowDadMyNewPokemon, MSGBOX_DEFAULT
# 57 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
# 58 "data/maps/PohutuCity_2/scripts.pory"
	applymovement LOCALID_PLAYER, PohutuCity_Movement_TurnPlayerBackFromRoute
# 59 "data/maps/PohutuCity_2/scripts.pory"
	waitmovement 0
# 60 "data/maps/PohutuCity_2/scripts.pory"
	releaseall
	end


PohutuCity_EventScript_DadLeaves::
# 65 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 66 "data/maps/PohutuCity_2/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 3
	goto_if_eq PohutuCity_EventScript_DadLeaves_2
# 75 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadSeeYouLater, MSGBOX_DEFAULT
# 76 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
PohutuCity_EventScript_DadLeaves_1:
# 78 "data/maps/PohutuCity_2/scripts.pory"
	release
	end

PohutuCity_EventScript_DadLeaves_2:
# 67 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_GreatStarterChoice, MSGBOX_DEFAULT
# 68 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
# 69 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadLeaves, MSGBOX_DEFAULT
# 70 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
# 71 "data/maps/PohutuCity_2/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 72 "data/maps/PohutuCity_2/scripts.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 73 "data/maps/PohutuCity_2/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_23_DAD_BOAT
	goto PohutuCity_EventScript_DadLeaves_1


# 82 "data/maps/PohutuCity_2/scripts.pory"
PohutuCity_Movement_TurnPlayerBackFromRoute:
# 83 "data/maps/PohutuCity_2/scripts.pory"
	walk_up
	step_end

PohutuCity_Text_DadLandedInPohutu::
# 86 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Alright, deckhand, this is your\n"
	.string "stop!\p"
	.string "Go on and enjoy the Matariki\n"
	.string "festivities. I'll be here, keepin' the\l"
	.string "boat steady.\p"
	.string "Don't be too long!$"

PohutuCity_Text_DadGetGoing::
# 95 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Don't worry about me, go on and get\n"
	.string "your Pokémon!$"

PohutuCity_Text_ShowDadMyNewPokemon::
# 101 "data/maps/PohutuCity_2/scripts.pory"
	.string "I should show Dad my new Pokémon\n"
	.string "before I head out.$"

PohutuCity_Text_GreatStarterChoice::
# 108 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: That's a great choice for a\n"
	.string "starter, {PLAYER}!\p"
	.string "I had a feeling you'd pick a good one.\p"
	.string "$"

PohutuCity_Text_DadLeaves::
# 115 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Aye, time to set a course for home.\n"
	.string "You take ROUTE 1, kiddo. See what the\l"
	.string "wild has in store for ya!$"

PohutuCity_Text_DadSeeYouLater::
# 122 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: See you at home, kiddo!$"
