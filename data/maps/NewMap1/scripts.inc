NewMap1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap1_MapScript_Visit
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NewMap1_MapScript_OnFrameTable
	.byte 0

NewMap1_MapScript_Visit:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	end

NewMap1_MapScript_OnFrameTable:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 0, NewMap1_MapScript_Welcome
	.2byte 0

NewMap1_MapScript_Welcome:
	setvar VAR_LITTLEROOT_INTRO_STATE 1

	/* Player jumps out of truck */
	delay 10
	playse SE_DANSA
	applymovement EVENT_OBJ_ID_PLAYER, NewMap1_Movement_JumpOutOfTruck
	waitmovement 0

	/* Truck leaves the screen */
	applymovement 4, NewMap1_Movement_TruckLeavesToTheLeft
	waitmovement 0
	removeobject 4
	delay 10
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE

	end

NewMap1_Movement_JumpOutOfTruck:
	jump_down
	delay_16
	delay_16
	delay_16
	step_end

NewMap1_Movement_TruckLeavesToTheLeft:
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

NewMap1_Script_Townsign2::
	msgbox NewMap1_Text_Townsign, MSGBOX_SIGN
	return

NewMap1_Script_Townsign::
	msgbox NewMap1_Text_Townsign, MSGBOX_SIGN
	end

NewMap1_Text_Townsign:
	.string "NewMap1\n"
	.string "“The town of new beginnings”$"

NewMap1_Script_PlayersHouse::
	msgbox NewMap1_Text_PlayersHouse, MSGBOX_SIGN
	end

NewMap1_Text_PlayersHouse:
	.string "Researcher Lodge$"

NewMap1_Script_ProfPineLab::
	msgbox NewMap1_Text_ProfPineLab, MSGBOX_SIGN
	end

NewMap1_Text_ProfPineLab:
	.string "Prof. Pine Research Lab$"

/* Environment and NPCs */

NewMap1_Script_Jogger::
	msgbox NewMap1_Text_Jogger, MSGBOX_NPC
	end

NewMap1_Text_Jogger:
	.string "I'm practicing for the marathon!\n"
	.string "Get out of my way now! Shoo!$"

NewMap1_Script_NPC1::
	msgbox NewMap1_Text_NPC1, MSGBOX_NPC
	end

NewMap1_Text_NPC1:
	.string "Oh, you're from Hoenn?\n"
	.string "That's so cool!\p"
	.string "My nephew Wally is also from Hoenn.\n"
	.string "I think he's the new Champion!\p"
	.string "…\n"
	.string "He isn't? You must be kidding!$"
