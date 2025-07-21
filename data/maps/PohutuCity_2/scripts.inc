PohutuCity_2_MapScripts::
# 2 "data/maps/PohutuCity_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PohutuCity_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PohutuCity_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
	return


PohutuCity_EventScript_Dad::
# 8 "data/maps/PohutuCity_2/scripts.pory"
	lock
# 9 "data/maps/PohutuCity_2/scripts.pory"
	faceplayer
# 10 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_Dad_2
# 14 "data/maps/PohutuCity_2/scripts.pory"
	goto PohutuCity_EventScript_DadLeaves
PohutuCity_EventScript_Dad_1:
	end

PohutuCity_EventScript_Dad_2:
# 11 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadGetGoing
# 12 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
	goto PohutuCity_EventScript_Dad_1


PohutuCity_EventScript_ChooseStarter::
# 20 "data/maps/PohutuCity_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER, PohutuCity_EventScript_ChooseStarter_2
PohutuCity_EventScript_ChooseStarter_1:
	end

PohutuCity_EventScript_ChooseStarter_2:
# 21 "data/maps/PohutuCity_2/scripts.pory"
	special ChooseStarter
# 22 "data/maps/PohutuCity_2/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
	goto PohutuCity_EventScript_ChooseStarter_1


PohutuCity_EventScript_DadLeaves::
# 28 "data/maps/PohutuCity_2/scripts.pory"
	msgbox PohutuCity_Text_DadLeaves
# 29 "data/maps/PohutuCity_2/scripts.pory"
	closemessage
	end


PohutuCity_Text_DadLandedInPohutu::
# 33 "data/maps/PohutuCity_2/scripts.pory"
	.string "DAD: Ahoy!\n"
	.string "We've hit land in POHUTU!\p"
	.string "You just go on and get your\n"
	.string "first Pokémon!$"

PohutuCity_Text_DadGetGoing::
# 40 "data/maps/PohutuCity_2/scripts.pory"
	.string "Don't worry about me, go on and get your\n"
	.string "Pokémon!$"

PohutuCity_Text_DadLeaves::
# 46 "data/maps/PohutuCity_2/scripts.pory"
	.string "Now that you've got your new Pokémon,\n"
	.string "why don't you take ROUTE 1 and meet me\l"
	.string "back home.$"
