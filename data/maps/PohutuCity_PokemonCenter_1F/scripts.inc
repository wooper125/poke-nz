PohutuCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PohutuCity_PokemonCenter_1F_OnTransition
# 3 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


PohutuCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_POHUTU_CITY
	end


PohutuCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_POHUTU_NURSE
# 13 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 14 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 15 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 16 "data/maps/PohutuCity_PokemonCenter_1F/scripts.pory"
	release
	end

