SerenityTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SerenityTown_MapScript_Visit
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SerenityTown_MapScript_OnFrameTable
	.byte 0

SerenityTown_MapScript_Visit:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	end

SerenityTown_MapScript_OnFrameTable:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 0, SerenityTown_MapScript_Welcome
	.2byte 0

SerenityTown_MapScript_Welcome:
	setvar VAR_LITTLEROOT_INTRO_STATE 1

	/* Player jumps out of truck */
	playse SE_TRACK_DOOR
	delay 10
	playse SE_DANSA
	applymovement EVENT_OBJ_ID_PLAYER, SerenityTown_Movement_JumpOutOfTruck
	waitmovement 0

	/* Truck leaves the screen */
	applymovement 4, SerenityTown_Movement_TruckLeavesToTheLeft
	waitmovement 0
	removeobject 4
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	delay 16

	/* Player walks into lab */
	applymovement EVENT_OBJ_ID_PLAYER, SerenityTown_Movement_PlayerWalksUpToLabDoor
	waitmovement 0
	opendoor 19, 16
	waitdooranim
	applymovement EVENT_OBJ_ID_PLAYER, SerenityTown_Movement_PlayerWalksIntoLab
	waitmovement 0
	warp MAP_NEW_LAB, 0, -1, -1
	end

SerenityTown_Movement_JumpOutOfTruck:
	jump_down
	delay_16
	delay_16
	delay_16
	step_end

SerenityTown_Movement_TruckLeavesToTheLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SerenityTown_Movement_PlayerWalksUpToLabDoor:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

SerenityTown_Movement_PlayerWalksIntoLab:
	walk_up
	step_end

/* Jai Battle */
SerenityTown_Script_JaiStarterBattle::
	lockall
	playbgm MUS_BOY_SUP, 1
	msgbox SerenityTown_Text_JaiBeforeBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, SerenityTown_Script_JaiStarterBattle1
	case 1, SerenityTown_Script_JaiStarterBattle2
	case 2, SerenityTown_Script_JaiStarterBattle3
	end

SerenityTown_Script_JaiStarterBattle1::
	trainerbattle_no_intro TRAINER_BRENDAN_1, SerenityTown_Text_JaiEndBattle
	goto SerenityTown_Script_JaiStarterBattleFinished
	end

SerenityTown_Script_JaiStarterBattle2::
	trainerbattle_no_intro TRAINER_BRENDAN_1, SerenityTown_Text_JaiEndBattle
	goto SerenityTown_Script_JaiStarterBattleFinished
	end

SerenityTown_Script_JaiStarterBattle3::
	trainerbattle_no_intro TRAINER_BRENDAN_1, SerenityTown_Text_JaiEndBattle
	goto SerenityTown_Script_JaiStarterBattleFinished
	end

SerenityTown_Script_JaiStarterBattleFinished::
	closemessage
	fadedefaultbgm
	msgbox SerenityTown_Text_JaiAfterBattle, MSGBOX_DEFAULT
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
	releaseall
	end

SerenityTown_Text_JaiBeforeBattle:
	.string "Jai: Um, hey, {PLAYER}!\p"
	.string "Like, the professor has given all of us\n"
	.string "Pokémon, but all this is still so, like,\l"
	.string "new to me…\p"
	.string "Would you care to have a quick battle\nwith me?\p"
	.string "Just to like, test things out!\n"
	.string "Pleeeeease!$"

SerenityTown_Text_JaiEndBattle:
	.string "Well, that was certainly interesting…\p"
	.string "You are like, sooo strong!$"

SerenityTown_Text_JaiAfterBattle:
	.string "I think I'll eventually get the hang of\n"
	.string "this…\p"
	.string "Until then, see ya!$"

/* Signposts */
SerenityTown_Script_Townsign2::
	msgbox SerenityTown_Text_Townsign, MSGBOX_SIGN
	return

SerenityTown_Script_Townsign::
	msgbox SerenityTown_Text_Townsign, MSGBOX_SIGN
	end

SerenityTown_Text_Townsign:
	.string "Serenity Town\n"
	.string "“A peaceful hillside retreat”$"

SerenityTown_Script_PlayersHouse::
	msgbox SerenityTown_Text_PlayersHouse, MSGBOX_SIGN
	end

SerenityTown_Text_PlayersHouse:
	.string "Researcher Lodge$"

SerenityTown_Script_ProfPineLab::
	msgbox SerenityTown_Text_ProfPineLab, MSGBOX_SIGN
	end

SerenityTown_Text_ProfPineLab:
	.string "Prof. Pine Research Lab$"

/* Environment and NPCs */
SerenityTown_Script_Jogger::
	msgbox SerenityTown_Text_Jogger, MSGBOX_NPC
	end

SerenityTown_Text_Jogger:
	.string "I'm practicing for the marathon!\p"
	.string "Get out of my way now! Shoo!$"

SerenityTown_Script_NPC1::
	msgbox SerenityTown_Text_NPC1, MSGBOX_NPC
	end

SerenityTown_Text_NPC1:
	.string "Oh, you're from Hoenn?\n"
	.string "That's so cool!\p"
	.string "My nephew Wally is also from Hoenn.\n"
	.string "I think he's the new Champion!\p"
	.string "… … … … … … … …\p"
	.string "He isn't? You must be kidding!$"
