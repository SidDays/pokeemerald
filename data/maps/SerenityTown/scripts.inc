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
	delay 10
	playse SE_DANSA
	applymovement EVENT_OBJ_ID_PLAYER, SerenityTown_Movement_JumpOutOfTruck
	waitmovement 0

	/* Truck leaves the screen */
	applymovement 4, SerenityTown_Movement_TruckLeavesToTheLeft
	waitmovement 0
	removeobject 4
	delay 10
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE

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
	.string "I'm practicing for the marathon!\n"
	.string "Get out of my way now! Shoo!$"

SerenityTown_Script_NPC1::
	msgbox SerenityTown_Text_NPC1, MSGBOX_NPC
	end

SerenityTown_Text_NPC1:
	.string "Oh, you're from Hoenn?\n"
	.string "That's so cool!\p"
	.string "My nephew Wally is also from Hoenn.\n"
	.string "I think he's the new Champion!\p"
	.string "…\n"
	.string "He isn't? You must be kidding!$"
