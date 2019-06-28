Route501_MapScripts::
	.byte 0

/* Environment and NPCs */
Route501_Script_BoyLookingAround::
	msgbox Route501_Text_BoyLookingAround, MSGBOX_NPC
	end

Route501_Text_BoyLookingAround:
	.string "I want to catch tons of wild Pokémon!\p"
	.string "But I'm down to my last Poké Ball…$"

Route501_Script_SignPost::
	msgbox Route501_Text_SignPost, MSGBOX_SIGN
	end

Route501_Text_SignPost:
	.string "Route 501\n"
	.string "{UP_ARROW} Serenity Town$"
