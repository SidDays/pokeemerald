ResearcherLodge_2F_MapScripts::
	.byte 0

ResearcherLodge_2F_Script_ItemWelcomeKit::
	lock
	removeobject 1
	msgbox ResearcherLodge_2F_Text_ItemWelcomeKit, MSGBOX_DEFAULT
	giveitem_std ITEM_BICYCLE, 1
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	giveitem_std ITEM_TOWN_MAP, 1
	release
	end

ResearcherLodge_2F_Text_ItemWelcomeKit:
	.string "It's a package from Prof. Pine.\p"
	.string "There's a note attached: \p"
	.string "“Dear {PLAYER},\p"
	.string "Here are some tools that should help\n"
	.string "along the journey.”$"

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

ResearcherLodge_2F_Script_Notebook::
	msgbox ResearcherLodge_2F_Text_Notebook, MSGBOX_SIGN
	end

ResearcherLodge_2F_Text_Notebook:
	.string "It's a notebook, but all the pages\n"
	.string "are blank…$"
