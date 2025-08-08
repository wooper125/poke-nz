PohutuCity_Mart_MapScripts::
	.byte 0


PohutuCity_Mart_EventScript_Clerk::
# 6 "data/maps/PohutuCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PohutuCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PohutuCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PohutuCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PohutuCity_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, PohutuCity_Mart_ExpandedItems
# 11 "data/maps/PohutuCity_Mart/scripts.pory"
	pokemart PohutuCity_Mart_Pokemart_Basic
# 12 "data/maps/PohutuCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PohutuCity_Mart/scripts.pory"
	release
	end


	.align 2
# 17 "data/maps/PohutuCity_Mart/scripts.pory"
PohutuCity_Mart_Pokemart_Basic:
# 18 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

PohutuCity_Mart_ExpandedItems::
# 25 "data/maps/PohutuCity_Mart/scripts.pory"
	pokemart PohutuCity_Mart_Pokemart_Expanded
# 26 "data/maps/PohutuCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/PohutuCity_Mart/scripts.pory"
	release
	end


	.align 2
# 31 "data/maps/PohutuCity_Mart/scripts.pory"
PohutuCity_Mart_Pokemart_Expanded:
# 32 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 34 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/PohutuCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
