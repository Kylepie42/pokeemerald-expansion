PlayerHouse_MapScripts::
	.byte 0


IchiIsland_HealInBed::
# 4 "data/maps/PlayerHouse/scripts.pory"
	lock
# 5 "data/maps/PlayerHouse/scripts.pory"
	msgbox IchiIsland_HealInBed_Text_0, MSGBOX_YESNO
# 6 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq IchiIsland_HealInBed_2
IchiIsland_HealInBed_1:
# 13 "data/maps/PlayerHouse/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 14 "data/maps/PlayerHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt IchiIsland_HealInBed_5
# 18 "data/maps/PlayerHouse/scripts.pory"
	msgbox IchiIsland_HealInBed_Text_2
IchiIsland_HealInBed_4:
# 20 "data/maps/PlayerHouse/scripts.pory"
	release
	end

IchiIsland_HealInBed_2:
# 7 "data/maps/PlayerHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 8 "data/maps/PlayerHouse/scripts.pory"
	waitstate
# 9 "data/maps/PlayerHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 10 "data/maps/PlayerHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 11 "data/maps/PlayerHouse/scripts.pory"
	waitstate
	goto IchiIsland_HealInBed_1

IchiIsland_HealInBed_5:
# 15 "data/maps/PlayerHouse/scripts.pory"
	msgbox IchiIsland_HealInBed_Text_1
	goto IchiIsland_HealInBed_4


IchiIsland_HealInBed_Text_0:
# 5 "data/maps/PlayerHouse/scripts.pory"
	.string "Would you like to take a rest?$"

IchiIsland_HealInBed_Text_1:
# 15 "data/maps/PlayerHouse/scripts.pory"
	.string "You awaken feeling rested.$"

IchiIsland_HealInBed_Text_2:
# 18 "data/maps/PlayerHouse/scripts.pory"
	.string "You and your Pokemon awaken feeling rested.$"
