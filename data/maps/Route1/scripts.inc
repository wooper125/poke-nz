# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0

Route1_EventScript_NewSign::
# 7 "data/maps/Route1/scripts.pory"
	lockall
# 8 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_NewSign_Text_0
# 9 "data/maps/Route1/scripts.pory"
	releaseall
	return


Route1_EventScript_NewSign_Text_0:
# 8 "data/maps/Route1/scripts.pory"
	.string "Hello World$"
