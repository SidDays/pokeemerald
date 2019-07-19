ResearcherLodge_2F_MapScripts::
	.byte 0

ResearcherLodge_2F_Script_ItemWelcomeKit::
	lock
	removeobject 1
	msgbox ResearcherLodge_2F_Text_ItemWelcomeKit, MSGBOX_DEFAULT
	msgbox ResearcherLodge_2F_Text_TownMap, MSGBOX_DEFAULT
	giveitem_std ITEM_TOWN_MAP, 1
	msgbox ResearcherLodge_2F_Text_PokeBalls, MSGBOX_DEFAULT
	giveitem_std ITEM_POKE_BALL, 5
	release
	end

ResearcherLodge_2F_Text_ItemWelcomeKit:
	.string "It's a package from Prof. Pine.\p"
	.string "There's a note attached: \p"
	.string "“Dear {PLAYER},\p"
	.string "Here are some tools that should help\n"
	.string "along the journey.$"

ResearcherLodge_2F_Text_TownMap:
	.string "You'll need a Town Map to get around\n"
	.string "the region safely.$"

ResearcherLodge_2F_Text_PokeBalls:
	.string "Also, here's five Poké Balls\n"
	.string "to help you catch some Pokémon!”$"

ResearcherLodge_2F_Script_PlayerPC::
	setvar VAR_0x8004, 1
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

ResearcherLodge_2F_Script_AlyshaPC::
	msgbox ResearcherLodge_2F_Text_AlyshaPC, MSGBOX_SIGN
	end

ResearcherLodge_2F_Text_AlyshaPC:
	.string "It's the computer intended to be used\n"
	.string "by Alysha.\p"
	.string "Better not touch it!$"

ResearcherLodge_2F_Script_JaiPC::
	msgbox ResearcherLodge_2F_Text_JaiPC, MSGBOX_SIGN
	end

ResearcherLodge_2F_Text_JaiPC:
	.string "It's the computer intended to be used\n"
	.string "by Jai.\p"
	.string "Better not touch it!$"

/* Extra stuff */
ResearcherLodge_2F_Script_Notebook::
	msgbox ResearcherLodge_2F_Text_Notebook, MSGBOX_SIGN
	end

ResearcherLodge_2F_Text_Notebook:
	.string "It's a notebook, but all the pages\n"
	.string "are blank…$"
