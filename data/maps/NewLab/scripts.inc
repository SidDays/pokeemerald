NewLab_MapScripts::
	.byte 0

/* Intro Sequence */
NewLab_Script_PlayerWalksIntoLab::
	applymovement EVENT_OBJ_ID_PLAYER, NewLab_Movement_PlayerGoesToProf
	end

NewLab_Script_StarterSelect::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen 1
	special ChooseStarter
	removeobject 5
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	release
	end

NewLab_Movement_PlayerGoesToProf::
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	step_end

/* Extra stuff */
NewLab_Script_Bookstack::
	msgbox NewLab_Text_Bookstack, MSGBOX_SIGN
	end

NewLab_Text_Bookstack::
	.string "It's crammed with books on Pokémon.$"

NewLab_Script_Computer::
	msgbox NewLab_Text_Computer, MSGBOX_SIGN
	end

NewLab_Text_Computer::
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

NewLab_Text_Book::
	.string "It's a book that's too hard to read.$"
