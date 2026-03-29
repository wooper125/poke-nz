KauriTown_MapScripts::
# 2 "data/maps/KauriTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KauriTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KauriTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KauriTown/scripts.pory"
	setflag FLAG_VISITED_KAURI_TOWN
	return

