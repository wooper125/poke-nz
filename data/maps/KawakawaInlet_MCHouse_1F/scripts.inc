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
	map_script_2 VAR_KAWAKAWA_INTRO_STATE, 1, KawakawaInlet_MCHouse_1F_EventScript_MomGoodMorning
# 6 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	map_script_2 VAR_KAWAKAWA_INTRO_STATE, 4, KawakawaInlet_MCHouse_1F_EventScript_DadAfterFestival
# 7 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	map_script_2 VAR_KAWAKAWA_INTRO_STATE, 6, KawakawaInlet_MCHouse_1F_EventScript_MomGoodMorning2
	.2byte 0


KawakawaInlet_MCHouse_1F_OnLoad::
	return


KawakawaInlet_MCHouse_1F_OnTransition::
	return


KawakawaInlet_MCHouse_1F_EventScript_Mom::
# 20 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lock
# 21 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	faceplayer
# 22 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 2
	goto_if_eq KawakawaInlet_MCHouse_1F_EventScript_Mom_2
# 24 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 5
	goto_if_eq KawakawaInlet_MCHouse_1F_EventScript_Mom_3
# 27 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
KawakawaInlet_MCHouse_1F_EventScript_Mom_1:
# 29 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	release
	end

KawakawaInlet_MCHouse_1F_EventScript_Mom_2:
# 23 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGoOn
	goto KawakawaInlet_MCHouse_1F_EventScript_Mom_1

KawakawaInlet_MCHouse_1F_EventScript_Mom_3:
# 25 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGetSomeRest
	goto KawakawaInlet_MCHouse_1F_EventScript_Mom_1


KawakawaInlet_MCHouse_1F_EventScript_Dad::
# 34 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lock
# 35 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	faceplayer
# 36 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 5
	goto_if_eq KawakawaInlet_MCHouse_1F_EventScript_Dad_2
# 39 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadHeyChamp
KawakawaInlet_MCHouse_1F_EventScript_Dad_1:
# 41 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	release
	end

KawakawaInlet_MCHouse_1F_EventScript_Dad_2:
# 37 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadGetSomeRest
	goto KawakawaInlet_MCHouse_1F_EventScript_Dad_1


KawakawaInlet_MCHouse_1F_EventScript_MomGoodMorning::
# 46 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lockall
# 47 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	playse SE_PIN
# 48 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 49 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGoodMorning
# 51 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 52 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable
# 53 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomWhatDayIsIt
# 55 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 56 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 57 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	releaseall
	end


# 65 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable:
# 66 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 66 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 67 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 67 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 67 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 68 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 69 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	face_left
	step_end

KawakawaInlet_MCHouse_1F_EventScript_DadAfterFestival::
# 90 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lockall
# 91 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	playse SE_PIN
# 92 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 93 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadAfterFestival
# 95 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 96 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable2
# 97 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadSorryEarlyTrip
# 99 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 100 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 101 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	releaseall
	end


# 117 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable2:
# 118 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 118 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 118 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 119 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_up
# 120 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	face_left
	step_end

KawakawaInlet_MCHouse_1F_EventScript_MomGoodMorning2::
# 144 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lockall
# 145 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	playse SE_PIN
# 146 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 147 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 148 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGoodMorning
# 149 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 150 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable
# 151 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 152 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomPackedBag
# 153 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 154 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 155 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_FRESH_WATER, 5
# 156 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_OLD_ROD, 1
# 157 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 158 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 159 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 160 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
	return


KawakawaInlet_MCHouse_1F_Text_MomGoodMorning::
# 61 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Good morning, sleepyhead!$"

KawakawaInlet_MCHouse_1F_Text_MomWhatDayIsIt::
# 72 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Guess what today is? It's the day!\n"
	.string "The day you finally get your very own\l"
	.string "Pokémon!\p"
	.string "Your dad's already down at the docks,\n"
	.string "polishing up the boat for ya. He's\l"
	.string "practically bursting with excitement!\n"
	.string "Go on, scoot!\p"
	.string "I'll meet up with you two after I finish\n"
	.string "up here.$"

KawakawaInlet_MCHouse_1F_Text_MomGoOn::
# 83 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Go on, your dad's waiting at the\n"
	.string "boat!$"

KawakawaInlet_MCHouse_1F_Text_DadHeyChamp::
# 105 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Hey, champ!$"

KawakawaInlet_MCHouse_1F_Text_DadAfterFestival::
# 111 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Hey, kiddo! How was going through\n"
	.string "ROUTE 1 all by yourself?$"

KawakawaInlet_MCHouse_1F_Text_DadSorryEarlyTrip::
# 123 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Sorry champ, but I've gotta be up\n"
	.string "early for a fishing trip tomorrow. So I\l"
	.string "won't be able to see you off on your\l"
	.string "journey, but I know you'll do great!\p"
	.string "Now get some rest, you'll need it for\n"
	.string "tomorrow!$"

KawakawaInlet_MCHouse_1F_Text_DadGetSomeRest::
# 130 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Hit the hay! You have a big day\n"
	.string "tomorrow!$"

KawakawaInlet_MCHouse_1F_Text_MomGetSomeRest::
# 136 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: I hope you had fun today!\p"
	.string "Now get some rest for tomorrow,\n"
	.string "sweetie.$"

KawakawaInlet_MCHouse_1F_Text_MomGoodMorning2::
# 163 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Good morning, {PLAYER}!$"

KawakawaInlet_MCHouse_1F_Text_MomPackedBag::
# 167 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Your dad had to leave early, but he\n"
	.string "packed some items for your journey!\p"
	.string "$"

KawakawaInlet_MCHouse_1F_Text_MomAllSet::
# 173 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "Now you're all set to go! I'm so nervous,\n"
	.string "but I'm sure you'll do great!$"
