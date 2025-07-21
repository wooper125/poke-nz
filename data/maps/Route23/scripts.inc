Route23_MapScripts::
	.byte 0


Route23_EventScript_Dad::
# 6 "data/maps/Route23/scripts.pory"
	lock
# 7 "data/maps/Route23/scripts.pory"
	faceplayer
# 8 "data/maps/Route23/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 2
	goto_if_eq Route23_EventScript_Dad_2
Route23_EventScript_Dad_1:
# 17 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_ReadyToSailYesNo, MSGBOX_YESNO
# 18 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route23_EventScript_Dad_5
# 21 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_LetsSail
# 22 "data/maps/Route23/scripts.pory"
	closemessage
# 23 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_SailToPohutu
Route23_EventScript_Dad_4:
# 25 "data/maps/Route23/scripts.pory"
	closemessage
	end

Route23_EventScript_Dad_2:
# 9 "data/maps/Route23/scripts.pory"
	checkplayergender
# 10 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route23_EventScript_Dad_9
# 13 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_TheresMyGirl
Route23_EventScript_Dad_8:
# 15 "data/maps/Route23/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
	goto Route23_EventScript_Dad_1

Route23_EventScript_Dad_5:
# 19 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_DeclineSailing
	goto Route23_EventScript_Dad_4

Route23_EventScript_Dad_9:
# 11 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_TheresMyBoy
	goto Route23_EventScript_Dad_8


Route23_EventScript_SailToPohutu::
# 30 "data/maps/Route23/scripts.pory"
	lockall
# 31 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE23_DAD, MAP_ROUTE23, 0
# 32 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE23, 0
# 33 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_ROUTE23_DAD, Route23_Movement_DadBoardBoat
# 34 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_ROUTE23_DAD
# 36 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerBoardBoat
# 37 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route23/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE23
# 39 "data/maps/Route23/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 40 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_ROUTE23_BOAT, Route23_Movement_SailToPohutu
# 41 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_SailToPohutu
# 42 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_ArriveInPohutu
	end


Route23_EventScript_ArriveInPohutu::
# 48 "data/maps/Route23/scripts.pory"
	delay 50
# 49 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerExitBoat
# 50 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route23/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 52 "data/maps/Route23/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_POHUTU_CITY
# 53 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerMoveForDad
# 54 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route23/scripts.pory"
	setobjectxyperm LOCALID_POHUTU_DAD, 15, 5
# 56 "data/maps/Route23/scripts.pory"
	addobject LOCALID_POHUTU_DAD
# 57 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_POHUTU_DAD, MAP_POHUTU_CITY, 0
# 58 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_POHUTU_CITY_DAD
# 59 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_POHUTU_DAD, Route23_Movement_DadExitBoat
# 60 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route23/scripts.pory"
	addobject LOCALID_POHUTU_BOAT
# 62 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_DAD_BOAT_POHUTU_CITY
# 63 "data/maps/Route23/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 64 "data/maps/Route23/scripts.pory"
	setflag FLAG_HIDE_ROUTE_23_DAD_BOAT
# 65 "data/maps/Route23/scripts.pory"
	hideobjectat LOCALID_ROUTE23_BOAT, MAP_ROUTE23
# 66 "data/maps/Route23/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 67 "data/maps/Route23/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE23
# 68 "data/maps/Route23/scripts.pory"
	resetobjectsubpriority LOCALID_POHUTU_DAD, MAP_POHUTU_CITY
# 69 "data/maps/Route23/scripts.pory"
	copyobjectxytoperm LOCALID_POHUTU_DAD
# 70 "data/maps/Route23/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 71 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_LandedInPohutu
	end


Route23_EventScript_LandedInPohutu::
# 76 "data/maps/Route23/scripts.pory"
	msgbox PohutuCity_Text_DadLandedInPohutu, MSGBOX_DEFAULT
# 77 "data/maps/Route23/scripts.pory"
	releaseall
	end


# 81 "data/maps/Route23/scripts.pory"
Route23_Movement_SailToPohutu:
# 82 "data/maps/Route23/scripts.pory"
	walk_right
# 82 "data/maps/Route23/scripts.pory"
	walk_right
# 82 "data/maps/Route23/scripts.pory"
	walk_right
# 82 "data/maps/Route23/scripts.pory"
	walk_right
# 82 "data/maps/Route23/scripts.pory"
	walk_right
# 82 "data/maps/Route23/scripts.pory"
	walk_right
# 82 "data/maps/Route23/scripts.pory"
	walk_right
# 83 "data/maps/Route23/scripts.pory"
	walk_up
# 83 "data/maps/Route23/scripts.pory"
	walk_up
# 83 "data/maps/Route23/scripts.pory"
	walk_up
# 83 "data/maps/Route23/scripts.pory"
	walk_up
# 84 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 84 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 84 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 84 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 85 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 87 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 87 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 88 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 89 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 90 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 90 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 91 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 91 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route23/scripts.pory"
	walk_down
# 93 "data/maps/Route23/scripts.pory"
	walk_down
	step_end

# 96 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerBoardBoat:
# 97 "data/maps/Route23/scripts.pory"
	walk_right
# 97 "data/maps/Route23/scripts.pory"
	walk_right
# 98 "data/maps/Route23/scripts.pory"
	walk_up
	step_end

# 101 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerExitBoat:
# 102 "data/maps/Route23/scripts.pory"
	walk_down
	step_end

# 105 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerMoveForDad:
# 106 "data/maps/Route23/scripts.pory"
	walk_right
# 107 "data/maps/Route23/scripts.pory"
	walk_in_place_faster_left
	step_end

# 110 "data/maps/Route23/scripts.pory"
Route23_Movement_DadBoardBoat:
# 111 "data/maps/Route23/scripts.pory"
	walk_right
# 112 "data/maps/Route23/scripts.pory"
	walk_up
	step_end

# 115 "data/maps/Route23/scripts.pory"
Route23_Movement_DadExitBoat:
# 116 "data/maps/Route23/scripts.pory"
	walk_down
# 117 "data/maps/Route23/scripts.pory"
	walk_in_place_faster_right
	step_end

Route23_Text_TheresMyBoy::
# 120 "data/maps/Route23/scripts.pory"
	.string "There's my boy!\n"
	.string "I was wondering when you'd show up.\p"
	.string "I'm sure you're really excited to get\n"
	.string "going! I remember getting my first\l"
	.string "Pokémon...\p"
	.string "Anyways, that's enough reminiscing, I\n"
	.string "shouldn't keep you waiting.$"

Route23_Text_TheresMyGirl::
# 129 "data/maps/Route23/scripts.pory"
	.string "There's my girl!\n"
	.string "I was wondering when you'd show up.\p"
	.string "I'm sure you're really excited to get\n"
	.string "going! I remember getting my first\l"
	.string "Pokémon...\p"
	.string "Anyways, that's enough reminiscing, I\n"
	.string "shouldn't keep you waiting.$"

Route23_Text_ReadyToSailYesNo::
# 138 "data/maps/Route23/scripts.pory"
	.string "So, are you ready to sail kid?$"

Route23_Text_DeclineSailing::
# 142 "data/maps/Route23/scripts.pory"
	.string "No problem, just let me know when you\n"
	.string "want to get going.$"

Route23_Text_LetsSail::
# 146 "data/maps/Route23/scripts.pory"
	.string "Great! Let's get going!$"
