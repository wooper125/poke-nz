Route1_2_MapScripts::
# 2 "data/maps/Route1_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route1_2/scripts.pory"
	compare VAR_KAWAKAWA_INTRO_STATE, 4
	goto_if_eq Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route1_2_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route1_2/scripts.pory"
	setflag FLAG_HIDE_POHUTU_CITY_DAD
# 5 "data/maps/Route1_2/scripts.pory"
	setflag FLAG_HIDE_DAD_BOAT_POHUTU_CITY
	return

