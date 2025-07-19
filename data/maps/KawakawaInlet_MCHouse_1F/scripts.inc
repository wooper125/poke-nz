KawakawaInlet_MCHouse_1F_MapScripts::
# 2 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, KawakawaInlet_MCHouse_1F_OnLoad
# 3 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KawakawaInlet_MCHouse_1F_OnTransition
# 4 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KawakawaInlet_MCHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KawakawaInlet_MCHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	map_script_2 VAR_KAWAKAWA_INTRO_STATE, 1, KawakawaInlet_MCHouse_1F_EventScript_HappyBirthday
	.2byte 0


KawakawaInlet_MCHouse_1F_OnLoad::
	return


KawakawaInlet_MCHouse_1F_OnTransition::
	return


KawakawaInlet_MCHouse_1F_EventScript_HappyBirthday::
# 18 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lockall
# 19 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	playse SE_PIN
# 20 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 21 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_OhComeQuickly
# 23 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 24 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable
# 25 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_HappyBirthday
# 27 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 28 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
	return


# 36 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable:
# 37 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 37 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 38 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 38 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 38 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 39 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 40 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	face_left
	step_end

KawakawaInlet_MCHouse_1F_EventScript_Mom::
# 58 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lock
# 59 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	faceplayer
# 60 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, KawakawaInlet_MCHouse_1F_EventScript_Mom_2
# 62 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, KawakawaInlet_MCHouse_1F_EventScript_Mom_3
KawakawaInlet_MCHouse_1F_EventScript_Mom_1:
# 65 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	release
	end

KawakawaInlet_MCHouse_1F_EventScript_Mom_2:
# 61 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_GoOn
	goto KawakawaInlet_MCHouse_1F_EventScript_Mom_1

KawakawaInlet_MCHouse_1F_EventScript_Mom_3:
# 63 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto KawakawaInlet_MCHouse_1F_EventScript_Mom_1


KawakawaInlet_MCHouse_1F_Text_OhComeQuickly::
# 31 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, you're up!\n"
	.string "Quick! Come quickly!$"

KawakawaInlet_MCHouse_1F_Text_HappyBirthday::
# 43 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Happy birthday {PLAYER}!\p"
	.string "I won't keep you long, I'm sure you can't\n"
	.string "wait to get your first Pokémon!\p"
	.string "Your dad's waiting for you by the boat,\n"
	.string "go on!$"

KawakawaInlet_MCHouse_1F_Text_GoOn::
# 51 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "Go on, your dad's waiting at the boat!$"
