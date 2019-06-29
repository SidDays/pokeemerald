NewLab_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewLab_MapScript_OnFrameTable
	.byte 0

/* TODO: Intro Sequence */
NewLab_MapScript_OnFrameTable:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, NewLab_Script_PlayerWalksIntoLab
	.2byte 0

NewLab_Script_PlayerWalksIntoLab:
	setvar VAR_LITTLEROOT_INTRO_STATE 2

	lock
	applymovement EVENT_OBJ_ID_PLAYER, NewLab_Movement_PlayerGoesToProf
	waitmovement 0
	delay 16
	playse SE_PIN
	waitse
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox NewLab_Text_ProfWelcomes, MSGBOX_DEFAULT

	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_FaceLeft
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	msgbox NewLab_Text_AlyshaWelcomes, MSGBOX_DEFAULT

	applymovement 3, Common_Movement_FaceLeft
	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	msgbox NewLab_Text_JaiWelcomes, MSGBOX_DEFAULT

	applymovement EVENT_OBJ_ID_PLAYER, Common_Movement_FaceUp
	applymovement 2, Common_Movement_FaceUp
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	delay 16

	msgbox NewLab_Text_ProfGivesStarter, MSGBOX_DEFAULT
	release
	end

NewLab_Movement_PlayerGoesToProf:
	walk_up
	walk_up
	step_end

NewLab_Text_ProfWelcomes:
	.string "Prof. Pine: {PLAYER}, You made it!$"

NewLab_Text_AlyshaWelcomes:
	.string "Alysha:  …hmph, it's about time!$"

NewLab_Text_JaiWelcomes:
	.string "Jai: Hi, {PLAYER}!\p"
	.string "Prof. Pine: Now, now, you three.$"

/* Starter Selection */
NewLab_Text_ProfGivesStarter:
	.string "Congratulations on your acceptance!\p"
	.string "I've chosen the three of you because\n"
	.string "you show great potential.\p"
	.string "Your task will be to travel across\n"
	.string "the region of Donoh, and catalog the\l"
	.string "different forms of Pokémon you see.\p"
	.string "Of course, you can't accomplish this\n"
	.string "task alone…\l"
	.string "I have these three Starter Pokémon!\p"
	.string "{PLAYER}, why don't you go ahead and\n"
	.string "pick one first?$"

NewLab_Script_StarterSelect::
	lock
	faceplayer
	fadescreen 1
	special ChooseStarter
	fadescreen 0
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	/* TODO: Nickname */
	applymovement EVENT_OBJ_ID_PLAYER, NewLab_Movement_PlayerGetsOutOftheWay
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0

	/* Alysha picks a starter */
	msgbox NewLab_Text_AlyshaGetsStarter, MSGBOX_DEFAULT
	applymovement 2, NewLab_Movement_AlyshaGetsStarter
	waitmovement 0
	delay 48
	applymovement 2, NewLab_Movement_AlyshaReturnsToPosition
	waitmovement 0

	/* Jai picks a starter */
	msgbox NewLab_Text_JaiGetsStarter, MSGBOX_DEFAULT
	applymovement 3, NewLab_Movement_JaiGetsStarter
	waitmovement 0
	delay 48
	applymovement 3, NewLab_Movement_JaiReturnsToPosition
	waitmovement 0

	/* Prof hides the bag */
	msgbox NewLab_Text_ProfStashesBag, MSGBOX_DEFAULT
	applymovement 1, NewLab_Movement_ProfPutsTheBagAway
	waitmovement 0
	removeobject 5
	delay 16
	applymovement 1, NewLab_Movement_ProfReturnsToPosition
	waitmovement 0
	
	/* Prof gives dex and balls */
	msgbox NewLab_Text_ProfGivesDexAndBalls, MSGBOX_DEFAULT

	/* TODO: Sounds */
	applymovement 1, NewLab_Movement_ProfGivesDexAndBallsToPlayer
	waitmovement 0

	playfanfare MUS_FANFA4
	message NewLab_Text_PlayerReceivesDex
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special sub_81AFDA0
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	closemessage
	delay 24

	applymovement 1, NewLab_Movement_ProfGivesDexAndBallsToAlysha
	waitmovement 0
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	delay 16

	applymovement 1, NewLab_Movement_ProfGivesDexAndBallsToJai
	waitmovement 0
	applymovement 3, Common_Movement_FaceLeft
	waitmovement 0
	delay 16

	/* Prof is done talking */
	applymovement 1, NewLab_Movement_ProfReturnsToPosition2
	applymovement 2, Common_Movement_FaceUp
	applymovement 3, Common_Movement_FaceUp
	waitmovement 0
	msgbox NewLab_Text_ProfIsDoneWithEverything, MSGBOX_DEFAULT

	/* Everyone leaves */
	msgbox NewLab_Text_AlyshaLeaving, MSGBOX_DEFAULT
	applymovement 2, NewLab_Movement_AlyshaLeaving
	waitmovement 0
	removeobject 2
	playse SE_KAIDAN
	delay 48

	msgbox NewLab_Text_JaiLeaving, MSGBOX_DEFAULT
	applymovement 3, NewLab_Movement_JaiLeaving
	waitmovement 0
	removeobject 3
	playse SE_KAIDAN
	delay 24

	setvar VAR_LITTLEROOT_INTRO_STATE 3

	release
	end

NewLab_Script_ProfSpeaks::
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq NewLab_Script_ProfWaiting
	msgbox NewLab_Text_ProfIsDoneWithEverything, MSGBOX_NPC
	end

NewLab_Script_ProfWaiting::
	msgbox NewLab_Text_ProfWaiting, MSGBOX_NPC
	end

NewLab_Text_ProfWaiting:
	.string "{PLAYER}, what Pokémon will you pick?$"

NewLab_Script_AlyshaWaiting::
	msgbox NewLab_Text_AlyshaWaiting, MSGBOX_NPC
	applymovement 2, Common_Movement_FaceUp
	end

NewLab_Text_AlyshaWaiting:
	.string "Oof! Just go ahead already!$"

NewLab_Script_JaiWaiting::
	msgbox NewLab_Text_JaiWaiting, MSGBOX_NPC
	applymovement 3, Common_Movement_FaceUp
	end

NewLab_Text_JaiWaiting:
	.string "This is so exciting!$"

NewLab_Script_LeaveBeforeStarterTrigger::
	lockall
	playse SE_PIN
	waitse
	applymovement 1, Common_Movement_FaceDown
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 16
	msgbox NewLab_Text_LeaveBeforeStarterTrigger, MSGBOX_DEFAULT
	applymovement EVENT_OBJ_ID_PLAYER, NewLab_Movement_LeaveBeforeStarterTrigger
	waitmovement 0
	releaseall
	end

NewLab_Text_LeaveBeforeStarterTrigger:
	.string "Prof. Pine: Just a second!\p"
	.string "I know you're excited, but you will\n"
	.string "need a Starter Pokémon out there!$"

NewLab_Movement_LeaveBeforeStarterTrigger:
	walk_up
	step_end

/* After Player's Starter Selection */
NewLab_Movement_PlayerGetsOutOftheWay:
	walk_left
	walk_down
	face_right
	step_end

NewLab_Text_AlyshaGetsStarter:
	.string "Alysha: My turn!$"

NewLab_Movement_AlyshaGetsStarter:
	walk_right
	walk_up
	walk_up
	step_end

NewLab_Movement_AlyshaReturnsToPosition:
	walk_down
	walk_down
	walk_left
	face_up
	step_end

NewLab_Text_JaiGetsStarter:
	.string "Jai: Don't forget about me…$"

NewLab_Movement_JaiGetsStarter:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

NewLab_Movement_JaiReturnsToPosition:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	face_up
	step_end

NewLab_Text_ProfStashesBag:
	.string "Prof. Pine: Great!\nNow let's get this out of the way…$"

NewLab_Movement_ProfPutsTheBagAway:
	walk_left
	face_up
	step_end

NewLab_Movement_ProfReturnsToPosition:
	walk_right
	face_down
	step_end

/* Pokédex */
NewLab_Text_ProfGivesDexAndBalls:
	.string "Prof. Pine: There's some more stuff you\n"
	.string "can use to help along the journey.\p"
	.string "Of course, you must have heard of the\n"
	.string "Pokédex, a high-tech tool that\l"
	.string "automatically makes a record of any\l"
	.string "Pokémon you meet or catch.\p"
	.string "Also, you'll need some tools to help\n"
	.string "you catch Pokémon!\p"
	.string "So here's a Pokédex and five Poké Balls\n"
	.string "for each one of you.$"

NewLab_Movement_ProfGivesDexAndBallsToPlayer:
	walk_down
	walk_left
	step_end

NewLab_Text_PlayerReceivesDex:
	.string "{PLAYER} received the Pokédex!$"

NewLab_Movement_ProfGivesDexAndBallsToAlysha:
	walk_down
	face_left
	step_end

NewLab_Movement_ProfGivesDexAndBallsToJai:
	walk_right
	walk_right
	step_end

NewLab_Movement_ProfReturnsToPosition2:
	walk_left
	walk_up
	walk_up
	face_down
	step_end

NewLab_Text_ProfIsDoneWithEverything:
	.string "That's it for now!\p"
	.string "Go out there and make me proud!$"

/* Leaving */
NewLab_Text_AlyshaLeaving:
	.string "Alysha: Prof. Pine, I'll take your\n"
	.string "leave then!$"

NewLab_Text_JaiLeaving:
	.string "Jai: I guess I'll get going too…"
	.string "Buh-bye!$"

NewLab_Movement_AlyshaLeaving:
	walk_down
	walk_right
	walk_right
	walk_down
	step_end

NewLab_Movement_JaiLeaving:
	walk_left
	walk_down
	walk_down
	step_end

/* Extra stuff */
NewLab_Script_Aide::
	msgbox NewLab_Text_Aide, MSGBOX_NPC
	end

NewLab_Text_Aide:
	.string "I study Pokémon as Prof. Pine's aide.\p"
	.string "… … … … … … … …\p"
	.string "What? I'm on break now!$"

NewLab_Script_Bookstack::
	msgbox NewLab_Text_Bookstack, MSGBOX_SIGN
	end

NewLab_Text_Bookstack:
	.string "It's crammed with books on Pokémon.$"

NewLab_Script_Computer::
	msgbox NewLab_Text_Computer, MSGBOX_SIGN
	end

NewLab_Text_Computer:
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

NewLab_Script_Book::
	msgbox NewLab_Text_Book, MSGBOX_SIGN
	end

NewLab_Text_Book:
	.string "It's a book that's too hard to read.$"

NewLab_Script_Machine::
	msgbox NewLab_Text_Machine, MSGBOX_SIGN
	end

NewLab_Text_Machine:
	.string "It's a serious-looking machine.\n"
	.string "The Prof must use this for research.$"
