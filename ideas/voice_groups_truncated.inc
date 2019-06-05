	.align 2
voicegroup000:: @ 8675D04
	voice_keysplit_all voicegroup001  @ 8675D04
	voice_keysplit voicegroup005, KeySplitTable1  @ 8675D10
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 51, 235  @ 8675D70
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 8675DD0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 149  @ 8675E84
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 115  @ 8675EB4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8675ECC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 204, 193, 239  @ 8675F38
	voice_keysplit voicegroup006, KeySplitTable2  @ 8675F44
	voice_keysplit voicegroup007, KeySplitTable3  @ 8675FA4
	.align 2
voicegroup001:: @ 8675FEC
	voice_programmable_wave ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 8676070
	voice_programmable_wave ProgrammableWaveData_86B4850, 0, 7, 15, 1  @ 86760D0
	voice_directsound 60, 0, DirectSoundWaveData_advanced_orchestra_voice_ahhs, 255, 0, 255, 0  @ 867613C
	.align 2
voicegroup002:: @ 8676148
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 255, 165, 154, 127  @ 8676148
	voice_directsound 60, 0, DirectSoundWaveData_unused_sd90_oboe, 255, 165, 154, 127  @ 8676154
	voice_directsound 60, 0, DirectSoundWaveData_unused_electric_guitar, 255, 165, 206, 127  @ 8676160
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_unison_slap, 255, 165, 206, 127  @ 867616C
	voice_directsound 60, 0, DirectSoundWaveData_unknown_snare, 255, 0, 255, 0  @ 8676178
	voice_directsound 60, 0, DirectSoundWaveData_unknown_wood_block_low, 255, 0, 255, 0  @ 8676184
	voice_directsound 60, 0, DirectSoundWaveData_unknown_wood_block_high, 255, 0, 255, 0  @ 8676190
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_kick, 255, 0, 255, 242  @ 867619C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 86761B4
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 86761C0
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 86761CC
	voice_directsound 48, 44, DirectSoundWaveData_unknown_tom, 255, 210, 77, 204  @ 86761D8
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_unknown_close_hihat, 255, 127, 0, 188  @ 86761E4
	voice_directsound 51, 54, DirectSoundWaveData_unknown_tom, 255, 216, 77, 204  @ 86761F0
	voice_directsound 54, 64, DirectSoundWaveData_unknown_tom, 255, 216, 77, 204  @ 8676208
	voice_directsound_no_resample 60, 79, DirectSoundWaveData_unknown_open_hihat, 255, 242, 141, 0  @ 8676214
	voice_directsound 57, 69, DirectSoundWaveData_unknown_tom, 255, 210, 77, 204  @ 8676220
	voice_directsound 60, 79, DirectSoundWaveData_unknown_tom, 255, 204, 77, 204  @ 867622C
	voice_directsound 62, 84, DirectSoundWaveData_unknown_tom, 255, 204, 77, 204  @ 8676244
	voice_directsound_no_resample 70, 49, DirectSoundWaveData_unknown_bell, 255, 165, 103, 231  @ 8676268
	voice_directsound_no_resample 32, 34, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 8676274
	voice_directsound_no_resample 60, 14, DirectSoundWaveData_unknown_cymbal_crash, 255, 235, 0, 165  @ 8676280
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 246, 0, 216  @ 8676298
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 246, 0, 216  @ 86762B0
	voice_directsound_no_resample 30, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 8, 0, 255, 216  @ 86762BC
	voice_directsound_no_resample 72, 104, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 86762D4
	voice_directsound_no_resample 72, 94, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86762EC
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_drum_and_percussion_kick, 255, 0, 255, 0  @ 86762F8
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sd90_solo_snare, 255, 180, 175, 228  @ 8676304
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sd90_solo_snare, 255, 0, 255, 242  @ 8676310
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 867631C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 8676328
	voice_directsound 64, 24, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676334
	voice_directsound_no_resample 64, 80, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 8676340
	voice_directsound 68, 34, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 867634C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 8676358
	voice_directsound 72, 44, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676364
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 8676370
	voice_directsound 76, 84, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 867637C
	voice_directsound 80, 94, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676388
	voice_directsound_no_resample 33, 89, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 8676394
	voice_directsound 84, 104, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 235  @ 86763A0
	voice_directsound 63, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86763B8
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_dance_drums_ride_bell, 255, 165, 103, 231  @ 86763C4
	.align 2
voicegroup003:: @ 86763D0
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 86763D0
	voice_directsound_no_resample 64, 14, DirectSoundWaveData_unknown_cymbal_crash, 255, 231, 0, 188  @ 86763DC
	voice_directsound_no_resample 64, 89, DirectSoundWaveData_unknown_cowbell, 255, 0, 255, 242  @ 86763E8
	voice_directsound_no_resample 64, 29, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86763F4
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 867640C
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 8, 0, 255, 216  @ 8676418
	voice_directsound_no_resample 64, 94, DirectSoundWaveData_unknown_djembe, 255, 0, 255, 0  @ 8676424
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 8676430
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 867643C
	voice_directsound_no_resample 64, 90, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 8676448
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 8676508
	voice_directsound_no_resample 64, 79, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 8676514
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 165, 103, 188  @ 8676520
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_sc88_standard_bells, 255, 0, 255, 0  @ 867652C
	voice_directsound_no_resample 64, 104, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 8676550
	voice_directsound 63, 64, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 0  @ 867655C
	voice_directsound 50, 84, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 8676568
	voice_directsound 64, 84, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 8676574
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 0  @ 8676580
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sd90_solo_snare, 255, 180, 175, 228  @ 867658C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sd90_solo_snare, 255, 0, 255, 242  @ 8676598
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 86765A4
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 86765B0
	voice_directsound 64, 24, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86765BC
	voice_directsound_no_resample 64, 80, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 86765C8
	voice_directsound 68, 34, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86765D4
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 86765E0
	voice_directsound 72, 44, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86765EC
	voice_directsound 76, 84, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676604
	voice_directsound 80, 94, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676610
	voice_directsound_no_resample 33, 89, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 867661C
	voice_directsound 64, 104, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 235  @ 8676628
	voice_directsound 63, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 8676640
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_dance_drums_ride_bell, 255, 165, 103, 231  @ 867664C
	.align 2
voicegroup004:: @ 8676658
	voice_directsound_no_resample 66, 34, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 8676658
	voice_directsound_no_resample 64, 14, DirectSoundWaveData_unknown_cymbal_crash, 255, 231, 0, 188  @ 8676664
	voice_directsound_no_resample 64, 89, DirectSoundWaveData_unknown_cowbell, 255, 0, 255, 242  @ 8676670
	voice_directsound_no_resample 64, 29, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 867667C
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 8676694
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 8, 0, 255, 216  @ 86766A0
	voice_directsound_no_resample 64, 94, DirectSoundWaveData_unknown_djembe, 255, 0, 255, 0  @ 86766AC
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 86766B8
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86766C4
	voice_directsound_no_resample 64, 90, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86766D0
	voice_directsound_no_resample 61, 84, DirectSoundWaveData_unknown_wood_block_high, 255, 0, 255, 0  @ 8676754
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_wood_block_low, 255, 0, 255, 0  @ 8676760
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 8676790
	voice_directsound_no_resample 64, 79, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 867679C
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 165, 103, 188  @ 86767A8
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_sc88_standard_bells, 255, 0, 255, 0  @ 86767B4
	voice_directsound_no_resample 64, 104, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86767D8
	voice_directsound 63, 64, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 0  @ 86767E4
	voice_directsound 50, 84, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 86767F0
	voice_directsound 64, 84, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 86767FC
	voice_directsound 62, 64, DirectSoundWaveData_drum_and_percussion_kick, 255, 0, 255, 0  @ 8676808
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sd90_solo_snare, 255, 180, 175, 228  @ 8676814
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sd90_solo_snare, 255, 0, 255, 242  @ 8676820
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 867682C
	voice_directsound 65, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 8676838
	voice_directsound 64, 24, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676844
	voice_directsound_no_resample 64, 80, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 8676850
	voice_directsound 68, 34, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 867685C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 8676868
	voice_directsound 72, 44, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676874
	voice_directsound 76, 84, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 867688C
	voice_directsound 80, 94, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 8676898
	voice_directsound 56, 89, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86768A4
	voice_directsound 64, 104, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 235  @ 86768B0
	voice_directsound 63, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86768C8
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_dance_drums_ride_bell, 255, 165, 103, 231  @ 86768D4
	voice_directsound_no_resample 66, 34, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 86768E0
	voice_directsound 64, 14, DirectSoundWaveData_unknown_cymbal_crash, 255, 231, 0, 188  @ 86768EC
	voice_directsound 64, 89, DirectSoundWaveData_unknown_cowbell, 255, 0, 255, 242  @ 86768F8
	voice_directsound 60, 29, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 8676904
	voice_directsound 58, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 867691C
	voice_directsound 62, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 8, 0, 255, 216  @ 8676928
	voice_directsound 64, 94, DirectSoundWaveData_unknown_djembe, 255, 0, 255, 0  @ 8676934
	voice_directsound 64, 34, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 8676940
	voice_directsound 64, 34, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 867694C
	voice_directsound 64, 90, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 8676958
	voice_directsound 61, 84, DirectSoundWaveData_unknown_wood_block_high, 255, 0, 255, 0  @ 86769DC
	voice_directsound 64, 64, DirectSoundWaveData_unknown_wood_block_low, 255, 0, 255, 0  @ 86769E8
	voice_directsound 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 8676A18
	voice_directsound 64, 79, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 8676A24
	voice_directsound 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 165, 103, 188  @ 8676A30
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_bells, 255, 0, 255, 0  @ 8676A3C
	voice_directsound 64, 104, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 8676A60
	voice_directsound 63, 64, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 0  @ 8676A6C
	voice_directsound 50, 84, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 8676A78
	voice_directsound 64, 84, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 8676A84
	.align 2
voicegroup005:: @ 8676A90
	voice_directsound 60, 0, DirectSoundWaveData_sc88_piano1_48, 255, 252, 0, 239  @ 8676A90
	voice_directsound 60, 0, DirectSoundWaveData_sc88_piano1_60, 255, 250, 0, 221  @ 8676A9C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_piano1_72, 255, 250, 0, 221  @ 8676AA8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_piano1_84, 255, 247, 0, 221  @ 8676AB4
	.align 2
voicegroup006:: @ 8676AC0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_string_ensemble_60, 255, 0, 255, 196  @ 8676AC0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_string_ensemble_72, 255, 0, 255, 196  @ 8676ACC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_string_ensemble_84, 255, 0, 255, 196  @ 8676AD8
	.align 2
voicegroup007:: @ 8676AE4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_trumpet_60, 255, 0, 193, 127  @ 8676AE4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_trumpet_72, 255, 0, 193, 127  @ 8676AF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_trumpet_84, 255, 0, 193, 127  @ 8676AFC
	.align 2
voicegroup008:: @ 8677108
	voice_directsound 60, 0, DirectSoundWaveData_unknown_trombone_39, 255, 0, 255, 165  @ 8677108
	voice_directsound 60, 0, DirectSoundWaveData_unknown_trombone_51, 255, 0, 255, 165  @ 8677114
	.align 2
voicegroup009:: @ 8677120
	voice_directsound 60, 0, DirectSoundWaveData_sc88_french_horn_60, 255, 0, 224, 165  @ 8677120
	voice_directsound 60, 0, DirectSoundWaveData_sc88_french_horn_72, 255, 0, 218, 165  @ 867712C
	.align 2
voicegroup010:: @ 8677138
	voice_keysplit_all voicegroup031  @ 8677138
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 216, 90, 242  @ 86771E0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 204  @ 8677360
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867736C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8677378
	voice_keysplit voicegroup007, KeySplitTable3  @ 86773D8
	voice_keysplit voicegroup008, KeySplitTable4  @ 86773F0
	voice_keysplit voicegroup009, KeySplitTable5  @ 8677408
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 2  @ 8677504
	.align 2
voicegroup011:: @ 8677528
	voice_keysplit_all voicegroup022  @ 8677528
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 149  @ 8677648
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 149  @ 86776CC
	voice_keysplit voicegroup006, KeySplitTable2  @ 8677768
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 8677894
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 86778A0
	voice_noise_alt 0, 0, 1, 0, 0  @ 8677B1C
	.align 2
voicegroup012:: @ 8677B28
	voice_keysplit_all voicegroup001  @ 8677B28
	voice_keysplit voicegroup005, KeySplitTable1  @ 8677B34
	voice_directsound 60, 0, DirectSoundWaveData_unused_acid_bass, 255, 178, 180, 165  @ 8677B40
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 51, 235  @ 8677B94
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8677BC4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8677CF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 204  @ 8677D50
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 8677D5C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8677D68
	voice_keysplit voicegroup007, KeySplitTable3  @ 8677DC8
	voice_keysplit voicegroup008, KeySplitTable4  @ 8677DE0
	voice_keysplit voicegroup009, KeySplitTable5  @ 8677DF8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 8677E94
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 2  @ 8677F3C
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 2  @ 8677F48
	.align 2
voicegroup013:: @ 8677FF0
	voice_keysplit_all voicegroup001  @ 8677FF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 8678224
	voice_keysplit voicegroup006, KeySplitTable2  @ 8678230
	voice_keysplit voicegroup007, KeySplitTable3  @ 8678290
	voice_keysplit voicegroup009, KeySplitTable5  @ 86782C0
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 8678404
	.align 2
voicegroup014:: @ 8678428
	voice_keysplit_all voicegroup001  @ 8678428
	voice_keysplit voicegroup005, KeySplitTable1  @ 8678434
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 149  @ 8678548
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 8678650
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867865C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8678668
	voice_keysplit voicegroup007, KeySplitTable3  @ 86786C8
	voice_keysplit voicegroup009, KeySplitTable5  @ 86786F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 8678794
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 86787F4
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 867880C
	.align 2
voicegroup015:: @ 8678824
	voice_keysplit_all voicegroup016  @ 8678824
	voice_keysplit voicegroup005, KeySplitTable1  @ 8678830
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 149  @ 86789C8
	voice_keysplit voicegroup006, KeySplitTable2  @ 8678A64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 8678AC4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 8678B90
	voice_programmable_wave ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 8678B9C
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 8678BF0
	.align 2
voicegroup016:: @ 8678C74
	voice_noise_alt 0, 0, 2, 0, 2  @ 8678E0C
	voice_noise_alt 0, 0, 1, 0, 1  @ 8678E18
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_kick, 255, 0, 255, 242  @ 8678E24
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 8678E3C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 8678E54
	voice_directsound_no_resample 32, 74, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 8678EFC
	voice_directsound_no_resample 72, 66, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 8678F5C
	voice_directsound_no_resample 72, 62, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 8678F74
	.align 2
voicegroup017:: @ 8678F80
	voice_keysplit_all voicegroup001  @ 8678F80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 867919C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 204  @ 86791A8
	voice_keysplit voicegroup006, KeySplitTable2  @ 86791C0
	voice_keysplit voicegroup008, KeySplitTable4  @ 8679238
	voice_keysplit voicegroup009, KeySplitTable5  @ 8679250
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86792EC
	voice_programmable_wave ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86792F8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 2  @ 867934C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 3  @ 867937C
	.align 2
voicegroup018:: @ 86793C4
	voice_keysplit_all voicegroup001  @ 86793C4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86793D0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 86795E0
	voice_keysplit voicegroup006, KeySplitTable2  @ 8679604
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 8679730
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 2  @ 8679790
	voice_noise_alt 1, 0, 1, 0, 3  @ 86799B8
	.align 2
voicegroup019:: @ 86799C4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 8679BE0
	voice_keysplit voicegroup006, KeySplitTable2  @ 8679C04
	voice_keysplit voicegroup008, KeySplitTable4  @ 8679C7C
	voice_keysplit voicegroup009, KeySplitTable5  @ 8679C94
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 8679D30
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 2  @ 8679D90
	.align 2
voicegroup020:: @ 8679DC0
	voice_keysplit voicegroup005, KeySplitTable1  @ 8679DC0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 8679FDC
	voice_keysplit voicegroup006, KeySplitTable2  @ 867A000
	voice_keysplit voicegroup008, KeySplitTable4  @ 867A078
	.align 2
voicegroup021:: @ 867A1D4
	voice_keysplit_all voicegroup001  @ 867A1D4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867A408
	voice_keysplit voicegroup006, KeySplitTable2  @ 867A414
	.align 2
voicegroup022:: @ 867A438
	voice_keysplit voicegroup007, KeySplitTable3  @ 867A474
	voice_keysplit voicegroup008, KeySplitTable4  @ 867A48C
	voice_keysplit voicegroup009, KeySplitTable5  @ 867A4A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 867A540
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 867A5A0
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 867A5B8
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 867A5C4
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 1  @ 867A5D0
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_kick, 255, 0, 255, 242  @ 867A5E8
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 867A600
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 867A618
	voice_directsound_no_resample 32, 34, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 867A6C0
	voice_directsound_no_resample 72, 67, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 867A720
	voice_directsound_no_resample 72, 61, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 867A738
	.align 2
voicegroup023:: @ 867A744
	voice_keysplit voicegroup005, KeySplitTable1  @ 867A744
	voice_keysplit_all voicegroup001  @ 867A750
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 149  @ 867A8E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 867A96C
	voice_keysplit voicegroup006, KeySplitTable2  @ 867A984
	voice_keysplit voicegroup007, KeySplitTable3  @ 867A9E4
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 867AB10
	.align 2
voicegroup024:: @ 867AB70
	voice_keysplit_all voicegroup001  @ 867AB70
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 867AD8C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867ADA4
	voice_keysplit voicegroup006, KeySplitTable2  @ 867ADB0
	voice_keysplit voicegroup007, KeySplitTable3  @ 867AE10
	voice_keysplit voicegroup009, KeySplitTable5  @ 867AE40
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 867AEDC
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 867AF3C
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 867AF9C
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 867AFA8
	.align 2
voicegroup025:: @ 867AFB4
	voice_keysplit_all voicegroup001  @ 867AFB4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867B1E8
	voice_keysplit voicegroup007, KeySplitTable3  @ 867B254
	voice_keysplit voicegroup008, KeySplitTable4  @ 867B26C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 867B320
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 867B380
	.align 2
voicegroup026:: @ 867B3A4
	voice_keysplit_all voicegroup001  @ 867B3A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867B5D8
	voice_keysplit voicegroup009, KeySplitTable5  @ 867B674
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 867B770
	.align 2
voicegroup027:: @ 867B7A0
	voice_keysplit_all voicegroup001  @ 867B7A0
	voice_keysplit voicegroup005, KeySplitTable1  @ 867B7AC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 867B83C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 867B968
	voice_programmable_wave ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 867BB0C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 867BB6C
	voice_noise_alt 0, 0, 4, 1, 4  @ 867BD88
	voice_noise_alt 0, 0, 1, 0, 2  @ 867BD94
	.align 2
voicegroup028:: @ 867BDA0
	voice_keysplit_all voicegroup001  @ 867BDA0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 867BE6C
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 867BF50
	voice_keysplit voicegroup007, KeySplitTable3  @ 867C040
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 867C16C
	.align 2
voicegroup029:: @ 867C184
	voice_keysplit_all voicegroup001  @ 867C184
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 216, 90, 242  @ 867C22C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 867C3A0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867C3B8
	voice_keysplit voicegroup006, KeySplitTable2  @ 867C3C4
	voice_keysplit voicegroup007, KeySplitTable3  @ 867C424
	voice_keysplit voicegroup009, KeySplitTable5  @ 867C454
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 867C4F0
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 867C550
	.align 2
voicegroup030:: @ 867C5A4
	voice_keysplit_all voicegroup031  @ 867C5A4
	voice_keysplit voicegroup005, KeySplitTable1  @ 867C5B0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 216, 90, 242  @ 867C64C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 37, 165, 180, 127  @ 867C670
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 867C7CC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867C7D8
	.align 2
voicegroup031:: @ 867C838
	voice_keysplit voicegroup009, KeySplitTable5  @ 867C874
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 1  @ 867C970
	voice_directsound 60, 0, DirectSoundWaveData_unknown_polysynth, 255, 165, 154, 127  @ 867C9DC
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 867CA18
	voice_directsound_no_resample 32, 49, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 867CAC0
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 8, 0, 255, 216  @ 867CAE4
	voice_directsound_no_resample 30, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 246, 0, 216  @ 867CAFC
	voice_directsound_no_resample 72, 79, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 867CB20
	voice_directsound_no_resample 72, 74, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 867CB38
	.align 2
voicegroup032:: @ 867CB44
	voice_keysplit_all voicegroup016  @ 867CB44
	voice_keysplit voicegroup005, KeySplitTable1  @ 867CB50
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 250, 0, 149  @ 867CCE8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 867CEB0
	voice_programmable_wave ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 867CEBC
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 2  @ 867CF10
	voice_noise_alt 0, 0, 1, 0, 0  @ 867D120
	voice_noise_alt 0, 0, 4, 1, 4  @ 867D12C
	voice_noise_alt 0, 0, 1, 0, 2  @ 867D138
	.align 2
voicegroup033:: @ 867D144
	voice_keysplit_all voicegroup001  @ 867D144
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 149  @ 867D2E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 867D36C
	voice_keysplit voicegroup006, KeySplitTable2  @ 867D384
	voice_keysplit voicegroup009, KeySplitTable5  @ 867D414
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 867D4B0
	.align 2
voicegroup034:: @ 867D528
	voice_keysplit_all voicegroup001  @ 867D528
	voice_keysplit voicegroup005, KeySplitTable1  @ 867D534
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 867D6CC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 867D744
	voice_keysplit voicegroup006, KeySplitTable2  @ 867D768
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 867D894
	voice_programmable_wave ProgrammableWaveData_86B4920, 0, 7, 15, 2  @ 867D90C
	.align 2
voicegroup035:: @ 867D918
	voice_keysplit_all voicegroup031  @ 867D918
	voice_keysplit voicegroup005, KeySplitTable1  @ 867D924
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867DB4C
	voice_keysplit voicegroup006, KeySplitTable2  @ 867DB58
	voice_keysplit voicegroup007, KeySplitTable3  @ 867DBB8
	voice_keysplit voicegroup009, KeySplitTable5  @ 867DBE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 2  @ 867DCE4
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 867DCFC
	.align 2
voicegroup036:: @ 867DD14
	voice_keysplit_all voicegroup001  @ 867DD14
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 867DEA0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 867DF30
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 867DF3C
	voice_keysplit voicegroup006, KeySplitTable2  @ 867DF54
	voice_keysplit voicegroup009, KeySplitTable5  @ 867DFE4
	voice_programmable_wave ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 867E080
	voice_noise_alt 0, 0, 4, 1, 4  @ 867E2FC
	voice_noise_alt 0, 0, 1, 0, 2  @ 867E308
	.align 2
voicegroup037:: @ 867E314
	voice_keysplit_all voicegroup031  @ 867E314
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 216, 90, 242  @ 867E3BC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 867E53C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 867E548
	voice_keysplit voicegroup006, KeySplitTable2  @ 867E554
	voice_keysplit voicegroup008, KeySplitTable4  @ 867E5CC
	voice_keysplit voicegroup009, KeySplitTable5  @ 867E5E4
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 867E6E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 2  @ 867E734
	.align 2
voicegroup038:: @ 867E740
	voice_keysplit_all voicegroup001  @ 867E740
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 867E80C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 867E908
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 0  @ 867EB0C
	.align 2
voicegroup039:: @ 867EB18
	voice_keysplit_all voicegroup001  @ 867EB18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 867EBE4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 867EC38
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 867ECC8
	voice_keysplit voicegroup006, KeySplitTable2  @ 867ED58
	voice_keysplit voicegroup007, KeySplitTable3  @ 867EDB8
	voice_keysplit voicegroup009, KeySplitTable5  @ 867EDE8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 867EE84
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 867EEFC
	voice_noise_alt 0, 0, 1, 7, 1  @ 867F100
	voice_noise_alt 0, 0, 1, 0, 0  @ 867F10C
	.align 2
voicegroup040:: @ 867F118
	voice_keysplit_all voicegroup001  @ 867F118
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 867F1E4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 867F238
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 867F2C8
	voice_keysplit voicegroup006, KeySplitTable2  @ 867F358
	voice_keysplit voicegroup007, KeySplitTable3  @ 867F3B8
	voice_keysplit voicegroup009, KeySplitTable5  @ 867F3E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 867F484
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 867F4FC
	voice_noise_alt 0, 0, 1, 7, 1  @ 867F700
	voice_noise_alt 0, 0, 1, 0, 0  @ 867F70C
	.align 2
voicegroup041:: @ 867F718
	voice_keysplit_all voicegroup001  @ 867F718
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 867F7E4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 867F838
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 867F8C8
	voice_keysplit voicegroup006, KeySplitTable2  @ 867F958
	voice_keysplit voicegroup007, KeySplitTable3  @ 867F9B8
	voice_keysplit voicegroup009, KeySplitTable5  @ 867F9E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 867FA84
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 867FAFC
	voice_noise_alt 0, 0, 1, 7, 1  @ 867FD00
	voice_noise_alt 0, 0, 1, 0, 0  @ 867FD0C
	.align 2
voicegroup042:: @ 867FD18
	voice_keysplit_all voicegroup001  @ 867FD18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 867FDE4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 867FE38
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 867FEC8
	voice_keysplit voicegroup006, KeySplitTable2  @ 867FF58
	voice_keysplit voicegroup007, KeySplitTable3  @ 867FFB8
	voice_keysplit voicegroup009, KeySplitTable5  @ 867FFE8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 8680084
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 86800FC
	voice_noise_alt 0, 0, 1, 7, 1  @ 8680300
	voice_noise_alt 0, 0, 1, 0, 0  @ 868030C
	.align 2
voicegroup043:: @ 8680318
	voice_keysplit voicegroup005, KeySplitTable1  @ 8680324
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 149  @ 8680498
	voice_keysplit voicegroup006, KeySplitTable2  @ 8680558
	voice_keysplit voicegroup008, KeySplitTable4  @ 86805D0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8680684
	.align 2
voicegroup044:: @ 86806E4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86806E4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 224  @ 8680888
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 8680900
	voice_keysplit voicegroup006, KeySplitTable2  @ 8680924
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8680A50
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 8680AA4
	.align 2
voicegroup045:: @ 8680AB0
	voice_keysplit_all voicegroup001  @ 8680AB0
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 8680AE0
	voice_programmable_wave_alt ProgrammableWaveData_86B4860, 1, 7, 15, 1  @ 8680B04
	voice_keysplit voicegroup005, KeySplitTable1  @ 8680B28
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8680B7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 216  @ 8680C78
	voice_keysplit voicegroup006, KeySplitTable2  @ 8680CF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8680E1C
	voice_noise_alt 0, 0, 1, 0, 0  @ 86810A4
	.align 2
voicegroup046:: @ 86810B0
	voice_keysplit voicegroup005, KeySplitTable1  @ 86810B0
	voice_programmable_wave_alt ProgrammableWaveData_86B4900, 0, 1, 12, 0  @ 86810BC
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 1  @ 86810E0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 216  @ 86810EC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 165  @ 86812CC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86812F0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 868141C
	voice_noise_alt 0, 0, 1, 0, 0  @ 86816A4
	.align 2
voicegroup047:: @ 86816B0
	voice_keysplit_all voicegroup001  @ 86816B0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8681878
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 204  @ 86818D8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 204, 193, 239  @ 86818E4
	voice_keysplit voicegroup006, KeySplitTable2  @ 86818F0
	voice_keysplit voicegroup007, KeySplitTable3  @ 8681950
	voice_keysplit voicegroup008, KeySplitTable4  @ 8681968
	voice_keysplit voicegroup009, KeySplitTable5  @ 8681980
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 7, 15, 0  @ 8681A7C
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 1, 7, 15, 2  @ 8681A94
	voice_noise_alt 0, 0, 1, 0, 0  @ 8681CA4
	.align 2
voicegroup048:: @ 8681CB0
	voice_keysplit_all voicegroup001  @ 8681CB0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 204, 51, 242  @ 8681D1C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 8681ED8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 239  @ 8681EE4
	voice_keysplit voicegroup006, KeySplitTable2  @ 8681EF0
	voice_keysplit voicegroup007, KeySplitTable3  @ 8681F50
	voice_keysplit voicegroup008, KeySplitTable4  @ 8681F68
	voice_keysplit voicegroup009, KeySplitTable5  @ 8681F80
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 868201C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 12, 1  @ 86820A0
	.align 2
voicegroup049:: @ 86820D0
	voice_keysplit_all voicegroup001  @ 86820D0
	voice_keysplit voicegroup005, KeySplitTable1  @ 86820DC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 51, 242  @ 868213C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8682274
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 86822EC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 86822F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 226  @ 8682304
	voice_keysplit voicegroup006, KeySplitTable2  @ 8682310
	voice_keysplit voicegroup007, KeySplitTable3  @ 8682370
	voice_keysplit voicegroup009, KeySplitTable5  @ 86823A0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 868243C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 1, 7, 15, 0  @ 86824B4
	voice_noise_alt 0, 0, 1, 0, 0  @ 86826C4
	.align 2
voicegroup050:: @ 86826D0
	voice_keysplit_all voicegroup001  @ 86826D0
	voice_keysplit voicegroup005, KeySplitTable1  @ 86826DC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 868279C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8682874
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 86828F8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 8682AB4
	voice_noise_alt 0, 0, 1, 0, 0  @ 8682CC4
	.align 2
voicegroup051:: @ 8682CD0
	voice_keysplit_all voicegroup001  @ 8682CD0
	voice_keysplit voicegroup005, KeySplitTable1  @ 8682CDC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8682E74
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 99  @ 8682EEC
	voice_keysplit voicegroup006, KeySplitTable2  @ 8682F10
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 868303C
	.align 2
voicegroup052:: @ 8683048
	voice_keysplit_all voicegroup001  @ 8683048
	voice_programmable_wave_alt ProgrammableWaveData_86B4860, 0, 7, 15, 0  @ 86831A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 226  @ 868327C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8683288
	voice_keysplit voicegroup007, KeySplitTable3  @ 86832E8
	voice_keysplit voicegroup008, KeySplitTable4  @ 8683300
	voice_keysplit voicegroup009, KeySplitTable5  @ 8683318
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 1  @ 8683420
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 8683438
	voice_noise_alt 0, 0, 1, 9, 4  @ 8683624
	voice_noise_alt 0, 3, 1, 10, 0  @ 8683630
	voice_noise_alt 0, 0, 2, 0, 0  @ 868363C
	.align 2
voicegroup053:: @ 8683648
	voice_keysplit_all voicegroup001  @ 8683648
	voice_keysplit voicegroup005, KeySplitTable1  @ 8683654
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86837EC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 8683864
	voice_keysplit voicegroup006, KeySplitTable2  @ 8683888
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86839B4
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 12, 0  @ 8683A2C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8683C3C
	.align 2
voicegroup054:: @ 8683C48
	voice_keysplit_all voicegroup001  @ 8683C48
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 8683E64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 8683E70
	voice_keysplit voicegroup006, KeySplitTable2  @ 8683E88
	voice_keysplit voicegroup008, KeySplitTable4  @ 8683F00
	voice_keysplit voicegroup009, KeySplitTable5  @ 8683F18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8683FB4
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 8684020
	voice_noise_alt 0, 0, 1, 0, 0  @ 868423C
	.align 2
voicegroup055:: @ 8684248
	voice_keysplit_all voicegroup001  @ 8684248
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8684410
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 204  @ 8684470
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 204, 193, 239  @ 868447C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8684488
	voice_keysplit voicegroup007, KeySplitTable3  @ 86844E8
	voice_keysplit voicegroup008, KeySplitTable4  @ 8684500
	voice_keysplit voicegroup009, KeySplitTable5  @ 8684518
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8684620
	voice_programmable_wave_alt ProgrammableWaveData_86B4860, 0, 7, 15, 2  @ 868462C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868483C
	.align 2
voicegroup056:: @ 8684848
	voice_keysplit_all voicegroup001  @ 8684848
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8684A10
	voice_keysplit voicegroup006, KeySplitTable2  @ 8684A88
	voice_keysplit voicegroup009, KeySplitTable5  @ 8684B18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8684BB4
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 8684C5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8684E3C
	.align 2
voicegroup057:: @ 8684E48
	voice_keysplit_all voicegroup001  @ 8684E48
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 188, 51, 242  @ 8684EB4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 128, 165, 90, 216  @ 8684EF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_bubbles, 255, 0, 255, 127  @ 8684F5C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8684FEC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 8685064
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 8685070
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 226  @ 868507C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8685088
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86851B4
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 1, 4, 10, 1  @ 8685220
	voice_noise_alt 0, 0, 1, 7, 1  @ 8685430
	voice_noise_alt 0, 0, 1, 0, 0  @ 868543C
	.align 2
voicegroup058:: @ 8685448
	voice_keysplit_all voicegroup001  @ 8685448
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8685514
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86855EC
	voice_keysplit voicegroup007, KeySplitTable3  @ 86856E8
	voice_keysplit voicegroup008, KeySplitTable4  @ 8685700
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 86857CC
	voice_noise_alt 0, 0, 2, 4, 0  @ 8685A30
	voice_noise_alt 0, 0, 1, 0, 0  @ 8685A3C
	.align 2
voicegroup059:: @ 8685A48
	voice_keysplit_all voicegroup001  @ 8685A48
	voice_keysplit voicegroup005, KeySplitTable1  @ 8685A54
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 8685A84
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 8685A90
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 51, 242  @ 8685AB4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8685AF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8685C70
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 239  @ 8685C7C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8685C88
	voice_keysplit voicegroup007, KeySplitTable3  @ 8685CE8
	voice_keysplit voicegroup008, KeySplitTable4  @ 8685D00
	voice_keysplit voicegroup009, KeySplitTable5  @ 8685D18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8685DB4
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8685E20
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8685E5C
	.align 2
voicegroup060:: @ 8685E74
	voice_keysplit_all voicegroup001  @ 8685E74
	voice_keysplit voicegroup005, KeySplitTable1  @ 8685E80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8685F10
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 128, 226, 0, 38  @ 8686090
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868609C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 86860A8
	voice_keysplit voicegroup006, KeySplitTable2  @ 86860B4
	voice_keysplit voicegroup007, KeySplitTable3  @ 8686114
	voice_keysplit voicegroup008, KeySplitTable4  @ 868612C
	voice_keysplit voicegroup009, KeySplitTable5  @ 8686144
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86861E0
	voice_noise_alt 0, 0, 1, 0, 0  @ 8686468
	.align 2
voicegroup061:: @ 8686474
	voice_keysplit_all voicegroup001  @ 8686474
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8686540
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 115  @ 8686624
	voice_keysplit voicegroup007, KeySplitTable3  @ 8686714
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86867E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8686858
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8686864
	voice_noise_alt 0, 0, 1, 7, 1  @ 8686A5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8686A68
	.align 2
voicegroup062:: @ 8686A74
	voice_keysplit_all voicegroup001  @ 8686A74
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 0  @ 8686BD0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8686C3C
	voice_keysplit voicegroup007, KeySplitTable3  @ 8686D14
	voice_noise_alt 0, 0, 1, 7, 1  @ 868705C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8687068
	.align 2
voicegroup063:: @ 8687074
	voice_keysplit_all voicegroup001  @ 8687074
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 8687140
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 8687224
	voice_keysplit voicegroup007, KeySplitTable3  @ 8687314
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8687458
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8687464
	voice_noise_alt 0, 0, 1, 7, 1  @ 868765C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8687668
	.align 2
voicegroup064:: @ 8687674
	voice_keysplit_all voicegroup001  @ 8687674
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8687794
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868789C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 86878A8
	voice_keysplit voicegroup006, KeySplitTable2  @ 86878B4
	voice_keysplit voicegroup009, KeySplitTable5  @ 8687944
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86879E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 8687A4C
	voice_noise_alt 0, 0, 1, 7, 1  @ 8687C5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8687C68
	.align 2
voicegroup065:: @ 8687C74
	voice_keysplit_all voicegroup001  @ 8687C74
	voice_keysplit voicegroup005, KeySplitTable1  @ 8687C80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 8687D40
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 8687E24
	voice_keysplit voicegroup007, KeySplitTable3  @ 8687F14
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 0  @ 8688058
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8688064
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 7, 15, 0  @ 8688088
	voice_noise_alt 0, 0, 1, 7, 1  @ 868825C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8688268
	.align 2
voicegroup066:: @ 8688274
	voice_keysplit_all voicegroup001  @ 8688274
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8688394
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8688418
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 868843C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 8688490
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86885E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 3  @ 868864C
	voice_noise_alt 0, 0, 1, 7, 1  @ 868885C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8688868
	.align 2
voicegroup067:: @ 8688874
	voice_keysplit_all voicegroup001  @ 8688874
	voice_keysplit voicegroup005, KeySplitTable1  @ 8688880
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8688940
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8688994
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8688A3C
	voice_keysplit voicegroup007, KeySplitTable3  @ 8688B14
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 8688BE0
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8688C58
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8688C64
	voice_noise_alt 0, 0, 1, 7, 1  @ 8688E5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8688E68
	.align 2
voicegroup068:: @ 8688E74
	voice_keysplit_all voicegroup001  @ 8688E74
	voice_keysplit voicegroup005, KeySplitTable1  @ 8688E80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8688F1C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8688F40
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8688F94
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8689018
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 868903C
	voice_keysplit voicegroup007, KeySplitTable3  @ 8689114
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86891E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8689258
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8689264
	voice_noise_alt 0, 0, 1, 7, 1  @ 868945C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8689468
	.align 2
voicegroup069:: @ 8689474
	voice_keysplit_all voicegroup001  @ 8689474
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8689540
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8689594
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8689618
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 868963C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 8689690
	voice_keysplit voicegroup006, KeySplitTable2  @ 86896B4
	voice_keysplit voicegroup008, KeySplitTable4  @ 868972C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86897E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 3  @ 8689858
	voice_noise_alt 0, 0, 1, 7, 1  @ 8689A5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 8689A68
	.align 2
voicegroup070:: @ 8689A74
	voice_keysplit_all voicegroup001  @ 8689A74
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8689B94
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8689C18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8689C9C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 8689CA8
	voice_keysplit voicegroup006, KeySplitTable2  @ 8689CB4
	voice_keysplit voicegroup007, KeySplitTable3  @ 8689D14
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8689E58
	voice_noise_alt 0, 0, 2, 4, 0  @ 868A05C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868A068
	.align 2
voicegroup071:: @ 868A074
	voice_keysplit_all voicegroup001  @ 868A074
	voice_keysplit voicegroup007, KeySplitTable3  @ 868A314
	voice_keysplit voicegroup008, KeySplitTable4  @ 868A32C
	voice_keysplit voicegroup009, KeySplitTable5  @ 868A344
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 2  @ 868A458
	voice_noise_alt 0, 0, 1, 0, 0  @ 868A668
	.align 2
voicegroup072:: @ 868A674
	voice_keysplit_all voicegroup001  @ 868A674
	voice_keysplit voicegroup005, KeySplitTable1  @ 868A680
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 868A710
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 868A740
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868A794
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 868A818
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868A89C
	voice_keysplit voicegroup006, KeySplitTable2  @ 868A8B4
	voice_keysplit voicegroup007, KeySplitTable3  @ 868A914
	voice_keysplit voicegroup009, KeySplitTable5  @ 868A944
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 868AA4C
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 868AA58
	voice_noise_alt 0, 0, 2, 4, 0  @ 868AC5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868AC68
	.align 2
voicegroup073:: @ 868AC74
	voice_keysplit_all voicegroup001  @ 868AC74
	voice_keysplit voicegroup005, KeySplitTable1  @ 868AC80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 868AD10
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 868AD40
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868AD94
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 868AE18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 868AE3C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868AE9C
	voice_keysplit voicegroup006, KeySplitTable2  @ 868AEB4
	voice_keysplit voicegroup007, KeySplitTable3  @ 868AF14
	voice_keysplit voicegroup009, KeySplitTable5  @ 868AF44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868AFE0
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 868B04C
	voice_noise_alt 0, 0, 2, 4, 0  @ 868B25C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868B268
	.align 2
voicegroup074:: @ 868B274
	voice_keysplit_all voicegroup001  @ 868B274
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 868B310
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 868B418
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 216  @ 868B4A8
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 868B64C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 868B688
	voice_noise_alt 0, 0, 2, 4, 0  @ 868B85C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868B868
	.align 2
voicegroup075:: @ 868B874
	voice_keysplit_all voicegroup001  @ 868B874
	voice_keysplit voicegroup005, KeySplitTable1  @ 868B880
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 868B91C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 868BA18
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 868BA24
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 868BAA8
	voice_keysplit voicegroup006, KeySplitTable2  @ 868BAB4
	voice_keysplit voicegroup007, KeySplitTable3  @ 868BB14
	voice_keysplit voicegroup008, KeySplitTable4  @ 868BB2C
	voice_keysplit voicegroup009, KeySplitTable5  @ 868BB44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868BBE0
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 868BC4C
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 868BC58
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 1  @ 868BC70
	voice_noise_alt 0, 0, 3, 4, 0  @ 868BE5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868BE68
	.align 2
voicegroup076:: @ 868BE74
	voice_keysplit_all voicegroup001  @ 868BE74
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 868BF40
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 868C018
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 868C024
	voice_keysplit voicegroup007, KeySplitTable3  @ 868C114
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 868C24C
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 0  @ 868C258
	voice_noise_alt 0, 0, 1, 7, 1  @ 868C45C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868C468
	.align 2
voicegroup077:: @ 868C474
	voice_keysplit_all voicegroup001  @ 868C474
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 868C510
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 868C540
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868C594
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 196  @ 868C618
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868C69C
	voice_keysplit voicegroup006, KeySplitTable2  @ 868C6B4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868C7E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 868C84C
	voice_noise_alt 0, 0, 2, 4, 0  @ 868CA5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868CA68
	.align 2
voicegroup078:: @ 868CA74
	voice_keysplit_all voicegroup001  @ 868CA74
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 868CB1C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868CB94
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 196  @ 868CC18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 868CC90
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 868CCA8
	voice_keysplit voicegroup006, KeySplitTable2  @ 868CCB4
	voice_keysplit voicegroup009, KeySplitTable5  @ 868CD44
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 868CE4C
	voice_noise_alt 0, 0, 2, 4, 0  @ 868D05C
	voice_noise_alt 0, 0, 2, 0, 2  @ 868D068
	.align 2
voicegroup079:: @ 868D074
	voice_keysplit_all voicegroup001  @ 868D074
	voice_keysplit voicegroup005, KeySplitTable1  @ 868D080
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 868D11C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 868D140
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868D194
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 6, 2  @ 868D248
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 868D290
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868D29C
	voice_keysplit voicegroup006, KeySplitTable2  @ 868D2B4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868D3E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 868D44C
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 4, 4  @ 868D464
	voice_noise_alt 0, 0, 1, 7, 1  @ 868D65C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868D668
	.align 2
voicegroup080:: @ 868D674
	voice_keysplit_all voicegroup001  @ 868D674
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868D794
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 868D83C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 868D890
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868D89C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 868D8A8
	voice_keysplit voicegroup006, KeySplitTable2  @ 868D8B4
	voice_keysplit voicegroup009, KeySplitTable5  @ 868D944
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868D9E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 868DA4C
	voice_noise_alt 0, 0, 1, 7, 1  @ 868DC5C
	voice_noise_alt 0, 0, 1, 0, 0  @ 868DC68
	.align 2
voicegroup081:: @ 868DC74
	voice_keysplit voicegroup005, KeySplitTable1  @ 868DC80
	.align 2
voicegroup082:: @ 868DC8C
	voice_keysplit_all voicegroup001  @ 868DC8C
	voice_keysplit voicegroup005, KeySplitTable1  @ 868DC98
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 868DD34
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868DDAC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 868DEC0
	voice_keysplit voicegroup006, KeySplitTable2  @ 868DECC
	voice_keysplit voicegroup007, KeySplitTable3  @ 868DF2C
	voice_keysplit voicegroup009, KeySplitTable5  @ 868DF5C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 868E064
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 4, 4  @ 868E070
	voice_noise_alt 0, 0, 1, 7, 1  @ 868E274
	voice_noise_alt 0, 0, 1, 0, 0  @ 868E280
	.align 2
voicegroup083:: @ 868E28C
	voice_keysplit_all voicegroup001  @ 868E28C
	voice_keysplit voicegroup005, KeySplitTable1  @ 868E298
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 72, 249  @ 868E2F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 868E3AC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 868E430
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 868E4A8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 868E4B4
	voice_keysplit voicegroup006, KeySplitTable2  @ 868E4CC
	voice_keysplit voicegroup008, KeySplitTable4  @ 868E544
	voice_keysplit voicegroup009, KeySplitTable5  @ 868E55C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 868E5F8
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 6, 4  @ 868E664
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 2, 6, 1  @ 868E670
	.align 2
voicegroup084:: @ 868E67C
	voice_keysplit_all voicegroup001  @ 868E67C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 868E724
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868E79C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868E8A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 868E8B0
	voice_keysplit voicegroup006, KeySplitTable2  @ 868E8BC
	voice_keysplit voicegroup009, KeySplitTable5  @ 868E94C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868E9E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 868EA90
	voice_noise_alt 0, 0, 1, 7, 1  @ 868EC64
	voice_noise_alt 0, 0, 1, 0, 0  @ 868EC70
	.align 2
voicegroup085:: @ 868EC7C
	voice_keysplit_all voicegroup001  @ 868EC7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868ED9C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868EEA4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 868EEB0
	voice_keysplit voicegroup007, KeySplitTable3  @ 868EF1C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868EFE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 868F060
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 13, 1  @ 868F06C
	voice_noise_alt 0, 0, 1, 7, 1  @ 868F264
	voice_noise_alt 0, 0, 1, 0, 0  @ 868F270
	.align 2
voicegroup086:: @ 868F27C
	voice_keysplit_all voicegroup001  @ 868F27C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 868F324
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 868F348
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 868F39C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 868F420
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 868F42C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 868F4A4
	voice_keysplit voicegroup006, KeySplitTable2  @ 868F4BC
	voice_keysplit voicegroup007, KeySplitTable3  @ 868F51C
	voice_keysplit voicegroup009, KeySplitTable5  @ 868F54C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 868F5E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 868F660
	voice_noise_alt 0, 0, 1, 7, 1  @ 868F864
	voice_noise_alt 0, 0, 1, 0, 0  @ 868F870
	.align 2
voicegroup087:: @ 868F87C
	voice_keysplit_all voicegroup001  @ 868F87C
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 0  @ 868F9D8
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 868FA2C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 868FA44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 868FAB0
	voice_keysplit voicegroup007, KeySplitTable3  @ 868FB1C
	voice_keysplit voicegroup009, KeySplitTable5  @ 868FB4C
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 7, 15, 0  @ 868FC60
	voice_noise_alt 0, 0, 1, 7, 1  @ 868FE64
	voice_noise_alt 0, 0, 1, 0, 0  @ 868FE70
	.align 2
voicegroup088:: @ 868FE7C
	voice_keysplit_all voicegroup001  @ 868FE7C
	voice_keysplit voicegroup005, KeySplitTable1  @ 868FE88
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 868FEC4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 868FF24
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 86900A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 239  @ 86900B0
	voice_keysplit voicegroup006, KeySplitTable2  @ 86900BC
	voice_keysplit voicegroup007, KeySplitTable3  @ 869011C
	voice_keysplit voicegroup008, KeySplitTable4  @ 8690134
	voice_keysplit voicegroup009, KeySplitTable5  @ 869014C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86901E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8690254
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 0  @ 8690290
	voice_noise_alt 0, 0, 1, 0, 0  @ 8690470
	.align 2
voicegroup089:: @ 869047C
	voice_keysplit_all voicegroup001  @ 869047C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8690524
	voice_keysplit voicegroup006, KeySplitTable2  @ 86906BC
	voice_keysplit voicegroup009, KeySplitTable5  @ 869074C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86907E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 8690854
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 7, 15, 0  @ 8690860
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 869086C
	voice_noise_alt 0, 0, 1, 7, 1  @ 8690A64
	voice_noise_alt 0, 0, 1, 0, 0  @ 8690A70
	.align 2
voicegroup090:: @ 8690A7C
	voice_keysplit_all voicegroup001  @ 8690A7C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8690E54
	voice_noise_alt 0, 0, 1, 7, 1  @ 8691064
	voice_noise_alt 0, 0, 1, 0, 0  @ 8691070
	.align 2
voicegroup091:: @ 869107C
	voice_keysplit_all voicegroup001  @ 869107C
	voice_keysplit voicegroup005, KeySplitTable1  @ 8691088
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 72, 249  @ 86910E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8691118
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 165  @ 8691148
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 869119C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8691220
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 226, 0, 38  @ 8691298
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 86912A4
	voice_keysplit voicegroup006, KeySplitTable2  @ 86912BC
	voice_keysplit voicegroup008, KeySplitTable4  @ 8691334
	voice_keysplit voicegroup009, KeySplitTable5  @ 869134C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86913E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 7, 0  @ 8691454
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 2, 6, 1  @ 8691460
	voice_noise_alt 0, 0, 1, 7, 1  @ 8691664
	voice_noise_alt 0, 0, 1, 0, 0  @ 8691670
	.align 2
voicegroup092:: @ 869167C
	voice_keysplit_all voicegroup001  @ 869167C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8691718
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 869179C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8691844
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 86918A4
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 7, 0  @ 8691A54
	voice_noise_alt 0, 0, 1, 7, 1  @ 8691C64
	voice_noise_alt 0, 0, 1, 0, 0  @ 8691C70
	.align 2
voicegroup093:: @ 8691C7C
	voice_keysplit_all voicegroup001  @ 8691C7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8691D18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 8691D9C
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 8691E2C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8691E44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 8691EA4
	voice_keysplit voicegroup006, KeySplitTable2  @ 8691EBC
	voice_keysplit voicegroup008, KeySplitTable4  @ 8691F34
	voice_keysplit voicegroup009, KeySplitTable5  @ 8691F4C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8691FE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 7, 0  @ 8692054
	voice_noise_alt 0, 0, 1, 7, 1  @ 8692264
	voice_noise_alt 0, 0, 1, 0, 0  @ 8692270
	.align 2
voicegroup094:: @ 869227C
	voice_keysplit_all voicegroup001  @ 869227C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 72, 249  @ 86922E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8692318
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8692324
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8692348
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 8692378
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 869239C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 86924B0
	voice_keysplit voicegroup006, KeySplitTable2  @ 86924BC
	voice_keysplit voicegroup007, KeySplitTable3  @ 869251C
	voice_keysplit voicegroup009, KeySplitTable5  @ 869254C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86925E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 7, 0  @ 8692654
	voice_noise_alt 0, 0, 1, 7, 1  @ 8692864
	voice_noise_alt 0, 0, 1, 0, 0  @ 8692870
	.align 2
voicegroup095:: @ 869287C
	voice_keysplit_all voicegroup001  @ 869287C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8692948
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 869299C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8692A44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 8692BE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 3  @ 8692C54
	voice_noise_alt 0, 0, 1, 7, 1  @ 8692E64
	voice_noise_alt 0, 0, 1, 0, 0  @ 8692E70
	.align 2
voicegroup096:: @ 8692E7C
	voice_keysplit_all voicegroup001  @ 8692E7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8692F18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8692F48
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8692F9C
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 869302C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8693044
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 86930B0
	voice_keysplit voicegroup007, KeySplitTable3  @ 869311C
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 0  @ 869326C
	voice_noise_alt 0, 0, 1, 7, 1  @ 8693464
	voice_noise_alt 0, 0, 1, 0, 0  @ 8693470
	.align 2
voicegroup097:: @ 869347C
	voice_keysplit_all voicegroup001  @ 869347C
	voice_keysplit voicegroup005, KeySplitTable1  @ 8693488
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8693524
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 249  @ 86936B0
	voice_keysplit voicegroup008, KeySplitTable4  @ 8693734
	voice_keysplit voicegroup009, KeySplitTable5  @ 869374C
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 7, 0  @ 8693854
	voice_noise_alt 0, 0, 1, 7, 1  @ 8693A64
	voice_noise_alt 0, 0, 1, 0, 0  @ 8693A70
	.align 2
voicegroup098:: @ 8693A7C
	voice_keysplit_all voicegroup001  @ 8693A7C
	voice_keysplit voicegroup007, KeySplitTable3  @ 8693D1C
	voice_keysplit voicegroup008, KeySplitTable4  @ 8693D34
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 8693DE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 7, 0  @ 8693E54
	voice_directsound 60, 0, DirectSoundWaveData_873ECD8, 255, 255, 255, 127  @ 8694058
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 8694064
	voice_noise_alt 0, 0, 1, 0, 0  @ 8694070
	.align 2
voicegroup099:: @ 869407C
	voice_keysplit_all voicegroup001  @ 869407C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8694118
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 869422C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8694244
	voice_keysplit voicegroup007, KeySplitTable3  @ 869431C
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 7, 0  @ 8694454
	voice_noise_alt 0, 0, 1, 7, 1  @ 8694664
	voice_noise_alt 0, 0, 1, 0, 0  @ 8694670
	.align 2
voicegroup100:: @ 869467C
	voice_keysplit_all voicegroup001  @ 869467C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8694718
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8694748
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 869479C
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 0  @ 86947D8
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 869482C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8694844
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 86948B0
	voice_keysplit voicegroup007, KeySplitTable3  @ 869491C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 86949E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 8694A78
	voice_noise_alt 0, 0, 1, 7, 1  @ 8694C64
	voice_noise_alt 0, 0, 1, 0, 0  @ 8694C70
	.align 2
voicegroup101:: @ 8694C7C
	voice_keysplit_all voicegroup001  @ 8694C7C
	voice_keysplit voicegroup005, KeySplitTable1  @ 8694C88
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 8694CC4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8694D24
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8694EA4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 239  @ 8694EB0
	voice_keysplit voicegroup006, KeySplitTable2  @ 8694EBC
	voice_keysplit voicegroup007, KeySplitTable3  @ 8694F1C
	voice_keysplit voicegroup008, KeySplitTable4  @ 8694F34
	voice_keysplit voicegroup009, KeySplitTable5  @ 8694F4C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 8694FE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8694FF4
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8695054
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8695090
	.align 2
voicegroup102:: @ 86951A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 248  @ 86952C4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 165  @ 86953CC
	.align 2
voicegroup103:: @ 869557C
	voice_keysplit_all voicegroup002  @ 8695588
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8695624
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 869569C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 86957A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 239  @ 86957B0
	voice_keysplit voicegroup006, KeySplitTable2  @ 86957BC
	voice_keysplit voicegroup007, KeySplitTable3  @ 869581C
	voice_keysplit voicegroup009, KeySplitTable5  @ 869584C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 8695960
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 1  @ 869596C
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 86959CC
	voice_noise_alt 0, 0, 2, 6, 1  @ 8695B70
	.align 2
voicegroup104:: @ 8695B7C
	voice_keysplit_all voicegroup003  @ 8695B7C
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_high, 255, 0, 206, 242  @ 8695BA0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8695DA4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi, 255, 0, 255, 204  @ 8695F18
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 0, 15, 0  @ 8695F60
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 8695F6C
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 15, 0  @ 8695FCC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 0, 206, 242  @ 8696080
	.align 2
voicegroup105:: @ 869608C
	voice_keysplit_all voicegroup002  @ 869608C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 216  @ 8696128
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 8696464
	.align 2
voicegroup106:: @ 8696470
	voice_keysplit_all voicegroup002  @ 8696470
	voice_keysplit voicegroup005, KeySplitTable1  @ 869647C
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86964B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8696518
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 64, 38, 128, 226  @ 869653C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 8696590
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86965CC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 86965D8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8696638
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8696698
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 86966A4
	voice_keysplit voicegroup006, KeySplitTable2  @ 86966B0
	voice_keysplit voicegroup007, KeySplitTable3  @ 8696710
	voice_keysplit voicegroup009, KeySplitTable5  @ 8696740
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127  @ 8696758
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86967DC
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 86967E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 0  @ 8696860
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 8696884
	voice_noise_alt 0, 0, 1, 0, 0  @ 8696A64
	.align 2
voicegroup107:: @ 8696A70
	voice_keysplit_all voicegroup002  @ 8696A70
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 8696AB8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8696B18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 8696B90
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8696C98
	voice_keysplit voicegroup006, KeySplitTable2  @ 8696CB0
	voice_directsound 60, 0, DirectSoundWaveData_advanced_orchestra_voice_ahhs, 255, 0, 255, 0  @ 8696CEC
	voice_keysplit voicegroup009, KeySplitTable5  @ 8696D40
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 8696DE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 0  @ 8696E60
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 8696E84
	voice_noise_alt 0, 0, 1, 0, 0  @ 8697064
	.align 2
voicegroup108:: @ 8697070
	voice_keysplit_all voicegroup004  @ 8697070
	voice_keysplit voicegroup005, KeySplitTable1  @ 869707C
	voice_directsound 60, 0, DirectSoundWaveData_heart_of_asia_gamelan, 255, 188, 139, 239  @ 86970E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 76  @ 8697190
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8697214
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8697298
	voice_programmable_wave_alt ProgrammableWaveData_86B4860, 0, 7, 15, 1  @ 8697460
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 0, 15, 0  @ 8697484
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 86974C0
	voice_noise_alt 0, 0, 1, 7, 1  @ 8697658
	voice_noise_alt 0, 0, 1, 0, 0  @ 8697664
	.align 2
voicegroup109:: @ 8697670
	voice_keysplit_all voicegroup004  @ 8697670
	voice_directsound 60, 0, DirectSoundWaveData_unknown_church_organ, 255, 76, 154, 188  @ 8697754
	voice_directsound 60, 0, DirectSoundWaveData_emu_ii_pipe_organ, 255, 76, 154, 188  @ 8697760
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8697814
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 7, 15, 0  @ 8697A48
	.align 2
voicegroup110:: @ 8697A54
	voice_keysplit_all voicegroup002  @ 8697A54
	voice_keysplit voicegroup005, KeySplitTable1  @ 8697A60
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8697AFC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8697C7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 239  @ 8697C88
	voice_keysplit voicegroup006, KeySplitTable2  @ 8697C94
	voice_keysplit voicegroup007, KeySplitTable3  @ 8697CF4
	voice_keysplit voicegroup009, KeySplitTable5  @ 8697D24
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 8697E38
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 1  @ 8697E44
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 8697EA4
	voice_noise_alt 0, 0, 2, 6, 1  @ 8698048
	.align 2
voicegroup111:: @ 8698054
	voice_keysplit_all voicegroup002  @ 8698054
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 8698120
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 226  @ 86981B0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 195  @ 86981BC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 195  @ 86981C8
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 195  @ 869833C
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 8698438
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 1  @ 8698444
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 86984A4
	voice_noise_alt 0, 0, 1, 7, 1  @ 869863C
	voice_noise_alt 0, 0, 2, 6, 1  @ 8698648
	.align 2
voicegroup112:: @ 8698654
	voice_keysplit_all voicegroup003  @ 8698654
	voice_keysplit voicegroup005, KeySplitTable1  @ 8698660
	voice_programmable_wave_alt ProgrammableWaveData_86B4970, 0, 7, 15, 1  @ 8698684
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86986FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 8698720
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 76  @ 8698774
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86987F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 128, 252, 0, 115  @ 869881C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 869887C
	voice_keysplit voicegroup006, KeySplitTable2  @ 8698894
	voice_directsound 60, 0, DirectSoundWaveData_advanced_orchestra_voice_ahhs, 128, 165, 128, 188  @ 86988C4
	voice_directsound 60, 0, DirectSoundWaveData_unused_unknown_female_voice, 128, 165, 128, 204  @ 86988D0
	voice_directsound 60, 0, DirectSoundWaveData_unused_unknown_male_voice, 128, 165, 128, 188  @ 86988DC
	voice_keysplit voicegroup009, KeySplitTable5  @ 8698924
	voice_noise_alt 0, 0, 7, 10, 1  @ 8698C3C
	voice_noise_alt 0, 0, 2, 6, 1  @ 8698C48
	.align 2
voicegroup113:: @ 8698C54
	voice_keysplit_all voicegroup002  @ 8698C54
	voice_programmable_wave_alt ProgrammableWaveData_86B4990, 0, 7, 15, 1  @ 8698C60
	voice_programmable_wave_alt ProgrammableWaveData_86B49B0, 0, 7, 15, 1  @ 8698C6C
	voice_programmable_wave_alt ProgrammableWaveData_86B49A0, 0, 7, 15, 1  @ 8698C78
	voice_programmable_wave_alt ProgrammableWaveData_86B4970, 0, 7, 15, 1  @ 8698C84
	voice_programmable_wave_alt ProgrammableWaveData_86B4980, 0, 7, 15, 1  @ 8698C90
	voice_programmable_wave_alt ProgrammableWaveData_86B48B0, 0, 7, 15, 1  @ 8698C9C
	voice_programmable_wave_alt ProgrammableWaveData_86B48C0, 0, 7, 15, 1  @ 8698CA8
	voice_programmable_wave_alt ProgrammableWaveData_86B48D0, 0, 7, 15, 1  @ 8698CB4
	voice_programmable_wave_alt ProgrammableWaveData_86B48E0, 0, 7, 15, 1  @ 8698CC0
	voice_programmable_wave_alt ProgrammableWaveData_86B48F0, 0, 7, 15, 1  @ 8698CCC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 8698CE4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 8698CFC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 195  @ 8698DB0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 8698DF8
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 8698E04
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 8698E1C
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 7, 15, 1  @ 8698E28
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 180, 246  @ 8698E88
	voice_keysplit voicegroup007, KeySplitTable3  @ 8698EF4
	voice_keysplit voicegroup009, KeySplitTable5  @ 8698F24
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 127  @ 8698FC0
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 1  @ 8699068
	voice_noise_alt 0, 0, 1, 7, 1  @ 869923C
	voice_noise_alt 0, 0, 2, 6, 1  @ 8699248
	.align 2
voicegroup114:: @ 8699254
	voice_keysplit_all voicegroup001  @ 8699254
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 216, 90, 242  @ 86992FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 86993E0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 8699488
	voice_keysplit voicegroup006, KeySplitTable2  @ 8699494
	voice_keysplit voicegroup007, KeySplitTable3  @ 86994F4
	voice_keysplit voicegroup009, KeySplitTable5  @ 8699524
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86995C0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 246, 0, 216  @ 8699848
	.align 2
voicegroup115:: @ 8699854
	voice_keysplit_all voicegroup002  @ 8699854
	voice_keysplit voicegroup005, KeySplitTable1  @ 8699860
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 128, 249, 0, 188  @ 8699884
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_high, 255, 188, 103, 165  @ 8699890
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86998FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 8699920
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 204  @ 8699974
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 128, 204  @ 8699980
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86999B0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 165, 154, 165  @ 86999BC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 86999E0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 198  @ 86999F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 146  @ 8699A1C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 8699A70
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 8699A7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 8699A88
	voice_keysplit voicegroup006, KeySplitTable2  @ 8699A94
	voice_keysplit voicegroup007, KeySplitTable3  @ 8699AF4
	voice_keysplit voicegroup009, KeySplitTable5  @ 8699B24
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 165, 180, 165  @ 8699B3C
	voice_programmable_wave_alt ProgrammableWaveData_86B4970, 0, 7, 15, 1  @ 8699C68
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 8699C74
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 1, 9, 2  @ 8699C80
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 8699DF4
	voice_noise_alt 0, 0, 2, 6, 2  @ 8699E3C
	voice_noise_alt 0, 0, 1, 6, 0  @ 8699E48
	.align 2
voicegroup116:: @ 8699E54
	voice_keysplit_all voicegroup002  @ 8699E54
	voice_keysplit voicegroup005, KeySplitTable1  @ 8699E60
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 146, 190, 115  @ 8699F20
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 8699F50
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 128, 216  @ 8699F74
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 8699FB0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 8699FBC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 8699FE0
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_unison_slap, 255, 165, 180, 216  @ 869A004
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 869A01C
	voice_keysplit voicegroup006, KeySplitTable2  @ 869A094
	voice_keysplit voicegroup007, KeySplitTable3  @ 869A0F4
	voice_keysplit voicegroup009, KeySplitTable5  @ 869A124
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127  @ 869A13C
	voice_programmable_wave_alt ProgrammableWaveData_86B4970, 0, 3, 6, 5  @ 869A22C
	voice_programmable_wave_alt ProgrammableWaveData_86B4970, 0, 7, 15, 0  @ 869A244
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 869A268
	voice_noise_alt 0, 0, 2, 6, 0  @ 869A43C
	voice_noise_alt 0, 0, 1, 6, 1  @ 869A448
	.align 2
voicegroup117:: @ 869A454
	voice_keysplit_all voicegroup001  @ 869A454
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 869A5E0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 869A67C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869A688
	voice_keysplit voicegroup006, KeySplitTable2  @ 869A694
	voice_keysplit voicegroup007, KeySplitTable3  @ 869A6F4
	voice_keysplit voicegroup008, KeySplitTable4  @ 869A70C
	voice_keysplit voicegroup009, KeySplitTable5  @ 869A724
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 869A820
	.align 2
voicegroup118:: @ 869A82C
	voice_keysplit_all voicegroup001  @ 869A82C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 250, 0, 242  @ 869A8D4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 869A8F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 869A928
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 869A9B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 869A9F4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 869AA54
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869AA60
	voice_keysplit voicegroup006, KeySplitTable2  @ 869AA6C
	voice_keysplit voicegroup008, KeySplitTable4  @ 869AAE4
	voice_keysplit voicegroup009, KeySplitTable5  @ 869AAFC
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 869ABF8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 2  @ 869AC1C
	voice_directsound 60, 0, DirectSoundWaveData_unknown_polysynth, 255, 0, 255, 127  @ 869AC64
	.align 2
voicegroup119:: @ 869AC70
	voice_keysplit_all voicegroup001  @ 869AC70
	voice_keysplit voicegroup005, KeySplitTable1  @ 869AC7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 869AD3C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 869ADFC
	voice_directsound_no_resample 60, 0, DirectSoundWaveData_sc88_timpani_with_snare, 255, 246, 0, 226  @ 869AE98
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869AEA4
	voice_keysplit voicegroup006, KeySplitTable2  @ 869AEB0
	voice_keysplit voicegroup007, KeySplitTable3  @ 869AF10
	voice_keysplit voicegroup009, KeySplitTable5  @ 869AF40
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 2  @ 869B03C
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 2  @ 869B0A8
	.align 2
voicegroup120:: @ 869B0B4
	voice_keysplit_all voicegroup001  @ 869B0B4
	voice_keysplit voicegroup005, KeySplitTable1  @ 869B0C0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 869B240
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 869B2D0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869B2E8
	voice_keysplit voicegroup006, KeySplitTable2  @ 869B2F4
	voice_keysplit voicegroup007, KeySplitTable3  @ 869B354
	voice_keysplit voicegroup009, KeySplitTable5  @ 869B384
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 869B480
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 2  @ 869B4EC
	.align 2
voicegroup121:: @ 869B4F8
	voice_keysplit_all voicegroup001  @ 869B4F8
	voice_keysplit voicegroup005, KeySplitTable1  @ 869B504
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 869B684
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 869B714
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869B72C
	voice_keysplit voicegroup006, KeySplitTable2  @ 869B738
	voice_keysplit voicegroup007, KeySplitTable3  @ 869B798
	voice_keysplit voicegroup009, KeySplitTable5  @ 869B7C8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 869B864
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 2  @ 869B8C4
	.align 2
voicegroup122:: @ 869B900
	voice_keysplit_all voicegroup001  @ 869B900
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 869BAB0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 869BB1C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869BB34
	voice_keysplit voicegroup006, KeySplitTable2  @ 869BB40
	voice_directsound 60, 0, DirectSoundWaveData_unknown_polysynth, 255, 165, 154, 127  @ 869BBA0
	voice_keysplit voicegroup009, KeySplitTable5  @ 869BBD0
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 869BCCC
	.align 2
voicegroup123:: @ 869BCF0
	voice_keysplit_all voicegroup001  @ 869BCF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 216, 90, 242  @ 869BD98
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 869BE7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869BF24
	voice_keysplit voicegroup006, KeySplitTable2  @ 869BF30
	voice_keysplit voicegroup007, KeySplitTable3  @ 869BF90
	voice_keysplit voicegroup009, KeySplitTable5  @ 869BFC0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 869C05C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 246, 0, 216  @ 869C2E4
	.align 2
voicegroup124:: @ 869C2F0
	voice_keysplit_all voicegroup001  @ 869C2F0
	voice_keysplit voicegroup005, KeySplitTable1  @ 869C2FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 869C47C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 869C518
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869C524
	voice_keysplit voicegroup006, KeySplitTable2  @ 869C530
	voice_keysplit voicegroup007, KeySplitTable3  @ 869C590
	voice_keysplit voicegroup009, KeySplitTable5  @ 869C5C0
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 869C6BC
	.align 2
voicegroup125:: @ 869C704
	voice_keysplit_all voicegroup001  @ 869C704
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 869C8CC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869C938
	voice_keysplit voicegroup006, KeySplitTable2  @ 869C944
	voice_keysplit voicegroup007, KeySplitTable3  @ 869C9A4
	voice_keysplit voicegroup009, KeySplitTable5  @ 869C9D4
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 869CAD0
	.align 2
voicegroup126:: @ 869CAF4
	voice_keysplit_all voicegroup001  @ 869CAF4
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 235, 128, 99  @ 869CC80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869CD28
	voice_keysplit voicegroup006, KeySplitTable2  @ 869CD34
	voice_keysplit voicegroup007, KeySplitTable3  @ 869CD94
	voice_keysplit voicegroup009, KeySplitTable5  @ 869CDC4
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 2  @ 869CEC0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 216  @ 869D0DC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 246, 0, 216  @ 869D0E8
	.align 2
voicegroup127:: @ 869D0F4
	voice_directsound 60, 0, DirectSoundWaveData_unknown_synth_snare, 255, 249, 103, 165  @ 869D0F4
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 0, 255, 165  @ 869D190
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 226, 0, 165  @ 869D19C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 869D328
	voice_keysplit voicegroup006, KeySplitTable2  @ 869D334
	voice_noise 0, 0, 7, 15, 0  @ 869D688
	voice_noise 0, 2, 7, 15, 0  @ 869D694
	voice_noise_alt 0, 2, 0, 15, 0  @ 869D6A0
	voice_noise_alt 1, 0, 0, 15, 0  @ 869D6AC
	voice_noise_alt 0, 0, 0, 15, 0  @ 869D6B8
	voice_noise_alt 0, 0, 3, 0, 0  @ 869D6C4
	voice_noise_alt 0, 0, 2, 0, 0  @ 869D6D0
	voice_noise_alt 0, 0, 1, 0, 0  @ 869D6DC
	voice_noise_alt 0, 0, 1, 0, 1  @ 869D6E8
	.align 2
voicegroup128:: @ 869D6F4
	voice_directsound_no_resample 60, 0, DirectSoundWaveData_bicycle_bell, 255, 249, 0, 165  @ 869D6F4
	voice_directsound_alt 60, 0, DirectSoundWaveData_bicycle_bell, 255, 0, 255, 165  @ 869D700
	voice_directsound 60, 0, DirectSoundWaveData_unknown_synth_snare, 255, 0, 255, 165  @ 869D70C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 242, 0, 127  @ 869D718
	voice_noise_alt 0, 0, 1, 0, 1  @ 869D724
	voice_noise_alt 1, 0, 1, 0, 1  @ 869D730
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 255, 165  @ 869D73C
	voice_directsound 60, 0, DirectSoundWaveData_8725A2C, 255, 0, 255, 165  @ 869D754
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 0, 255, 127  @ 869D760
	voice_directsound 60, 0, DirectSoundWaveData_872762C, 255, 0, 255, 127  @ 869D76C
	voice_noise_alt 1, 0, 2, 0, 0  @ 869D778
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 226, 0, 127  @ 869D79C
	voice_directsound 60, 0, DirectSoundWaveData_872921C, 255, 0, 255, 0  @ 869D7A8
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 204, 0, 127  @ 869D7B4
	voice_directsound 60, 0, DirectSoundWaveData_872A5D0, 255, 0, 255, 127  @ 869D7CC
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 0, 255, 127  @ 869D7D8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 127  @ 869D7F0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_wind, 255, 0, 255, 127  @ 869D7FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_bubbles, 255, 0, 255, 127  @ 869D808
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 127  @ 869D814
	voice_noise_alt 0, 0, 7, 15, 1  @ 869D820
	voice_directsound 60, 0, DirectSoundWaveData_872EEA8, 255, 0, 255, 127  @ 869D82C
	voice_noise_alt 1, 0, 7, 15, 1  @ 869D838
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 246, 0, 127  @ 869D844
	voice_directsound 60, 0, DirectSoundWaveData_87301B0, 255, 0, 255, 127  @ 869D850
	voice_directsound 60, 0, DirectSoundWaveData_unused_acid_bass, 255, 0, 255, 127  @ 869D868
	voice_directsound_alt 60, 0, DirectSoundWaveData_87301B0, 255, 0, 255, 127  @ 869D880
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 255, 255, 127  @ 869D88C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 0, 255, 127  @ 869D898
	voice_directsound 60, 0, DirectSoundWaveData_8734298, 255, 0, 255, 127  @ 869D8A4
	voice_directsound 60, 0, DirectSoundWaveData_unused_acid_bass, 255, 242, 0, 0  @ 869D8B0
	voice_directsound 60, 0, DirectSoundWaveData_87364A8, 255, 0, 255, 0  @ 869D8BC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 869D8C8
	voice_directsound 60, 0, DirectSoundWaveData_unknown_close_hihat, 255, 127, 0, 188  @ 869D8D4
	voice_directsound 60, 0, DirectSoundWaveData_87385E4, 255, 249, 0, 165  @ 869D8E0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 13, 0, 255, 127  @ 869D8F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 13, 0, 255, 127  @ 869D904
	voice_directsound 60, 0, DirectSoundWaveData_unknown_polysynth, 255, 0, 255, 127  @ 869D910
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 252, 0, 204  @ 869D91C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 869D934
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 188, 0, 0  @ 869D94C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 226, 0, 127  @ 869D958
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_cymbal_crash, 26, 0, 255, 127  @ 869D964
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 252, 0, 127  @ 869D97C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 127, 0, 127  @ 869D994
	voice_noise_alt 0, 1, 6, 0, 0  @ 869D9A0
	voice_directsound 60, 0, DirectSoundWaveData_jv1080_slap_bass, 255, 255, 255, 127  @ 869D9AC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 869D9B8
	voice_directsound 60, 0, DirectSoundWaveData_873ECD8, 255, 255, 255, 127  @ 869D9C4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_french_horn_72, 11, 242, 0, 127  @ 869D9D0
	voice_directsound 60, 0, DirectSoundWaveData_8740818, 255, 255, 255, 127  @ 869D9E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 869D9F4
	voice_directsound 60, 0, DirectSoundWaveData_unknown_tom, 255, 0, 255, 165  @ 869DA00
	voice_noise_alt 0, 5, 7, 15, 1  @ 869DA0C
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 128, 242, 0, 165  @ 869DA18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_string_ensemble_72, 255, 0, 255, 165  @ 869DA24
	voice_noise_alt 0, 6, 6, 0, 1  @ 869DA3C
	voice_noise_alt 0, 3, 6, 0, 1  @ 869DA48
	voice_directsound 60, 0, DirectSoundWaveData_unused_acid_bass, 15, 127, 231, 127  @ 869DA60
	voice_directsound 60, 0, DirectSoundWaveData_87424B0, 255, 0, 255, 165  @ 869DCAC
	voice_directsound 60, 0, DirectSoundWaveData_87430C0, 255, 0, 255, 165  @ 869DCB8
	voice_directsound 60, 0, DirectSoundWaveData_8743C50, 255, 0, 255, 165  @ 869DCC4
	voice_directsound 60, 0, DirectSoundWaveData_87446EC, 255, 0, 255, 165  @ 869DCD0
	voice_directsound 60, 0, DirectSoundWaveData_8745034, 255, 0, 255, 165  @ 869DCDC
	voice_directsound 60, 0, DirectSoundWaveData_8745A7C, 255, 0, 255, 165  @ 869DCE8
	.align 2
gCryTable:: @ 869DCF4
	cry Cry_Bulbasaur  @ 869DCF4
	cry Cry_Ivysaur  @ 869DD00
	cry Cry_Venusaur  @ 869DD0C
	cry Cry_Charmander  @ 869DD18
	cry Cry_Charmeleon  @ 869DD24
	cry Cry_Charizard  @ 869DD30
	cry Cry_Squirtle  @ 869DD3C
	cry Cry_Wartortle  @ 869DD48
	cry Cry_Blastoise  @ 869DD54
	cry Cry_Caterpie  @ 869DD60
	cry Cry_Metapod  @ 869DD6C
	cry Cry_Butterfree  @ 869DD78
	cry Cry_Weedle  @ 869DD84
	cry Cry_Kakuna  @ 869DD90
	cry Cry_Beedrill  @ 869DD9C
	cry Cry_Pidgey  @ 869DDA8
	cry Cry_Pidgeotto  @ 869DDB4
	cry Cry_Pidgeot  @ 869DDC0
	cry Cry_Rattata  @ 869DDCC
	cry Cry_Raticate  @ 869DDD8
	cry Cry_Spearow  @ 869DDE4
	cry Cry_Fearow  @ 869DDF0
	cry Cry_Ekans  @ 869DDFC
	cry Cry_Arbok  @ 869DE08
	cry Cry_Pikachu  @ 869DE14
	cry Cry_Raichu  @ 869DE20
	cry Cry_Sandshrew  @ 869DE2C
	cry Cry_Sandslash  @ 869DE38
	cry Cry_NidoranF  @ 869DE44
	cry Cry_Nidorina  @ 869DE50
	cry Cry_Nidoqueen  @ 869DE5C
	cry Cry_NidoranM  @ 869DE68
	cry Cry_Nidorino  @ 869DE74
	cry Cry_Nidoking  @ 869DE80
	cry Cry_Clefairy  @ 869DE8C
	cry Cry_Clefable  @ 869DE98
	cry Cry_Vulpix  @ 869DEA4
	cry Cry_Ninetales  @ 869DEB0
	cry Cry_Jigglypuff  @ 869DEBC
	cry Cry_Wigglytuff  @ 869DEC8
	cry Cry_Zubat  @ 869DED4
	cry Cry_Golbat  @ 869DEE0
	cry Cry_Oddish  @ 869DEEC
	cry Cry_Gloom  @ 869DEF8
	cry Cry_Vileplume  @ 869DF04
	cry Cry_Paras  @ 869DF10
	cry Cry_Parasect  @ 869DF1C
	cry Cry_Venonat  @ 869DF28
	cry Cry_Venomoth  @ 869DF34
	cry Cry_Diglett  @ 869DF40
	cry Cry_Dugtrio  @ 869DF4C
	cry Cry_Meowth  @ 869DF58
	cry Cry_Persian  @ 869DF64
	cry Cry_Psyduck  @ 869DF70
	cry Cry_Golduck  @ 869DF7C
	cry Cry_Mankey  @ 869DF88
	cry Cry_Primeape  @ 869DF94
	cry Cry_Growlithe  @ 869DFA0
	cry Cry_Arcanine  @ 869DFAC
	cry Cry_Poliwag  @ 869DFB8
	cry Cry_Poliwhirl  @ 869DFC4
	cry Cry_Poliwrath  @ 869DFD0
	cry Cry_Abra  @ 869DFDC
	cry Cry_Kadabra  @ 869DFE8
	cry Cry_Alakazam  @ 869DFF4
	cry Cry_Machop  @ 869E000
	cry Cry_Machoke  @ 869E00C
	cry Cry_Machamp  @ 869E018
	cry Cry_Bellsprout  @ 869E024
	cry Cry_Weepinbell  @ 869E030
	cry Cry_Victreebel  @ 869E03C
	cry Cry_Tentacool  @ 869E048
	cry Cry_Tentacruel  @ 869E054
	cry Cry_Geodude  @ 869E060
	cry Cry_Graveler  @ 869E06C
	cry Cry_Golem  @ 869E078
	cry Cry_Ponyta  @ 869E084
	cry Cry_Rapidash  @ 869E090
	cry Cry_Slowpoke  @ 869E09C
	cry Cry_Slowbro  @ 869E0A8
	cry Cry_Magnemite  @ 869E0B4
	cry Cry_Magneton  @ 869E0C0
	cry Cry_Farfetchd  @ 869E0CC
	cry Cry_Doduo  @ 869E0D8
	cry Cry_Dodrio  @ 869E0E4
	cry Cry_Seel  @ 869E0F0
	cry Cry_Dewgong  @ 869E0FC
	cry Cry_Grimer  @ 869E108
	cry Cry_Muk  @ 869E114
	cry Cry_Shellder  @ 869E120
	cry Cry_Cloyster  @ 869E12C
	cry Cry_Gastly  @ 869E138
	cry Cry_Haunter  @ 869E144
	cry Cry_Gengar  @ 869E150
	cry Cry_Onix  @ 869E15C
	cry Cry_Drowzee  @ 869E168
	cry Cry_Hypno  @ 869E174
	cry Cry_Krabby  @ 869E180
	cry Cry_Kingler  @ 869E18C
	cry Cry_Voltorb  @ 869E198
	cry Cry_Electrode  @ 869E1A4
	cry Cry_Exeggcute  @ 869E1B0
	cry Cry_Exeggutor  @ 869E1BC
	cry Cry_Cubone  @ 869E1C8
	cry Cry_Marowak  @ 869E1D4
	cry Cry_Hitmonlee  @ 869E1E0
	cry Cry_Hitmonchan  @ 869E1EC
	cry Cry_Lickitung  @ 869E1F8
	cry Cry_Koffing  @ 869E204
	cry Cry_Weezing  @ 869E210
	cry Cry_Rhyhorn  @ 869E21C
	cry Cry_Rhydon  @ 869E228
	cry Cry_Chansey  @ 869E234
	cry Cry_Tangela  @ 869E240
	cry Cry_Kangaskhan  @ 869E24C
	cry Cry_Horsea  @ 869E258
	cry Cry_Seadra  @ 869E264
	cry Cry_Goldeen  @ 869E270
	cry Cry_Seaking  @ 869E27C
	cry Cry_Staryu  @ 869E288
	cry Cry_Starmie  @ 869E294
	cry Cry_MrMime  @ 869E2A0
	cry Cry_Scyther  @ 869E2AC
	cry Cry_Jynx  @ 869E2B8
	cry Cry_Electabuzz  @ 869E2C4
	cry Cry_Magmar  @ 869E2D0
	cry Cry_Pinsir  @ 869E2DC
	cry Cry_Tauros  @ 869E2E8
	cry Cry_Magikarp  @ 869E2F4
	cry Cry_Gyarados  @ 869E300
	cry Cry_Lapras  @ 869E30C
	cry Cry_Ditto  @ 869E318
	cry Cry_Eevee  @ 869E324
	cry Cry_Vaporeon  @ 869E330
	cry Cry_Jolteon  @ 869E33C
	cry Cry_Flareon  @ 869E348
	cry Cry_Porygon  @ 869E354
	cry Cry_Omanyte  @ 869E360
	cry Cry_Omastar  @ 869E36C
	cry Cry_Kabuto  @ 869E378
	cry Cry_Kabutops  @ 869E384
	cry Cry_Aerodactyl  @ 869E390
	cry Cry_Snorlax  @ 869E39C
	cry Cry_Articuno  @ 869E3A8
	cry Cry_Zapdos  @ 869E3B4
	cry Cry_Moltres  @ 869E3C0
	cry Cry_Dratini  @ 869E3CC
	cry Cry_Dragonair  @ 869E3D8
	cry Cry_Dragonite  @ 869E3E4
	cry Cry_Mewtwo  @ 869E3F0
	cry Cry_Mew  @ 869E3FC
	cry Cry_Chikorita  @ 869E408
	cry Cry_Bayleef  @ 869E414
	cry Cry_Meganium  @ 869E420
	cry Cry_Cyndaquil  @ 869E42C
	cry Cry_Quilava  @ 869E438
	cry Cry_Typhlosion  @ 869E444
	cry Cry_Totodile  @ 869E450
	cry Cry_Croconaw  @ 869E45C
	cry Cry_Feraligatr  @ 869E468
	cry Cry_Sentret  @ 869E474
	cry Cry_Furret  @ 869E480
	cry Cry_Hoothoot  @ 869E48C
	cry Cry_Noctowl  @ 869E498
	cry Cry_Ledyba  @ 869E4A4
	cry Cry_Ledian  @ 869E4B0
	cry Cry_Spinarak  @ 869E4BC
	cry Cry_Ariados  @ 869E4C8
	cry Cry_Crobat  @ 869E4D4
	cry Cry_Chinchou  @ 869E4E0
	cry Cry_Lanturn  @ 869E4EC
	cry Cry_Pichu  @ 869E4F8
	cry Cry_Cleffa  @ 869E504
	cry Cry_Igglybuff  @ 869E510
	cry Cry_Togepi  @ 869E51C
	cry Cry_Togetic  @ 869E528
	cry Cry_Natu  @ 869E534
	cry Cry_Xatu  @ 869E540
	cry Cry_Mareep  @ 869E54C
	cry Cry_Flaaffy  @ 869E558
	cry Cry_Ampharos  @ 869E564
	cry Cry_Bellossom  @ 869E570
	cry Cry_Marill  @ 869E57C
	cry Cry_Azumarill  @ 869E588
	cry Cry_Sudowoodo  @ 869E594
	cry Cry_Politoed  @ 869E5A0
	cry Cry_Hoppip  @ 869E5AC
	cry Cry_Skiploom  @ 869E5B8
	cry Cry_Jumpluff  @ 869E5C4
	cry Cry_Aipom  @ 869E5D0
	cry Cry_Sunkern  @ 869E5DC
	cry Cry_Sunflora  @ 869E5E8
	cry Cry_Yanma  @ 869E5F4
	cry Cry_Wooper  @ 869E600
	cry Cry_Quagsire  @ 869E60C
	cry Cry_Espeon  @ 869E618
	cry Cry_Umbreon  @ 869E624
	cry Cry_Murkrow  @ 869E630
	cry Cry_Slowking  @ 869E63C
	cry Cry_Misdreavus  @ 869E648
	cry Cry_Unown  @ 869E654
	cry Cry_Wobbuffet  @ 869E660
	cry Cry_Girafarig  @ 869E66C
	cry Cry_Pineco  @ 869E678
	cry Cry_Forretress  @ 869E684
	cry Cry_Dunsparce  @ 869E690
	cry Cry_Gligar  @ 869E69C
	cry Cry_Steelix  @ 869E6A8
	cry Cry_Snubbull  @ 869E6B4
	cry Cry_Granbull  @ 869E6C0
	cry Cry_Qwilfish  @ 869E6CC
	cry Cry_Scizor  @ 869E6D8
	cry Cry_Shuckle  @ 869E6E4
	cry Cry_Heracross  @ 869E6F0
	cry Cry_Sneasel  @ 869E6FC
	cry Cry_Teddiursa  @ 869E708
	cry Cry_Ursaring  @ 869E714
	cry Cry_Slugma  @ 869E720
	cry Cry_Magcargo  @ 869E72C
	cry Cry_Swinub  @ 869E738
	cry Cry_Piloswine  @ 869E744
	cry Cry_Corsola  @ 869E750
	cry Cry_Remoraid  @ 869E75C
	cry Cry_Octillery  @ 869E768
	cry Cry_Delibird  @ 869E774
	cry Cry_Mantine  @ 869E780
	cry Cry_Skarmory  @ 869E78C
	cry Cry_Houndour  @ 869E798
	cry Cry_Houndoom  @ 869E7A4
	cry Cry_Kingdra  @ 869E7B0
	cry Cry_Phanpy  @ 869E7BC
	cry Cry_Donphan  @ 869E7C8
	cry Cry_Porygon2  @ 869E7D4
	cry Cry_Stantler  @ 869E7E0
	cry Cry_Smeargle  @ 869E7EC
	cry Cry_Tyrogue  @ 869E7F8
	cry Cry_Hitmontop  @ 869E804
	cry Cry_Smoochum  @ 869E810
	cry Cry_Elekid  @ 869E81C
	cry Cry_Magby  @ 869E828
	cry Cry_Miltank  @ 869E834
	cry Cry_Blissey  @ 869E840
	cry Cry_Raikou  @ 869E84C
	cry Cry_Entei  @ 869E858
	cry Cry_Suicune  @ 869E864
	cry Cry_Larvitar  @ 869E870
	cry Cry_Pupitar  @ 869E87C
	cry Cry_Tyranitar  @ 869E888
	cry Cry_Lugia  @ 869E894
	cry Cry_HoOh  @ 869E8A0
	cry Cry_Celebi  @ 869E8AC
	cry Cry_Kecleon  @ 869E8B8
	cry Cry_Roselia  @ 869E8C4
	cry Cry_Torkoal  @ 869E8D0
	cry Cry_Electrike  @ 869E8DC
	cry Cry_Manectric  @ 869E8E8
	cry Cry_Duskull  @ 869E8F4
	cry Cry_Latias  @ 869E900
	cry Cry_Wynaut  @ 869E90C
	cry Cry_Seviper  @ 869E918
	cry Cry_Sharpedo  @ 869E924
	cry Cry_Zangoose  @ 869E930
	cry Cry_Azurill  @ 869E93C
	cry Cry_Swablu  @ 869E948
	cry Cry_Altaria  @ 869E954
	cry Cry_Unused265  @ 869E960
	cry Cry_Taillow  @ 869E96C
	cry Cry_Swellow  @ 869E978
	cry Cry_Unused268  @ 869E984
	cry Cry_Spinda  @ 869E990
	cry Cry_Torchic  @ 869E99C
	cry Cry_Combusken  @ 869E9A8
	cry Cry_Blaziken  @ 869E9B4
	cry Cry_Treecko  @ 869E9C0
	cry Cry_Grovyle  @ 869E9CC
	cry Cry_Sceptile  @ 869E9D8
	cry Cry_Mudkip  @ 869E9E4
	cry Cry_Marshtomp  @ 869E9F0
	cry Cry_Swampert  @ 869E9FC
	cry Cry_Pelipper  @ 869EA08
	cry Cry_Wingull  @ 869EA14
	cry Cry_Banette  @ 869EA20
	cry Cry_Shuppet  @ 869EA2C
	cry Cry_Lotad  @ 869EA38
	cry Cry_Lombre  @ 869EA44
	cry Cry_Ludicolo  @ 869EA50
	cry Cry_Seedot  @ 869EA5C
	cry Cry_Nuzleaf  @ 869EA68
	cry Cry_Shiftry  @ 869EA74
	cry Cry_Carvanha  @ 869EA80
	cry Cry_Wurmple  @ 869EA8C
	cry Cry_Silcoon  @ 869EA98
	cry Cry_Beautifly  @ 869EAA4
	cry Cry_Cascoon  @ 869EAB0
	cry Cry_Dustox  @ 869EABC
	cry Cry_Ralts  @ 869EAC8
	cry Cry_Kirlia  @ 869EAD4
	cry Cry_Gardevoir  @ 869EAE0
	cry Cry_Slakoth  @ 869EAEC
	cry Cry_Vigoroth  @ 869EAF8
	cry Cry_Slaking  @ 869EB04
	cry Cry_Nincada  @ 869EB10
	cry Cry_Ninjask  @ 869EB1C
	cry Cry_Shedinja  @ 869EB28
	cry Cry_Makuhita  @ 869EB34
	cry Cry_Hariyama  @ 869EB40
	cry Cry_Nosepass  @ 869EB4C
	cry Cry_Glalie  @ 869EB58
	cry Cry_Plusle  @ 869EB64
	cry Cry_Minun  @ 869EB70
	cry Cry_Surskit  @ 869EB7C
	cry Cry_Masquerain  @ 869EB88
	cry Cry_Skitty  @ 869EB94
	cry Cry_Delcatty  @ 869EBA0
	cry Cry_Gulpin  @ 869EBAC
	cry Cry_Swalot  @ 869EBB8
	cry Cry_Numel  @ 869EBC4
	cry Cry_Camerupt  @ 869EBD0
	cry Cry_Barboach  @ 869EBDC
	cry Cry_Whiscash  @ 869EBE8
	cry Cry_Corphish  @ 869EBF4
	cry Cry_Crawdaunt  @ 869EC00
	cry Cry_Spoink  @ 869EC0C
	cry Cry_Grumpig  @ 869EC18
	cry Cry_Trapinch  @ 869EC24
	cry Cry_Vibrava  @ 869EC30
	cry Cry_Flygon  @ 869EC3C
	cry Cry_Cacnea  @ 869EC48
	cry Cry_Cacturne  @ 869EC54
	cry Cry_Baltoy  @ 869EC60
	cry Cry_Claydol  @ 869EC6C
	cry Cry_Lunatone  @ 869EC78
	cry Cry_Solrock  @ 869EC84
	cry Cry_Feebas  @ 869EC90
	cry Cry_Milotic  @ 869EC9C
	cry Cry_Absol  @ 869ECA8
	cry Cry_Meditite  @ 869ECB4
	cry Cry_Medicham  @ 869ECC0
	cry Cry_Spheal  @ 869ECCC
	cry Cry_Sealeo  @ 869ECD8
	cry Cry_Walrein  @ 869ECE4
	cry Cry_Clamperl  @ 869ECF0
	cry Cry_Huntail  @ 869ECFC
	cry Cry_Gorebyss  @ 869ED08
	cry Cry_Lileep  @ 869ED14
	cry Cry_Cradily  @ 869ED20
	cry Cry_Anorith  @ 869ED2C
	cry Cry_Armaldo  @ 869ED38
	cry Cry_Beldum  @ 869ED44
	cry Cry_Metang  @ 869ED50
	cry Cry_Metagross  @ 869ED5C
	cry Cry_Bagon  @ 869ED68
	cry Cry_Shelgon  @ 869ED74
	cry Cry_Regirock  @ 869ED80
	cry Cry_Regice  @ 869ED8C
	cry Cry_Registeel  @ 869ED98
	cry Cry_Castform  @ 869EDA4
	cry Cry_Volbeat  @ 869EDB0
	cry Cry_Illumise  @ 869EDBC
	cry Cry_Poochyena  @ 869EDC8
	cry Cry_Mightyena  @ 869EDD4
	cry Cry_Dusclops  @ 869EDE0
	cry Cry_Sableye  @ 869EDEC
	cry Cry_Mawile  @ 869EDF8
	cry Cry_Aron  @ 869EE04
	cry Cry_Lairon  @ 869EE10
	cry Cry_Aggron  @ 869EE1C
	cry Cry_Relicanth  @ 869EE28
	cry Cry_Luvdisc  @ 869EE34
	cry Cry_Groudon  @ 869EE40
	cry Cry_Kyogre  @ 869EE4C
	cry Cry_Rayquaza  @ 869EE58
	cry Cry_Salamence  @ 869EE64
	cry Cry_Breloom  @ 869EE70
	cry Cry_Shroomish  @ 869EE7C
	cry Cry_Linoone  @ 869EE88
	cry Cry_Tropius  @ 869EE94
	cry Cry_Wailmer  @ 869EEA0
	cry Cry_Zigzagoon  @ 869EEAC
	cry Cry_Exploud  @ 869EEB8
	cry Cry_Loudred  @ 869EEC4
	cry Cry_Wailord  @ 869EED0
	cry Cry_Whismur  @ 869EEDC
	cry Cry_Snorunt  @ 869EEE8
	cry Cry_Latios  @ 869EEF4
	cry Cry_Jirachi  @ 869EF00
	cry Cry_Deoxys  @ 869EF0C
	cry Cry_Chimecho  @ 869EF18
	.align 2
gCryTable2:: @ 869EF24
	cry2 Cry_Bulbasaur  @ 869EF24
	cry2 Cry_Ivysaur  @ 869EF30
	cry2 Cry_Venusaur  @ 869EF3C
	cry2 Cry_Charmander  @ 869EF48
	cry2 Cry_Charmeleon  @ 869EF54
	cry2 Cry_Charizard  @ 869EF60
	cry2 Cry_Squirtle  @ 869EF6C
	cry2 Cry_Wartortle  @ 869EF78
	cry2 Cry_Blastoise  @ 869EF84
	cry2 Cry_Caterpie  @ 869EF90
	cry2 Cry_Metapod  @ 869EF9C
	cry2 Cry_Butterfree  @ 869EFA8
	cry2 Cry_Weedle  @ 869EFB4
	cry2 Cry_Kakuna  @ 869EFC0
	cry2 Cry_Beedrill  @ 869EFCC
	cry2 Cry_Pidgey  @ 869EFD8
	cry2 Cry_Pidgeotto  @ 869EFE4
	cry2 Cry_Pidgeot  @ 869EFF0
	cry2 Cry_Rattata  @ 869EFFC
	cry2 Cry_Raticate  @ 869F008
	cry2 Cry_Spearow  @ 869F014
	cry2 Cry_Fearow  @ 869F020
	cry2 Cry_Ekans  @ 869F02C
	cry2 Cry_Arbok  @ 869F038
	cry2 Cry_Pikachu  @ 869F044
	cry2 Cry_Raichu  @ 869F050
	cry2 Cry_Sandshrew  @ 869F05C
	cry2 Cry_Sandslash  @ 869F068
	cry2 Cry_NidoranF  @ 869F074
	cry2 Cry_Nidorina  @ 869F080
	cry2 Cry_Nidoqueen  @ 869F08C
	cry2 Cry_NidoranM  @ 869F098
	cry2 Cry_Nidorino  @ 869F0A4
	cry2 Cry_Nidoking  @ 869F0B0
	cry2 Cry_Clefairy  @ 869F0BC
	cry2 Cry_Clefable  @ 869F0C8
	cry2 Cry_Vulpix  @ 869F0D4
	cry2 Cry_Ninetales  @ 869F0E0
	cry2 Cry_Jigglypuff  @ 869F0EC
	cry2 Cry_Wigglytuff  @ 869F0F8
	cry2 Cry_Zubat  @ 869F104
	cry2 Cry_Golbat  @ 869F110
	cry2 Cry_Oddish  @ 869F11C
	cry2 Cry_Gloom  @ 869F128
	cry2 Cry_Vileplume  @ 869F134
	cry2 Cry_Paras  @ 869F140
	cry2 Cry_Parasect  @ 869F14C
	cry2 Cry_Venonat  @ 869F158
	cry2 Cry_Venomoth  @ 869F164
	cry2 Cry_Diglett  @ 869F170
	cry2 Cry_Dugtrio  @ 869F17C
	cry2 Cry_Meowth  @ 869F188
	cry2 Cry_Persian  @ 869F194
	cry2 Cry_Psyduck  @ 869F1A0
	cry2 Cry_Golduck  @ 869F1AC
	cry2 Cry_Mankey  @ 869F1B8
	cry2 Cry_Primeape  @ 869F1C4
	cry2 Cry_Growlithe  @ 869F1D0
	cry2 Cry_Arcanine  @ 869F1DC
	cry2 Cry_Poliwag  @ 869F1E8
	cry2 Cry_Poliwhirl  @ 869F1F4
	cry2 Cry_Poliwrath  @ 869F200
	cry2 Cry_Abra  @ 869F20C
	cry2 Cry_Kadabra  @ 869F218
	cry2 Cry_Alakazam  @ 869F224
	cry2 Cry_Machop  @ 869F230
	cry2 Cry_Machoke  @ 869F23C
	cry2 Cry_Machamp  @ 869F248
	cry2 Cry_Bellsprout  @ 869F254
	cry2 Cry_Weepinbell  @ 869F260
	cry2 Cry_Victreebel  @ 869F26C
	cry2 Cry_Tentacool  @ 869F278
	cry2 Cry_Tentacruel  @ 869F284
	cry2 Cry_Geodude  @ 869F290
	cry2 Cry_Graveler  @ 869F29C
	cry2 Cry_Golem  @ 869F2A8
	cry2 Cry_Ponyta  @ 869F2B4
	cry2 Cry_Rapidash  @ 869F2C0
	cry2 Cry_Slowpoke  @ 869F2CC
	cry2 Cry_Slowbro  @ 869F2D8
	cry2 Cry_Magnemite  @ 869F2E4
	cry2 Cry_Magneton  @ 869F2F0
	cry2 Cry_Farfetchd  @ 869F2FC
	cry2 Cry_Doduo  @ 869F308
	cry2 Cry_Dodrio  @ 869F314
	cry2 Cry_Seel  @ 869F320
	cry2 Cry_Dewgong  @ 869F32C
	cry2 Cry_Grimer  @ 869F338
	cry2 Cry_Muk  @ 869F344
	cry2 Cry_Shellder  @ 869F350
	cry2 Cry_Cloyster  @ 869F35C
	cry2 Cry_Gastly  @ 869F368
	cry2 Cry_Haunter  @ 869F374
	cry2 Cry_Gengar  @ 869F380
	cry2 Cry_Onix  @ 869F38C
	cry2 Cry_Drowzee  @ 869F398
	cry2 Cry_Hypno  @ 869F3A4
	cry2 Cry_Krabby  @ 869F3B0
	cry2 Cry_Kingler  @ 869F3BC
	cry2 Cry_Voltorb  @ 869F3C8
	cry2 Cry_Electrode  @ 869F3D4
	cry2 Cry_Exeggcute  @ 869F3E0
	cry2 Cry_Exeggutor  @ 869F3EC
	cry2 Cry_Cubone  @ 869F3F8
	cry2 Cry_Marowak  @ 869F404
	cry2 Cry_Hitmonlee  @ 869F410
	cry2 Cry_Hitmonchan  @ 869F41C
	cry2 Cry_Lickitung  @ 869F428
	cry2 Cry_Koffing  @ 869F434
	cry2 Cry_Weezing  @ 869F440
	cry2 Cry_Rhyhorn  @ 869F44C
	cry2 Cry_Rhydon  @ 869F458
	cry2 Cry_Chansey  @ 869F464
	cry2 Cry_Tangela  @ 869F470
	cry2 Cry_Kangaskhan  @ 869F47C
	cry2 Cry_Horsea  @ 869F488
	cry2 Cry_Seadra  @ 869F494
	cry2 Cry_Goldeen  @ 869F4A0
	cry2 Cry_Seaking  @ 869F4AC
	cry2 Cry_Staryu  @ 869F4B8
	cry2 Cry_Starmie  @ 869F4C4
	cry2 Cry_MrMime  @ 869F4D0
	cry2 Cry_Scyther  @ 869F4DC
	cry2 Cry_Jynx  @ 869F4E8
	cry2 Cry_Electabuzz  @ 869F4F4
	cry2 Cry_Magmar  @ 869F500
	cry2 Cry_Pinsir  @ 869F50C
	cry2 Cry_Tauros  @ 869F518
	cry2 Cry_Magikarp  @ 869F524
	cry2 Cry_Gyarados  @ 869F530
	cry2 Cry_Lapras  @ 869F53C
	cry2 Cry_Ditto  @ 869F548
	cry2 Cry_Eevee  @ 869F554
	cry2 Cry_Vaporeon  @ 869F560
	cry2 Cry_Jolteon  @ 869F56C
	cry2 Cry_Flareon  @ 869F578
	cry2 Cry_Porygon  @ 869F584
	cry2 Cry_Omanyte  @ 869F590
	cry2 Cry_Omastar  @ 869F59C
	cry2 Cry_Kabuto  @ 869F5A8
	cry2 Cry_Kabutops  @ 869F5B4
	cry2 Cry_Aerodactyl  @ 869F5C0
	cry2 Cry_Snorlax  @ 869F5CC
	cry2 Cry_Articuno  @ 869F5D8
	cry2 Cry_Zapdos  @ 869F5E4
	cry2 Cry_Moltres  @ 869F5F0
	cry2 Cry_Dratini  @ 869F5FC
	cry2 Cry_Dragonair  @ 869F608
	cry2 Cry_Dragonite  @ 869F614
	cry2 Cry_Mewtwo  @ 869F620
	cry2 Cry_Mew  @ 869F62C
	cry2 Cry_Chikorita  @ 869F638
	cry2 Cry_Bayleef  @ 869F644
	cry2 Cry_Meganium  @ 869F650
	cry2 Cry_Cyndaquil  @ 869F65C
	cry2 Cry_Quilava  @ 869F668
	cry2 Cry_Typhlosion  @ 869F674
	cry2 Cry_Totodile  @ 869F680
	cry2 Cry_Croconaw  @ 869F68C
	cry2 Cry_Feraligatr  @ 869F698
	cry2 Cry_Sentret  @ 869F6A4
	cry2 Cry_Furret  @ 869F6B0
	cry2 Cry_Hoothoot  @ 869F6BC
	cry2 Cry_Noctowl  @ 869F6C8
	cry2 Cry_Ledyba  @ 869F6D4
	cry2 Cry_Ledian  @ 869F6E0
	cry2 Cry_Spinarak  @ 869F6EC
	cry2 Cry_Ariados  @ 869F6F8
	cry2 Cry_Crobat  @ 869F704
	cry2 Cry_Chinchou  @ 869F710
	cry2 Cry_Lanturn  @ 869F71C
	cry2 Cry_Pichu  @ 869F728
	cry2 Cry_Cleffa  @ 869F734
	cry2 Cry_Igglybuff  @ 869F740
	cry2 Cry_Togepi  @ 869F74C
	cry2 Cry_Togetic  @ 869F758
	cry2 Cry_Natu  @ 869F764
	cry2 Cry_Xatu  @ 869F770
	cry2 Cry_Mareep  @ 869F77C
	cry2 Cry_Flaaffy  @ 869F788
	cry2 Cry_Ampharos  @ 869F794
	cry2 Cry_Bellossom  @ 869F7A0
	cry2 Cry_Marill  @ 869F7AC
	cry2 Cry_Azumarill  @ 869F7B8
	cry2 Cry_Sudowoodo  @ 869F7C4
	cry2 Cry_Politoed  @ 869F7D0
	cry2 Cry_Hoppip  @ 869F7DC
	cry2 Cry_Skiploom  @ 869F7E8
	cry2 Cry_Jumpluff  @ 869F7F4
	cry2 Cry_Aipom  @ 869F800
	cry2 Cry_Sunkern  @ 869F80C
	cry2 Cry_Sunflora  @ 869F818
	cry2 Cry_Yanma  @ 869F824
	cry2 Cry_Wooper  @ 869F830
	cry2 Cry_Quagsire  @ 869F83C
	cry2 Cry_Espeon  @ 869F848
	cry2 Cry_Umbreon  @ 869F854
	cry2 Cry_Murkrow  @ 869F860
	cry2 Cry_Slowking  @ 869F86C
	cry2 Cry_Misdreavus  @ 869F878
	cry2 Cry_Unown  @ 869F884
	cry2 Cry_Wobbuffet  @ 869F890
	cry2 Cry_Girafarig  @ 869F89C
	cry2 Cry_Pineco  @ 869F8A8
	cry2 Cry_Forretress  @ 869F8B4
	cry2 Cry_Dunsparce  @ 869F8C0
	cry2 Cry_Gligar  @ 869F8CC
	cry2 Cry_Steelix  @ 869F8D8
	cry2 Cry_Snubbull  @ 869F8E4
	cry2 Cry_Granbull  @ 869F8F0
	cry2 Cry_Qwilfish  @ 869F8FC
	cry2 Cry_Scizor  @ 869F908
	cry2 Cry_Shuckle  @ 869F914
	cry2 Cry_Heracross  @ 869F920
	cry2 Cry_Sneasel  @ 869F92C
	cry2 Cry_Teddiursa  @ 869F938
	cry2 Cry_Ursaring  @ 869F944
	cry2 Cry_Slugma  @ 869F950
	cry2 Cry_Magcargo  @ 869F95C
	cry2 Cry_Swinub  @ 869F968
	cry2 Cry_Piloswine  @ 869F974
	cry2 Cry_Corsola  @ 869F980
	cry2 Cry_Remoraid  @ 869F98C
	cry2 Cry_Octillery  @ 869F998
	cry2 Cry_Delibird  @ 869F9A4
	cry2 Cry_Mantine  @ 869F9B0
	cry2 Cry_Skarmory  @ 869F9BC
	cry2 Cry_Houndour  @ 869F9C8
	cry2 Cry_Houndoom  @ 869F9D4
	cry2 Cry_Kingdra  @ 869F9E0
	cry2 Cry_Phanpy  @ 869F9EC
	cry2 Cry_Donphan  @ 869F9F8
	cry2 Cry_Porygon2  @ 869FA04
	cry2 Cry_Stantler  @ 869FA10
	cry2 Cry_Smeargle  @ 869FA1C
	cry2 Cry_Tyrogue  @ 869FA28
	cry2 Cry_Hitmontop  @ 869FA34
	cry2 Cry_Smoochum  @ 869FA40
	cry2 Cry_Elekid  @ 869FA4C
	cry2 Cry_Magby  @ 869FA58
	cry2 Cry_Miltank  @ 869FA64
	cry2 Cry_Blissey  @ 869FA70
	cry2 Cry_Raikou  @ 869FA7C
	cry2 Cry_Entei  @ 869FA88
	cry2 Cry_Suicune  @ 869FA94
	cry2 Cry_Larvitar  @ 869FAA0
	cry2 Cry_Pupitar  @ 869FAAC
	cry2 Cry_Tyranitar  @ 869FAB8
	cry2 Cry_Lugia  @ 869FAC4
	cry2 Cry_HoOh  @ 869FAD0
	cry2 Cry_Celebi  @ 869FADC
	cry2 Cry_Kecleon  @ 869FAE8
	cry2 Cry_Roselia  @ 869FAF4
	cry2 Cry_Torkoal  @ 869FB00
	cry2 Cry_Electrike  @ 869FB0C
	cry2 Cry_Manectric  @ 869FB18
	cry2 Cry_Duskull  @ 869FB24
	cry2 Cry_Latias  @ 869FB30
	cry2 Cry_Wynaut  @ 869FB3C
	cry2 Cry_Seviper  @ 869FB48
	cry2 Cry_Sharpedo  @ 869FB54
	cry2 Cry_Zangoose  @ 869FB60
	cry2 Cry_Azurill  @ 869FB6C
	cry2 Cry_Swablu  @ 869FB78
	cry2 Cry_Altaria  @ 869FB84
	cry2 Cry_Unused265  @ 869FB90
	cry2 Cry_Taillow  @ 869FB9C
	cry2 Cry_Swellow  @ 869FBA8
	cry2 Cry_Unused268  @ 869FBB4
	cry2 Cry_Spinda  @ 869FBC0
	cry2 Cry_Torchic  @ 869FBCC
	cry2 Cry_Combusken  @ 869FBD8
	cry2 Cry_Blaziken  @ 869FBE4
	cry2 Cry_Treecko  @ 869FBF0
	cry2 Cry_Grovyle  @ 869FBFC
	cry2 Cry_Sceptile  @ 869FC08
	cry2 Cry_Mudkip  @ 869FC14
	cry2 Cry_Marshtomp  @ 869FC20
	cry2 Cry_Swampert  @ 869FC2C
	cry2 Cry_Pelipper  @ 869FC38
	cry2 Cry_Wingull  @ 869FC44
	cry2 Cry_Banette  @ 869FC50
	cry2 Cry_Shuppet  @ 869FC5C
	cry2 Cry_Lotad  @ 869FC68
	cry2 Cry_Lombre  @ 869FC74
	cry2 Cry_Ludicolo  @ 869FC80
	cry2 Cry_Seedot  @ 869FC8C
	cry2 Cry_Nuzleaf  @ 869FC98
	cry2 Cry_Shiftry  @ 869FCA4
	cry2 Cry_Carvanha  @ 869FCB0
	cry2 Cry_Wurmple  @ 869FCBC
	cry2 Cry_Silcoon  @ 869FCC8
	cry2 Cry_Beautifly  @ 869FCD4
	cry2 Cry_Cascoon  @ 869FCE0
	cry2 Cry_Dustox  @ 869FCEC
	cry2 Cry_Ralts  @ 869FCF8
	cry2 Cry_Kirlia  @ 869FD04
	cry2 Cry_Gardevoir  @ 869FD10
	cry2 Cry_Slakoth  @ 869FD1C
	cry2 Cry_Vigoroth  @ 869FD28
	cry2 Cry_Slaking  @ 869FD34
	cry2 Cry_Nincada  @ 869FD40
	cry2 Cry_Ninjask  @ 869FD4C
	cry2 Cry_Shedinja  @ 869FD58
	cry2 Cry_Makuhita  @ 869FD64
	cry2 Cry_Hariyama  @ 869FD70
	cry2 Cry_Nosepass  @ 869FD7C
	cry2 Cry_Glalie  @ 869FD88
	cry2 Cry_Plusle  @ 869FD94
	cry2 Cry_Minun  @ 869FDA0
	cry2 Cry_Surskit  @ 869FDAC
	cry2 Cry_Masquerain  @ 869FDB8
	cry2 Cry_Skitty  @ 869FDC4
	cry2 Cry_Delcatty  @ 869FDD0
	cry2 Cry_Gulpin  @ 869FDDC
	cry2 Cry_Swalot  @ 869FDE8
	cry2 Cry_Numel  @ 869FDF4
	cry2 Cry_Camerupt  @ 869FE00
	cry2 Cry_Barboach  @ 869FE0C
	cry2 Cry_Whiscash  @ 869FE18
	cry2 Cry_Corphish  @ 869FE24
	cry2 Cry_Crawdaunt  @ 869FE30
	cry2 Cry_Spoink  @ 869FE3C
	cry2 Cry_Grumpig  @ 869FE48
	cry2 Cry_Trapinch  @ 869FE54
	cry2 Cry_Vibrava  @ 869FE60
	cry2 Cry_Flygon  @ 869FE6C
	cry2 Cry_Cacnea  @ 869FE78
	cry2 Cry_Cacturne  @ 869FE84
	cry2 Cry_Baltoy  @ 869FE90
	cry2 Cry_Claydol  @ 869FE9C
	cry2 Cry_Lunatone  @ 869FEA8
	cry2 Cry_Solrock  @ 869FEB4
	cry2 Cry_Feebas  @ 869FEC0
	cry2 Cry_Milotic  @ 869FECC
	cry2 Cry_Absol  @ 869FED8
	cry2 Cry_Meditite  @ 869FEE4
	cry2 Cry_Medicham  @ 869FEF0
	cry2 Cry_Spheal  @ 869FEFC
	cry2 Cry_Sealeo  @ 869FF08
	cry2 Cry_Walrein  @ 869FF14
	cry2 Cry_Clamperl  @ 869FF20
	cry2 Cry_Huntail  @ 869FF2C
	cry2 Cry_Gorebyss  @ 869FF38
	cry2 Cry_Lileep  @ 869FF44
	cry2 Cry_Cradily  @ 869FF50
	cry2 Cry_Anorith  @ 869FF5C
	cry2 Cry_Armaldo  @ 869FF68
	cry2 Cry_Beldum  @ 869FF74
	cry2 Cry_Metang  @ 869FF80
	cry2 Cry_Metagross  @ 869FF8C
	cry2 Cry_Bagon  @ 869FF98
	cry2 Cry_Shelgon  @ 869FFA4
	cry2 Cry_Regirock  @ 869FFB0
	cry2 Cry_Regice  @ 869FFBC
	cry2 Cry_Registeel  @ 869FFC8
	cry2 Cry_Castform  @ 869FFD4
	cry2 Cry_Volbeat  @ 869FFE0
	cry2 Cry_Illumise  @ 869FFEC
	cry2 Cry_Poochyena  @ 869FFF8
	cry2 Cry_Mightyena  @ 86A0004
	cry2 Cry_Dusclops  @ 86A0010
	cry2 Cry_Sableye  @ 86A001C
	cry2 Cry_Mawile  @ 86A0028
	cry2 Cry_Aron  @ 86A0034
	cry2 Cry_Lairon  @ 86A0040
	cry2 Cry_Aggron  @ 86A004C
	cry2 Cry_Relicanth  @ 86A0058
	cry2 Cry_Luvdisc  @ 86A0064
	cry2 Cry_Groudon  @ 86A0070
	cry2 Cry_Kyogre  @ 86A007C
	cry2 Cry_Rayquaza  @ 86A0088
	cry2 Cry_Salamence  @ 86A0094
	cry2 Cry_Breloom  @ 86A00A0
	cry2 Cry_Shroomish  @ 86A00AC
	cry2 Cry_Linoone  @ 86A00B8
	cry2 Cry_Tropius  @ 86A00C4
	cry2 Cry_Wailmer  @ 86A00D0
	cry2 Cry_Zigzagoon  @ 86A00DC
	cry2 Cry_Exploud  @ 86A00E8
	cry2 Cry_Loudred  @ 86A00F4
	cry2 Cry_Wailord  @ 86A0100
	cry2 Cry_Whismur  @ 86A010C
	cry2 Cry_Snorunt  @ 86A0118
	cry2 Cry_Latios  @ 86A0124
	cry2 Cry_Jirachi  @ 86A0130
	cry2 Cry_Deoxys  @ 86A013C
	cry2 Cry_Chimecho  @ 86A0148
	.align 2
voicegroup129:: @ 86A0154
	voice_directsound 60, 0, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 86A0160
	voice_directsound 60, 0, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86A016C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_standard_hand_clap, 255, 226, 25, 0  @ 86A0178
	voice_directsound 60, 0, DirectSoundWaveData_8725A2C, 255, 0, 255, 165  @ 86A0190
	voice_directsound 60, 0, DirectSoundWaveData_dance_drums_ride_bell, 255, 165, 103, 231  @ 86A019C
	voice_directsound 60, 0, DirectSoundWaveData_unknown_anvil_high, 255, 204, 128, 249  @ 86A01A8
	voice_directsound 60, 0, DirectSoundWaveData_register_noise, 255, 0, 255, 76  @ 86A01B4
	voice_directsound 60, 0, DirectSoundWaveData_88D6978, 255, 0, 206, 204  @ 86A01C0
	voice_directsound 60, 0, DirectSoundWaveData_unknown_wood_block_low, 255, 0, 206, 38  @ 86A01CC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_wood_block_high, 255, 0, 206, 0  @ 86A01D8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 216  @ 86A01F0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 128, 204  @ 86A0274
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86A02C8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86A031C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 252, 0, 204  @ 86A037C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 86A0388
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 204, 0, 127  @ 86A0394
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A040C
	voice_directsound 60, 0, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 0  @ 86A06C4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86A06D0
	voice_noise_alt 0, 0, 1, 9, 2  @ 86A0718
	voice_noise_alt 0, 0, 4, 3, 1  @ 86A0724
	voice_noise_alt 0, 0, 1, 12, 0  @ 86A0730
	voice_noise_alt 1, 0, 1, 9, 0  @ 86A073C
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A0748
	.align 2
voicegroup130:: @ 86A0754
	voice_directsound 60, 0, DirectSoundWaveData_88DBBC0, 255, 0, 255, 0  @ 86A0754
	voice_directsound 60, 0, DirectSoundWaveData_88DC220, 255, 0, 255, 0  @ 86A0760
	voice_directsound 60, 0, DirectSoundWaveData_88DC704, 255, 0, 255, 0  @ 86A076C
	voice_directsound 60, 0, DirectSoundWaveData_88DD054, 255, 0, 255, 0  @ 86A0778
	voice_directsound 60, 0, DirectSoundWaveData_88DDAC4, 255, 0, 255, 0  @ 86A0784
	voice_directsound 60, 0, DirectSoundWaveData_88DDDE4, 255, 0, 255, 0  @ 86A0790
	voice_directsound 60, 0, DirectSoundWaveData_88DEA6C, 255, 0, 255, 0  @ 86A079C
	voice_directsound 60, 0, DirectSoundWaveData_88DF08C, 255, 0, 255, 0  @ 86A07A8
	voice_directsound 60, 0, DirectSoundWaveData_88DF414, 255, 0, 255, 0  @ 86A07B4
	voice_directsound 60, 0, DirectSoundWaveData_88E01F8, 255, 0, 255, 0  @ 86A07C0
	voice_directsound 60, 0, DirectSoundWaveData_88E0B68, 255, 0, 255, 0  @ 86A07CC
	voice_directsound 60, 0, DirectSoundWaveData_88E0F04, 255, 0, 255, 0  @ 86A07D8
	voice_directsound 60, 0, DirectSoundWaveData_88E16B8, 255, 0, 255, 0  @ 86A07E4
	voice_directsound 60, 0, DirectSoundWaveData_88E2414, 255, 0, 255, 0  @ 86A07F0
	voice_directsound 60, 0, DirectSoundWaveData_88E2658, 255, 0, 255, 0  @ 86A07FC
	voice_directsound 60, 0, DirectSoundWaveData_88E3498, 255, 0, 255, 0  @ 86A0808
	voice_directsound 60, 0, DirectSoundWaveData_88E3DEC, 255, 0, 255, 0  @ 86A0814
	voice_directsound 60, 0, DirectSoundWaveData_88E4140, 255, 0, 255, 0  @ 86A0820
	voice_directsound 60, 0, DirectSoundWaveData_88E4774, 255, 0, 255, 0  @ 86A082C
	voice_directsound 60, 0, DirectSoundWaveData_88E53E0, 255, 0, 255, 0  @ 86A0838
	voice_directsound 60, 0, DirectSoundWaveData_88E5978, 255, 0, 255, 0  @ 86A0844
	voice_directsound 60, 0, DirectSoundWaveData_88E647C, 255, 0, 255, 0  @ 86A0850
	voice_directsound 60, 0, DirectSoundWaveData_88E6A80, 255, 0, 255, 0  @ 86A085C
	voice_directsound 60, 0, DirectSoundWaveData_88E6C78, 255, 0, 255, 0  @ 86A0868
	voice_directsound 60, 0, DirectSoundWaveData_88E75DC, 255, 0, 255, 0  @ 86A0874
	voice_directsound 60, 0, DirectSoundWaveData_88E8568, 255, 0, 255, 0  @ 86A0880
	voice_directsound 60, 0, DirectSoundWaveData_88E8BA0, 255, 0, 255, 0  @ 86A088C
	voice_directsound 60, 0, DirectSoundWaveData_88E9674, 255, 0, 255, 0  @ 86A0898
	voice_directsound 60, 0, DirectSoundWaveData_88EA5B8, 255, 0, 255, 0  @ 86A08A4
	voice_directsound 60, 0, DirectSoundWaveData_88EAB30, 255, 0, 255, 0  @ 86A08B0
	voice_directsound 60, 0, DirectSoundWaveData_88EB97C, 255, 0, 255, 0  @ 86A08BC
	voice_directsound 60, 0, DirectSoundWaveData_88EC884, 255, 0, 255, 0  @ 86A08C8
	voice_directsound 60, 0, DirectSoundWaveData_88ED358, 255, 0, 255, 0  @ 86A08D4
	voice_directsound 60, 0, DirectSoundWaveData_88EDEEC, 255, 0, 255, 0  @ 86A08E0
	voice_directsound 60, 0, DirectSoundWaveData_88EE8C4, 255, 0, 255, 0  @ 86A08EC
	voice_directsound 60, 0, DirectSoundWaveData_88EEF04, 255, 0, 255, 0  @ 86A08F8
	voice_directsound 60, 0, DirectSoundWaveData_88EF9E4, 255, 0, 255, 0  @ 86A0904
	voice_directsound 60, 0, DirectSoundWaveData_88F0020, 255, 0, 255, 0  @ 86A0910
	voice_directsound 60, 0, DirectSoundWaveData_88F0738, 255, 0, 255, 0  @ 86A091C
	voice_directsound 60, 0, DirectSoundWaveData_88F1074, 255, 0, 255, 0  @ 86A0928
	voice_directsound 60, 0, DirectSoundWaveData_88F1830, 255, 0, 255, 0  @ 86A0934
	voice_directsound 60, 0, DirectSoundWaveData_88F1D94, 255, 0, 255, 0  @ 86A0940
	voice_directsound 60, 0, DirectSoundWaveData_88F2B08, 255, 0, 255, 0  @ 86A094C
	voice_directsound 60, 0, DirectSoundWaveData_88F2F84, 255, 0, 255, 0  @ 86A0958
	voice_directsound 60, 0, DirectSoundWaveData_88F3470, 255, 0, 255, 0  @ 86A0964
	voice_directsound 60, 0, DirectSoundWaveData_88F3C38, 255, 0, 255, 0  @ 86A0970
	voice_directsound 60, 0, DirectSoundWaveData_88F4834, 255, 0, 255, 0  @ 86A097C
	voice_directsound 60, 0, DirectSoundWaveData_88F4BAC, 255, 0, 255, 0  @ 86A0988
	voice_directsound 60, 0, DirectSoundWaveData_88F5368, 255, 0, 255, 0  @ 86A0994
	voice_directsound 60, 0, DirectSoundWaveData_88F5FCC, 255, 0, 255, 0  @ 86A09A0
	voice_directsound 60, 0, DirectSoundWaveData_88F6498, 255, 0, 255, 0  @ 86A09AC
	voice_keysplit_all voicegroup001  @ 86A09B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion_duplicate, 255, 249, 25, 248  @ 86A0AB4
	voice_noise_alt 0, 0, 1, 7, 1  @ 86A0FAC
	.align 2
voicegroup131:: @ 86A0FB8
	voice_keysplit_all voicegroup002  @ 86A0FB8
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A0FC4
	voice_directsound 60, 0, DirectSoundWaveData_steinway_b_piano, 128, 204, 51, 242  @ 86A0FD0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 204, 103, 226  @ 86A10D8
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 9, 1  @ 86A1408
	voice_noise_alt 0, 0, 1, 0, 1  @ 86A15AC
	.align 2
voicegroup132:: @ 86A15B8
	voice_keysplit_all voicegroup002  @ 86A15B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 97, 236  @ 86A1660
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 146, 118, 137  @ 86A1684
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 51, 204, 92, 226  @ 86A16D8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 165, 154, 235  @ 86A17EC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A17F8
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A1858
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A1870
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A1888
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86A1924
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 4, 6, 0  @ 86A1990
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 4, 6, 0  @ 86A19A8
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 2, 9, 1  @ 86A1A08
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A1BA0
	voice_noise_alt 0, 0, 1, 8, 1  @ 86A1BAC
	.align 2
voicegroup133:: @ 86A1BB8
	voice_keysplit_all voicegroup002  @ 86A1BB8
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A1BC4
	voice_directsound 60, 0, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86A1C30
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A1C60
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 146, 108, 137  @ 86A1C84
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 204, 103, 226  @ 86A1CD8
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86A1D14
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 86A1D20
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86A1D80
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 0, 255, 127  @ 86A1D8C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 153  @ 86A1DEC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A1DF8
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A1E58
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A1E88
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127  @ 86A1EA0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127  @ 86A1F60
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A1FCC
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 15, 0  @ 86A2008
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86A2158
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A21A0
	voice_noise_alt 0, 0, 1, 8, 1  @ 86A21AC
	.align 2
voicegroup134:: @ 86A21B8
	voice_keysplit_all voicegroup001  @ 86A21B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 86A23EC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A23F8
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A2458
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A2488
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 86A25CC
	.align 2
voicegroup135:: @ 86A25F0
	voice_keysplit_all voicegroup002  @ 86A25F0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 85, 137, 180, 204  @ 86A26EC
	.align 2
voicegroup136:: @ 86A29D4
	voice_keysplit_all voicegroup002  @ 86A29D4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A29E0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86A2B30
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 86A2B3C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86A2B9C
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A2C14
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127  @ 86A2CBC
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 1, 5, 0, 3  @ 86A2DDC
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 1, 5, 0, 3  @ 86A2DE8
	voice_noise_alt 0, 0, 0, 15, 0  @ 86A2FB0
	voice_noise_alt 0, 0, 2, 4, 0  @ 86A2FBC
	voice_noise_alt 0, 0, 1, 0, 0  @ 86A2FC8
	.align 2
voicegroup137:: @ 86A2FD4
	voice_keysplit_all voicegroup002  @ 86A2FD4
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 165, 180, 165  @ 86A3004
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_high, 255, 137, 154, 165  @ 86A3010
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 204, 51, 242  @ 86A3040
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A307C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 0, 242  @ 86A31FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 153  @ 86A3208
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A3214
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A3274
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A328C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A32A4
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 2, 4, 1  @ 86A33E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 2, 4, 1  @ 86A33F4
	voice_noise_alt 0, 0, 0, 15, 0  @ 86A35B0
	voice_noise_alt 0, 0, 2, 4, 0  @ 86A35BC
	voice_noise_alt 0, 0, 1, 0, 1  @ 86A35C8
	.align 2
voicegroup138:: @ 86A35D4
	voice_keysplit_all voicegroup002  @ 86A35D4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A35E0
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86A3604
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 255, 204, 77, 246  @ 86A3610
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86A36A0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86A36D0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 127  @ 86A36F4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86A37FC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A3814
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A3874
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86A3940
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 12, 0  @ 86A3A24
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A3BBC
	voice_noise_alt 0, 0, 1, 6, 0  @ 86A3BC8
	.align 2
voicegroup139:: @ 86A3BD4
	voice_keysplit_all voicegroup002  @ 86A3BD4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A3BE0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 51, 242  @ 86A3C40
	voice_directsound 60, 0, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86A3C4C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 86A3C70
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A3C7C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 127, 103, 201  @ 86A3CA0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 37, 127, 77, 165  @ 86A3CD0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 51, 204, 92, 226  @ 86A3CF4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 226  @ 86A3DFC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A3E14
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A3E8C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A3EA4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86A3F40
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127  @ 86A3F7C
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A4024
	voice_noise_alt 0, 0, 1, 6, 1  @ 86A41BC
	voice_noise_alt 0, 0, 1, 6, 1  @ 86A41C8
	.align 2
voicegroup140:: @ 86A41D4
	voice_keysplit_all voicegroup001  @ 86A41D4
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A41F8
	.align 2
voicegroup141:: @ 86A4204
	voice_keysplit_all voicegroup002  @ 86A4204
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A4210
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 86A42A0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86A42D0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86A4300
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 85, 249, 25, 127  @ 86A4324
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A4444
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A44A4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86A4570
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 1, 7, 0, 6  @ 86A45E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 2, 9, 0  @ 86A4600
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A47EC
	voice_noise_alt 0, 0, 1, 6, 0  @ 86A47F8
	.align 2
voicegroup142:: @ 86A4804
	voice_keysplit_all voicegroup002  @ 86A4804
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 64, 188, 128, 201  @ 86A48D0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 64, 195, 103, 220  @ 86A4924
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 128, 195, 72, 127  @ 86A4960
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 85, 188, 103, 160  @ 86A496C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 128, 188, 77, 115  @ 86A49CC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 175, 154, 127  @ 86A4AEC
	voice_programmable_wave_alt ProgrammableWaveData_86B4900, 0, 7, 15, 0  @ 86A4BE8
	.align 2
voicegroup143:: @ 86A4BF4
	voice_keysplit_all voicegroup002  @ 86A4BF4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A4C00
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 160, 123, 165  @ 86A4CC0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 0  @ 86A4D14
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A4E34
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A4FD8
	voice_noise_alt 0, 0, 1, 9, 0  @ 86A51DC
	voice_noise_alt 0, 0, 1, 6, 1  @ 86A51E8
	.align 2
voicegroup144:: @ 86A51F4
	voice_keysplit_all voicegroup002  @ 86A51F4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A5200
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 85, 188, 92, 165  @ 86A52C0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 85, 127, 180, 165  @ 86A52CC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 51, 204, 92, 226  @ 86A5314
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 216  @ 86A5398
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86A53BC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A5434
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A55D8
	voice_noise_alt 0, 0, 1, 9, 0  @ 86A57DC
	voice_noise_alt 0, 0, 1, 6, 0  @ 86A57E8
	.align 2
voicegroup145:: @ 86A57F4
	voice_keysplit_all voicegroup002  @ 86A57F4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A5800
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86A5824
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 255, 204, 77, 246  @ 86A5830
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86A58C0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86A58F0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 127  @ 86A5914
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86A5A1C
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A5A34
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A5A94
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86A5B60
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 12, 0  @ 86A5C44
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A5DDC
	voice_noise_alt 0, 0, 1, 6, 0  @ 86A5DE8
	.align 2
voicegroup146:: @ 86A5DF4
	voice_keysplit_all voicegroup002  @ 86A5DF4
	voice_directsound 60, 0, DirectSoundWaveData_steinway_b_piano, 255, 165, 103, 235  @ 86A5E00
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 86A5E90
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 85, 249, 25, 226  @ 86A5F14
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A6034
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 43, 76, 103, 216  @ 86A619C
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86A6244
	voice_noise_alt 0, 0, 1, 9, 0  @ 86A63DC
	voice_noise_alt 0, 0, 1, 6, 2  @ 86A63E8
	.align 2
voicegroup147:: @ 86A63F4
	voice_keysplit_all voicegroup001  @ 86A63F4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A6400
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 64, 249, 25, 226  @ 86A6514
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A6634
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 2, 4, 2  @ 86A67D8
	.align 2
voicegroup148:: @ 86A67E4
	voice_keysplit_all voicegroup002  @ 86A67E4
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 226, 0, 127  @ 86A6880
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A688C
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 0, 255, 127  @ 86A69B8
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A6A24
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A6A9C
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A6BF8
	voice_noise_alt 0, 0, 3, 5, 2  @ 86A6DCC
	voice_noise_alt 0, 0, 1, 6, 5  @ 86A6DD8
	.align 2
voicegroup149:: @ 86A6DE4
	voice_keysplit_all voicegroup190  @ 86A6DE4
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A6DF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 51, 242  @ 86A6E50
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 86A6E80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A6E8C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86A700C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 165, 154, 153  @ 86A7018
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A7024
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A7084
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A709C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A70B4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 43, 188, 103, 165  @ 86A7114
	voice_directsound 60, 0, DirectSoundWaveData_unused_sd90_oboe, 43, 165, 103, 165  @ 86A7120
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86A7150
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A71F8
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86A7234
	.align 2
voicegroup150:: @ 86A7240
	voice_keysplit_all voicegroup002  @ 86A7240
	voice_directsound 60, 0, DirectSoundWaveData_steinway_b_piano, 255, 165, 103, 235  @ 86A724C
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 85, 204, 77, 127  @ 86A75E8
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 86A7624
	voice_noise_alt 0, 0, 2, 4, 0  @ 86A7828
	voice_noise_alt 0, 0, 1, 0, 0  @ 86A7834
	.align 2
voicegroup151:: @ 86A7840
	voice_keysplit_all voicegroup002  @ 86A7840
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A78E8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 127  @ 86A7A74
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A7A80
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A7AE0
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A7AF8
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A7B10
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A7C54
	.align 2
voicegroup152:: @ 86A7C60
	voice_keysplit_all voicegroup002  @ 86A7C60
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 97, 236  @ 86A7D08
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 160, 175, 165  @ 86A7D2C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 128, 204  @ 86A7D80
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 127, 154, 235  @ 86A7E94
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A7EA0
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A7F00
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A7F18
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A7F30
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 4, 6, 0  @ 86A8038
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 4, 6, 0  @ 86A8050
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 2, 9, 1  @ 86A80B0
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A8248
	voice_noise_alt 0, 0, 1, 6, 1  @ 86A8254
	.align 2
voicegroup153:: @ 86A8260
	voice_keysplit_all voicegroup002  @ 86A8260
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A826C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 97, 236  @ 86A8308
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86A8488
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 127, 154, 235  @ 86A8494
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A84A0
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A8500
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A8518
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A8530
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86A85CC
	voice_programmable_wave_alt ProgrammableWaveData_86B48A0, 0, 1, 12, 0  @ 86A86B0
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A8848
	voice_noise_alt 0, 0, 1, 6, 2  @ 86A8854
	.align 2
voicegroup154:: @ 86A8860
	voice_keysplit_all voicegroup002  @ 86A8860
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 249, 0, 165  @ 86A8890
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 97, 236  @ 86A8908
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 127, 154, 235  @ 86A8A94
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A8AA0
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A8B00
	voice_keysplit voicegroup008, KeySplitTable4  @ 86A8B18
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A8B30
	voice_programmable_wave_alt ProgrammableWaveData_86B4860, 0, 0, 12, 0  @ 86A8C74
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 0, 12, 0  @ 86A8CB0
	.align 2
voicegroup155:: @ 86A8CBC
	voice_keysplit_all voicegroup002  @ 86A8CBC
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A8CC8
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 249, 0, 165  @ 86A8CEC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_high, 255, 188, 103, 165  @ 86A8CF8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A8D64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 86A8D88
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86A8DDC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 128, 204  @ 86A8DE8
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86A8E18
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 165, 154, 165  @ 86A8E24
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 86A8EF0
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A8EFC
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A8F5C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A8F8C
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 165, 180, 165  @ 86A8FA4
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 3, 6, 5  @ 86A90A0
	voice_programmable_wave_alt ProgrammableWaveData_86B4850, 0, 7, 15, 1  @ 86A90D0
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86A90DC
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 1, 9, 2  @ 86A90E8
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86A925C
	voice_noise_alt 0, 0, 2, 6, 2  @ 86A92A4
	voice_noise_alt 0, 0, 1, 6, 0  @ 86A92B0
	.align 2
voicegroup156:: @ 86A92BC
	voice_keysplit_all voicegroup002  @ 86A92BC
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A92C8
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86A92E0
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 249, 0, 165  @ 86A92F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 86A9388
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 86A93B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 128, 204  @ 86A93DC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86A9418
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 86A9424
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_unison_slap, 255, 165, 180, 216  @ 86A946C
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A94FC
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A955C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A958C
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127  @ 86A95A4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86A985C
	voice_noise_alt 0, 0, 0, 15, 0  @ 86A9898
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A98A4
	voice_noise_alt 0, 0, 1, 6, 0  @ 86A98B0
	.align 2
voicegroup157:: @ 86A98BC
	voice_keysplit_all voicegroup002  @ 86A98BC
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A98C8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 146, 190, 115  @ 86A9988
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 86A99B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 128, 204  @ 86A99DC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86A9A18
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 86A9A24
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 86A9A48
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_unison_slap, 255, 165, 180, 216  @ 86A9A6C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86A9A84
	voice_keysplit voicegroup006, KeySplitTable2  @ 86A9AFC
	voice_keysplit voicegroup007, KeySplitTable3  @ 86A9B5C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86A9B8C
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127  @ 86A9BA4
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 3, 6, 5  @ 86A9C94
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86A9CAC
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 86A9CD0
	voice_noise_alt 0, 0, 2, 6, 0  @ 86A9EA4
	voice_noise_alt 0, 0, 1, 6, 1  @ 86A9EB0
	.align 2
voicegroup158:: @ 86A9EBC
	voice_keysplit_all voicegroup002  @ 86A9EBC
	voice_keysplit voicegroup005, KeySplitTable1  @ 86A9EC8
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 249, 0, 165  @ 86A9EEC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86A9F34
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86A9F64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 146, 108, 137  @ 86A9F88
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 204, 103, 226  @ 86A9FDC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86AA018
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 86AA024
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86AA030
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86AA060
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86AA084
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 0, 255, 127  @ 86AA090
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 153  @ 86AA0F0
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AA0FC
	voice_directsound 60, 0, DirectSoundWaveData_advanced_orchestra_voice_ahhs, 255, 0, 255, 0  @ 86AA138
	voice_keysplit voicegroup007, KeySplitTable3  @ 86AA15C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86AA18C
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 236, 188  @ 86AA1A4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127  @ 86AA264
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 86AA2AC
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AA2D0
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 15, 0  @ 86AA30C
	voice_noise_alt 0, 0, 2, 6, 0  @ 86AA4A4
	voice_noise_alt 0, 0, 1, 8, 1  @ 86AA4B0
	.align 2
voicegroup159:: @ 86AA4BC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 64, 249, 0, 188  @ 86AA4EC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_high, 51, 249, 0, 165  @ 86AA4F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 85, 249, 25, 127  @ 86AA5DC
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AA6FC
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 1, 7, 0, 6  @ 86AA894
	voice_noise_alt 0, 0, 2, 4, 0  @ 86AAAA4
	voice_noise_alt 0, 0, 1, 0, 0  @ 86AAAB0
	.align 2
voicegroup160:: @ 86AAABC
	voice_keysplit_all voicegroup001  @ 86AAABC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86AAB64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86AABDC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86AAC60
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AACFC
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AAED0
	.align 2
voicegroup161:: @ 86AAEDC
	voice_keysplit_all voicegroup002  @ 86AAEDC
	voice_keysplit voicegroup005, KeySplitTable1  @ 86AAEE8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86AAF84
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 86AAFA8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 86AAFD8
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AB11C
	voice_keysplit voicegroup007, KeySplitTable3  @ 86AB17C
	voice_keysplit voicegroup008, KeySplitTable4  @ 86AB194
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86AB248
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AB2F0
	voice_noise_alt 0, 0, 2, 4, 0  @ 86AB4C4
	voice_noise_alt 0, 0, 1, 0, 0  @ 86AB4D0
	.align 2
voicegroup162:: @ 86AB4DC
	voice_keysplit_all voicegroup002  @ 86AB4DC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_high, 64, 188, 108, 244  @ 86AB50C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86AB584
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 64, 195, 92, 235  @ 86AB5A8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86AB5FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 64, 204, 113, 235  @ 86AB668
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AB71C
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AB92C
	.align 2
voicegroup163:: @ 86AB938
	voice_keysplit_all voicegroup002  @ 86AB938
	voice_keysplit voicegroup005, KeySplitTable1  @ 86AB944
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86AB968
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 255, 204, 77, 246  @ 86AB974
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86ABA04
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86ABA34
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 127  @ 86ABA58
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86ABB60
	voice_keysplit voicegroup006, KeySplitTable2  @ 86ABB78
	voice_keysplit voicegroup007, KeySplitTable3  @ 86ABBD8
	voice_directsound 60, 0, DirectSoundWaveData_88D6978, 255, 0, 206, 204  @ 86ABBF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86ABCA4
	voice_programmable_wave_alt ProgrammableWaveData_86B4900, 0, 0, 12, 0  @ 86ABD88
	voice_noise_alt 0, 0, 2, 6, 0  @ 86ABF20
	voice_noise_alt 0, 0, 1, 6, 0  @ 86ABF2C
	.align 2
voicegroup164:: @ 86ABF38
	voice_keysplit_all voicegroup002  @ 86ABF38
	voice_keysplit voicegroup005, KeySplitTable1  @ 86ABF44
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 128, 180, 108, 209  @ 86ABF68
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 85, 204, 77, 246  @ 86ABF74
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86AC004
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86AC034
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 127  @ 86AC058
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86AC160
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AC178
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86AC2A4
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 0, 12, 0  @ 86AC310
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 12, 0  @ 86AC388
	voice_noise_alt 0, 0, 2, 6, 0  @ 86AC520
	voice_noise_alt 0, 0, 1, 6, 0  @ 86AC52C
	.align 2
voicegroup165:: @ 86AC538
	voice_keysplit_all voicegroup002  @ 86AC538
	voice_keysplit voicegroup005, KeySplitTable1  @ 86AC544
	voice_directsound 60, 0, DirectSoundWaveData_sc88_glockenspiel, 255, 165, 51, 242  @ 86AC5A4
	voice_directsound 60, 0, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86AC5B0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 86AC5D4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86AC5E0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 37, 165, 103, 127  @ 86AC604
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 204, 92, 226  @ 86AC658
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 226  @ 86AC760
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AC778
	voice_keysplit voicegroup008, KeySplitTable4  @ 86AC7F0
	voice_keysplit voicegroup009, KeySplitTable5  @ 86AC808
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 0, 255, 165  @ 86AC8A4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_enhanced_delay_shaku, 255, 191, 97, 165  @ 86AC8BC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127  @ 86AC8E0
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AC988
	voice_noise_alt 0, 0, 1, 9, 0  @ 86ACB20
	voice_noise_alt 0, 0, 1, 6, 1  @ 86ACB2C
	.align 2
voicegroup166:: @ 86ACB38
	voice_keysplit_all voicegroup002  @ 86ACB38
	voice_keysplit voicegroup005, KeySplitTable1  @ 86ACB44
	voice_directsound 60, 0, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86ACBB0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86ACBE0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 128, 146, 108, 137  @ 86ACC04
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 204, 103, 226  @ 86ACC58
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127  @ 86ACC94
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127  @ 86ACCA0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86ACCAC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86ACCDC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86ACD00
	voice_directsound 60, 0, DirectSoundWaveData_unused_sc88_square, 255, 0, 255, 127  @ 86ACD0C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 153  @ 86ACD6C
	voice_keysplit voicegroup006, KeySplitTable2  @ 86ACD78
	voice_keysplit voicegroup007, KeySplitTable3  @ 86ACDD8
	voice_keysplit voicegroup009, KeySplitTable5  @ 86ACE08
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 236, 188  @ 86ACE20
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127  @ 86ACEE0
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86ACF4C
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 15, 0  @ 86ACF88
	voice_noise_alt 0, 0, 2, 6, 0  @ 86AD120
	voice_noise_alt 0, 0, 1, 8, 1  @ 86AD12C
	.align 2
voicegroup167:: @ 86AD138
	voice_keysplit_all voicegroup002  @ 86AD138
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86AD204
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86AD234
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86AD258
	voice_keysplit voicegroup007, KeySplitTable3  @ 86AD3D8
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 0, 6, 0  @ 86AD528
	voice_noise_alt 0, 0, 2, 6, 0  @ 86AD720
	voice_noise_alt 0, 0, 1, 6, 0  @ 86AD72C
	.align 2
voicegroup168:: @ 86AD738
	voice_keysplit_all voicegroup002  @ 86AD738
	voice_keysplit voicegroup005, KeySplitTable1  @ 86AD744
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86AD768
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 255, 204, 77, 246  @ 86AD774
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86AD804
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86AD834
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 127  @ 86AD858
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 86AD954
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86AD960
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AD978
	voice_keysplit voicegroup009, KeySplitTable5  @ 86ADA08
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86ADAA4
	voice_programmable_wave_alt ProgrammableWaveData_86B4900, 0, 0, 12, 0  @ 86ADB88
	voice_noise_alt 0, 0, 2, 6, 0  @ 86ADD20
	voice_noise_alt 0, 0, 1, 6, 0  @ 86ADD2C
	.align 2
voicegroup169:: @ 86ADD38
	voice_keysplit_all voicegroup001  @ 86ADD38
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 210  @ 86ADE04
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86ADEDC
	voice_keysplit voicegroup007, KeySplitTable3  @ 86ADFD8
	voice_keysplit voicegroup008, KeySplitTable4  @ 86ADFF0
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 86AE0BC
	voice_noise_alt 0, 0, 2, 4, 0  @ 86AE320
	voice_noise_alt 0, 0, 1, 0, 0  @ 86AE32C
	.align 2
voicegroup170:: @ 86AE338
	voice_keysplit_all voicegroup001  @ 86AE338
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 86AE56C
	voice_keysplit voicegroup007, KeySplitTable3  @ 86AE5D8
	voice_keysplit voicegroup008, KeySplitTable4  @ 86AE5F0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86AE6A4
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 1  @ 86AE704
	.align 2
voicegroup171:: @ 86AE728
	voice_keysplit_all voicegroup001  @ 86AE728
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 86AE944
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 86AE95C
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AE968
	voice_keysplit voicegroup007, KeySplitTable3  @ 86AE9C8
	voice_keysplit voicegroup009, KeySplitTable5  @ 86AE9F8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86AEA94
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 1  @ 86AEAF4
	voice_programmable_wave_alt ProgrammableWaveData_86B4880, 0, 7, 15, 0  @ 86AEB54
	voice_programmable_wave_alt ProgrammableWaveData_86B4890, 0, 7, 15, 1  @ 86AEB60
	.align 2
voicegroup172:: @ 86AEB6C
	voice_keysplit_all voicegroup002  @ 86AEB6C
	voice_keysplit voicegroup005, KeySplitTable1  @ 86AEB78
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86AEB9C
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 255, 204, 77, 246  @ 86AEBA8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86AEC38
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86AEC68
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 127  @ 86AEC8C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86AED94
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AEDAC
	voice_keysplit voicegroup007, KeySplitTable3  @ 86AEE0C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86AEED8
	voice_programmable_wave_alt ProgrammableWaveData_86B4900, 0, 0, 12, 0  @ 86AEFBC
	voice_noise_alt 0, 0, 2, 6, 0  @ 86AF154
	voice_noise_alt 0, 0, 1, 6, 0  @ 86AF160
	.align 2
voicegroup173:: @ 86AF16C
	voice_keysplit_all voicegroup002  @ 86AF16C
	voice_keysplit voicegroup005, KeySplitTable1  @ 86AF178
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86AF19C
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 128, 204, 77, 246  @ 86AF1A8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86AF214
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 51, 0, 203, 127  @ 86AF238
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86AF28C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 64, 216, 51, 224  @ 86AF298
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86AF310
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AF3AC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86AF4D8
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AF5BC
	voice_noise_alt 0, 0, 2, 6, 0  @ 86AF754
	voice_noise_alt 0, 0, 1, 3, 2  @ 86AF760
	.align 2
voicegroup174:: @ 86AF76C
	voice_keysplit_all voicegroup002  @ 86AF76C
	voice_keysplit voicegroup005, KeySplitTable1  @ 86AF778
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 249, 0, 165  @ 86AF7A8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 0, 255, 127  @ 86AF838
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 255, 0, 255, 165  @ 86AF868
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 128, 0, 255, 214  @ 86AF8C8
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 128, 0, 255, 206  @ 86AF8D4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 165  @ 86AF934
	voice_keysplit voicegroup006, KeySplitTable2  @ 86AF9AC
	voice_keysplit voicegroup007, KeySplitTable3  @ 86AFA0C
	voice_keysplit voicegroup009, KeySplitTable5  @ 86AFA3C
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 209  @ 86AFA54
	voice_programmable_wave_alt ProgrammableWaveData_86B4840, 0, 7, 15, 0  @ 86AFBBC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86AFD0C
	voice_noise_alt 0, 0, 2, 6, 0  @ 86AFD54
	voice_noise_alt 0, 0, 1, 3, 1  @ 86AFD60
	voice_keysplit_all voicegroup177  @ 86AFD6C
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AFD90
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 154, 127  @ 86AFE8C
	voice_keysplit_all voicegroup002  @ 86AFE98
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86AFEBC
	.align 2
voicegroup175:: @ 86AFEC8
	voice_keysplit_all voicegroup177  @ 86AFEC8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 86AFF64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 85, 165, 154, 127  @ 86AFFE8
	.align 2
voicegroup176:: @ 86B0138
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86B02DC
	.align 2
voicegroup177:: @ 86B0378
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_bells, 255, 0, 255, 0  @ 86B051C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_drum_and_percussion_kick, 255, 0, 255, 0  @ 86B0528
	voice_directsound_no_resample 67, 71, DirectSoundWaveData_sd90_solo_snare, 255, 180, 175, 228  @ 86B0534
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sd90_solo_snare, 255, 0, 255, 242  @ 86B0540
	voice_directsound_no_resample 65, 0, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 86B054C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 86B0558
	voice_directsound 64, 24, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86B0564
	voice_directsound 68, 29, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86B057C
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 86B0588
	voice_directsound 72, 64, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86B0594
	voice_directsound 76, 39, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86B05AC
	voice_directsound 80, 89, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 226  @ 86B05B8
	voice_directsound_no_resample 33, 10, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B05C4
	voice_directsound 84, 104, DirectSoundWaveData_sd90_ambient_tom, 255, 0, 255, 235  @ 86B05D0
	voice_directsound 63, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B05E8
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_dance_drums_ride_bell, 255, 165, 103, 231  @ 86B05F4
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 86B0600
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_cymbal_crash, 255, 231, 0, 188  @ 86B060C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_cowbell, 255, 0, 255, 242  @ 86B0618
	voice_directsound_no_resample 64, 118, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B0624
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B063C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 8, 0, 255, 216  @ 86B0648
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_djembe, 255, 0, 255, 0  @ 86B0654
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 86B0660
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86B066C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86B0678
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 86B0738
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 86B0744
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_anvil_high, 255, 165, 103, 188  @ 86B0750
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_bells, 255, 0, 255, 0  @ 86B075C
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86B0780
	voice_directsound 63, 64, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 0  @ 86B078C
	voice_directsound 50, 64, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 86B0798
	voice_directsound 64, 64, DirectSoundWaveData_unknown_tsuzumi, 255, 0, 255, 0  @ 86B07A4
	.align 2
voicegroup178:: @ 86B07B0
	voice_keysplit_all voicegroup177  @ 86B07B0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 204, 103, 165  @ 86B084C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 165, 154, 165  @ 86B08D0
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 0, 15, 1  @ 86B0BC4
	.align 2
voicegroup179:: @ 86B0BD0
	voice_keysplit_all voicegroup177  @ 86B0BD0
	voice_keysplit_all voicegroup176  @ 86B0BDC
	voice_keysplit voicegroup005, KeySplitTable1  @ 86B0BE8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_xylophone, 255, 235, 0, 204  @ 86B0C6C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 85, 165, 154, 127  @ 86B0CF0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 86B0D5C
	voice_keysplit voicegroup006, KeySplitTable2  @ 86B0E10
	voice_keysplit voicegroup007, KeySplitTable3  @ 86B0E70
	voice_keysplit voicegroup008, KeySplitTable4  @ 86B0E88
	voice_keysplit voicegroup009, KeySplitTable5  @ 86B0EA0
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 0  @ 86B0FE4
	.align 2
voicegroup180:: @ 86B0FF0
	voice_keysplit voicegroup005, KeySplitTable1  @ 86B0FFC
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 64, 249, 0, 188  @ 86B1020
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 249, 0, 165  @ 86B102C
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86B1440
	voice_directsound_no_resample 60, 0, DirectSoundWaveData_sc88_standard_hand_clap, 255, 255, 255, 127  @ 86B15D8
	voice_noise_alt 0, 0, 1, 0, 0  @ 86B15E4
	.align 2
voicegroup181:: @ 86B15F0
	voice_keysplit voicegroup005, KeySplitTable1  @ 86B15FC
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 242, 51, 242  @ 86B1818
	.align 2
voicegroup182:: @ 86B1824
	voice_keysplit_all voicegroup002  @ 86B1824
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 0, 193, 76  @ 86B1A58
	voice_keysplit voicegroup006, KeySplitTable2  @ 86B1A64
	voice_keysplit voicegroup007, KeySplitTable3  @ 86B1AC4
	voice_keysplit voicegroup008, KeySplitTable4  @ 86B1ADC
	voice_keysplit voicegroup009, KeySplitTable5  @ 86B1AF4
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86B1C38
	.align 2
voicegroup183:: @ 86B1C44
	voice_keysplit_all voicegroup002  @ 86B1C44
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86B1D64
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86B1DE8
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86B2028
	voice_noise_alt 0, 0, 2, 6, 0  @ 86B222C
	voice_noise_alt 0, 0, 1, 3, 1  @ 86B2238
	.align 2
voicegroup184:: @ 86B2244
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86B2268
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86B22EC
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86B23B8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86B240C
	voice_directsound 60, 0, DirectSoundWaveData_advanced_orchestra_voice_ahhs, 255, 0, 255, 0  @ 86B2640
	.align 2
voicegroup185:: @ 86B264C
	voice_keysplit_all voicegroup002  @ 86B264C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86B26F4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 128, 0, 255, 214  @ 86B27A8
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 128, 0, 255, 206  @ 86B27B4
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_guitar_harmonics, 255, 0, 255, 165  @ 86B27C0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pick_bass, 255, 253, 0, 149  @ 86B27D8
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86B27F0
	voice_directsound 60, 0, DirectSoundWaveData_sc88_synth_bass, 255, 252, 0, 115  @ 86B2814
	voice_directsound 60, 0, DirectSoundWaveData_sc88_pizzicato_strings, 255, 216, 0, 165  @ 86B2868
	voice_directsound 60, 0, DirectSoundWaveData_sc88_timpani, 255, 246, 0, 226  @ 86B2880
	voice_keysplit voicegroup006, KeySplitTable2  @ 86B288C
	voice_directsound 60, 0, DirectSoundWaveData_advanced_orchestra_voice_ahhs, 85, 0, 154, 165  @ 86B28C8
	voice_keysplit voicegroup007, KeySplitTable3  @ 86B28EC
	voice_keysplit voicegroup009, KeySplitTable5  @ 86B291C
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 209  @ 86B2934
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127  @ 86B29F4
	voice_programmable_wave_alt ProgrammableWaveData_86B4920, 0, 7, 15, 0  @ 86B2A3C
	voice_programmable_wave_alt ProgrammableWaveData_86B4910, 0, 7, 15, 0  @ 86B2A48
	voice_programmable_wave_alt ProgrammableWaveData_86B4870, 0, 7, 15, 0  @ 86B2A60
	voice_noise_alt 0, 0, 2, 6, 0  @ 86B2C34
	voice_noise_alt 0, 0, 1, 6, 1  @ 86B2C40
	.align 2
voicegroup186:: @ 86B2C4C
	voice_keysplit voicegroup005, KeySplitTable1  @ 86B2C58
	voice_noise_alt 0, 0, 2, 6, 0  @ 86B3240
	.align 2
voicegroup187:: @ 86B324C
	voice_keysplit_all voicegroup002  @ 86B324C
	voice_keysplit voicegroup005, KeySplitTable1  @ 86B3258
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 255, 76, 133, 137  @ 86B3318
	voice_directsound 60, 0, DirectSoundWaveData_sc88_accordion, 64, 188, 108, 165  @ 86B3348
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 255, 249, 25, 127  @ 86B336C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_harp, 255, 246, 0, 235  @ 86B3474
	voice_keysplit voicegroup006, KeySplitTable2  @ 86B348C
	voice_keysplit voicegroup007, KeySplitTable3  @ 86B34EC
	voice_keysplit voicegroup009, KeySplitTable5  @ 86B351C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86B35B8
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 0, 12, 0  @ 86B369C
	voice_noise_alt 0, 0, 2, 6, 0  @ 86B3834
	voice_noise_alt 0, 0, 1, 6, 1  @ 86B3840
	.align 2
voicegroup188:: @ 86B384C
	voice_keysplit_all voicegroup002  @ 86B384C
	voice_keysplit voicegroup005, KeySplitTable1  @ 86B3858
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86B387C
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 128, 204, 77, 246  @ 86B3888
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86B38F4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 51, 0, 203, 127  @ 86B3918
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86B396C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 64, 216, 51, 224  @ 86B3978
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86B39F0
	voice_keysplit voicegroup006, KeySplitTable2  @ 86B3A8C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86B3BB8
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 2  @ 86B3C9C
	voice_noise_alt 0, 0, 2, 7, 0  @ 86B3E34
	voice_noise_alt 0, 0, 1, 9, 1  @ 86B3E40
	.align 2
voicegroup189:: @ 86B3E4C
	voice_keysplit_all voicegroup002  @ 86B3E4C
	voice_keysplit voicegroup005, KeySplitTable1  @ 86B3E58
	voice_directsound 60, 0, DirectSoundWaveData_unknown_e_piano_low, 255, 188, 128, 226  @ 86B3E7C
	voice_directsound 60, 65, DirectSoundWaveData_unknown_e_piano_high, 128, 204, 77, 246  @ 86B3E88
	voice_directsound 60, 0, DirectSoundWaveData_sc88_tubular_bell, 255, 165, 90, 216  @ 86B3EF4
	voice_directsound 60, 0, DirectSoundWaveData_sc88_organ2, 51, 0, 203, 127  @ 86B3F18
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 128, 249, 25, 127  @ 86B3F6C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_nylon_str_guitar, 64, 216, 51, 224  @ 86B3F78
	voice_directsound 60, 0, DirectSoundWaveData_sc88_fretless_bass, 255, 253, 0, 188  @ 86B3FF0
	voice_keysplit voicegroup006, KeySplitTable2  @ 86B408C
	voice_directsound 60, 0, DirectSoundWaveData_sc88_flute, 255, 127, 231, 127  @ 86B41B8
	.align 2
voicegroup190:: @ 86B429C
	voice_programmable_wave_alt ProgrammableWaveData_86B4830, 0, 7, 15, 2  @ 86B429C
	voice_noise_alt 0, 0, 2, 7, 0  @ 86B4434
	voice_noise_alt 0, 0, 1, 9, 1  @ 86B4440
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_drum_and_percussion_kick, 255, 0, 255, 0  @ 86B444C
	voice_directsound_no_resample 64, 52, DirectSoundWaveData_sc88_standard_snare2, 255, 0, 255, 242  @ 86B4464
	voice_directsound_no_resample 60, 64, DirectSoundWaveData_sc88_standard_snare1, 255, 0, 255, 242  @ 86B44AC
	voice_directsound_no_resample 33, 104, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B44E8
	voice_directsound 63, 64, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B450C
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_unknown_tambourine, 255, 127, 77, 204  @ 86B4524
	voice_directsound_no_resample 64, 14, DirectSoundWaveData_unknown_cymbal_crash, 255, 231, 0, 188  @ 86B4530
	voice_directsound_no_resample 64, 89, DirectSoundWaveData_unknown_cowbell, 255, 0, 255, 242  @ 86B453C
	voice_directsound_no_resample 64, 24, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B4548
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 255, 235, 0, 231  @ 86B4560
	voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88_standard_cymbal_crash, 8, 0, 255, 216  @ 86B456C
	voice_directsound_no_resample 64, 94, DirectSoundWaveData_unknown_djembe, 255, 0, 255, 0  @ 86B4578
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_sc88_bongo, 255, 0, 255, 0  @ 86B4584
	voice_directsound_no_resample 64, 34, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86B4590
	voice_directsound_no_resample 64, 90, DirectSoundWaveData_sc88_bongo_low, 255, 0, 255, 0  @ 86B459C
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 86B465C
	voice_directsound_no_resample 64, 79, DirectSoundWaveData_unknown_anvil_high, 255, 242, 103, 188  @ 86B4668
	voice_directsound_no_resample 64, 39, DirectSoundWaveData_unknown_anvil_high, 255, 165, 103, 188  @ 86B4674
	voice_directsound_no_resample 64, 64, DirectSoundWaveData_sc88_standard_bells, 255, 0, 255, 0  @ 86B4680
	voice_directsound_no_resample 64, 104, DirectSoundWaveData_unknown_anvil_low, 255, 0, 255, 0  @ 86B46A4
	voice_directsound 63, 64, DirectSoundWaveData_unknown_ethnic_drum, 255, 0, 255, 0  @ 86B46B0