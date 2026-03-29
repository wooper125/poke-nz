KauriWoods_MapScripts::
	.byte 0


KauriWoods_Route1Sign::
# 6 "data/maps/KauriWoods/scripts.pory"
	lock
# 7 "data/maps/KauriWoods/scripts.pory"
	msgbox KauriWoods_Route1Sign_Text_0
# 11 "data/maps/KauriWoods/scripts.pory"
	release
	end


KauriWoods_KauriTownSign::
# 17 "data/maps/KauriWoods/scripts.pory"
	lock
# 18 "data/maps/KauriWoods/scripts.pory"
	msgbox KauriWoods_KauriTownSign_Text_0
# 23 "data/maps/KauriWoods/scripts.pory"
	release
	end


KauriWoods_Lyle::
# 28 "data/maps/KauriWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, KauriWoods_Text_GoBugPokemonTeam, KauriWoods_Text_ICouldntWin
# 29 "data/maps/KauriWoods/scripts.pory"
	msgbox KauriWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 30 "data/maps/KauriWoods/scripts.pory"
	release
	end


KauriWoods_James_1::
# 35 "data/maps/KauriWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, KauriWoods_Text_InstantlyPopularWithBugPokemon, KauriWoods_Text_CantBePopularIfILose
# 36 "data/maps/KauriWoods/scripts.pory"
	msgbox KauriWoods_Text_PeopleRespectYou, MSGBOX_AUTOCLOSE
# 37 "data/maps/KauriWoods/scripts.pory"
	release
	end


KauriWoods_Tyler::
# 42 "data/maps/KauriWoods/scripts.pory"
	trainerbattle_single TRAINER_TYLER, KauriWoods_Text_WellBalancedTeam, KauriWoods_Text_MoreThanJustBalance
# 43 "data/maps/KauriWoods/scripts.pory"
	msgbox KauriWoods_Text_BalanceIsGoodBut, MSGBOX_AUTOCLOSE
# 44 "data/maps/KauriWoods/scripts.pory"
	release
	end


KauriWoods_Boy::
# 49 "data/maps/KauriWoods/scripts.pory"
	msgbox KauriWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end


KauriWoods_TreeBoy::
# 54 "data/maps/KauriWoods/scripts.pory"
	msgbox KauriWoods_Text_FamousKauriTree, MSGBOX_NPC
	end


KauriWoods_Route1Sign_Text_0:
# 8 "data/maps/KauriWoods/scripts.pory"
	.string "KAURI WOODS - Leads to Kauri Town\n"
	.string "Beware: Wild Bug Pokémon.$"

KauriWoods_KauriTownSign_Text_0:
# 19 "data/maps/KauriWoods/scripts.pory"
	.string "KAURI WOODS - Leads to Route 1\n"
	.string "Paths may be blocked by overgrown\n"
	.string "vegetation.$"

KauriWoods_Text_GoBugPokemonTeam::
# 58 "data/maps/KauriWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My BUG POKéMON team!$"

KauriWoods_Text_ICouldntWin::
# 66 "data/maps/KauriWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

KauriWoods_Text_ImOutOfPokeBalls::
# 74 "data/maps/KauriWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

KauriWoods_Text_InstantlyPopularWithBugPokemon::
# 81 "data/maps/KauriWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
	.string "you get to be instantly popular!$"

KauriWoods_Text_CantBePopularIfILose::
# 88 "data/maps/KauriWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

KauriWoods_Text_PeopleRespectYou::
# 94 "data/maps/KauriWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
	.string "people respect you for it.$"

KauriWoods_Text_WellBalancedTeam::
# 101 "data/maps/KauriWoods/scripts.pory"
	.string "Winning is all about having a\n"
	.string "well-balanced team.\n"
	.string "My team can win against anyone!$"

KauriWoods_Text_MoreThanJustBalance::
# 108 "data/maps/KauriWoods/scripts.pory"
	.string "I guess it's not just about balance.\n"
	.string "You have to train them right, too!$"

KauriWoods_Text_BalanceIsGoodBut::
# 115 "data/maps/KauriWoods/scripts.pory"
	.string "Balance is good, but you also have to\n"
	.string "train them right.\n"
	.string "I guess I have some work to do!$"

KauriWoods_Text_StayOutOfTallGrass::
# 122 "data/maps/KauriWoods/scripts.pory"
	.string "Yo, there!\n"
	.string "Your POKéMON doing okay?\p"
	.string "If your POKéMON are weak and you want\n"
	.string "to avoid battles, you should stay out\l"
	.string "of tall grass.$"

KauriWoods_Text_FamousKauriTree::
# 132 "data/maps/KauriWoods/scripts.pory"
	.string "This is the famous KAURI TREE.\n"
	.string "It's been here for hundreds of years!\p"
	.string "It's really big and really old.$"
