Route1_2_MapScripts::
# 2 "data/maps/Route1_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route1_2/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 7
	goto_if_eq Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route1_2/scripts.pory"
	setflag FLAG_HIDE_ROUTE_1_REPAIRMAN
	return


Route1_Repairman::
# 20 "data/maps/Route1_2/scripts.pory"
	msgbox Route1_Text_StopBridgeUnderRepair, MSGBOX_NPC
	end


Route1_Trigger_BridgeRepair::
# 25 "data/maps/Route1_2/scripts.pory"
	lockall
# 26 "data/maps/Route1_2/scripts.pory"
	applymovement LOCALID_ROUTE1_REPAIRMAN, Common_Movement_FaceDown
# 27 "data/maps/Route1_2/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route1_2/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 29 "data/maps/Route1_2/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route1_2/scripts.pory"
	msgbox Route1_Text_StopBridgeUnderRepair, MSGBOX_NPC
# 31 "data/maps/Route1_2/scripts.pory"
	closemessage
# 32 "data/maps/Route1_2/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_PlayerTurnsBack
# 33 "data/maps/Route1_2/scripts.pory"
	applymovement LOCALID_ROUTE1_REPAIRMAN, Common_Movement_FaceLeft
# 34 "data/maps/Route1_2/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route1_2/scripts.pory"
	releaseall
	end


Route1_Joey::
# 40 "data/maps/Route1_2/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route1_Text_ShortsAreTheBest, Route1_Text_LostButShortsAreStillTheBest
# 41 "data/maps/Route1_2/scripts.pory"
	msgbox Route1_Text_ShortsAreComfy, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route1_2/scripts.pory"
	release
	end


Route1_Sophia::
# 47 "data/maps/Route1_2/scripts.pory"
	trainerbattle_single TRAINER_SOPHIA, Route1_Text_AnnoyingShortsKid, Route1_Text_BeatSomeSenseIntoHim
# 48 "data/maps/Route1_2/scripts.pory"
	msgbox Route1_Text_SkirtsAreWayBetterAnyways, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route1_2/scripts.pory"
	release
	end


# 53 "data/maps/Route1_2/scripts.pory"
Route1_Movement_PlayerTurnsBack:
# 54 "data/maps/Route1_2/scripts.pory"
	walk_left
	step_end

Route1_Text_StopBridgeUnderRepair::
# 57 "data/maps/Route1_2/scripts.pory"
	.string "Sorry, but the bridge is under repair.\n"
	.string "You'll have to wait for it to get fixed.$"

Route1_Text_ShortsAreTheBest::
# 64 "data/maps/Route1_2/scripts.pory"
	.string "Shorts are the best!\n"
	.string "I don't care what anyone says!$"

Route1_Text_LostButShortsAreStillTheBest::
# 71 "data/maps/Route1_2/scripts.pory"
	.string "I lost, but shorts are still the best!\n"
	.string "I don't care what anyone says!$"

Route1_Text_ShortsAreComfy::
# 78 "data/maps/Route1_2/scripts.pory"
	.string "Shorts are comfy!\n"
	.string "I don't care what anyone says!$"

Route1_Text_AnnoyingShortsKid::
# 85 "data/maps/Route1_2/scripts.pory"
	.string "That kid can't stop talking about\n"
	.string "shorts!\n"
	.string "I wish he'd just go away!$"

Route1_Text_BeatSomeSenseIntoHim::
# 92 "data/maps/Route1_2/scripts.pory"
	.string "Since you beat me, maybe you can beat\n"
	.string "some sense into that kid!\n"
	.string "I hope he learns his lesson!$"

Route1_Text_SkirtsAreWayBetterAnyways::
# 99 "data/maps/Route1_2/scripts.pory"
	.string "Skirts are way better than shorts\n"
	.string "anyways!\n"
	.string "I don't care what that snotty kid says!$"
