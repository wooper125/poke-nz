KawakawaInlet_MCHouse_2F_MapScripts::
	.byte 0


KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags::
# 6 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	goto_if_unset FLAG_START, KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2
KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_1:
	end

KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2:
# 7 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	lockall
# 8 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_KAWAKAWA_INLET_MCHOUSE_2F
# 9 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_KAWAKAWA_INTRO_STATE, 1
# 10 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setflag FLAG_START
# 11 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
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
	fadescreen FADE_FROM_BLACK
# 21 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 22 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 23 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_23_DAD_BOAT
# 24 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	goto KawakawaInlet_MCHouse_2F_EventScript_Sleep_1

