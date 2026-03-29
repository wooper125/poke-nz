KawakawaInlet_MapScripts::
# 2 "data/maps/KawakawaInlet/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KawakawaInlet_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KawakawaInlet_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KawakawaInlet/scripts.pory"
	setflag FLAG_VISITED_KAWAKAWA_INLET
	return


KawakawaInlet_Sign::
# 19 "data/maps/KawakawaInlet/scripts.pory"
	lock
# 20 "data/maps/KawakawaInlet/scripts.pory"
	msgbox KawakawaInlet_Sign_Text_0
# 22 "data/maps/KawakawaInlet/scripts.pory"
	release
	end


KawakawaInlet_Granny::
# 27 "data/maps/KawakawaInlet/scripts.pory"
	lock
# 28 "data/maps/KawakawaInlet/scripts.pory"
	faceplayer
# 29 "data/maps/KawakawaInlet/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 4
	goto_if_eq KawakawaInlet_Granny_2
# 32 "data/maps/KawakawaInlet/scripts.pory"
	msgbox KawakawaInlet_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
KawakawaInlet_Granny_1:
# 34 "data/maps/KawakawaInlet/scripts.pory"
	release
	end

KawakawaInlet_Granny_2:
# 30 "data/maps/KawakawaInlet/scripts.pory"
	msgbox KawakawaInlet_Text_YourVeryOwnPokemon, MSGBOX_DEFAULT
	goto KawakawaInlet_Granny_1


KawakawaInlet_Trigger_BlockRoute1::
# 39 "data/maps/KawakawaInlet/scripts.pory"
	lockall
# 40 "data/maps/KawakawaInlet/scripts.pory"
	applymovement LOCALID_KAWAKAWA_GRANNY, Common_Movement_FaceRight
# 41 "data/maps/KawakawaInlet/scripts.pory"
	waitmovement 0
# 42 "data/maps/KawakawaInlet/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 2
	goto_if_eq KawakawaInlet_Trigger_BlockRoute1_2
# 49 "data/maps/KawakawaInlet/scripts.pory"
	msgbox KawakawaInlet_Text_DangerousWithoutPokemon, MSGBOX_DEFAULT
KawakawaInlet_Trigger_BlockRoute1_1:
# 51 "data/maps/KawakawaInlet/scripts.pory"
	closemessage
# 52 "data/maps/KawakawaInlet/scripts.pory"
	applymovement LOCALID_PLAYER, KawakawaInlet_Movement_TurnPlayerBackFromRoute
# 53 "data/maps/KawakawaInlet/scripts.pory"
	applymovement LOCALID_KAWAKAWA_GRANNY, Common_Movement_FaceDown
# 54 "data/maps/KawakawaInlet/scripts.pory"
	waitmovement 0
# 55 "data/maps/KawakawaInlet/scripts.pory"
	releaseall
	end

KawakawaInlet_Trigger_BlockRoute1_2:
# 43 "data/maps/KawakawaInlet/scripts.pory"
	msgbox KawakawaInlet_Text_HeyWait, MSGBOX_DEFAULT
# 44 "data/maps/KawakawaInlet/scripts.pory"
	closemessage
# 45 "data/maps/KawakawaInlet/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 46 "data/maps/KawakawaInlet/scripts.pory"
	waitmovement 0
# 47 "data/maps/KawakawaInlet/scripts.pory"
	msgbox KawakawaInlet_Text_DadWaitingAtBoat, MSGBOX_DEFAULT
	goto KawakawaInlet_Trigger_BlockRoute1_1


# 59 "data/maps/KawakawaInlet/scripts.pory"
KawakawaInlet_Movement_TurnPlayerBackFromRoute:
# 60 "data/maps/KawakawaInlet/scripts.pory"
	walk_left
	step_end

KawakawaInlet_Sign_Text_0:
# 20 "data/maps/KawakawaInlet/scripts.pory"
	.string "KAWAKAWA INLET\n"
	.string "“The dawn of a thousand stories.”$"

KawakawaInlet_Text_HeyWait::
# 63 "data/maps/KawakawaInlet/scripts.pory"
	.string "{PLAYER}!\p"
	.string "$"

KawakawaInlet_Text_DadWaitingAtBoat::
# 69 "data/maps/KawakawaInlet/scripts.pory"
	.string "Your Dad is waiting for you at the boat.$"

KawakawaInlet_Text_DangerousWithoutPokemon::
# 75 "data/maps/KawakawaInlet/scripts.pory"
	.string "Be careful out there! It's dangerous\n"
	.string "without a Pokémon by your side!$"

KawakawaInlet_Text_YourVeryOwnPokemon::
# 81 "data/maps/KawakawaInlet/scripts.pory"
	.string "How wonderful, you have your very own\n"
	.string "Pokémon!\p"
	.string "Go on back home and show your parents!$"

KawakawaInlet_Text_IfYouGoInGrassPokemonWillJumpOut::
# 89 "data/maps/KawakawaInlet/scripts.pory"
	.string "If you go in the grass, Pokémon will\n"
	.string "jump out!$"
