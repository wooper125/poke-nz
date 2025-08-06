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
# 18 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_ReadyToSailYesNo, MSGBOX_YESNO
# 19 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route23_EventScript_Dad_5
# 22 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_LetsSail
# 23 "data/maps/Route23/scripts.pory"
	closemessage
# 24 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_SailToPohutu
Route23_EventScript_Dad_4:
# 26 "data/maps/Route23/scripts.pory"
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
	msgbox Route23_Text_IRemember
# 16 "data/maps/Route23/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
	goto Route23_EventScript_Dad_1

Route23_EventScript_Dad_5:
# 20 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_DeclineSailing
	goto Route23_EventScript_Dad_4

Route23_EventScript_Dad_9:
# 11 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_TheresMyBoy
	goto Route23_EventScript_Dad_8


Route23_EventScript_SailToPohutu::
# 31 "data/maps/Route23/scripts.pory"
	lockall
# 32 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE23_DAD, MAP_ROUTE23, 0
# 33 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE23, 0
# 34 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_ROUTE23_DAD, Route23_Movement_DadBoardBoat
# 35 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_ROUTE23_DAD
# 37 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerBoardBoat
# 38 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route23/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE23
# 40 "data/maps/Route23/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 41 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_ROUTE23_BOAT, Route23_Movement_SailToPohutu
# 42 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_SailToPohutu
# 43 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_ArriveInPohutu
	end


Route23_EventScript_ArriveInPohutu::
# 49 "data/maps/Route23/scripts.pory"
	delay 50
# 50 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerExitBoat
# 51 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route23/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 53 "data/maps/Route23/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_POHUTU_CITY
# 54 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerMoveForDad
# 55 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route23/scripts.pory"
	setobjectxyperm LOCALID_POHUTU_DAD, 15, 5
# 57 "data/maps/Route23/scripts.pory"
	addobject LOCALID_POHUTU_DAD
# 58 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_POHUTU_DAD, MAP_POHUTU_CITY, 0
# 59 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_POHUTU_CITY_DAD
# 60 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_POHUTU_DAD, Route23_Movement_DadExitBoat
# 61 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route23/scripts.pory"
	addobject LOCALID_POHUTU_BOAT
# 63 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_DAD_BOAT_POHUTU_CITY
# 64 "data/maps/Route23/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 65 "data/maps/Route23/scripts.pory"
	setflag FLAG_HIDE_ROUTE_23_DAD_BOAT
# 66 "data/maps/Route23/scripts.pory"
	hideobjectat LOCALID_ROUTE23_BOAT, MAP_ROUTE23
# 67 "data/maps/Route23/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 68 "data/maps/Route23/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE23
# 69 "data/maps/Route23/scripts.pory"
	resetobjectsubpriority LOCALID_POHUTU_DAD, MAP_POHUTU_CITY
# 70 "data/maps/Route23/scripts.pory"
	copyobjectxytoperm LOCALID_POHUTU_DAD
# 71 "data/maps/Route23/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 72 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_LandedInPohutu
	end


Route23_EventScript_LandedInPohutu::
# 77 "data/maps/Route23/scripts.pory"
	delay 50
# 78 "data/maps/Route23/scripts.pory"
	msgbox PohutuCity_Text_DadLandedInPohutu, MSGBOX_DEFAULT
# 79 "data/maps/Route23/scripts.pory"
	releaseall
	end


# 83 "data/maps/Route23/scripts.pory"
Route23_Movement_SailToPohutu:
# 84 "data/maps/Route23/scripts.pory"
	walk_right
# 84 "data/maps/Route23/scripts.pory"
	walk_right
# 84 "data/maps/Route23/scripts.pory"
	walk_right
# 84 "data/maps/Route23/scripts.pory"
	walk_right
# 84 "data/maps/Route23/scripts.pory"
	walk_right
# 84 "data/maps/Route23/scripts.pory"
	walk_right
# 84 "data/maps/Route23/scripts.pory"
	walk_right
# 85 "data/maps/Route23/scripts.pory"
	walk_up
# 85 "data/maps/Route23/scripts.pory"
	walk_up
# 85 "data/maps/Route23/scripts.pory"
	walk_up
# 85 "data/maps/Route23/scripts.pory"
	walk_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 86 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 87 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 88 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 88 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 88 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 88 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 89 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 89 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 90 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 91 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 91 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 93 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 94 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 94 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 94 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 94 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 95 "data/maps/Route23/scripts.pory"
	walk_down
# 95 "data/maps/Route23/scripts.pory"
	walk_down
	step_end

# 98 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerBoardBoat:
# 99 "data/maps/Route23/scripts.pory"
	walk_right
# 99 "data/maps/Route23/scripts.pory"
	walk_right
# 100 "data/maps/Route23/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerExitBoat:
# 104 "data/maps/Route23/scripts.pory"
	walk_down
	step_end

# 107 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerMoveForDad:
# 108 "data/maps/Route23/scripts.pory"
	walk_right
# 109 "data/maps/Route23/scripts.pory"
	walk_in_place_faster_left
	step_end

# 112 "data/maps/Route23/scripts.pory"
Route23_Movement_DadBoardBoat:
# 113 "data/maps/Route23/scripts.pory"
	walk_right
# 114 "data/maps/Route23/scripts.pory"
	walk_up
	step_end

# 117 "data/maps/Route23/scripts.pory"
Route23_Movement_DadExitBoat:
# 118 "data/maps/Route23/scripts.pory"
	walk_down
# 119 "data/maps/Route23/scripts.pory"
	walk_in_place_faster_right
	step_end

Route23_Text_TheresMyBoy::
# 122 "data/maps/Route23/scripts.pory"
	.string "DAD: There's my boy!\n"
	.string "Been waitin' on ya, kiddo.$"

Route23_Text_TheresMyGirl::
# 128 "data/maps/Route23/scripts.pory"
	.string "DAD: There's my girl!\n"
	.string "Been waitin' on ya, kiddo.$"

Route23_Text_IRemember::
# 134 "data/maps/Route23/scripts.pory"
	.string "Reminds me of when I got my first\n"
	.string "partner, a feisty little...\p"
	.string "Ah, never mind that old sea tale for now.$"

Route23_Text_ReadyToSailYesNo::
# 141 "data/maps/Route23/scripts.pory"
	.string "Ready to set sail for Pohutu City, eh?$"

Route23_Text_DeclineSailing::
# 145 "data/maps/Route23/scripts.pory"
	.string "No problem, just let me know when you\n"
	.string "want to get going.$"

Route23_Text_LetsSail::
# 149 "data/maps/Route23/scripts.pory"
	.string "Great! Let's get going!$"
