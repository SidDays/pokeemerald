ResearcherLodge_MapScripts::
	.byte 0

/* Environment and NPCs */
ResearcherLodge_Script_Scientist::
	lock
	faceplayer
	msgbox ResearcherLodge_Text_Scientist, MSGBOX_DEFAULT
	applymovement 1, Common_Movement_FaceRight
	release
	end

ResearcherLodge_Text_Scientist:
	.string "Aren't you one of the new assistants?\p"
	.string "Don't forget to pick up your welcome kit\n"
	.string "from your room upstairs!\p"
	.string "Good luck!$"
