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


GiveMons::
# 12 "data/maps/IchiIsland/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 13 "data/maps/IchiIsland/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 14 "data/maps/IchiIsland/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 15 "data/maps/IchiIsland/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return


DoEVTraining::
# 19 "data/maps/IchiIsland/scripts.pory"
	lockall
# 21 "data/maps/IchiIsland/scripts.pory"
	goto_if_unset FLAG_TEMP_F, DoEVTraining_2
# 49 "data/maps/IchiIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 50 "data/maps/IchiIsland/scripts.pory"
	delay 15
# 51 "data/maps/IchiIsland/scripts.pory"
	special TransformPlayer
# 52 "data/maps/IchiIsland/scripts.pory"
	delay 15
# 53 "data/maps/IchiIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
DoEVTraining_1:
# 56 "data/maps/IchiIsland/scripts.pory"
	releaseall
	return

DoEVTraining_2:
# 22 "data/maps/IchiIsland/scripts.pory"
	msgbox DoEVTraining_Text_0, MSGBOX_YESNO
# 23 "data/maps/IchiIsland/scripts.pory"
	waitmessage
# 42 "data/maps/IchiIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data/maps/IchiIsland/scripts.pory"
	delay 15
# 44 "data/maps/IchiIsland/scripts.pory"
	special TransformPlayer
# 45 "data/maps/IchiIsland/scripts.pory"
	delay 15
# 46 "data/maps/IchiIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto DoEVTraining_1


DoEVTraining_Text_0:
# 22 "data/maps/IchiIsland/scripts.pory"
	.string "Send your follower out to train?$"
