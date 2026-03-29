Route23_MapScripts::
	.byte 0


Route23_EventScript_Dad::
# 16 "data/maps/Route23/scripts.pory"
	lock
# 17 "data/maps/Route23/scripts.pory"
	faceplayer
# 18 "data/maps/Route23/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 2
	goto_if_eq Route23_EventScript_Dad_2
Route23_EventScript_Dad_1:
# 28 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_ReadyToSailYesNo, MSGBOX_YESNO
# 29 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route23_EventScript_Dad_5
# 32 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_LetsSail
# 33 "data/maps/Route23/scripts.pory"
	closemessage
# 34 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_SailToPohutu
Route23_EventScript_Dad_4:
# 36 "data/maps/Route23/scripts.pory"
	closemessage
# 37 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_Dad_2:
# 19 "data/maps/Route23/scripts.pory"
	checkplayergender
# 20 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route23_EventScript_Dad_9
# 23 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_TheresMyGirl
Route23_EventScript_Dad_8:
# 25 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_IRemember
# 26 "data/maps/Route23/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
	goto Route23_EventScript_Dad_1

Route23_EventScript_Dad_5:
# 30 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_DeclineSailing
	goto Route23_EventScript_Dad_4

Route23_EventScript_Dad_9:
# 21 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_TheresMyBoy
	goto Route23_EventScript_Dad_8


Route23_EventScript_SailToPohutu::
# 42 "data/maps/Route23/scripts.pory"
	lockall
# 43 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE23_DAD, MAP_ROUTE23, 0
# 44 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE23, 0
# 45 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_ROUTE23_DAD, Route23_Movement_DadBoardBoat
# 46 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_ROUTE23_DAD
# 48 "data/maps/Route23/scripts.pory"
	switch VAR_FACING
# 49 "data/maps/Route23/scripts.pory"
	case DIR_NORTH, Route23_EventScript_SailToPohutu_3
# 51 "data/maps/Route23/scripts.pory"
	case DIR_WEST, Route23_EventScript_SailToPohutu_4
Route23_EventScript_SailToPohutu_1:
# 54 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route23/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE23
# 56 "data/maps/Route23/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 57 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_ROUTE23_BOAT, Route23_Movement_SailToPohutu
# 58 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_SailToPohutu
# 59 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_ArriveInPohutu
	end

Route23_EventScript_SailToPohutu_3:
# 50 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerBoardBoatSouth
	goto Route23_EventScript_SailToPohutu_1

Route23_EventScript_SailToPohutu_4:
# 52 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerBoardBoatEast
	goto Route23_EventScript_SailToPohutu_1


Route23_EventScript_ArriveInPohutu::
# 65 "data/maps/Route23/scripts.pory"
	delay 50
# 66 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerExitBoat
# 67 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route23/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 69 "data/maps/Route23/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_POHUTU_CITY
# 70 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_PLAYER, Route23_Movement_PlayerMoveForDad
# 71 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route23/scripts.pory"
	setobjectxyperm LOCALID_POHUTU_DAD, 14, 5
# 73 "data/maps/Route23/scripts.pory"
	addobject LOCALID_POHUTU_DAD
# 74 "data/maps/Route23/scripts.pory"
	setobjectsubpriority LOCALID_POHUTU_DAD, MAP_POHUTU_CITY, 0
# 75 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_POHUTU_CITY_DAD
# 76 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_POHUTU_DAD, Route23_Movement_DadExitBoat
# 77 "data/maps/Route23/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route23/scripts.pory"
	addobject LOCALID_POHUTU_BOAT
# 79 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_DAD_BOAT_POHUTU_CITY
# 80 "data/maps/Route23/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 81 "data/maps/Route23/scripts.pory"
	setflag FLAG_HIDE_ROUTE_23_DAD_BOAT
# 82 "data/maps/Route23/scripts.pory"
	hideobjectat LOCALID_ROUTE23_BOAT, MAP_ROUTE23
# 83 "data/maps/Route23/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 84 "data/maps/Route23/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE23
# 85 "data/maps/Route23/scripts.pory"
	resetobjectsubpriority LOCALID_POHUTU_DAD, MAP_POHUTU_CITY
# 86 "data/maps/Route23/scripts.pory"
	copyobjectxytoperm LOCALID_POHUTU_DAD
# 87 "data/maps/Route23/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 88 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_LandedInPohutu
	end


Route23_EventScript_LandedInPohutu::
# 93 "data/maps/Route23/scripts.pory"
	delay 50
# 94 "data/maps/Route23/scripts.pory"
	msgbox PohutuCity_Text_DadLandedInPohutu, MSGBOX_DEFAULT
# 95 "data/maps/Route23/scripts.pory"
	releaseall
	end


# 99 "data/maps/Route23/scripts.pory"
Route23_Movement_SailToPohutu:
# 100 "data/maps/Route23/scripts.pory"
	walk_up
# 100 "data/maps/Route23/scripts.pory"
	walk_up
# 100 "data/maps/Route23/scripts.pory"
	walk_up
# 100 "data/maps/Route23/scripts.pory"
	walk_up
# 101 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 101 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 101 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 101 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 102 "data/maps/Route23/scripts.pory"
	walk_faster_up
# 103 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 103 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 103 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 103 "data/maps/Route23/scripts.pory"
	walk_fast_up
# 104 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 104 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 105 "data/maps/Route23/scripts.pory"
	walk_faster_right
# 106 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 106 "data/maps/Route23/scripts.pory"
	walk_fast_right
# 107 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 107 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 107 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 107 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 108 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 108 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 108 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 108 "data/maps/Route23/scripts.pory"
	walk_faster_down
# 109 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route23/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route23/scripts.pory"
	walk_down
# 110 "data/maps/Route23/scripts.pory"
	walk_down
	step_end

# 113 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerBoardBoatSouth:
# 114 "data/maps/Route23/scripts.pory"
	walk_up
# 114 "data/maps/Route23/scripts.pory"
	walk_up
	step_end

# 117 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerBoardBoatEast:
# 118 "data/maps/Route23/scripts.pory"
	walk_left
# 119 "data/maps/Route23/scripts.pory"
	walk_up
	step_end

# 122 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerExitBoat:
# 123 "data/maps/Route23/scripts.pory"
	walk_down
	step_end

# 126 "data/maps/Route23/scripts.pory"
Route23_Movement_PlayerMoveForDad:
# 127 "data/maps/Route23/scripts.pory"
	walk_right
# 128 "data/maps/Route23/scripts.pory"
	walk_in_place_faster_left
	step_end

# 131 "data/maps/Route23/scripts.pory"
Route23_Movement_DadBoardBoat:
# 132 "data/maps/Route23/scripts.pory"
	walk_up
	step_end

# 135 "data/maps/Route23/scripts.pory"
Route23_Movement_DadExitBoat:
# 136 "data/maps/Route23/scripts.pory"
	walk_down
# 137 "data/maps/Route23/scripts.pory"
	walk_in_place_faster_right
	step_end

Route23_Text_TheresMyBoy::
# 140 "data/maps/Route23/scripts.pory"
	.string "DAD: There's my boy!\n"
	.string "Been waitin' on ya, kiddo.$"

Route23_Text_TheresMyGirl::
# 146 "data/maps/Route23/scripts.pory"
	.string "DAD: There's my girl!\n"
	.string "Been waitin' on ya, kiddo.$"

Route23_Text_IRemember::
# 152 "data/maps/Route23/scripts.pory"
	.string "Reminds me of when I got my first\n"
	.string "partner, a feisty little...\p"
	.string "Ah, never mind that old sea tale for now.$"

Route23_Text_ReadyToSailYesNo::
# 159 "data/maps/Route23/scripts.pory"
	.string "Ready to set sail for Pohutu City, eh?$"

Route23_Text_DeclineSailing::
# 163 "data/maps/Route23/scripts.pory"
	.string "No problem, just let me know when you\n"
	.string "want to get going.$"

Route23_Text_LetsSail::
# 167 "data/maps/Route23/scripts.pory"
	.string "Great! Let's get going!$"
