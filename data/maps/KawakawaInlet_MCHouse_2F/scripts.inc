KawakawaInlet_MCHouse_2F_MapScripts::
	.byte 0


KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags::
# 16 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	goto_if_set FLAG_START, KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2
KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_1:
	end

KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2:
# 17 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fwdtime 8, 0
# 18 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	pausefakertc
# 19 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_KAWAKAWA_INLET_MCHOUSE_2F
# 20 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_KAWAKAWA_INTRO_STATE, 1
# 21 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	clearflag FLAG_START
	goto KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_1


KawakawaInlet_MCHouse_2F_EventScript_Sleep::
# 27 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 5
	goto_if_eq KawakawaInlet_MCHouse_2F_EventScript_Sleep_2
KawakawaInlet_MCHouse_2F_EventScript_Sleep_1:
	end

KawakawaInlet_MCHouse_2F_EventScript_Sleep_2:
# 28 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	lockall
# 29 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, KawakawaInlet_MCHouse_2F_Movement_Sleep
# 30 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	delay 50
# 33 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 35 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 36 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_23_DAD_BOAT
# 37 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fwdtime 8, 0
# 38 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	resumefakertc
# 39 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	goto KawakawaInlet_MCHouse_2F_EventScript_Sleep_1


KawakawaInlet_MCHouse_2F_EventScript_CheckPlayersPC::
# 45 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 46 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 47 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	playse SE_PC_ON
# 48 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 49 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	special BedroomPC
# 50 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	waitstate
# 51 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	end


KawakawaInlet_MCHouse_2F_EventScript_TurnOffPlayerPC::
# 56 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 57 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 58 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 59 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	end


KawakawaInlet_MCHouse_2F_EventScript_Notebook::
# 64 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end


KawakawaInlet_MCHouse_2F_EventScript_GameCube::
# 69 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
	end


# 73 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
KawakawaInlet_MCHouse_2F_Movement_Sleep:
# 74 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	walk_in_place_slow_down
	step_end
