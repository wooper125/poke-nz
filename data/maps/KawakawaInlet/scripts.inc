KawakawaInlet_MapScripts::
# 2 "data/maps/KawakawaInlet/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KawakawaInlet_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KawakawaInlet_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KawakawaInlet/scripts.pory"
	setflag FLAG_VISITED_KAWAKAWA_INLET
	return


KawakawaInletSign::
# 9 "data/maps/KawakawaInlet/scripts.pory"
	lock
# 10 "data/maps/KawakawaInlet/scripts.pory"
	msgbox KawakawaInletSign_Text_0
# 12 "data/maps/KawakawaInlet/scripts.pory"
	release
	end


KawakawaInletSign_Text_0:
# 10 "data/maps/KawakawaInlet/scripts.pory"
	.string "KAWAKAWA INLET\n"
	.string "“The dawn of a thousand stories.”$"
