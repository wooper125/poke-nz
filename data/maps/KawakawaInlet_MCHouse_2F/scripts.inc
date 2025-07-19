KawakawaInlet_MCHouse_2F_MapScripts::
	.byte 0


KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags::
# 6 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	lockall
# 7 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 0
	goto_if_eq KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2
KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_1:
# 11 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	releaseall
	return

KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_2:
# 8 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_KAWAKAWA_INLET_MCHOUSE_2F
# 9 "data/maps/KawakawaInlet_MCHouse_2F/scripts.pory"
	setvar VAR_KAWAKAWA_INTRO_STATE, 1
	goto KawakawaInlet_MCHouse_2F_EventScript_SetIntroFlags_1

