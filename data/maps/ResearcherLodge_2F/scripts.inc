ResearcherLodge_2F_MapScripts::
	.byte 0

ResearcherLodge_2F_Script_ItemWelcomeKit::
	lock
	removeobject 2
	msgbox ResearcherLodge_2F_Text_ItemWelcomeKit
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
