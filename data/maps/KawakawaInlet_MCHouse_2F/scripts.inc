KawakawaInlet_MCHouse_2F_MapScripts::
	.byte 0


KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags::
# 6 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	goto_if_set FLAG_START, KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2
KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_1:
	end

KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2:
# 7 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fwdtime 8, 0
# 8 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	pausefakertc
# 9 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_KAWAKAWA_INLET_MCHOUSE_2F
# 10 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_KAWAKAWA_INTRO_STATE, 1
# 11 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	clearflag FLAG_START
	goto KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_1


KawakawaInlet_MCHouse_2F_EventScript_Sleep::
# 17 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 5
	goto_if_eq KawakawaInlet_MCHouse_2F_EventScript_Sleep_2
KawakawaInlet_MCHouse_2F_EventScript_Sleep_1:
	end

KawakawaInlet_MCHouse_2F_EventScript_Sleep_2:
# 18 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	lockall
# 19 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 20 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	delay 50
# 21 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 22 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 23 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 24 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_23_DAD_BOAT
# 25 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	fwdtime 8, 0
# 26 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	resumefakertc
# 27 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	goto KawakawaInlet_MCHouse_2F_EventScript_Sleep_1


KawakawaInlet_MCHouse_2F_EventScript_CheckPlayersPC::
# 33 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 34 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 35 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	playse SE_PC_ON
# 36 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 37 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	special BedroomPC
# 38 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	waitstate
# 39 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	end


KawakawaInlet_MCHouse_2F_EventScript_TurnOffPlayerPC::
# 44 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 45 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 46 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 47 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	end


KawakawaInlet_MCHouse_2F_EventScript_Notebook::
# 52 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end


KawakawaInlet_MCHouse_2F_EventScript_GameCube::
# 57 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
	end

