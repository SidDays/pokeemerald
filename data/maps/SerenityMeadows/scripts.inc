SerenityMeadows_MapScripts:: @ 81EC0E0
	.byte 0

SerenityMeadows_EventScript_1EC0E1:: @ 81EC0E1
	msgbox SerenityMeadows_Text_1EC2C0, MSGBOX_NPC
	end

SerenityMeadows_EventScript_1EC0EA:: @ 81EC0EA
	msgbox SerenityMeadows_Text_1EC35B, MSGBOX_SIGN
	end

SerenityMeadows_EventScript_1EC0F3:: @ 81EC0F3
	msgbox SerenityMeadows_Text_1EC373, MSGBOX_SIGN
	end

SerenityMeadows_EventScript_1EC0FC:: @ 81EC0FC
	msgbox SerenityMeadows_Text_1EC32E, MSGBOX_NPC
	end

SerenityMeadows_EventScript_1EC105:: @ 81EC105
	trainerbattle_single TRAINER_CALVIN_1, SerenityMeadows_Text_294513, SerenityMeadows_Text_29457C, SerenityMeadows_EventScript_1EC146
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 1
	goto_if_eq SerenityMeadows_EventScript_1EC19C
	setvar VAR_0x8004, 318
	specialvar VAR_RESULT, sub_813B4E0
	compare VAR_RESULT, 0
	goto_if_eq SerenityMeadows_EventScript_1EC170
	msgbox SerenityMeadows_Text_2945AC, MSGBOX_DEFAULT
	release
	end

SerenityMeadows_EventScript_1EC146:: @ 81EC146
	special sub_80B4808
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, SerenityMeadows_EventScript_1EC157
	release
	end

SerenityMeadows_EventScript_1EC157:: @ 81EC157
	msgbox SerenityMeadows_Text_294668, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

SerenityMeadows_EventScript_1EC170:: @ 81EC170
	goto_if_set FLAG_HAS_MATCH_CALL, SerenityMeadows_EventScript_1EC183
	msgbox SerenityMeadows_Text_2945AC, MSGBOX_DEFAULT
	release
	end

SerenityMeadows_EventScript_1EC183:: @ 81EC183
	msgbox SerenityMeadows_Text_2945EB, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

SerenityMeadows_EventScript_1EC19C:: @ 81EC19C
	trainerbattle_rematch TRAINER_CALVIN_1, SerenityMeadows_Text_2946AE, SerenityMeadows_Text_29470C
	msgbox SerenityMeadows_Text_29473C, MSGBOX_AUTOCLOSE
	end

SerenityMeadows_EventScript_1EC1B3:: @ 81EC1B3
	trainerbattle_single TRAINER_RICK, SerenityMeadows_Text_29480C, SerenityMeadows_Text_294847
	msgbox SerenityMeadows_Text_294859, MSGBOX_AUTOCLOSE
	end

SerenityMeadows_EventScript_1EC1CA:: @ 81EC1CA
	trainerbattle_single TRAINER_TIANA, SerenityMeadows_Text_29489E, SerenityMeadows_Text_2948F3
	msgbox SerenityMeadows_Text_294916, MSGBOX_AUTOCLOSE
	end

SerenityMeadows_EventScript_1EC1E1:: @ 81EC1E1
	trainerbattle_single TRAINER_ALLEN, SerenityMeadows_Text_294775, SerenityMeadows_Text_2947AA
	msgbox SerenityMeadows_Text_2947DB, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Text_1EC1F8: @ 81EC1F8
	.string "Wally: {PLAYER}…\n"
	.string "Pokémon hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

PetalburgCity_Text_1EC271: @ 81EC271
	.string "Wally: I did it… It's my…\n"
	.string "My Pokémon!$"

PetalburgCity_Text_1EC297: @ 81EC297
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the Gym!$"

SerenityMeadows_Text_1EC2C0: @ 81EC2C0
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

SerenityMeadows_Text_1EC32E: @ 81EC32E
	.string "I'm going to catch a whole bunch of\n"
	.string "Pokémon!$"

SerenityMeadows_Text_1EC35B: @ 81EC35B
	.string "Serenity Meadows\n"
	.string "{RIGHT_ARROW} Oldale Town$"

SerenityMeadows_Text_1EC373: @ 81EC373
	.string "Serenity Meadows\n"
	.string "{LEFT_ARROW} Petalburg City$"
