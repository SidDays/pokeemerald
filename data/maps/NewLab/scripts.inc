NewLab_MapScripts::
	.byte 0

/* TODO: Intro Sequence */
NewLab_Script_PlayerWalksIntoLab::
	applymovement EVENT_OBJ_ID_PLAYER, NewLab_Movement_PlayerGoesToProf
	end

NewLab_Script_StarterSelect::
	lock
	faceplayer
	fadescreen 1
	special ChooseStarter
	removeobject 5
	setflag FLAG_SYS_POKEMON_GET
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

NewLab_Text_ProfGivesStarter::
	.string "Prof. Pine: {PLAYER}, You made it!\p"
	.string "Alysha:  …hmph, it's about time!\p"
	.string "Jai: Hi, {PLAYER}!\p"
	.string "Prof. Pine: Now, now, you three.\n"
	.string "Congratulations on your acceptance!\p"
	.string "I've chosen the three of you because\n"
	.string "you show great potential.\p"
	.string "Your task will be to travel across\n"
	.string "the region of Donoh, and catalog the\l"
	.string "different forms of Pokémon you see.\p"
	.string "For that purpose, I'll be giving you…\p"
	.string "…a Pokédex!\p$"

NewLab_Text_ReceivedDex::
	.string "{PLAYER} received the Pokédex!$"

NewLab_Text_AboutTheDex::
	.string "Prof. Pine: The Pokédex is a high-tech\n"
	.string "tool that automatically makes a record\l"
	.string "of any Pokémon you meet or catch.\p"
	.string "$"

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
