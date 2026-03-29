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
# 30 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lock
# 31 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	faceplayer
# 32 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 2
	goto_if_eq KawakawaInlet_MCHouse_1F_EventScript_Mom_2
# 34 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 3
	goto_if_eq KawakawaInlet_MCHouse_1F_EventScript_Mom_3
# 36 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 5
	goto_if_eq KawakawaInlet_MCHouse_1F_EventScript_Mom_4
# 39 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
KawakawaInlet_MCHouse_1F_EventScript_Mom_1:
# 41 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	release
	end

KawakawaInlet_MCHouse_1F_EventScript_Mom_2:
# 33 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGoOn
	goto KawakawaInlet_MCHouse_1F_EventScript_Mom_1

KawakawaInlet_MCHouse_1F_EventScript_Mom_3:
# 35 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGoOn
	goto KawakawaInlet_MCHouse_1F_EventScript_Mom_1

KawakawaInlet_MCHouse_1F_EventScript_Mom_4:
# 37 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGetSomeRest
	goto KawakawaInlet_MCHouse_1F_EventScript_Mom_1


KawakawaInlet_MCHouse_1F_EventScript_Dad::
# 46 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lock
# 47 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	faceplayer
# 48 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 5
	goto_if_eq KawakawaInlet_MCHouse_1F_EventScript_Dad_2
# 51 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadHeyChamp
KawakawaInlet_MCHouse_1F_EventScript_Dad_1:
# 53 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	release
	end

KawakawaInlet_MCHouse_1F_EventScript_Dad_2:
# 49 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadGetSomeRest
	goto KawakawaInlet_MCHouse_1F_EventScript_Dad_1


KawakawaInlet_MCHouse_1F_EventScript_MomGoodMorning::
# 58 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lockall
# 59 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	playse SE_PIN
# 60 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 61 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGoodMorning
# 63 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 64 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable
# 65 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 66 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomWhatDayIsIt
# 67 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 68 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 69 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	releaseall
	end


# 77 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable:
# 78 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 78 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 79 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 79 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 79 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 80 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_down
# 81 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	face_left
	step_end

KawakawaInlet_MCHouse_1F_EventScript_DadAfterFestival::
# 102 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lockall
# 103 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	playse SE_PIN
# 104 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 105 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadAfterFestival
# 107 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 108 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable2
# 109 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 110 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_DadSorryEarlyTrip
# 111 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 112 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 113 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	releaseall
	end


# 129 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable2:
# 130 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 130 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 130 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_left
# 131 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	walk_up
# 132 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	face_left
	step_end

KawakawaInlet_MCHouse_1F_EventScript_MomGoodMorning2::
# 156 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	lockall
# 157 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	playse SE_PIN
# 158 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 159 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 160 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomGoodMorning
# 161 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 162 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KawakawaInlet_MCHouse_1F_Movement_PlayerApproachTable
# 163 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	waitmovement 0
# 164 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	msgbox KawakawaInlet_MCHouse_1F_Text_MomPackedBag
# 165 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 166 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 167 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_FRESH_WATER, 5
# 168 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_OLD_ROD, 1
# 169 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 170 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 171 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	closemessage
# 172 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	addvar VAR_KAWAKAWA_INTRO_STATE, 1
# 173 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 174 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	releaseall
	end


KawakawaInlet_MCHouse_1F_Text_MomGoodMorning::
# 73 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Good morning, sleepyhead!$"

KawakawaInlet_MCHouse_1F_Text_MomWhatDayIsIt::
# 84 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
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
# 95 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Go on, your dad's waiting at the\n"
	.string "boat!$"

KawakawaInlet_MCHouse_1F_Text_DadHeyChamp::
# 117 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Hey, champ!$"

KawakawaInlet_MCHouse_1F_Text_DadAfterFestival::
# 123 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Hey, kiddo! How was going through\n"
	.string "ROUTE 1 all by yourself?$"

KawakawaInlet_MCHouse_1F_Text_DadSorryEarlyTrip::
# 135 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Sorry champ, but I've gotta be up\n"
	.string "early for a fishing trip tomorrow. So I\l"
	.string "won't be able to see you off on your\l"
	.string "journey, but I know you'll do great!\p"
	.string "Now get some rest, you'll need it for\n"
	.string "tomorrow!$"

KawakawaInlet_MCHouse_1F_Text_DadGetSomeRest::
# 142 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "DAD: Hit the hay! You have a big day\n"
	.string "tomorrow!$"

KawakawaInlet_MCHouse_1F_Text_MomGetSomeRest::
# 148 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: I hope you had fun today!\p"
	.string "Now get some rest for tomorrow,\n"
	.string "sweetie.$"

KawakawaInlet_MCHouse_1F_Text_MomGoodMorning2::
# 178 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Good morning, {PLAYER}!$"

KawakawaInlet_MCHouse_1F_Text_MomPackedBag::
# 182 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "MOM: Your dad had to leave early, but he\n"
	.string "packed some items for your journey!\p"
	.string "$"

KawakawaInlet_MCHouse_1F_Text_MomAllSet::
# 188 "data/maps/KawakawaInlet_MCHouse_1F/scripts.pory"
	.string "Now you're all set to go! I'm so nervous,\n"
	.string "but I'm sure you'll do great!$"
