IchiIsland_MapScripts::
	.byte 0


TransformPlayerIntoMudkip::
# 4 "data/maps/IchiIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 5 "data/maps/IchiIsland/scripts.pory"
	delay 15
# 6 "data/maps/IchiIsland/scripts.pory"
	special TransformPlayer
# 7 "data/maps/IchiIsland/scripts.pory"
	delay 15
# 8 "data/maps/IchiIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


DoEVTrainingTask::
	return

