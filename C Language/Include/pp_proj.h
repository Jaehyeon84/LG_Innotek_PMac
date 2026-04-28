
#ifndef _PP_PROJ_H_
#define _PP_PROJ_H_
//***********************************************************************************
// C header for accessing PMAC Global, CSGlobal, Ptr vars
// _PPScriptMode_ for Pmac Script like access global & csglobal
// global Mypvar - access with "Mypvar"
// global Myparray(32) - access with "Myparray(i)"
// csglobal Myqvar - access with "Myqvar(i)" where "i" is Coord #
// csglobal Myqarray(16) - access with "Myqvar(i,j)" where "j" is index
// _EnumMode_ for Pmac enum data type checking on Set & Get global functions
// Example
// global Mypvar
// csglobal Myqvar
// "SetGlobalVar(Myqvar, data)" will give a compile error because its a csglobal var.
// "SetCSGlobalVar(Mypvar, data)" will give a compile error because its a global var.
//************************************************************************************

#ifdef _PPScriptMode_
enum globalP {_globalP_=-1};
enum globalParray {_globalParray_=-1};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};

enum ptrM {_ptrM_=-1
,pEcat_EcldrDi_Out0=8192
,pEcat_EcldrDi_Out1=8193
,pEcat_EcldrDi_Out2=8194
,pEcat_EcldrDi_Out3=8195
,pEcat_EcldrDi_Out4=8196
,pEcat_EcldrDi_Out5=8197
,pEcat_EcldrDi_Busy=8198
,pEcat_EcldrDi_Svre=8199
,pEcat_EcldrDi_Seton=8200
,pEcat_EcldrDi_Inp=8201
,pEcat_EcldrDi_Area=8202
,pEcat_EcldrDi_Warea=8203
,pEcat_EcldrDi_Estop=8204
,pEcat_EcldrDi_Alarm=8205
,pEcat_EcldrDo_In0=8206
,pEcat_EcldrDo_In1=8207
,pEcat_EcldrDo_In2=8208
,pEcat_EcldrDo_In3=8209
,pEcat_EcldrDo_In4=8210
,pEcat_EcldrDo_In5=8211
,pEcat_EcldrDo_Hold=8212
,pEcat_EcldrDo_Svon=8213
,pEcat_EcldrDo_Drive=8214
,pEcat_EcldrDo_Reset=8215
,pEcat_EcldrDo_Setup=8216
,pEcat_EcldrDo_JogM=8217
,pEcat_EcldrDo_JogP=8218
,pEcat_EcldrDo_Flgth=8219
,pEcat_EcldrJog_Flg=8220
,pEcat_EcldrJog_Std=8221
,pEcat_EcldrJog_Trg=8222
,pEcat_EcldrJog_Mod=8223
,pEcat_EcldrJog_Vel=8224
,pEcat_EcldrJog_Pos=8225
,pEcat_EcldrJog_Acc=8226
,pEcat_EcldrJog_Dec=8227
,pEcat_EcldrJog_InP=8228
,pEcat_Ecldr_CmdPos=8229
,pEcat_Ecldr_ActPos=8230
,pEcat_Di10_WsLtFixUp=8295
,pEcat_Di11_WsVsLtStrCls=8296
,pEcat_Di12_WsLtFixDn=8297
,pEcat_Di13_WsVsLtStrOpn=8298
,pEcat_Di14_WsRtFixUp=8299
,pEcat_Di15_WsVsRtStrCls=8300
,pEcat_Di16_WsRtFixDn=8301
,pEcat_Di17_WsVsRtStrOpn=8302
,pEcat_Di18_WsTempBwd=8303
,pEcat_Di19_TrPickUp=8304
,pEcat_Di1A_WsTempFwd=8305
,pEcat_Di1B_TrPickDn=8306
,pEcat_Di1C_WsTbDet=8307
,pEcat_Di1D_TrGripCls=8308
,pEcat_Di1E=8309
,pEcat_Di1F_TrGripOpn=8310
,pEcat_Di20_VsTbFixBwd=8311
,pEcat_Di21_WsAirCurtain=8312
,pEcat_Di22_VsTbFixFwd=8313
,pEcat_Di23_WsN2Blow=8314
,pEcat_Di24_VsTbFixUp=8315
,pEcat_Di25=8316
,pEcat_Di26_VsTbFixDn=8317
,pEcat_Di27=8318
,pEcat_Di28=8319
,pEcat_Di29=8320
,pEcat_Di2A=8321
,pEcat_Di2B=8322
,pEcat_Di2C_VsTbDet=8323
,pEcat_Di2D=8324
,pEcat_Di2E=8325
,pEcat_Di2F=8326
,pEcat_Do10_WsTbFixUp=8327
,pEcat_Do11_WsTempBwd=8328
,pEcat_Do12_WsTbFixDn=8329
,pEcat_Do13_WsTempFwd=8330
,pEcat_Do14_TrGripCls=8331
,pEcat_Do15_VsTbFixBwd=8332
,pEcat_Do16_TrGripOpn=8333
,pEcat_Do17_VsTbFixFwd=8334
,pEcat_Do18_TrPickUp=8335
,pEcat_Do19_VsTbFixUp=8336
,pEcat_Do1A_TrPickDn=8337
,pEcat_Do1B_VsTbFixDn=8338
,pEcat_Do1C_WsVsStrCls=8339
,pEcat_Do1D_WsCoolAir=8340
,pEcat_Do1E_WsVsStrOpn=8341
,pEcat_Do1F=8342
,pEcat_Do20_WsTbVacm=8343
,pEcat_Do21_WsAirCurtain=8344
,pEcat_Do22_WsTbBlow=8345
,pEcat_Do23_WsN2Blow=8346
,pEcat_Do24=8347
,pEcat_Do25_WsTbVacmBlowEna=8348
,pEcat_Do26=8349
,pEcat_Do27=8350
,pEcat_Do28=8351
,pEcat_Do29=8352
,pEcat_Do2A=8353
,pEcat_Do2B=8354
,pEcat_Di2C_VsTbDetect=8355
,pEcat_Do2D=8356
,pEcat_Do2E=8357
,pEcat_Do2F=8358
,pEcat_Ai00_WsLoadCell=8359
,pBuf_Ai00_WsLoadCell=8360
,pEcat_Ai01=8361
,pEcat_Ai03_WsCorePower=8362
,pBuf_Ai03_WsCorePower=8363
,pEcat_Ai04_WsRingPower=8364
,pBuf_Ai04_WsRingPower=8365
,pEcat_Ti00_Ws_TempSen1=8366
,pEcat_Ti01_Ws_TempSen2=8367
,pBuf_Ti00_Ws_TempSen1=8368
,pBuf_Ti01_Ws_TempSen2=8369
,pGpio_Di00=8562
,pGpio_Di01_LaserReady=8563
,pGpio_Di02_LaserReqResp=8564
,pGpio_Di03_LaserPowerOn=8565
,pGpio_Di04_LaserProgRun=8566
,pGpio_Di05_LaserWarning=8567
,pGpio_Di06_LaserAbnormal=8568
,pGpio_Di07=8569
,pGpio_Di08=8570
,pGpio_Di09=8571
,pGpio_Di0A=8572
,pGpio_Di0B=8573
,pGpio_Di0C=8574
,pGpio_Di0D=8575
,pGpio_Di0E=8576
,pGpio_Di0F=8577
,pGpio_Do00_LaserEmission=8578
,pGpio_Do01_LaserReset=8579
,pGpio_Do02_LaserRequest=8580
,pGpio_Do03_LaserPowerOn=8581
,pGpio_Do04_LaserAdInEna=8582
,pGpio_Do05_LaserGuideEna=8583
,pGpio_Do06_LaserProgEna=8584
,pGpio_Do07_LaserProgStop=8585
,pGpio_Do08=8586
,pGpio_Do09=8587
,pGpio_Do0A=8588
,pGpio_Do0B=8589
,pGpio_Do0C=8590
,pGpio_Do0D=8591
,pGpio_Do0E=8592
,pGpio_Do0F=8593
,pUmem_Sta_01_CmdPos=8594
,pUmem_Sta_01_ActPos=8595
,pUmem_Sta_01_Velocity=8596
,pUmem_Sta_01_Load=8597
,pUmem_Sta_01_AmpEna=8598
,pUmem_Sta_01_CloseLoop=8599
,pUmem_Sta_01_InPos=8600
,pUmem_Sta_01_HomeFin=8601
,pUmem_Sta_01_HomeIng=8602
,pUmem_Sta_01_LimitMinus=8603
,pUmem_Sta_01_LimitPlus=8604
,pUmem_Sta_01_FollowingErr=8605
,pUmem_Sta_01_AmpFault=8606
,pUmem_Sta_01_EncLoss=8607
,pUmem_Sta_01_I2tErr=8608
,pUmem_Sta_01_ProgPos=8609
,pUmem_Sta_TBD_2750=8610
,pUmem_Sta_TBD_2754=8611
,pUmem_Sta_TBD_2758=8612
,pUmem_Sta_TBD_275C=8613
,pUmem_Sta_02_CmdPos=8614
,pUmem_Sta_02_ActPos=8615
,pUmem_Sta_02_Velocity=8616
,pUmem_Sta_02_Load=8617
,pUmem_Sta_02_AmpEna=8618
,pUmem_Sta_02_CloseLoop=8619
,pUmem_Sta_02_InPos=8620
,pUmem_Sta_02_HomeFin=8621
,pUmem_Sta_02_HomeIng=8622
,pUmem_Sta_02_LimitMinus=8623
,pUmem_Sta_02_LimitPlus=8624
,pUmem_Sta_02_FollowingErr=8625
,pUmem_Sta_02_AmpFault=8626
,pUmem_Sta_02_EncLoss=8627
,pUmem_Sta_02_I2tErr=8628
,pUmem_Sta_02_ProgPos=8629
,pUmem_Sta_TBD_27A0=8630
,pUmem_Sta_TBD_27A4=8631
,pUmem_Sta_TBD_27A8=8632
,pUmem_Sta_TBD_27AC=8633
,pUmem_Sta_03_CmdPos=8634
,pUmem_Sta_03_ActPos=8635
,pUmem_Sta_03_Velocity=8636
,pUmem_Sta_03_Load=8637
,pUmem_Sta_03_AmpEna=8638
,pUmem_Sta_03_CloseLoop=8639
,pUmem_Sta_03_InPos=8640
,pUmem_Sta_03_HomeFin=8641
,pUmem_Sta_03_HomeIng=8642
,pUmem_Sta_03_LimitMinus=8643
,pUmem_Sta_03_LimitPlus=8644
,pUmem_Sta_03_FollowingErr=8645
,pUmem_Sta_03_AmpFault=8646
,pUmem_Sta_03_EncLoss=8647
,pUmem_Sta_03_I2tErr=8648
,pUmem_Sta_03_ProgPos=8649
,pUmem_Sta_TBD_27F0=8650
,pUmem_Sta_TBD_27F4=8651
,pUmem_Sta_TBD_27F8=8652
,pUmem_Sta_TBD_27FC=8653
,pUmem_Sta_04_CmdPos=8654
,pUmem_Sta_04_ActPos=8655
,pUmem_Sta_04_Velocity=8656
,pUmem_Sta_04_Load=8657
,pUmem_Sta_04_AmpEna=8658
,pUmem_Sta_04_CloseLoop=8659
,pUmem_Sta_04_InPos=8660
,pUmem_Sta_04_HomeFin=8661
,pUmem_Sta_04_HomeIng=8662
,pUmem_Sta_04_LimitMinus=8663
,pUmem_Sta_04_LimitPlus=8664
,pUmem_Sta_04_FollowingErr=8665
,pUmem_Sta_04_AmpFault=8666
,pUmem_Sta_04_EncLoss=8667
,pUmem_Sta_04_I2tErr=8668
,pUmem_Sta_04_ProgPos=8669
,pUmem_Sta_TBD_2840=8670
,pUmem_Sta_TBD_2844=8671
,pUmem_Sta_TBD_2848=8672
,pUmem_Sta_TBD_284C=8673
,pUmem_Sta_05_CmdPos=8674
,pUmem_Sta_05_ActPos=8675
,pUmem_Sta_05_Velocity=8676
,pUmem_Sta_05_Load=8677
,pUmem_Sta_05_AmpEna=8678
,pUmem_Sta_05_CloseLoop=8679
,pUmem_Sta_05_InPos=8680
,pUmem_Sta_05_HomeFin=8681
,pUmem_Sta_05_HomeIng=8682
,pUmem_Sta_05_LimitMinus=8683
,pUmem_Sta_05_LimitPlus=8684
,pUmem_Sta_05_FollowingErr=8685
,pUmem_Sta_05_AmpFault=8686
,pUmem_Sta_05_EncLoss=8687
,pUmem_Sta_05_I2tErr=8688
,pUmem_Sta_05_ProgPos=8689
,pUmem_Sta_TBD_2890=8690
,pUmem_Sta_TBD_2894=8691
,pUmem_Sta_TBD_2898=8692
,pUmem_Sta_TBD_289C=8693
,pUmem_Sta_06_CmdPos=8694
,pUmem_Sta_06_ActPos=8695
,pUmem_Sta_06_Velocity=8696
,pUmem_Sta_06_Load=8697
,pUmem_Sta_06_AmpEna=8698
,pUmem_Sta_06_CloseLoop=8699
,pUmem_Sta_06_InPos=8700
,pUmem_Sta_06_HomeFin=8701
,pUmem_Sta_06_HomeIng=8702
,pUmem_Sta_06_LimitMinus=8703
,pUmem_Sta_06_LimitPlus=8704
,pUmem_Sta_06_FollowingErr=8705
,pUmem_Sta_06_AmpFault=8706
,pUmem_Sta_06_EncLoss=8707
,pUmem_Sta_06_I2tErr=8708
,pUmem_Sta_06_ProgPos=8709
,pUmem_Sta_TBD_28E0=8710
,pUmem_Sta_TBD_28E4=8711
,pUmem_Sta_TBD_28E8=8712
,pUmem_Sta_TBD_28EC=8713
,pUmem_Sta_07_CmdPos=8714
,pUmem_Sta_07_ActPos=8715
,pUmem_Sta_07_Velocity=8716
,pUmem_Sta_07_Load=8717
,pUmem_Sta_07_AmpEna=8718
,pUmem_Sta_07_CloseLoop=8719
,pUmem_Sta_07_InPos=8720
,pUmem_Sta_07_HomeFin=8721
,pUmem_Sta_07_HomeIng=8722
,pUmem_Sta_07_LimitMinus=8723
,pUmem_Sta_07_LimitPlus=8724
,pUmem_Sta_07_FollowingErr=8725
,pUmem_Sta_07_AmpFault=8726
,pUmem_Sta_07_EncLoss=8727
,pUmem_Sta_07_I2tErr=8728
,pUmem_Sta_07_ProgPos=8729
,pUmem_Sta_TBD_2930=8730
,pUmem_Sta_TBD_2934=8731
,pUmem_Sta_TBD_2938=8732
,pUmem_Sta_TBD_293C=8733
,pUmem_Sta_08_CmdPos=8734
,pUmem_Sta_08_ActPos=8735
,pUmem_Sta_08_Velocity=8736
,pUmem_Sta_08_Load=8737
,pUmem_Sta_08_AmpEna=8738
,pUmem_Sta_08_CloseLoop=8739
,pUmem_Sta_08_InPos=8740
,pUmem_Sta_08_HomeFin=8741
,pUmem_Sta_08_HomeIng=8742
,pUmem_Sta_08_LimitMinus=8743
,pUmem_Sta_08_LimitPlus=8744
,pUmem_Sta_08_FollowingErr=8745
,pUmem_Sta_08_AmpFault=8746
,pUmem_Sta_08_EncLoss=8747
,pUmem_Sta_08_I2tErr=8748
,pUmem_Sta_08_ProgPos=8749
,pUmem_Sta_TBD_2980=8750
,pUmem_Sta_TBD_2984=8751
,pUmem_Sta_TBD_2988=8752
,pUmem_Sta_TBD_298C=8753
,pUmem_Sta_09_CmdPos=8754
,pUmem_Sta_09_ActPos=8755
,pUmem_Sta_09_Velocity=8756
,pUmem_Sta_09_Load=8757
,pUmem_Sta_09_AmpEna=8758
,pUmem_Sta_09_CloseLoop=8759
,pUmem_Sta_09_InPos=8760
,pUmem_Sta_09_HomeFin=8761
,pUmem_Sta_09_HomeIng=8762
,pUmem_Sta_09_LimitMinus=8763
,pUmem_Sta_09_LimitPlus=8764
,pUmem_Sta_09_FollowingErr=8765
,pUmem_Sta_09_AmpFault=8766
,pUmem_Sta_09_EncLoss=8767
,pUmem_Sta_09_I2tErr=8768
,pUmem_Sta_09_ProgPos=8769
,pUmem_Sta_TBD_29D0=8770
,pUmem_Sta_TBD_29D4=8771
,pUmem_Sta_TBD_29D8=8772
,pUmem_Sta_TBD_29DC=8773
,pUmem_Sta_10_CmdPos=8774
,pUmem_Sta_10_ActPos=8775
,pUmem_Sta_10_Velocity=8776
,pUmem_Sta_10_Load=8777
,pUmem_Sta_10_AmpEna=8778
,pUmem_Sta_10_CloseLoop=8779
,pUmem_Sta_10_InPos=8780
,pUmem_Sta_10_HomeFin=8781
,pUmem_Sta_10_HomeIng=8782
,pUmem_Sta_10_LimitMinus=8783
,pUmem_Sta_10_LimitPlus=8784
,pUmem_Sta_10_FollowingErr=8785
,pUmem_Sta_10_AmpFault=8786
,pUmem_Sta_10_EncLoss=8787
,pUmem_Sta_10_I2tErr=8788
,pUmem_Sta_10_ProgPos=8789
,pUmem_Sta_TBD_2A20=8790
,pUmem_Sta_TBD_2A24=8791
,pUmem_Sta_TBD_2A28=8792
,pUmem_Sta_TBD_2A2C=8793
,pUmem_Sta_11_CmdPos=8794
,pUmem_Sta_11_ActPos=8795
,pUmem_Sta_11_Velocity=8796
,pUmem_Sta_11_Load=8797
,pUmem_Sta_11_AmpEna=8798
,pUmem_Sta_11_CloseLoop=8799
,pUmem_Sta_11_InPos=8800
,pUmem_Sta_11_HomeFin=8801
,pUmem_Sta_11_HomeIng=8802
,pUmem_Sta_11_LimitMinus=8803
,pUmem_Sta_11_LimitPlus=8804
,pUmem_Sta_11_FollowingErr=8805
,pUmem_Sta_11_AmpFault=8806
,pUmem_Sta_11_EncLoss=8807
,pUmem_Sta_11_I2tErr=8808
,pUmem_Sta_11_ProgPos=8809
,pUmem_Sta_TBD_2A70=8810
,pUmem_Sta_TBD_2A74=8811
,pUmem_Sta_TBD_2A78=8812
,pUmem_Sta_TBD_2A7C=8813
,pUmem_Sta_12_CmdPos=8814
,pUmem_Sta_12_ActPos=8815
,pUmem_Sta_12_Velocity=8816
,pUmem_Sta_12_Load=8817
,pUmem_Sta_12_AmpEna=8818
,pUmem_Sta_12_CloseLoop=8819
,pUmem_Sta_12_InPos=8820
,pUmem_Sta_12_HomeFin=8821
,pUmem_Sta_12_HomeIng=8822
,pUmem_Sta_12_LimitMinus=8823
,pUmem_Sta_12_LimitPlus=8824
,pUmem_Sta_12_FollowingErr=8825
,pUmem_Sta_12_AmpFault=8826
,pUmem_Sta_12_EncLoss=8827
,pUmem_Sta_12_I2tErr=8828
,pUmem_Sta_12_ProgPos=8829
,pUmem_Sta_TBD_2AC0=8830
,pUmem_Sta_TBD_2AC4=8831
,pUmem_Sta_TBD_2AC8=8832
,pUmem_Sta_TBD_2ACC=8833
,pUmem_Sta_13_CmdPos=8834
,pUmem_Sta_13_ActPos=8835
,pUmem_Sta_13_Velocity=8836
,pUmem_Sta_13_Load=8837
,pUmem_Sta_13_AmpEna=8838
,pUmem_Sta_13_CloseLoop=8839
,pUmem_Sta_13_InPos=8840
,pUmem_Sta_13_HomeFin=8841
,pUmem_Sta_13_HomeIng=8842
,pUmem_Sta_13_LimitMinus=8843
,pUmem_Sta_13_LimitPlus=8844
,pUmem_Sta_13_FollowingErr=8845
,pUmem_Sta_13_AmpFault=8846
,pUmem_Sta_13_EncLoss=8847
,pUmem_Sta_13_I2tErr=8848
,pUmem_Sta_13_ProgPos=8849
,pUmem_Sta_TBD_2B10=8850
,pUmem_Sta_TBD_2B14=8851
,pUmem_Sta_TBD_2B18=8852
,pUmem_Sta_TBD_2B1C=8853
,pUmem_Sta_14_CmdPos=8854
,pUmem_Sta_14_ActPos=8855
,pUmem_Sta_14_Velocity=8856
,pUmem_Sta_14_Load=8857
,pUmem_Sta_14_AmpEna=8858
,pUmem_Sta_14_CloseLoop=8859
,pUmem_Sta_14_InPos=8860
,pUmem_Sta_14_HomeFin=8861
,pUmem_Sta_14_HomeIng=8862
,pUmem_Sta_14_LimitMinus=8863
,pUmem_Sta_14_LimitPlus=8864
,pUmem_Sta_14_FollowingErr=8865
,pUmem_Sta_14_AmpFault=8866
,pUmem_Sta_14_EncLoss=8867
,pUmem_Sta_14_I2tErr=8868
,pUmem_Sta_14_ProgPos=8869
,pUmem_Sta_TBD_2B60=8870
,pUmem_Sta_TBD_2B64=8871
,pUmem_Sta_TBD_2B68=8872
,pUmem_Sta_TBD_2B6C=8873
,pUmem_Sta_15_CmdPos=8874
,pUmem_Sta_15_ActPos=8875
,pUmem_Sta_15_Velocity=8876
,pUmem_Sta_15_Load=8877
,pUmem_Sta_15_AmpEna=8878
,pUmem_Sta_15_CloseLoop=8879
,pUmem_Sta_15_InPos=8880
,pUmem_Sta_15_HomeFin=8881
,pUmem_Sta_15_HomeIng=8882
,pUmem_Sta_15_LimitMinus=8883
,pUmem_Sta_15_LimitPlus=8884
,pUmem_Sta_15_FollowingErr=8885
,pUmem_Sta_15_AmpFault=8886
,pUmem_Sta_15_EncLoss=8887
,pUmem_Sta_15_I2tErr=8888
,pUmem_Sta_15_ProgPos=8889
,pUmem_Sta_TBD_2BB0=8890
,pUmem_Sta_TBD_2BB4=8891
,pUmem_Sta_TBD_2BB8=8892
,pUmem_Sta_TBD_2BBC=8893
,pUmem_Sta_16_CmdPos=8894
,pUmem_Sta_16_ActPos=8895
,pUmem_Sta_16_Velocity=8896
,pUmem_Sta_16_Load=8897
,pUmem_Sta_16_AmpEna=8898
,pUmem_Sta_16_CloseLoop=8899
,pUmem_Sta_16_InPos=8900
,pUmem_Sta_16_HomeFin=8901
,pUmem_Sta_16_HomeIng=8902
,pUmem_Sta_16_LimitMinus=8903
,pUmem_Sta_16_LimitPlus=8904
,pUmem_Sta_16_FollowingErr=8905
,pUmem_Sta_16_AmpFault=8906
,pUmem_Sta_16_EncLoss=8907
,pUmem_Sta_16_I2tErr=8908
,pUmem_Sta_16_ProgPos=8909
,pUmem_Sta_TBD_2C00=8910
,pUmem_Sta_TBD_2C04=8911
,pUmem_Sta_TBD_2C08=8912
,pUmem_Sta_TBD_2C0C=8913
,pUmem_Sta_17_CmdPos=8914
,pUmem_Sta_17_ActPos=8915
,pUmem_Sta_17_Velocity=8916
,pUmem_Sta_17_Load=8917
,pUmem_Sta_17_AmpEna=8918
,pUmem_Sta_17_CloseLoop=8919
,pUmem_Sta_17_InPos=8920
,pUmem_Sta_17_HomeFin=8921
,pUmem_Sta_17_HomeIng=8922
,pUmem_Sta_17_LimitMinus=8923
,pUmem_Sta_17_LimitPlus=8924
,pUmem_Sta_17_FollowingErr=8925
,pUmem_Sta_17_AmpFault=8926
,pUmem_Sta_17_EncLoss=8927
,pUmem_Sta_17_I2tErr=8928
,pUmem_Sta_17_ProgPos=8929
,pUmem_Sta_TBD_2C50=8930
,pUmem_Sta_TBD_2C54=8931
,pUmem_Sta_TBD_2C58=8932
,pUmem_Sta_TBD_2C5C=8933
,pUmem_Sta_18_CmdPos=8934
,pUmem_Sta_18_ActPos=8935
,pUmem_Sta_18_Velocity=8936
,pUmem_Sta_18_Load=8937
,pUmem_Sta_18_AmpEna=8938
,pUmem_Sta_18_CloseLoop=8939
,pUmem_Sta_18_InPos=8940
,pUmem_Sta_18_HomeFin=8941
,pUmem_Sta_18_HomeIng=8942
,pUmem_Sta_18_LimitMinus=8943
,pUmem_Sta_18_LimitPlus=8944
,pUmem_Sta_18_FollowingErr=8945
,pUmem_Sta_18_AmpFault=8946
,pUmem_Sta_18_EncLoss=8947
,pUmem_Sta_18_I2tErr=8948
,pUmem_Sta_18_ProgPos=8949
,pUmem_Sta_TBD_2CA0=8950
,pUmem_Sta_TBD_2CA4=8951
,pUmem_Sta_TBD_2CA8=8952
,pUmem_Sta_TBD_2CAC=8953
,pUmem_Sta_19_CmdPos=8954
,pUmem_Sta_19_ActPos=8955
,pUmem_Sta_19_Velocity=8956
,pUmem_Sta_19_Load=8957
,pUmem_Sta_19_AmpEna=8958
,pUmem_Sta_19_CloseLoop=8959
,pUmem_Sta_19_InPos=8960
,pUmem_Sta_19_HomeFin=8961
,pUmem_Sta_19_HomeIng=8962
,pUmem_Sta_19_LimitMinus=8963
,pUmem_Sta_19_LimitPlus=8964
,pUmem_Sta_19_FollowingErr=8965
,pUmem_Sta_19_AmpFault=8966
,pUmem_Sta_19_EncLoss=8967
,pUmem_Sta_19_I2tErr=8968
,pUmem_Sta_19_ProgPos=8969
,pUmem_Sta_TBD_2CF0=8970
,pUmem_Sta_TBD_2CF4=8971
,pUmem_Sta_TBD_2CF8=8972
,pUmem_Sta_TBD_2CFC=8973
,pUmem_Sta_20_CmdPos=8974
,pUmem_Sta_20_ActPos=8975
,pUmem_Sta_20_Velocity=8976
,pUmem_Sta_20_Load=8977
,pUmem_Sta_20_AmpEna=8978
,pUmem_Sta_20_CloseLoop=8979
,pUmem_Sta_20_InPos=8980
,pUmem_Sta_20_HomeFin=8981
,pUmem_Sta_20_HomeIng=8982
,pUmem_Sta_20_LimitMinus=8983
,pUmem_Sta_20_LimitPlus=8984
,pUmem_Sta_20_FollowingErr=8985
,pUmem_Sta_20_AmpFault=8986
,pUmem_Sta_20_EncLoss=8987
,pUmem_Sta_20_I2tErr=8988
,pUmem_Sta_20_ProgPos=8989
,pUmem_Sta_TBD_2D40=8990
,pUmem_Sta_TBD_2D44=8991
,pUmem_Sta_TBD_2D48=8992
,pUmem_Sta_TBD_2D4C=8993
,pUmem_Sta_21_CmdPos=8994
,pUmem_Sta_21_ActPos=8995
,pUmem_Sta_21_Velocity=8996
,pUmem_Sta_21_Load=8997
,pUmem_Sta_21_AmpEna=8998
,pUmem_Sta_21_CloseLoop=8999
,pUmem_Sta_21_InPos=9000
,pUmem_Sta_21_HomeFin=9001
,pUmem_Sta_21_HomeIng=9002
,pUmem_Sta_21_LimitMinus=9003
,pUmem_Sta_21_LimitPlus=9004
,pUmem_Sta_21_FollowingErr=9005
,pUmem_Sta_21_AmpFault=9006
,pUmem_Sta_21_EncLoss=9007
,pUmem_Sta_21_I2tErr=9008
,pUmem_Sta_21_ProgPos=9009
,pUmem_Sta_TBD_2D90=9010
,pUmem_Sta_TBD_2D94=9011
,pUmem_Sta_TBD_2D98=9012
,pUmem_Sta_TBD_2D9C=9013
,pUmem_Sta_22_CmdPos=9014
,pUmem_Sta_22_ActPos=9015
,pUmem_Sta_22_Velocity=9016
,pUmem_Sta_22_Load=9017
,pUmem_Sta_22_AmpEna=9018
,pUmem_Sta_22_CloseLoop=9019
,pUmem_Sta_22_InPos=9020
,pUmem_Sta_22_HomeFin=9021
,pUmem_Sta_22_HomeIng=9022
,pUmem_Sta_22_LimitMinus=9023
,pUmem_Sta_22_LimitPlus=9024
,pUmem_Sta_22_FollowingErr=9025
,pUmem_Sta_22_AmpFault=9026
,pUmem_Sta_22_EncLoss=9027
,pUmem_Sta_22_I2tErr=9028
,pUmem_Sta_22_ProgPos=9029
,pUmem_Sta_TBD_2DE0=9030
,pUmem_Sta_TBD_2DE4=9031
,pUmem_Sta_TBD_2DE8=9032
,pUmem_Sta_TBD_2DEC=9033
,pUmem_Sta_23_CmdPos=9034
,pUmem_Sta_23_ActPos=9035
,pUmem_Sta_23_Velocity=9036
,pUmem_Sta_23_Load=9037
,pUmem_Sta_23_AmpEna=9038
,pUmem_Sta_23_CloseLoop=9039
,pUmem_Sta_23_InPos=9040
,pUmem_Sta_23_HomeFin=9041
,pUmem_Sta_23_HomeIng=9042
,pUmem_Sta_23_LimitMinus=9043
,pUmem_Sta_23_LimitPlus=9044
,pUmem_Sta_23_FollowingErr=9045
,pUmem_Sta_23_AmpFault=9046
,pUmem_Sta_23_EncLoss=9047
,pUmem_Sta_23_I2tErr=9048
,pUmem_Sta_23_ProgPos=9049
,pUmem_Sta_TBD_2E30=9050
,pUmem_Sta_TBD_2E34=9051
,pUmem_Sta_TBD_2E38=9052
,pUmem_Sta_TBD_2E3C=9053
,pUmem_Sta_24_CmdPos=9054
,pUmem_Sta_24_ActPos=9055
,pUmem_Sta_24_Velocity=9056
,pUmem_Sta_24_Load=9057
,pUmem_Sta_24_AmpEna=9058
,pUmem_Sta_24_CloseLoop=9059
,pUmem_Sta_24_InPos=9060
,pUmem_Sta_24_HomeFin=9061
,pUmem_Sta_24_HomeIng=9062
,pUmem_Sta_24_LimitMinus=9063
,pUmem_Sta_24_LimitPlus=9064
,pUmem_Sta_24_FollowingErr=9065
,pUmem_Sta_24_AmpFault=9066
,pUmem_Sta_24_EncLoss=9067
,pUmem_Sta_24_I2tErr=9068
,pUmem_Sta_24_ProgPos=9069
,pUmem_Sta_TBD_2E80=9070
,pUmem_Sta_TBD_2E84=9071
,pUmem_Sta_TBD_2E88=9072
,pUmem_Sta_TBD_2E8C=9073
,pUmem_Sta_25_CmdPos=9074
,pUmem_Sta_25_ActPos=9075
,pUmem_Sta_25_Velocity=9076
,pUmem_Sta_25_Load=9077
,pUmem_Sta_25_AmpEna=9078
,pUmem_Sta_25_CloseLoop=9079
,pUmem_Sta_25_InPos=9080
,pUmem_Sta_25_HomeFin=9081
,pUmem_Sta_25_HomeIng=9082
,pUmem_Sta_25_LimitMinus=9083
,pUmem_Sta_25_LimitPlus=9084
,pUmem_Sta_25_FollowingErr=9085
,pUmem_Sta_25_AmpFault=9086
,pUmem_Sta_25_EncLoss=9087
,pUmem_Sta_25_I2tErr=9088
,pUmem_Sta_25_ProgPos=9089
,pUmem_Sta_TBD_2ED0=9090
,pUmem_Sta_TBD_2ED4=9091
,pUmem_Sta_TBD_2ED8=9092
,pUmem_Sta_TBD_2EDC=9093
,pUmem_Sta_26_CmdPos=9094
,pUmem_Sta_26_ActPos=9095
,pUmem_Sta_26_Velocity=9096
,pUmem_Sta_26_Load=9097
,pUmem_Sta_26_AmpEna=9098
,pUmem_Sta_26_CloseLoop=9099
,pUmem_Sta_26_InPos=9100
,pUmem_Sta_26_HomeFin=9101
,pUmem_Sta_26_HomeIng=9102
,pUmem_Sta_26_LimitMinus=9103
,pUmem_Sta_26_LimitPlus=9104
,pUmem_Sta_26_FollowingErr=9105
,pUmem_Sta_26_AmpFault=9106
,pUmem_Sta_26_EncLoss=9107
,pUmem_Sta_26_I2tErr=9108
,pUmem_Sta_26_ProgPos=9109
,pUmem_Sta_TBD_2F20=9110
,pUmem_Sta_TBD_2F24=9111
,pUmem_Sta_TBD_2F28=9112
,pUmem_Sta_TBD_2F2C=9113
,pUmem_Sta_27_CmdPos=9114
,pUmem_Sta_27_ActPos=9115
,pUmem_Sta_27_Velocity=9116
,pUmem_Sta_27_Load=9117
,pUmem_Sta_27_AmpEna=9118
,pUmem_Sta_27_CloseLoop=9119
,pUmem_Sta_27_InPos=9120
,pUmem_Sta_27_HomeFin=9121
,pUmem_Sta_27_HomeIng=9122
,pUmem_Sta_27_LimitMinus=9123
,pUmem_Sta_27_LimitPlus=9124
,pUmem_Sta_27_FollowingErr=9125
,pUmem_Sta_27_AmpFault=9126
,pUmem_Sta_27_EncLoss=9127
,pUmem_Sta_27_I2tErr=9128
,pUmem_Sta_27_ProgPos=9129
,pUmem_Sta_TBD_2F70=9130
,pUmem_Sta_TBD_2F74=9131
,pUmem_Sta_TBD_2F78=9132
,pUmem_Sta_TBD_2F7C=9133
,pUmem_Sta_28_CmdPos=9134
,pUmem_Sta_28_ActPos=9135
,pUmem_Sta_28_Velocity=9136
,pUmem_Sta_28_Load=9137
,pUmem_Sta_28_AmpEna=9138
,pUmem_Sta_28_CloseLoop=9139
,pUmem_Sta_28_InPos=9140
,pUmem_Sta_28_HomeFin=9141
,pUmem_Sta_28_HomeIng=9142
,pUmem_Sta_28_LimitMinus=9143
,pUmem_Sta_28_LimitPlus=9144
,pUmem_Sta_28_FollowingErr=9145
,pUmem_Sta_28_AmpFault=9146
,pUmem_Sta_28_EncLoss=9147
,pUmem_Sta_28_I2tErr=9148
,pUmem_Sta_28_ProgPos=9149
,pUmem_Sta_TBD_2FC0=9150
,pUmem_Sta_TBD_2FC4=9151
,pUmem_Sta_TBD_2FC8=9152
,pUmem_Sta_TBD_2FCC=9153
,pUmem_Sta_29_CmdPos=9154
,pUmem_Sta_29_ActPos=9155
,pUmem_Sta_29_Velocity=9156
,pUmem_Sta_29_Load=9157
,pUmem_Sta_29_AmpEna=9158
,pUmem_Sta_29_CloseLoop=9159
,pUmem_Sta_29_InPos=9160
,pUmem_Sta_29_HomeFin=9161
,pUmem_Sta_29_HomeIng=9162
,pUmem_Sta_29_LimitMinus=9163
,pUmem_Sta_29_LimitPlus=9164
,pUmem_Sta_29_FollowingErr=9165
,pUmem_Sta_29_AmpFault=9166
,pUmem_Sta_29_EncLoss=9167
,pUmem_Sta_29_I2tErr=9168
,pUmem_Sta_29_ProgPos=9169
,pUmem_Sta_TBD_3010=9170
,pUmem_Sta_TBD_3014=9171
,pUmem_Sta_TBD_3018=9172
,pUmem_Sta_TBD_301C=9173
,pUmem_Sta_30_CmdPos=9174
,pUmem_Sta_30_ActPos=9175
,pUmem_Sta_30_Velocity=9176
,pUmem_Sta_30_Load=9177
,pUmem_Sta_30_AmpEna=9178
,pUmem_Sta_30_CloseLoop=9179
,pUmem_Sta_30_InPos=9180
,pUmem_Sta_30_HomeFin=9181
,pUmem_Sta_30_HomeIng=9182
,pUmem_Sta_30_LimitMinus=9183
,pUmem_Sta_30_LimitPlus=9184
,pUmem_Sta_30_FollowingErr=9185
,pUmem_Sta_30_AmpFault=9186
,pUmem_Sta_30_EncLoss=9187
,pUmem_Sta_30_I2tErr=9188
,pUmem_Sta_30_ProgPos=9189
,pUmem_Sta_TBD_3060=9190
,pUmem_Sta_TBD_3064=9191
,pUmem_Sta_TBD_3068=9192
,pUmem_Sta_TBD_306C=9193
,pUmem_Sta_31_CmdPos=9194
,pUmem_Sta_31_ActPos=9195
,pUmem_Sta_31_Velocity=9196
,pUmem_Sta_31_Load=9197
,pUmem_Sta_31_AmpEna=9198
,pUmem_Sta_31_CloseLoop=9199
,pUmem_Sta_31_InPos=9200
,pUmem_Sta_31_HomeFin=9201
,pUmem_Sta_31_HomeIng=9202
,pUmem_Sta_31_LimitMinus=9203
,pUmem_Sta_31_LimitPlus=9204
,pUmem_Sta_31_FollowingErr=9205
,pUmem_Sta_31_AmpFault=9206
,pUmem_Sta_31_EncLoss=9207
,pUmem_Sta_31_I2tErr=9208
,pUmem_Sta_31_ProgPos=9209
,pUmem_Sta_TBD_30B0=9210
,pUmem_Sta_TBD_30B4=9211
,pUmem_Sta_TBD_30B8=9212
,pUmem_Sta_TBD_30BC=9213
,pUmem_Sta_32_CmdPos=9214
,pUmem_Sta_32_ActPos=9215
,pUmem_Sta_32_Velocity=9216
,pUmem_Sta_32_Load=9217
,pUmem_Sta_32_AmpEna=9218
,pUmem_Sta_32_CloseLoop=9219
,pUmem_Sta_32_InPos=9220
,pUmem_Sta_32_HomeFin=9221
,pUmem_Sta_32_HomeIng=9222
,pUmem_Sta_32_LimitMinus=9223
,pUmem_Sta_32_LimitPlus=9224
,pUmem_Sta_32_FollowingErr=9225
,pUmem_Sta_32_AmpFault=9226
,pUmem_Sta_32_EncLoss=9227
,pUmem_Sta_32_I2tErr=9228
,pUmem_Sta_32_ProgPos=9229
,pUmem_Sta_TBD_3100=9230
,pUmem_Sta_TBD_3104=9231
,pUmem_Sta_TBD_3108=9232
,pUmem_Sta_TBD_310C=9233
,pUmem_Sta_Mc_AmpEna=9234
,pUmem_Sta_Mc_InPos=9235
,pUmem_Sta_Mc_Home=9236
,pUmem_Sta_Mc_HomeErr=9237
,pUmem_Sta_Mc_RunMode=9238
,pUmem_Sta_Mc_AutoRun=9239
,pUmem_Sta_Mc_EcatCon=9240
,pUmem_Sta_Mc_Error=9241
,pUmem_Sta_TBD_3AB8=9242
,pUmem_Sta_TBD_3ABC=9243
,pUmem_Sta_Mc_ID=9244
,pUmem_Sta_Mc_ErasePdtFlgWs=9245
,pUmem_Sta_Mc_ErasePdtFlgVs=9246
,pUmem_Sta_Mc_ErasePdtFlgTr=9247
,pUmem_Sta_Mc_ErasePdtNoWs=9248
,pUmem_Sta_Mc_ErasePdtNoVs=9249
,pUmem_Sta_Mc_ErasePdtNoTr=9250
,pUmem_Sta_Ws_AmpEna=9251
,pUmem_Sta_Ws_InPos=9252
,pUmem_Sta_Ws_Home=9253
,pUmem_Sta_Ws_HomeErr=9254
,pUmem_Sta_Ws_EcatCon=9255
,pUmem_Sta_Ws_Error=9256
,pUmem_Sta_Ws_ErrCode=9257
,pUmem_Sta_TBD_3E9C=9258
,pUmem_Sta_TBD_3EA0=9259
,pUmem_Sta_Ws_ProgRun=9260
,pUmem_Sta_Ws_VectorVel=9261
,pUmem_Sta_Ws_ProgTime=9262
,pUmem_Sta_Ws_PosStage=9263
,pUmem_Sta_Ws_PosProduct=9264
,pUmem_Sta_Ws_Cover=9265
,pUmem_Sta_Ws_PdtSta=9266
,pUmem_Sta_Tr_PdtSta=9267
,pUmem_Sta_Ws_LaserReady=9268
,pUmem_Sta_Ws_LaserEnable=9269
,pUmem_Sta_Ws_LaserCorePower=9270
,pUmem_Sta_Ws_LaserRingPower=9271
,pUmem_Sta_Ws_PdtNo=9272
,pUmem_Sta_TBD_3ED8=9273
,pUmem_Sta_Ws_LaserActCorePower=9274
,pUmem_Sta_Ws_LaserActRingPower=9275
,pUmem_Sta_Ws_LaserActCoreVolt=9276
,pUmem_Sta_Ws_LaserActRingVolt=9277
,pUmem_Cmd_Ws_PowerCheckSta=9278
,pUmem_Sta_TBD_3EF0=9279
,pUmem_Sta_TBD_3EF4=9280
,pUmem_Sta_Ws_LdSeq=9281
,pUmem_Sta_Ws_LdErr=9282
,pUmem_Sta_Ws_LdTime=9283
,pUmem_Sta_Ws_RdSeq=9284
,pUmem_Sta_Ws_RdErr=9285
,pUmem_Sta_Ws_RdTime=9286
,pUmem_Sta_Ws_WdSeq=9287
,pUmem_Sta_Ws_WdErr=9288
,pUmem_Sta_Ws_WdTime=9289
,pUmem_Sta_Ws_WtSeq=9290
,pUmem_Sta_Ws_WtErr=9291
,pUmem_Sta_Ws_WtTime=9292
,pUmem_Sta_Ws_UdSeq=9293
,pUmem_Sta_Ws_UdErr=9294
,pUmem_Sta_Ws_UdTime=9295
,pUmem_Sta_Ws_RjSeq=9296
,pUmem_Sta_Ws_RjErr=9297
,pUmem_Sta_Ws_RjTime=9298
,pUmem_Sta_TBD_3F40=9299
,pUmem_Sta_TBD_3F44=9300
,pUmem_Sta_TBD_3F48=9301
,pUmem_Sta_TBD_3F4C=9302
,pUmem_Sta_TBD_3F50=9303
,pUmem_Sta_TBD_3F54=9304
,pUmem_Sta_TBD_3F58=9305
,pUmem_Sta_TBD_3F5C=9306
,pUmem_Sta_TBD_3F60=9307
,pUmem_Sta_TBD_3F64=9308
,pUmem_Sta_TBD_3F68=9309
,pUmem_Sta_TBD_3F6C=9310
,pUmem_Sta_Ws_1stTransRjReq=9311
,pUmem_Sta_Ws_2ndTransLdReq=9312
,pUmem_Sta_Ws_2dVisionCkReq=9313
,pUmem_Sta_Ws_LwmStartReq=9314
,pUmem_Sta_TBD_3F80=9315
,pUmem_Sta_TBD_3F84=9316
,pUmem_Sta_TBD_3F88=9317
,pUmem_Sta_TBD_3F8C=9318
,pUmem_Sta_TBD_3F90=9319
,pUmem_Sta_TBD_3F94=9320
,pUmem_Sta_Ws_1stTransPdtNo=9321
,pUmem_Sta_Ws_TempResult1=9322
,pUmem_Sta_Ws_TempResult2=9323
,pUmem_Sta_TBD_3FA4=9324
,pUmem_Sta_TBD_3FA8=9325
,pUmem_Sta_TBD_3FAC=9326
,pUmem_Sta_TBD_3FB0=9327
,pUmem_Sta_TBD_3FB4=9328
,pUmem_Sta_TBD_3FB8=9329
,pUmem_Sta_TBD_3FBC=9330
,pUmem_Sta_TBD_3FC0=9331
,pUmem_Sta_TBD_3FC4=9332
,pUmem_Sta_TBD_3FC8=9333
,pUmem_Sta_TBD_3FCC=9334
,pUmem_Sta_TBD_3FD0=9335
,pUmem_Sta_TBD_3FD4=9336
,pUmem_Sta_TBD_3FD8=9337
,pUmem_Sta_TBD_3FDC=9338
,pUmem_Sta_TBD_3FE0=9339
,pUmem_Sta_TBD_3FE4=9340
,pUmem_Sta_Vs_AmpEna=9341
,pUmem_Sta_Vs_InPos=9342
,pUmem_Sta_Vs_Home=9343
,pUmem_Sta_Vs_HomeErr=9344
,pUmem_Sta_Vs_EcatCon=9345
,pUmem_Sta_Vs_Error=9346
,pUmem_Sta_Vs_ErrCode=9347
,pUmem_Sta_TBD_4284=9348
,pUmem_Sta_TBD_4288=9349
,pUmem_Sta_Vs_ProgRun=9350
,pUmem_Sta_Vs_VectorVel=9351
,pUmem_Sta_Vs_ProgTime=9352
,pUmem_Sta_Vs_PosStage=9353
,pUmem_Sta_Vs_PosProduct=9354
,pUmem_Sta_Vs_Cover=9355
,pUmem_Sta_Vs_PdtSta=9356
,pUmem_Sta_Vs_PdtNo=9357
,pUmem_Sta_TBD_42AC=9358
,pUmem_Sta_TBD_42B0=9359
,pUmem_Sta_TBD_42B4=9360
,pUmem_Sta_TBD_42B8=9361
,pUmem_Sta_TBD_42BC=9362
,pUmem_Sta_TBD_42C0=9363
,pUmem_Sta_TBD_42C4=9364
,pUmem_Sta_TBD_42C8=9365
,pUmem_Sta_TBD_42CC=9366
,pUmem_Sta_TBD_42D0=9367
,pUmem_Sta_TBD_42D4=9368
,pUmem_Sta_TBD_42D8=9369
,pUmem_Sta_TBD_42DC=9370
,pUmem_Sta_Vs_LdSeq=9371
,pUmem_Sta_Vs_LdErr=9372
,pUmem_Sta_Vs_LdTime=9373
,pUmem_Sta_Vs_RdSeq=9374
,pUmem_Sta_Vs_RdErr=9375
,pUmem_Sta_Vs_RdTime=9376
,pUmem_Sta_Vs_VnSeq=9377
,pUmem_Sta_Vs_VnErr=9378
,pUmem_Sta_Vs_VnTime=9379
,pUmem_Sta_Vs_WtSeq=9380
,pUmem_Sta_Vs_WtErr=9381
,pUmem_Sta_Vs_WtTime=9382
,pUmem_Sta_Vs_UdSeq=9383
,pUmem_Sta_Vs_UdErr=9384
,pUmem_Sta_Vs_UdTime=9385
,pUmem_Sta_Vs_RjSeq=9386
,pUmem_Sta_Vs_RjErr=9387
,pUmem_Sta_Vs_RjTime=9388
,pUmem_Sta_TBD_4328=9389
,pUmem_Sta_TBD_432C=9390
,pUmem_Sta_TBD_4330=9391
,pUmem_Sta_TBD_4334=9392
,pUmem_Sta_TBD_4338=9393
,pUmem_Sta_TBD_433C=9394
,pUmem_Sta_TBD_4340=9395
,pUmem_Sta_TBD_4344=9396
,pUmem_Sta_TBD_4348=9397
,pUmem_Sta_TBD_434C=9398
,pUmem_Sta_TBD_4350=9399
,pUmem_Sta_TBD_4354=9400
,pUmem_Sta_Vs_3rdTransUdReq=9401
,pUmem_Sta_Vs_3rdTransRjReq=9402
,pUmem_Sta_Vs_3DVisionStReq=9403
,pUmem_Sta_Vs_3DVisionEdReq=9404
,pUmem_Sta_TBD_4368=9405
,pUmem_Sta_TBD_436C=9406
,pUmem_Sta_TBD_4370=9407
,pUmem_Sta_TBD_4374=9408
,pUmem_Sta_TBD_4378=9409
,pUmem_Sta_TBD_437C=9410
,pUmem_Sta_Vs_3rdTransPtdNo=9411
,pUmem_Sta_TBD_4384=9412
,pUmem_Sta_TBD_4388=9413
,pUmem_Sta_TBD_438C=9414
,pUmem_Sta_TBD_4390=9415
,pUmem_Sta_TBD_4394=9416
,pUmem_Sta_TBD_4398=9417
,pUmem_Sta_TBD_439C=9418
,pUmem_Sta_TBD_43A0=9419
,pUmem_Sta_TBD_43A4=9420
,pUmem_Sta_TBD_43A8=9421
,pUmem_Sta_TBD_43AC=9422
,pUmem_Sta_TBD_43B0=9423
,pUmem_Sta_TBD_43B4=9424
,pUmem_Sta_TBD_43B8=9425
,pUmem_Sta_TBD_43BC=9426
,pUmem_Sta_TBD_43C0=9427
,pUmem_Sta_TBD_43C4=9428
,pUmem_Sta_TBD_43C8=9429
,pUmem_Sta_TBD_43CC=9430
,pUmem_Sta_Sc_AmpEna=9431
,pUmem_Sta_Sc_InPos=9432
,pUmem_Sta_Sc_Home=9433
,pUmem_Sta_Sc_HomeErr=9434
,pUmem_Sta_Sc_Con=9435
,pUmem_Sta_Sc_Error=9436
,pUmem_Sta_Sc_ErrCode=9437
,pUmem_Cmd_01_ServoOn=9438
,pUmem_Cmd_01_ServoOff=9439
,pUmem_Cmd_01_HomeStart=9440
,pUmem_Cmd_01_HomeAbort=9441
,pUmem_Cmd_01_HomeOffset=9442
,pUmem_Cmd_01_JogStop=9443
,pUmem_Cmd_01_JogContPlus=9444
,pUmem_Cmd_01_JogContMinus=9445
,pUmem_Cmd_01_JogAbsMove=9446
,pUmem_Cmd_01_JogIncMove=9447
,pUmem_Cmd_01_JogAbsPos=9448
,pUmem_Cmd_01_JogIncDist=9449
,pUmem_Cmd_01_JogSpeed=9450
,pUmem_Cmd_01_JogTa=9451
,pUmem_Cmd_01_JogTs=9452
,pUmem_Cmd_TBD_4E5C=9453
,pUmem_Cmd_TBD_4E60=9454
,pUmem_Cmd_TBD_4E64=9455
,pUmem_Cmd_TBD_4E68=9456
,pUmem_Cmd_TBD_4E6C=9457
,pUmem_Cmd_02_ServoOn=9458
,pUmem_Cmd_02_ServoOff=9459
,pUmem_Cmd_02_HomeStart=9460
,pUmem_Cmd_02_HomeAbort=9461
,pUmem_Cmd_02_HomeOffset=9462
,pUmem_Cmd_02_JogStop=9463
,pUmem_Cmd_02_JogContPlus=9464
,pUmem_Cmd_02_JogContMinus=9465
,pUmem_Cmd_02_JogAbsMove=9466
,pUmem_Cmd_02_JogIncMove=9467
,pUmem_Cmd_02_JogAbsPos=9468
,pUmem_Cmd_02_JogIncDist=9469
,pUmem_Cmd_02_JogSpeed=9470
,pUmem_Cmd_02_JogTa=9471
,pUmem_Cmd_02_JogTs=9472
,pUmem_Cmd_TBD_4EAC=9473
,pUmem_Cmd_TBD_4EB0=9474
,pUmem_Cmd_TBD_4EB4=9475
,pUmem_Cmd_TBD_4EB8=9476
,pUmem_Cmd_TBD_4EBC=9477
,pUmem_Cmd_03_ServoOn=9478
,pUmem_Cmd_03_ServoOff=9479
,pUmem_Cmd_03_HomeStart=9480
,pUmem_Cmd_03_HomeAbort=9481
,pUmem_Cmd_03_HomeOffset=9482
,pUmem_Cmd_03_JogStop=9483
,pUmem_Cmd_03_JogContPlus=9484
,pUmem_Cmd_03_JogContMinus=9485
,pUmem_Cmd_03_JogAbsMove=9486
,pUmem_Cmd_03_JogIncMove=9487
,pUmem_Cmd_03_JogAbsPos=9488
,pUmem_Cmd_03_JogIncDist=9489
,pUmem_Cmd_03_JogSpeed=9490
,pUmem_Cmd_03_JogTa=9491
,pUmem_Cmd_03_JogTs=9492
,pUmem_Cmd_TBD_4EFC=9493
,pUmem_Cmd_TBD_4F00=9494
,pUmem_Cmd_TBD_4F04=9495
,pUmem_Cmd_TBD_4F08=9496
,pUmem_Cmd_TBD_4F0C=9497
,pUmem_Cmd_04_ServoOn=9498
,pUmem_Cmd_04_ServoOff=9499
,pUmem_Cmd_04_HomeStart=9500
,pUmem_Cmd_04_HomeAbort=9501
,pUmem_Cmd_04_HomeOffset=9502
,pUmem_Cmd_04_JogStop=9503
,pUmem_Cmd_04_JogContPlus=9504
,pUmem_Cmd_04_JogContMinus=9505
,pUmem_Cmd_04_JogAbsMove=9506
,pUmem_Cmd_04_JogIncMove=9507
,pUmem_Cmd_04_JogAbsPos=9508
,pUmem_Cmd_04_JogIncDist=9509
,pUmem_Cmd_04_JogSpeed=9510
,pUmem_Cmd_04_JogTa=9511
,pUmem_Cmd_04_JogTs=9512
,pUmem_Cmd_TBD_4F4C=9513
,pUmem_Cmd_TBD_4F50=9514
,pUmem_Cmd_TBD_4F54=9515
,pUmem_Cmd_TBD_4F58=9516
,pUmem_Cmd_TBD_4F5C=9517
,pUmem_Cmd_05_ServoOn=9518
,pUmem_Cmd_05_ServoOff=9519
,pUmem_Cmd_05_HomeStart=9520
,pUmem_Cmd_05_HomeAbort=9521
,pUmem_Cmd_05_HomeOffset=9522
,pUmem_Cmd_05_JogStop=9523
,pUmem_Cmd_05_JogContPlus=9524
,pUmem_Cmd_05_JogContMinus=9525
,pUmem_Cmd_05_JogAbsMove=9526
,pUmem_Cmd_05_JogIncMove=9527
,pUmem_Cmd_05_JogAbsPos=9528
,pUmem_Cmd_05_JogIncDist=9529
,pUmem_Cmd_05_JogSpeed=9530
,pUmem_Cmd_05_JogTa=9531
,pUmem_Cmd_05_JogTs=9532
,pUmem_Cmd_TBD_4F9C=9533
,pUmem_Cmd_TBD_4FA0=9534
,pUmem_Cmd_TBD_4FA4=9535
,pUmem_Cmd_TBD_4FA8=9536
,pUmem_Cmd_TBD_4FAC=9537
,pUmem_Cmd_06_ServoOn=9538
,pUmem_Cmd_06_ServoOff=9539
,pUmem_Cmd_06_HomeStart=9540
,pUmem_Cmd_06_HomeAbort=9541
,pUmem_Cmd_06_HomeOffset=9542
,pUmem_Cmd_06_JogStop=9543
,pUmem_Cmd_06_JogContPlus=9544
,pUmem_Cmd_06_JogContMinus=9545
,pUmem_Cmd_06_JogAbsMove=9546
,pUmem_Cmd_06_JogIncMove=9547
,pUmem_Cmd_06_JogAbsPos=9548
,pUmem_Cmd_06_JogIncDist=9549
,pUmem_Cmd_06_JogSpeed=9550
,pUmem_Cmd_06_JogTa=9551
,pUmem_Cmd_06_JogTs=9552
,pUmem_Cmd_TBD_4FEC=9553
,pUmem_Cmd_TBD_4FF0=9554
,pUmem_Cmd_TBD_4FF4=9555
,pUmem_Cmd_TBD_4FF8=9556
,pUmem_Cmd_TBD_4FFC=9557
,pUmem_Cmd_07_ServoOn=9558
,pUmem_Cmd_07_ServoOff=9559
,pUmem_Cmd_07_HomeStart=9560
,pUmem_Cmd_07_HomeAbort=9561
,pUmem_Cmd_07_HomeOffset=9562
,pUmem_Cmd_07_JogStop=9563
,pUmem_Cmd_07_JogContPlus=9564
,pUmem_Cmd_07_JogContMinus=9565
,pUmem_Cmd_07_JogAbsMove=9566
,pUmem_Cmd_07_JogIncMove=9567
,pUmem_Cmd_07_JogAbsPos=9568
,pUmem_Cmd_07_JogIncDist=9569
,pUmem_Cmd_07_JogSpeed=9570
,pUmem_Cmd_07_JogTa=9571
,pUmem_Cmd_07_JogTs=9572
,pUmem_Cmd_TBD_503C=9573
,pUmem_Cmd_TBD_5040=9574
,pUmem_Cmd_TBD_5044=9575
,pUmem_Cmd_TBD_5048=9576
,pUmem_Cmd_TBD_504C=9577
,pUmem_Cmd_08_ServoOn=9578
,pUmem_Cmd_08_ServoOff=9579
,pUmem_Cmd_08_HomeStart=9580
,pUmem_Cmd_08_HomeAbort=9581
,pUmem_Cmd_08_HomeOffset=9582
,pUmem_Cmd_08_JogStop=9583
,pUmem_Cmd_08_JogContPlus=9584
,pUmem_Cmd_08_JogContMinus=9585
,pUmem_Cmd_08_JogAbsMove=9586
,pUmem_Cmd_08_JogIncMove=9587
,pUmem_Cmd_08_JogAbsPos=9588
,pUmem_Cmd_08_JogIncDist=9589
,pUmem_Cmd_08_JogSpeed=9590
,pUmem_Cmd_08_JogTa=9591
,pUmem_Cmd_08_JogTs=9592
,pUmem_Cmd_TBD_508C=9593
,pUmem_Cmd_TBD_5090=9594
,pUmem_Cmd_TBD_5094=9595
,pUmem_Cmd_TBD_5098=9596
,pUmem_Cmd_TBD_509C=9597
,pUmem_Cmd_09_ServoOn=9598
,pUmem_Cmd_09_ServoOff=9599
,pUmem_Cmd_09_HomeStart=9600
,pUmem_Cmd_09_HomeAbort=9601
,pUmem_Cmd_09_HomeOffset=9602
,pUmem_Cmd_09_JogStop=9603
,pUmem_Cmd_09_JogContPlus=9604
,pUmem_Cmd_09_JogContMinus=9605
,pUmem_Cmd_09_JogAbsMove=9606
,pUmem_Cmd_09_JogIncMove=9607
,pUmem_Cmd_09_JogAbsPos=9608
,pUmem_Cmd_09_JogIncDist=9609
,pUmem_Cmd_09_JogSpeed=9610
,pUmem_Cmd_09_JogTa=9611
,pUmem_Cmd_09_JogTs=9612
,pUmem_Cmd_TBD_50DC=9613
,pUmem_Cmd_TBD_50E0=9614
,pUmem_Cmd_TBD_50E4=9615
,pUmem_Cmd_TBD_50E8=9616
,pUmem_Cmd_TBD_50EC=9617
,pUmem_Cmd_10_ServoOn=9618
,pUmem_Cmd_10_ServoOff=9619
,pUmem_Cmd_10_HomeStart=9620
,pUmem_Cmd_10_HomeAbort=9621
,pUmem_Cmd_10_HomeOffset=9622
,pUmem_Cmd_10_JogStop=9623
,pUmem_Cmd_10_JogContPlus=9624
,pUmem_Cmd_10_JogContMinus=9625
,pUmem_Cmd_10_JogAbsMove=9626
,pUmem_Cmd_10_JogIncMove=9627
,pUmem_Cmd_10_JogAbsPos=9628
,pUmem_Cmd_10_JogIncDist=9629
,pUmem_Cmd_10_JogSpeed=9630
,pUmem_Cmd_10_JogTa=9631
,pUmem_Cmd_10_JogTs=9632
,pUmem_Cmd_TBD_512C=9633
,pUmem_Cmd_TBD_5130=9634
,pUmem_Cmd_TBD_5134=9635
,pUmem_Cmd_TBD_5138=9636
,pUmem_Cmd_TBD_513C=9637
,pUmem_Cmd_11_ServoOn=9638
,pUmem_Cmd_11_ServoOff=9639
,pUmem_Cmd_11_HomeStart=9640
,pUmem_Cmd_11_HomeAbort=9641
,pUmem_Cmd_11_HomeOffset=9642
,pUmem_Cmd_11_JogStop=9643
,pUmem_Cmd_11_JogContPlus=9644
,pUmem_Cmd_11_JogContMinus=9645
,pUmem_Cmd_11_JogAbsMove=9646
,pUmem_Cmd_11_JogIncMove=9647
,pUmem_Cmd_11_JogAbsPos=9648
,pUmem_Cmd_11_JogIncDist=9649
,pUmem_Cmd_11_JogSpeed=9650
,pUmem_Cmd_11_JogTa=9651
,pUmem_Cmd_11_JogTs=9652
,pUmem_Cmd_TBD_517C=9653
,pUmem_Cmd_TBD_5180=9654
,pUmem_Cmd_TBD_5184=9655
,pUmem_Cmd_TBD_5188=9656
,pUmem_Cmd_TBD_518C=9657
,pUmem_Cmd_12_ServoOn=9658
,pUmem_Cmd_12_ServoOff=9659
,pUmem_Cmd_12_HomeStart=9660
,pUmem_Cmd_12_HomeAbort=9661
,pUmem_Cmd_12_HomeOffset=9662
,pUmem_Cmd_12_JogStop=9663
,pUmem_Cmd_12_JogContPlus=9664
,pUmem_Cmd_12_JogContMinus=9665
,pUmem_Cmd_12_JogAbsMove=9666
,pUmem_Cmd_12_JogIncMove=9667
,pUmem_Cmd_12_JogAbsPos=9668
,pUmem_Cmd_12_JogIncDist=9669
,pUmem_Cmd_12_JogSpeed=9670
,pUmem_Cmd_12_JogTa=9671
,pUmem_Cmd_12_JogTs=9672
,pUmem_Cmd_TBD_51CC=9673
,pUmem_Cmd_TBD_51D0=9674
,pUmem_Cmd_TBD_51D4=9675
,pUmem_Cmd_TBD_51D8=9676
,pUmem_Cmd_TBD_51DC=9677
,pUmem_Cmd_13_ServoOn=9678
,pUmem_Cmd_13_ServoOff=9679
,pUmem_Cmd_13_HomeStart=9680
,pUmem_Cmd_13_HomeAbort=9681
,pUmem_Cmd_13_HomeOffset=9682
,pUmem_Cmd_13_JogStop=9683
,pUmem_Cmd_13_JogContPlus=9684
,pUmem_Cmd_13_JogContMinus=9685
,pUmem_Cmd_13_JogAbsMove=9686
,pUmem_Cmd_13_JogIncMove=9687
,pUmem_Cmd_13_JogAbsPos=9688
,pUmem_Cmd_13_JogIncDist=9689
,pUmem_Cmd_13_JogSpeed=9690
,pUmem_Cmd_13_JogTa=9691
,pUmem_Cmd_13_JogTs=9692
,pUmem_Cmd_TBD_521C=9693
,pUmem_Cmd_TBD_5220=9694
,pUmem_Cmd_TBD_5224=9695
,pUmem_Cmd_TBD_5228=9696
,pUmem_Cmd_TBD_522C=9697
,pUmem_Cmd_14_ServoOn=9698
,pUmem_Cmd_14_ServoOff=9699
,pUmem_Cmd_14_HomeStart=9700
,pUmem_Cmd_14_HomeAbort=9701
,pUmem_Cmd_14_HomeOffset=9702
,pUmem_Cmd_14_JogStop=9703
,pUmem_Cmd_14_JogContPlus=9704
,pUmem_Cmd_14_JogContMinus=9705
,pUmem_Cmd_14_JogAbsMove=9706
,pUmem_Cmd_14_JogIncMove=9707
,pUmem_Cmd_14_JogAbsPos=9708
,pUmem_Cmd_14_JogIncDist=9709
,pUmem_Cmd_14_JogSpeed=9710
,pUmem_Cmd_14_JogTa=9711
,pUmem_Cmd_14_JogTs=9712
,pUmem_Cmd_TBD_526C=9713
,pUmem_Cmd_TBD_5270=9714
,pUmem_Cmd_TBD_5274=9715
,pUmem_Cmd_TBD_5278=9716
,pUmem_Cmd_TBD_527C=9717
,pUmem_Cmd_15_ServoOn=9718
,pUmem_Cmd_15_ServoOff=9719
,pUmem_Cmd_15_HomeStart=9720
,pUmem_Cmd_15_HomeAbort=9721
,pUmem_Cmd_15_HomeOffset=9722
,pUmem_Cmd_15_JogStop=9723
,pUmem_Cmd_15_JogContPlus=9724
,pUmem_Cmd_15_JogContMinus=9725
,pUmem_Cmd_15_JogAbsMove=9726
,pUmem_Cmd_15_JogIncMove=9727
,pUmem_Cmd_15_JogAbsPos=9728
,pUmem_Cmd_15_JogIncDist=9729
,pUmem_Cmd_15_JogSpeed=9730
,pUmem_Cmd_15_JogTa=9731
,pUmem_Cmd_15_JogTs=9732
,pUmem_Cmd_TBD_52BC=9733
,pUmem_Cmd_TBD_52C0=9734
,pUmem_Cmd_TBD_52C4=9735
,pUmem_Cmd_TBD_52C8=9736
,pUmem_Cmd_TBD_52CC=9737
,pUmem_Cmd_16_ServoOn=9738
,pUmem_Cmd_16_ServoOff=9739
,pUmem_Cmd_16_HomeStart=9740
,pUmem_Cmd_16_HomeAbort=9741
,pUmem_Cmd_16_HomeOffset=9742
,pUmem_Cmd_16_JogStop=9743
,pUmem_Cmd_16_JogContPlus=9744
,pUmem_Cmd_16_JogContMinus=9745
,pUmem_Cmd_16_JogAbsMove=9746
,pUmem_Cmd_16_JogIncMove=9747
,pUmem_Cmd_16_JogAbsPos=9748
,pUmem_Cmd_16_JogIncDist=9749
,pUmem_Cmd_16_JogSpeed=9750
,pUmem_Cmd_16_JogTa=9751
,pUmem_Cmd_16_JogTs=9752
,pUmem_Cmd_TBD_530C=9753
,pUmem_Cmd_TBD_5310=9754
,pUmem_Cmd_TBD_5314=9755
,pUmem_Cmd_TBD_5318=9756
,pUmem_Cmd_TBD_531C=9757
,pUmem_Cmd_17_ServoOn=9758
,pUmem_Cmd_17_ServoOff=9759
,pUmem_Cmd_17_HomeStart=9760
,pUmem_Cmd_17_HomeAbort=9761
,pUmem_Cmd_17_HomeOffset=9762
,pUmem_Cmd_17_JogStop=9763
,pUmem_Cmd_17_JogContPlus=9764
,pUmem_Cmd_17_JogContMinus=9765
,pUmem_Cmd_17_JogAbsMove=9766
,pUmem_Cmd_17_JogIncMove=9767
,pUmem_Cmd_17_JogAbsPos=9768
,pUmem_Cmd_17_JogIncDist=9769
,pUmem_Cmd_17_JogSpeed=9770
,pUmem_Cmd_17_JogTa=9771
,pUmem_Cmd_17_JogTs=9772
,pUmem_Cmd_TBD_535C=9773
,pUmem_Cmd_TBD_5360=9774
,pUmem_Cmd_TBD_5364=9775
,pUmem_Cmd_TBD_5368=9776
,pUmem_Cmd_TBD_536C=9777
,pUmem_Cmd_18_ServoOn=9778
,pUmem_Cmd_18_ServoOff=9779
,pUmem_Cmd_18_HomeStart=9780
,pUmem_Cmd_18_HomeAbort=9781
,pUmem_Cmd_18_HomeOffset=9782
,pUmem_Cmd_18_JogStop=9783
,pUmem_Cmd_18_JogContPlus=9784
,pUmem_Cmd_18_JogContMinus=9785
,pUmem_Cmd_18_JogAbsMove=9786
,pUmem_Cmd_18_JogIncMove=9787
,pUmem_Cmd_18_JogAbsPos=9788
,pUmem_Cmd_18_JogIncDist=9789
,pUmem_Cmd_18_JogSpeed=9790
,pUmem_Cmd_18_JogTa=9791
,pUmem_Cmd_18_JogTs=9792
,pUmem_Cmd_TBD_53AC=9793
,pUmem_Cmd_TBD_53B0=9794
,pUmem_Cmd_TBD_53B4=9795
,pUmem_Cmd_TBD_53B8=9796
,pUmem_Cmd_TBD_53BC=9797
,pUmem_Cmd_19_ServoOn=9798
,pUmem_Cmd_19_ServoOff=9799
,pUmem_Cmd_19_HomeStart=9800
,pUmem_Cmd_19_HomeAbort=9801
,pUmem_Cmd_19_HomeOffset=9802
,pUmem_Cmd_19_JogStop=9803
,pUmem_Cmd_19_JogContPlus=9804
,pUmem_Cmd_19_JogContMinus=9805
,pUmem_Cmd_19_JogAbsMove=9806
,pUmem_Cmd_19_JogIncMove=9807
,pUmem_Cmd_19_JogAbsPos=9808
,pUmem_Cmd_19_JogIncDist=9809
,pUmem_Cmd_19_JogSpeed=9810
,pUmem_Cmd_19_JogTa=9811
,pUmem_Cmd_19_JogTs=9812
,pUmem_Cmd_TBD_53FC=9813
,pUmem_Cmd_TBD_5400=9814
,pUmem_Cmd_TBD_5404=9815
,pUmem_Cmd_TBD_5408=9816
,pUmem_Cmd_TBD_540C=9817
,pUmem_Cmd_20_ServoOn=9818
,pUmem_Cmd_20_ServoOff=9819
,pUmem_Cmd_20_HomeStart=9820
,pUmem_Cmd_20_HomeAbort=9821
,pUmem_Cmd_20_HomeOffset=9822
,pUmem_Cmd_20_JogStop=9823
,pUmem_Cmd_20_JogContPlus=9824
,pUmem_Cmd_20_JogContMinus=9825
,pUmem_Cmd_20_JogAbsMove=9826
,pUmem_Cmd_20_JogIncMove=9827
,pUmem_Cmd_20_JogAbsPos=9828
,pUmem_Cmd_20_JogIncDist=9829
,pUmem_Cmd_20_JogSpeed=9830
,pUmem_Cmd_20_JogTa=9831
,pUmem_Cmd_20_JogTs=9832
,pUmem_Cmd_TBD_544C=9833
,pUmem_Cmd_TBD_5450=9834
,pUmem_Cmd_TBD_5454=9835
,pUmem_Cmd_TBD_5458=9836
,pUmem_Cmd_TBD_545C=9837
,pUmem_Cmd_21_ServoOn=9838
,pUmem_Cmd_21_ServoOff=9839
,pUmem_Cmd_21_HomeStart=9840
,pUmem_Cmd_21_HomeAbort=9841
,pUmem_Cmd_21_HomeOffset=9842
,pUmem_Cmd_21_JogStop=9843
,pUmem_Cmd_21_JogContPlus=9844
,pUmem_Cmd_21_JogContMinus=9845
,pUmem_Cmd_21_JogAbsMove=9846
,pUmem_Cmd_21_JogIncMove=9847
,pUmem_Cmd_21_JogAbsPos=9848
,pUmem_Cmd_21_JogIncDist=9849
,pUmem_Cmd_21_JogSpeed=9850
,pUmem_Cmd_21_JogTa=9851
,pUmem_Cmd_21_JogTs=9852
,pUmem_Cmd_TBD_549C=9853
,pUmem_Cmd_TBD_54A0=9854
,pUmem_Cmd_TBD_54A4=9855
,pUmem_Cmd_TBD_54A8=9856
,pUmem_Cmd_TBD_54AC=9857
,pUmem_Cmd_22_ServoOn=9858
,pUmem_Cmd_22_ServoOff=9859
,pUmem_Cmd_22_HomeStart=9860
,pUmem_Cmd_22_HomeAbort=9861
,pUmem_Cmd_22_HomeOffset=9862
,pUmem_Cmd_22_JogStop=9863
,pUmem_Cmd_22_JogContPlus=9864
,pUmem_Cmd_22_JogContMinus=9865
,pUmem_Cmd_22_JogAbsMove=9866
,pUmem_Cmd_22_JogIncMove=9867
,pUmem_Cmd_22_JogAbsPos=9868
,pUmem_Cmd_22_JogIncDist=9869
,pUmem_Cmd_22_JogSpeed=9870
,pUmem_Cmd_22_JogTa=9871
,pUmem_Cmd_22_JogTs=9872
,pUmem_Cmd_TBD_54EC=9873
,pUmem_Cmd_TBD_54F0=9874
,pUmem_Cmd_TBD_54F4=9875
,pUmem_Cmd_TBD_54F8=9876
,pUmem_Cmd_TBD_54FC=9877
,pUmem_Cmd_23_ServoOn=9878
,pUmem_Cmd_23_ServoOff=9879
,pUmem_Cmd_23_HomeStart=9880
,pUmem_Cmd_23_HomeAbort=9881
,pUmem_Cmd_23_HomeOffset=9882
,pUmem_Cmd_23_JogStop=9883
,pUmem_Cmd_23_JogContPlus=9884
,pUmem_Cmd_23_JogContMinus=9885
,pUmem_Cmd_23_JogAbsMove=9886
,pUmem_Cmd_23_JogIncMove=9887
,pUmem_Cmd_23_JogAbsPos=9888
,pUmem_Cmd_23_JogIncDist=9889
,pUmem_Cmd_23_JogSpeed=9890
,pUmem_Cmd_23_JogTa=9891
,pUmem_Cmd_23_JogTs=9892
,pUmem_Cmd_TBD_553C=9893
,pUmem_Cmd_TBD_5540=9894
,pUmem_Cmd_TBD_5544=9895
,pUmem_Cmd_TBD_5548=9896
,pUmem_Cmd_TBD_554C=9897
,pUmem_Cmd_24_ServoOn=9898
,pUmem_Cmd_24_ServoOff=9899
,pUmem_Cmd_24_HomeStart=9900
,pUmem_Cmd_24_HomeAbort=9901
,pUmem_Cmd_24_HomeOffset=9902
,pUmem_Cmd_24_JogStop=9903
,pUmem_Cmd_24_JogContPlus=9904
,pUmem_Cmd_24_JogContMinus=9905
,pUmem_Cmd_24_JogAbsMove=9906
,pUmem_Cmd_24_JogIncMove=9907
,pUmem_Cmd_24_JogAbsPos=9908
,pUmem_Cmd_24_JogIncDist=9909
,pUmem_Cmd_24_JogSpeed=9910
,pUmem_Cmd_24_JogTa=9911
,pUmem_Cmd_24_JogTs=9912
,pUmem_Cmd_TBD_558C=9913
,pUmem_Cmd_TBD_5590=9914
,pUmem_Cmd_TBD_5594=9915
,pUmem_Cmd_TBD_5598=9916
,pUmem_Cmd_TBD_559C=9917
,pUmem_Cmd_25_ServoOn=9918
,pUmem_Cmd_25_ServoOff=9919
,pUmem_Cmd_25_HomeStart=9920
,pUmem_Cmd_25_HomeAbort=9921
,pUmem_Cmd_25_HomeOffset=9922
,pUmem_Cmd_25_JogStop=9923
,pUmem_Cmd_25_JogContPlus=9924
,pUmem_Cmd_25_JogContMinus=9925
,pUmem_Cmd_25_JogAbsMove=9926
,pUmem_Cmd_25_JogIncMove=9927
,pUmem_Cmd_25_JogAbsPos=9928
,pUmem_Cmd_25_JogIncDist=9929
,pUmem_Cmd_25_JogSpeed=9930
,pUmem_Cmd_25_JogTa=9931
,pUmem_Cmd_25_JogTs=9932
,pUmem_Cmd_TBD_55DC=9933
,pUmem_Cmd_TBD_55E0=9934
,pUmem_Cmd_TBD_55E4=9935
,pUmem_Cmd_TBD_55E8=9936
,pUmem_Cmd_TBD_55EC=9937
,pUmem_Cmd_26_ServoOn=9938
,pUmem_Cmd_26_ServoOff=9939
,pUmem_Cmd_26_HomeStart=9940
,pUmem_Cmd_26_HomeAbort=9941
,pUmem_Cmd_26_HomeOffset=9942
,pUmem_Cmd_26_JogStop=9943
,pUmem_Cmd_26_JogContPlus=9944
,pUmem_Cmd_26_JogContMinus=9945
,pUmem_Cmd_26_JogAbsMove=9946
,pUmem_Cmd_26_JogIncMove=9947
,pUmem_Cmd_26_JogAbsPos=9948
,pUmem_Cmd_26_JogIncDist=9949
,pUmem_Cmd_26_JogSpeed=9950
,pUmem_Cmd_26_JogTa=9951
,pUmem_Cmd_26_JogTs=9952
,pUmem_Cmd_TBD_562C=9953
,pUmem_Cmd_TBD_5630=9954
,pUmem_Cmd_TBD_5634=9955
,pUmem_Cmd_TBD_5638=9956
,pUmem_Cmd_TBD_563C=9957
,pUmem_Cmd_27_ServoOn=9958
,pUmem_Cmd_27_ServoOff=9959
,pUmem_Cmd_27_HomeStart=9960
,pUmem_Cmd_27_HomeAbort=9961
,pUmem_Cmd_27_HomeOffset=9962
,pUmem_Cmd_27_JogStop=9963
,pUmem_Cmd_27_JogContPlus=9964
,pUmem_Cmd_27_JogContMinus=9965
,pUmem_Cmd_27_JogAbsMove=9966
,pUmem_Cmd_27_JogIncMove=9967
,pUmem_Cmd_27_JogAbsPos=9968
,pUmem_Cmd_27_JogIncDist=9969
,pUmem_Cmd_27_JogSpeed=9970
,pUmem_Cmd_27_JogTa=9971
,pUmem_Cmd_27_JogTs=9972
,pUmem_Cmd_TBD_567C=9973
,pUmem_Cmd_TBD_5680=9974
,pUmem_Cmd_TBD_5684=9975
,pUmem_Cmd_TBD_5688=9976
,pUmem_Cmd_TBD_568C=9977
,pUmem_Cmd_28_ServoOn=9978
,pUmem_Cmd_28_ServoOff=9979
,pUmem_Cmd_28_HomeStart=9980
,pUmem_Cmd_28_HomeAbort=9981
,pUmem_Cmd_28_HomeOffset=9982
,pUmem_Cmd_28_JogStop=9983
,pUmem_Cmd_28_JogContPlus=9984
,pUmem_Cmd_28_JogContMinus=9985
,pUmem_Cmd_28_JogAbsMove=9986
,pUmem_Cmd_28_JogIncMove=9987
,pUmem_Cmd_28_JogAbsPos=9988
,pUmem_Cmd_28_JogIncDist=9989
,pUmem_Cmd_28_JogSpeed=9990
,pUmem_Cmd_28_JogTa=9991
,pUmem_Cmd_28_JogTs=9992
,pUmem_Cmd_TBD_56CC=9993
,pUmem_Cmd_TBD_56D0=9994
,pUmem_Cmd_TBD_56D4=9995
,pUmem_Cmd_TBD_56D8=9996
,pUmem_Cmd_TBD_56DC=9997
,pUmem_Cmd_29_ServoOn=9998
,pUmem_Cmd_29_ServoOff=9999
,pUmem_Cmd_29_HomeStart=10000
,pUmem_Cmd_29_HomeAbort=10001
,pUmem_Cmd_29_HomeOffset=10002
,pUmem_Cmd_29_JogStop=10003
,pUmem_Cmd_29_JogContPlus=10004
,pUmem_Cmd_29_JogContMinus=10005
,pUmem_Cmd_29_JogAbsMove=10006
,pUmem_Cmd_29_JogIncMove=10007
,pUmem_Cmd_29_JogAbsPos=10008
,pUmem_Cmd_29_JogIncDist=10009
,pUmem_Cmd_29_JogSpeed=10010
,pUmem_Cmd_29_JogTa=10011
,pUmem_Cmd_29_JogTs=10012
,pUmem_Cmd_TBD_571C=10013
,pUmem_Cmd_TBD_5720=10014
,pUmem_Cmd_TBD_5724=10015
,pUmem_Cmd_TBD_5728=10016
,pUmem_Cmd_TBD_572C=10017
,pUmem_Cmd_30_ServoOn=10018
,pUmem_Cmd_30_ServoOff=10019
,pUmem_Cmd_30_HomeStart=10020
,pUmem_Cmd_30_HomeAbort=10021
,pUmem_Cmd_30_HomeOffset=10022
,pUmem_Cmd_30_JogStop=10023
,pUmem_Cmd_30_JogContPlus=10024
,pUmem_Cmd_30_JogContMinus=10025
,pUmem_Cmd_30_JogAbsMove=10026
,pUmem_Cmd_30_JogIncMove=10027
,pUmem_Cmd_30_JogAbsPos=10028
,pUmem_Cmd_30_JogIncDist=10029
,pUmem_Cmd_30_JogSpeed=10030
,pUmem_Cmd_30_JogTa=10031
,pUmem_Cmd_30_JogTs=10032
,pUmem_Cmd_TBD_576C=10033
,pUmem_Cmd_TBD_5770=10034
,pUmem_Cmd_TBD_5774=10035
,pUmem_Cmd_TBD_5778=10036
,pUmem_Cmd_TBD_577C=10037
,pUmem_Cmd_31_ServoOn=10038
,pUmem_Cmd_31_ServoOff=10039
,pUmem_Cmd_31_HomeStart=10040
,pUmem_Cmd_31_HomeAbort=10041
,pUmem_Cmd_31_HomeOffset=10042
,pUmem_Cmd_31_JogStop=10043
,pUmem_Cmd_31_JogContPlus=10044
,pUmem_Cmd_31_JogContMinus=10045
,pUmem_Cmd_31_JogAbsMove=10046
,pUmem_Cmd_31_JogIncMove=10047
,pUmem_Cmd_31_JogAbsPos=10048
,pUmem_Cmd_31_JogIncDist=10049
,pUmem_Cmd_31_JogSpeed=10050
,pUmem_Cmd_31_JogTa=10051
,pUmem_Cmd_31_JogTs=10052
,pUmem_Cmd_TBD_57BC=10053
,pUmem_Cmd_TBD_57C0=10054
,pUmem_Cmd_TBD_57C4=10055
,pUmem_Cmd_TBD_57C8=10056
,pUmem_Cmd_TBD_57CC=10057
,pUmem_Cmd_32_ServoOn=10058
,pUmem_Cmd_32_ServoOff=10059
,pUmem_Cmd_32_HomeStart=10060
,pUmem_Cmd_32_HomeAbort=10061
,pUmem_Cmd_32_HomeOffset=10062
,pUmem_Cmd_32_JogStop=10063
,pUmem_Cmd_32_JogContPlus=10064
,pUmem_Cmd_32_JogContMinus=10065
,pUmem_Cmd_32_JogAbsMove=10066
,pUmem_Cmd_32_JogIncMove=10067
,pUmem_Cmd_32_JogAbsPos=10068
,pUmem_Cmd_32_JogIncDist=10069
,pUmem_Cmd_32_JogSpeed=10070
,pUmem_Cmd_32_JogTa=10071
,pUmem_Cmd_32_JogTs=10072
,pUmem_Cmd_TBD_580C=10073
,pUmem_Cmd_TBD_5810=10074
,pUmem_Cmd_TBD_5814=10075
,pUmem_Cmd_TBD_5818=10076
,pUmem_Cmd_TBD_581C=10077
,pUmem_Cmd_Mc_ServoOn=10078
,pUmem_Cmd_Mc_ServoOff=10079
,pUmem_Cmd_Mc_HomeStart=10080
,pUmem_Cmd_Mc_HomeAbort=10081
,pUmem_Cmd_Mc_AlarmReset=10082
,pUmem_Cmd_Mc_RunMode=10083
,pUmem_Cmd_Mc_AutoStart=10084
,pUmem_Cmd_Mc_AutoAbort=10085
,pUmem_Cmd_Mc_CycleStart=10086
,pUmem_Cmd_Mc_Fsave=10087
,pUmem_Cmd_Mc_StepStart=10088
,pUmem_Cmd_Mc_AutoPause=10089
,pUmem_Cmd_TBD_61D8=10090
,pUmem_Cmd_TBD_61DC=10091
,pUmem_Cmd_TBD_61E0=10092
,pUmem_Cmd_TBD_61E4=10093
,pUmem_Cmd_TBD_61E8=10094
,pUmem_Cmd_TBD_61EC=10095
,pUmem_Cmd_TBD_61F0=10096
,pUmem_Cmd_TBD_61F4=10097
,pUmem_Cmd_TBD_61F8=10098
,pUmem_Cmd_TBD_61FC=10099
,pUmem_Cmd_TBD_6200=10100
,pUmem_Cmd_TBD_6204=10101
,pUmem_Cmd_TBD_6208=10102
,pUmem_Cmd_TBD_620C=10103
,pUmem_Cmd_TBD_6210=10104
,pUmem_Cmd_TBD_6214=10105
,pUmem_Cmd_TBD_6218=10106
,pUmem_Cmd_TBD_621C=10107
,pUmem_Cmd_TBD_6220=10108
,pUmem_Cmd_TBD_6224=10109
,pUmem_Cmd_TBD_6228=10110
,pUmem_Cmd_TBD_622C=10111
,pUmem_Cmd_TBD_6230=10112
,pUmem_Cmd_TBD_6234=10113
,pUmem_Cmd_TBD_6238=10114
,pUmem_Cmd_TBD_623C=10115
,pUmem_Cmd_TBD_6240=10116
,pUmem_Cmd_TBD_6244=10117
,pUmem_Cmd_Ws_ServoOn=10118
,pUmem_Cmd_Ws_ServoOff=10119
,pUmem_Cmd_Ws_HomeStart=10120
,pUmem_Cmd_Ws_HomeAbort=10121
,pUmem_Cmd_Ws_AlarmReset=10122
,pUmem_Cmd_Ws_AlarmRetry=10123
,pUmem_Cmd_Ws_AlarmAbort=10124
,pUmem_Cmd_TBD_65AC=10125
,pUmem_Cmd_TBD_65B0=10126
,pUmem_Cmd_TBD_65B4=10127
,pUmem_Cmd_Ws_TestShot=10128
,pUmem_Cmd_Ws_PdtStaChange=10129
,pUmem_Cmd_Tr_PdtStaChange=10130
,pUmem_Cmd_Ws_LaserEnableStart=10131
,pUmem_Cmd_Ws_LaserDisableStart=10132
,pUmem_Cmd_Ws_LaserTestCrossStart=10133
,pUmem_Cmd_Ws_LaserTestCrossAbort=10134
,pUmem_Cmd_Ws_LaserTestLineStart=10135
,pUmem_Cmd_Ws_LaserTestLineAbort=10136
,pUmem_Cmd_TBD_65DC=10137
,pUmem_Cmd_Ws_ReadyPowerCheck=10138
,pUmem_Cmd_Ws_PowerCheckStart=10139
,pUmem_Cmd_Ws_PowerCheckAbort=10140
,pUmem_Cmd_TBD_65EC=10141
,pUmem_Cmd_Wd_SrtVelC=10142
,pUmem_Cmd_Wd_MdiStart=10143
,pUmem_Cmd_Wd_MdiAbort=10144
,pUmem_Cmd_Wd_MdiPosX=10145
,pUmem_Cmd_Wd_MdiPosY=10146
,pUmem_Cmd_Wd_MdiPosC=10147
,pUmem_Cmd_Ws_LdStart=10148
,pUmem_Cmd_Ws_LdAbort=10149
,pUmem_Cmd_Ws_LdHold=10150
,pUmem_Cmd_Ws_RdStart=10151
,pUmem_Cmd_Ws_RdAbort=10152
,pUmem_Cmd_Ws_RdHold=10153
,pUmem_Cmd_Ws_WdStart=10154
,pUmem_Cmd_Ws_WdAbort=10155
,pUmem_Cmd_Ws_WdHold=10156
,pUmem_Cmd_Ws_WtStart=10157
,pUmem_Cmd_Ws_WtAbort=10158
,pUmem_Cmd_Ws_WtHold=10159
,pUmem_Cmd_Ws_UdStart=10160
,pUmem_Cmd_Ws_UdAbort=10161
,pUmem_Cmd_Ws_UdHold=10162
,pUmem_Cmd_Ws_RjStart=10163
,pUmem_Cmd_Ws_RjAbort=10164
,pUmem_Cmd_Ws_RjHold=10165
,pUmem_Cmd_TBD_6650=10166
,pUmem_Cmd_TBD_6654=10167
,pUmem_Cmd_TBD_6658=10168
,pUmem_Cmd_TBD_665C=10169
,pUmem_Cmd_TBD_6660=10170
,pUmem_Cmd_TBD_6664=10171
,pUmem_Cmd_TBD_6668=10172
,pUmem_Cmd_TBD_666C=10173
,pUmem_Cmd_TBD_6670=10174
,pUmem_Cmd_TBD_6674=10175
,pUmem_Cmd_TBD_6678=10176
,pUmem_Cmd_TBD_667C=10177
,pUmem_Cmd_Ws_1stTransRjRsp=10178
,pUmem_Cmd_Ws_2ndTransLdRsp=10179
,pUmem_Cmd_Ws_2dVisionCkRsp=10180
,pUmem_Cmd_Ws_LwmStartRsp=10181
,pUmem_Cmd_TBD_6690=10182
,pUmem_Cmd_TBD_6694=10183
,pUmem_Cmd_TBD_6698=10184
,pUmem_Cmd_TBD_669C=10185
,pUmem_Cmd_Ws_WeldingSkip=10186
,pUmem_Cmd_Ws_RspSkipOpt=10187
,pUmem_Cmd_Ws_2ndTransLdAlignX=10188
,pUmem_Cmd_Ws_2ndTransLdAlignY=10189
,pUmem_Cmd_Ws_2ndTransLdAlignC=10190
,pUmem_Cmd_TBD_66B4=10191
,pUmem_Cmd_TBD_66B8=10192
,pUmem_Cmd_TBD_66BC=10193
,pUmem_Cmd_TBD_66C0=10194
,pUmem_Cmd_TBD_66C4=10195
,pUmem_Cmd_TBD_66C8=10196
,pUmem_Cmd_TBD_66CC=10197
,pUmem_Cmd_Ws_2ndTransPdtDir=10198
,pUmem_Cmd_Ws_2ndTransPdtNo=10199
,pUmem_Cmd_Ws_2ndTransTempOpt=10200
,pUmem_Cmd_TBD_66DC=10201
,pUmem_Cmd_TBD_66E0=10202
,pUmem_Cmd_TBD_66E4=10203
,pUmem_Cmd_TBD_66E8=10204
,pUmem_Cmd_TBD_66EC=10205
,pUmem_Cmd_TBD_66F0=10206
,pUmem_Cmd_TBD_66F4=10207
,pUmem_Cmd_Ws_AccLimitX=10208
,pUmem_Cmd_Ws_AccLimitY=10209
,pUmem_Cmd_Ws_AccLimitC=10210
,pUmem_Cmd_Ws_VelLimitC=10211
,pUmem_Cmd_Ws_RefVel=10212
,pUmem_Cmd_Ws_RotOffsetX=10213
,pUmem_Cmd_Ws_RotOffsetY=10214
,pUmem_Cmd_Ws_RefVel_2=10215
,pUmem_Cmd_Ws_OutMode_2=10216
,pUmem_Cmd_TBD_671C=10217
,pUmem_Cmd_Ws_OutMode=10218
,pUmem_Cmd_Ws_PfmPeriod=10219
,pUmem_Cmd_Ws_PfmOnTime=10220
,pUmem_Cmd_Ws_CorePfmEna=10221
,pUmem_Cmd_Ws_RingPfmEna=10222
,pUmem_Cmd_Ws_CorePowerSf=10223
,pUmem_Cmd_Ws_CoreRefPower=10224
,pUmem_Cmd_Ws_CoreMinPower=10225
,pUmem_Cmd_Ws_CoreMaxPower=10226
,pUmem_Cmd_Ws_RingPowerSf=10227
,pUmem_Cmd_Ws_RingRefPower=10228
,pUmem_Cmd_Ws_RingMinPower=10229
,pUmem_Cmd_Ws_RingMaxPower=10230
,pUmem_Cmd_Ws_PfmPeriod_2=10231
,pUmem_Cmd_Ws_PfmOnTime_2=10232
,pUmem_Cmd_Ws_CorePfmEna_2=10233
,pUmem_Cmd_Ws_RingPfmEna_2=10234
,pUmem_Cmd_Ws_CoreRefPower_2=10235
,pUmem_Cmd_Ws_RingRefPower_2=10236
,pUmem_Cmd_TBD_676C=10237
,pUmem_Cmd_Ws_ShotTime=10238
,pUmem_Cmd_Ws_EprOut=10239
,pUmem_Cmd_Ws_TempCkTime=10240
,pUmem_Cmd_Ws_TempOffset1=10241
,pUmem_Cmd_Ws_CldInposDelay=10242
,pUmem_Cmd_Ws_CoverFwdPos=10243
,pUmem_Cmd_Ws_CoverBwdPos=10244
,pUmem_Cmd_Ws_TempOffset2=10245
,pUmem_Cmd_Ws_PowerCheck_CorePower=10246
,pUmem_Cmd_Ws_PowerCheck_RingPower=10247
,pUmem_Cmd_Ws_TbVacBlow=10248
,pUmem_Cmd_TBD_679C=10249
,pUmem_Cmd_TBD_67A0=10250
,pUmem_Cmd_TBD_67A4=10251
,pUmem_Cmd_TBD_67A8=10252
,pUmem_Cmd_TBD_67AC=10253
,pUmem_Cmd_TBD_67B0=10254
,pUmem_Cmd_TBD_67B4=10255
,pUmem_Cmd_TBD_67B8=10256
,pUmem_Cmd_TBD_67BC=10257
,pUmem_Cmd_Ws_LdVelX=10258
,pUmem_Cmd_Ws_LdVelY=10259
,pUmem_Cmd_Ws_LdVelC=10260
,pUmem_Cmd_Ws_LdPosX=10261
,pUmem_Cmd_Ws_LdPosY=10262
,pUmem_Cmd_Ws_LdPosC=10263
,pUmem_Cmd_Ws_RdVelX=10264
,pUmem_Cmd_Ws_RdVelY=10265
,pUmem_Cmd_Ws_RdVelC=10266
,pUmem_Cmd_Ws_RdPosX=10267
,pUmem_Cmd_Ws_RdPosY=10268
,pUmem_Cmd_Ws_RdPosC=10269
,pUmem_Cmd_Ws_WdVelX=10270
,pUmem_Cmd_Ws_WdVelY=10271
,pUmem_Cmd_Ws_WdVelC=10272
,pUmem_Cmd_Ws_WdPosX=10273
,pUmem_Cmd_Ws_WdPosY=10274
,pUmem_Cmd_Ws_WdPosC=10275
,pUmem_Cmd_Ws_WtVelX=10276
,pUmem_Cmd_Ws_WtVelY=10277
,pUmem_Cmd_Ws_WtVelC=10278
,pUmem_Cmd_Ws_WtPosX=10279
,pUmem_Cmd_Ws_WtPosY=10280
,pUmem_Cmd_Ws_WtPosC=10281
,pUmem_Cmd_Ws_UdVelX=10282
,pUmem_Cmd_Ws_UdVelY=10283
,pUmem_Cmd_Ws_UdVelC=10284
,pUmem_Cmd_Ws_UdPosX=10285
,pUmem_Cmd_Ws_UdPosY=10286
,pUmem_Cmd_Ws_UdPosC=10287
,pUmem_Cmd_Ws_RjVelX=10288
,pUmem_Cmd_Ws_RjVelY=10289
,pUmem_Cmd_Ws_RjVelC=10290
,pUmem_Cmd_Ws_RjPosX=10291
,pUmem_Cmd_Ws_RjPosY=10292
,pUmem_Cmd_Ws_RjPosC=10293
,pUmem_Cmd_TBD_6850=10294
,pUmem_Cmd_TBD_6854=10295
,pUmem_Cmd_TBD_6858=10296
,pUmem_Cmd_TBD_685C=10297
,pUmem_Cmd_TBD_6860=10298
,pUmem_Cmd_TBD_6864=10299
,pUmem_Cmd_TBD_6868=10300
,pUmem_Cmd_TBD_686C=10301
,pUmem_Cmd_TBD_6870=10302
,pUmem_Cmd_TBD_6874=10303
,pUmem_Cmd_TBD_6878=10304
,pUmem_Cmd_TBD_687C=10305
,pUmem_Cmd_TBD_6880=10306
,pUmem_Cmd_TBD_6884=10307
,pUmem_Cmd_Vs_ServoOn=10308
,pUmem_Cmd_Vs_ServoOff=10309
,pUmem_Cmd_Vs_HomeStart=10310
,pUmem_Cmd_Vs_HomeAbort=10311
,pUmem_Cmd_Vs_AlarmReset=10312
,pUmem_Cmd_Vs_AlarmRetry=10313
,pUmem_Cmd_Vs_AlarmAbort=10314
,pUmem_Cmd_TBD_6994=10315
,pUmem_Cmd_TBD_6998=10316
,pUmem_Cmd_TBD_699C=10317
,pUmem_Cmd_Vs_TestShot=10318
,pUmem_Cmd_Vs_PdtStaChange=10319
,pUmem_Cmd_TBD_69A8=10320
,pUmem_Cmd_TBD_69AC=10321
,pUmem_Cmd_TBD_69B0=10322
,pUmem_Cmd_TBD_69B4=10323
,pUmem_Cmd_TBD_69B8=10324
,pUmem_Cmd_TBD_69BC=10325
,pUmem_Cmd_TBD_69C0=10326
,pUmem_Cmd_TBD_69C4=10327
,pUmem_Cmd_TBD_69C8=10328
,pUmem_Cmd_TBD_69CC=10329
,pUmem_Cmd_TBD_69D0=10330
,pUmem_Cmd_TBD_69D4=10331
,pUmem_Cmd_TBD_69D8=10332
,pUmem_Cmd_TBD_69DC=10333
,pUmem_Cmd_TBD_69E0=10334
,pUmem_Cmd_TBD_69E4=10335
,pUmem_Cmd_TBD_69E8=10336
,pUmem_Cmd_TBD_69EC=10337
,pUmem_Cmd_Vs_LdStart=10338
,pUmem_Cmd_Vs_LdAbort=10339
,pUmem_Cmd_Vs_LdHold=10340
,pUmem_Cmd_Vs_RdStart=10341
,pUmem_Cmd_Vs_RdAbort=10342
,pUmem_Cmd_Vs_RdHold=10343
,pUmem_Cmd_Vs_VnStart=10344
,pUmem_Cmd_Vs_VnAbort=10345
,pUmem_Cmd_Vs_VnHold=10346
,pUmem_Cmd_Vs_WtStart=10347
,pUmem_Cmd_Vs_WtAbort=10348
,pUmem_Cmd_Vs_WtHold=10349
,pUmem_Cmd_Vs_UdStart=10350
,pUmem_Cmd_Vs_UdAbort=10351
,pUmem_Cmd_Vs_UdHold=10352
,pUmem_Cmd_Vs_RjStart=10353
,pUmem_Cmd_Vs_RjAbort=10354
,pUmem_Cmd_Vs_RjHold=10355
,pUmem_Cmd_TBD_6A38=10356
,pUmem_Cmd_TBD_6A3C=10357
,pUmem_Cmd_TBD_6A40=10358
,pUmem_Cmd_TBD_6A44=10359
,pUmem_Cmd_TBD_6A48=10360
,pUmem_Cmd_TBD_6A4C=10361
,pUmem_Cmd_TBD_6A50=10362
,pUmem_Cmd_TBD_6A54=10363
,pUmem_Cmd_TBD_6A58=10364
,pUmem_Cmd_TBD_6A5C=10365
,pUmem_Cmd_TBD_6A60=10366
,pUmem_Cmd_TBD_6A64=10367
,pUmem_Cmd_Vs_3rdTransUdRsp=10368
,pUmem_Cmd_Vs_3rdTransRjRsp=10369
,pUmem_Cmd_Vs_3DVisionStRsp=10370
,pUmem_Cmd_Vs_3DVisionEdRsp=10371
,pUmem_Cmd_TBD_6A78=10372
,pUmem_Cmd_TBD_6A7C=10373
,pUmem_Cmd_TBD_6A80=10374
,pUmem_Cmd_TBD_6A84=10375
,pUmem_Cmd_Vs_VisionSkip=10376
,pUmem_Cmd_Vs_RspSkipOpt=10377
,pUmem_Cmd_TBD_6A90=10378
,pUmem_Cmd_TBD_6A94=10379
,pUmem_Cmd_TBD_6A98=10380
,pUmem_Cmd_TBD_6A9C=10381
,pUmem_Cmd_TBD_6AA0=10382
,pUmem_Cmd_TBD_6AA4=10383
,pUmem_Cmd_TBD_6AA8=10384
,pUmem_Cmd_TBD_6AAC=10385
,pUmem_Cmd_TBD_6AB0=10386
,pUmem_Cmd_TBD_6AB4=10387
,pUmem_Cmd_TBD_6AB8=10388
,pUmem_Cmd_TBD_6ABC=10389
,pUmem_Cmd_TBD_6AC0=10390
,pUmem_Cmd_TBD_6AC4=10391
,pUmem_Cmd_TBD_6AC8=10392
,pUmem_Cmd_TBD_6ACC=10393
,pUmem_Cmd_TBD_6AD0=10394
,pUmem_Cmd_TBD_6AD4=10395
,pUmem_Cmd_TBD_6AD8=10396
,pUmem_Cmd_TBD_6ADC=10397
,pUmem_Cmd_Vs_AccLimitX=10398
,pUmem_Cmd_Vs_AccLimitY=10399
,pUmem_Cmd_Vs_AccLimitC=10400
,pUmem_Cmd_Vs_VelLimitC=10401
,pUmem_Cmd_Vs_RefVel=10402
,pUmem_Cmd_Vs_RotOffsetX=10403
,pUmem_Cmd_Vs_RotOffsetY=10404
,pUmem_Cmd_TBD_6AFC=10405
,pUmem_Cmd_TBD_6B00=10406
,pUmem_Cmd_TBD_6B04=10407
,pUmem_Cmd_Vs_PfmPeriod=10408
,pUmem_Cmd_Vs_PfmDuty=10409
,pUmem_Cmd_TBD_6B10=10410
,pUmem_Cmd_TBD_6B14=10411
,pUmem_Cmd_TBD_6B18=10412
,pUmem_Cmd_TBD_6B1C=10413
,pUmem_Cmd_TBD_6B20=10414
,pUmem_Cmd_TBD_6B24=10415
,pUmem_Cmd_TBD_6B28=10416
,pUmem_Cmd_TBD_6B2C=10417
,pUmem_Cmd_TBD_6B30=10418
,pUmem_Cmd_TBD_6B34=10419
,pUmem_Cmd_TBD_6B38=10420
,pUmem_Cmd_TBD_6B3C=10421
,pUmem_Cmd_TBD_6B40=10422
,pUmem_Cmd_TBD_6B44=10423
,pUmem_Cmd_TBD_6B48=10424
,pUmem_Cmd_TBD_6B4C=10425
,pUmem_Cmd_TBD_6B50=10426
,pUmem_Cmd_TBD_6B54=10427
,pUmem_Cmd_Vs_ShotTime=10428
,pUmem_Cmd_Vs_CldInposDelay=10429
,pUmem_Cmd_TBD_6B60=10430
,pUmem_Cmd_TBD_6B64=10431
,pUmem_Cmd_TBD_6B68=10432
,pUmem_Cmd_TBD_6B6C=10433
,pUmem_Cmd_TBD_6B70=10434
,pUmem_Cmd_TBD_6B74=10435
,pUmem_Cmd_TBD_6B78=10436
,pUmem_Cmd_TBD_6B7C=10437
,pUmem_Cmd_TBD_6B80=10438
,pUmem_Cmd_TBD_6B84=10439
,pUmem_Cmd_TBD_6B88=10440
,pUmem_Cmd_TBD_6B8C=10441
,pUmem_Cmd_TBD_6B90=10442
,pUmem_Cmd_TBD_6B94=10443
,pUmem_Cmd_TBD_6B98=10444
,pUmem_Cmd_TBD_6B9C=10445
,pUmem_Cmd_TBD_6BA0=10446
,pUmem_Cmd_TBD_6BA4=10447
,pUmem_Cmd_Vs_LdVelX=10448
,pUmem_Cmd_Vs_LdVelY=10449
,pUmem_Cmd_Vs_LdVelC=10450
,pUmem_Cmd_Vs_LdPosX=10451
,pUmem_Cmd_Vs_LdPosY=10452
,pUmem_Cmd_Vs_LdPosC=10453
,pUmem_Cmd_Vs_RdVelX=10454
,pUmem_Cmd_Vs_RdVelY=10455
,pUmem_Cmd_Vs_RdVelC=10456
,pUmem_Cmd_Vs_RdPosX=10457
,pUmem_Cmd_Vs_RdPosY=10458
,pUmem_Cmd_Vs_RdPosC=10459
,pUmem_Cmd_Vs_VnVelX=10460
,pUmem_Cmd_Vs_VnVelY=10461
,pUmem_Cmd_Vs_VnVelC=10462
,pUmem_Cmd_Vs_VnPosX=10463
,pUmem_Cmd_Vs_VnPosY=10464
,pUmem_Cmd_Vs_VnPosC=10465
,pUmem_Cmd_Vs_WtVelX=10466
,pUmem_Cmd_Vs_WtVelY=10467
,pUmem_Cmd_Vs_WtVelC=10468
,pUmem_Cmd_Vs_WtPosX=10469
,pUmem_Cmd_Vs_WtPosY=10470
,pUmem_Cmd_Vs_WtPosC=10471
,pUmem_Cmd_Vs_UdVelX=10472
,pUmem_Cmd_Vs_UdVelY=10473
,pUmem_Cmd_Vs_UdVelC=10474
,pUmem_Cmd_Vs_UdPosX=10475
,pUmem_Cmd_Vs_UdPosY=10476
,pUmem_Cmd_Vs_UdPosC=10477
,pUmem_Cmd_Vs_RjVelX=10478
,pUmem_Cmd_Vs_RjVelY=10479
,pUmem_Cmd_Vs_RjVelC=10480
,pUmem_Cmd_Vs_RjPosX=10481
,pUmem_Cmd_Vs_RjPosY=10482
,pUmem_Cmd_Vs_RjPosC=10483
,pUmem_Cmd_TBD_6C38=10484
,pUmem_Cmd_TBD_6C3C=10485
,pUmem_Cmd_TBD_6C40=10486
,pUmem_Cmd_TBD_6C44=10487
,pUmem_Cmd_TBD_6C48=10488
,pUmem_Cmd_TBD_6C4C=10489
,pUmem_Cmd_TBD_6C50=10490
,pUmem_Cmd_TBD_6C54=10491
,pUmem_Cmd_TBD_6C58=10492
,pUmem_Cmd_TBD_6C5C=10493
,pUmem_Cmd_TBD_6C60=10494
,pUmem_Cmd_TBD_6C64=10495
,pUmem_Cmd_TBD_6C68=10496
,pUmem_Cmd_TBD_6C6C=10497
,pUmem_Cmd_Sc_ServoOn=10498
,pUmem_Cmd_Sc_ServoOff=10499
,pUmem_Cmd_Sc_HomeStart=10500
,pUmem_Cmd_Sc_HomeAbort=10501
,pUmem_Cmd_Sc_AlarmReset=10502
,pUmem_Cmd_Sc_Fsave=10503
,pUmem_Cmd_Sc_WblEna=10504
,pUmem_Cmd_Sc_WblLen=10505
,pUmem_Cmd_Sc_WblDist=10506
,pUmem_Cmd_Sc_WblType=10507
,pUmem_Cmd_Sc_WblRatioW=10508
,pUmem_Cmd_Sc_WblRatioL=10509
,pUmem_Cmd_Sc_WblOffsetX=10510
,pUmem_Cmd_Sc_WblOffsetY=10511
,pUmem_Cmd_Sc_WblEna_2=10512
,pUmem_Cmd_Sc_WblLen_2=10513
,pUmem_Cmd_Sc_WblDist_2=10514
,pUmem_Cmd_Sc_WblType_2=10515
,pUmem_Cmd_Sc_WblRatioW_2=10516
,pUmem_Cmd_Sc_WblRatioL_2=10517
,pUmem_Cmd_Sc_WblOffsetX_2=10518
,pUmem_Cmd_Sc_WblOffsetY_2=10519
,pUmem_Di00=10616
,pUmem_Di01_LaserReady=10617
,pUmem_Di02_LaserReqResp=10618
,pUmem_Di03_LaserPowerOn=10619
,pUmem_Di04_LaserAdMode=10620
,pUmem_Di05_LaserProgRun=10621
,pUmem_Di06_LaserWarning=10622
,pUmem_Di07_LaserAbnormal=10623
,pUmem_Di08=10624
,pUmem_Di09=10625
,pUmem_Di0A=10626
,pUmem_Di0B=10627
,pUmem_Di0C=10628
,pUmem_Di0D=10629
,pUmem_Di0E=10630
,pUmem_Di0F=10631
,pUmem_Di10_WsLtFixUp=10632
,pUmem_Di11_WsVsLtStrCls=10633
,pUmem_Di12_WsLtFixDn=10634
,pUmem_Di13_WsVsLtStrOpn=10635
,pUmem_Di14_WsRtFixUp=10636
,pUmem_Di15_WsVsRtStrCls=10637
,pUmem_Di16_WsRtFixDn=10638
,pUmem_Di17_WsVsRtStrOpn=10639
,pUmem_Di18_WsTempBwd=10640
,pUmem_Di19_TrPickUp=10641
,pUmem_Di1A_WsTempFwd=10642
,pUmem_Di1B_TrPickDn=10643
,pUmem_Di1C_WsTbOutOfRange=10644
,pUmem_Di1D_TrGripCls=10645
,pUmem_Di1E=10646
,pUmem_Di1F_TrGripOpn=10647
,pUmem_Di20_VsTbFixBwd=10648
,pUmem_Di21_WsAirCurtain=10649
,pUmem_Di22_VsTbFixFwd=10650
,pUmem_Di23_WsN2Blow=10651
,pUmem_Di24_VsTbFixUp=10652
,pUmem_Di25=10653
,pUmem_Di26_VsTbFixDn=10654
,pUmem_Di27=10655
,pUmem_Di28_WsTbDet=10656
,pUmem_Di29=10657
,pUmem_Di2A_VsTbDet=10658
,pUmem_Di2B=10659
,pUmem_Di2C_VsTbOutOfRange=10660
,pUmem_Di2D=10661
,pUmem_Di2E=10662
,pUmem_Di2F=10663
,pUmem_Di30_EcldFwd=10664
,pUmem_Di31_EcldBwd=10665
,pUmem_Do00_LaserEmission=10666
,pUmem_Do01_LaserReset=10667
,pUmem_Do02_LaserRequest=10668
,pUmem_Do03_LaserPowerOn=10669
,pUmem_Do04_LaserAdInEna=10670
,pUmem_Do05_LaserGuideEna=10671
,pUmem_Do06_LaserProgEna=10672
,pUmem_Do07_LaserProgStop=10673
,pUmem_Do08=10674
,pUmem_Do09=10675
,pUmem_Do0A=10676
,pUmem_Do0B=10677
,pUmem_Do0C=10678
,pUmem_Do0D=10679
,pUmem_Do0E=10680
,pUmem_Do0F=10681
,pUmem_Do10_WsTbFixUp=10682
,pUmem_Do11_WsTempBwd=10683
,pUmem_Do12_WsTbFixDn=10684
,pUmem_Do13_WsTempFwd=10685
,pUmem_Do14_TrGripCls=10686
,pUmem_Do15_VsTbFixBwd=10687
,pUmem_Do16_TrGripOpn=10688
,pUmem_Do17_VsTbFixFwd=10689
,pUmem_Do18_TrPickUp=10690
,pUmem_Do19_VsTbFixUp=10691
,pUmem_Do1A_TrPickDn=10692
,pUmem_Do1B_VsTbFixDn=10693
,pUmem_Do1C_WsVsStrCls=10694
,pUmem_Do1D_WsCoolAir=10695
,pUmem_Do1E_WsVsStrOpn=10696
,pUmem_Do1F=10697
,pUmem_Do20_WsTbVacm=10698
,pUmem_Do21_WsAirCurtain=10699
,pUmem_Do22_WsTbBlow=10700
,pUmem_Do23_WsN2Blow=10701
,pUmem_Do24=10702
,pUmem_Do25_WsTbVacmValve=10703
,pUmem_Do26=10704
,pUmem_Do27=10705
,pUmem_Do28=10706
,pUmem_Do29=10707
,pUmem_Do2A=10708
,pUmem_Do2B=10709
,pUmem_Do2C=10710
,pUmem_Do2D=10711
,pUmem_Do2E=10712
,pUmem_Do2F=10713
,pUmem_Do30_EcldFwd=10714
,pUmem_Do31_EcldBwd=10715
,pUmem_Ai00_WsLoadCell=10716
,pUmem_Ai01=10717
,pUmem_Ai03_WsCorePower=10718
,pUmem_Ai04_WsRingPower=10719
,pUmem_Ti00_WsTempSen1=10720
,pUmem_Ti01_WsTempSen2=10721
,pUmem_Sta_Mc_BufIdx=10722
,pWs_Vect_Dlt=12115
,pVs_Vect_Dlt=12116
,pWs_Epr_OutVdc=12117};
enum ptrMarray {_ptrMarray_=-1
,pEcat_Di_Md01=8231
,pEcat_Di_Md02=8247
,pEcat_Do_Md01=8263
,pEcat_Do_Md02=8279
,pEcat_CmdPos=8370
,pEcat_ActErr=8402
,pEcat_ActTrq=8434
,pBuf_ActTrq=8466
,pEcat_AlarmReset=8498
,pGpio_Di_Md00=8530
,pGpio_Do_Md00=8546
,pUmem_Di_Md00=10520
,pUmem_Di_Md01=10536
,pUmem_Di_Md02=10552
,pUmem_Do_Md00=10568
,pUmem_Do_Md01=10584
,pUmem_Do_Md02=10600
,pUmem_Sta_Mc_SeqCur=10723
,pUmem_Sta_Mc_SeqOld=10773
,pUmem_Sta_Mc_Pdt=10823
,pUmem_Sta_Mc_Time_L=10873
,pUmem_Sta_Mc_Time_H=10923
,pUmem_Sta_Mc_Time_BufD=10973
,pUmem_Sta_Mc_Time_BufL=11023
,pUmem_Sta_Mc_Time_BufH=11073
,pUmem_Sta_CmdPos=11123
,pUmem_Sta_ActPos=11155
,pUmem_Sta_Velocity=11187
,pUmem_Sta_Load=11219
,pUmem_Sta_AmpEna=11251
,pUmem_Sta_CloseLoop=11283
,pUmem_Sta_InPos=11315
,pUmem_Sta_HomeFin=11347
,pUmem_Sta_HomeIng=11379
,pUmem_Sta_LimitMinus=11411
,pUmem_Sta_LimitPlus=11443
,pUmem_Sta_FollowingErr=11475
,pUmem_Sta_AmpFault=11507
,pUmem_Sta_EncLoss=11539
,pUmem_Sta_I2tErr=11571
,pUmem_Sta_ProgPos=11603
,pUmem_Cmd_ServoOn=11635
,pUmem_Cmd_ServoOff=11667
,pUmem_Cmd_HomeStart=11699
,pUmem_Cmd_HomeAbort=11731
,pUmem_Cmd_HomeOffset=11763
,pUmem_Cmd_JogStop=11795
,pUmem_Cmd_JogContPlus=11827
,pUmem_Cmd_JogContMinus=11859
,pUmem_Cmd_JogAbsMove=11891
,pUmem_Cmd_JogIncMove=11923
,pUmem_Cmd_JogAbsPos=11955
,pUmem_Cmd_JogIncDist=11987
,pUmem_Cmd_JogSpeed=12019
,pUmem_Cmd_JogTa=12051
,pUmem_Cmd_JogTs=12083};
#define	gMach_Type	pshm->P[8192]
#define	gTest_Cnt	pshm->P[8193]
#define	gAi00_WsLoadCell	pshm->P[8194]
#define	gTi00_Ws_TempSen1	pshm->P[8195]
#define	gTi01_Ws_TempSen2	pshm->P[8196]
#define	gKey_RunMod	pshm->P[8197]
#define	gMc_RunMod	pshm->P[8198]
#define	gMc_RunOpt	pshm->P[8199]
#define	gWs_RunOpt	pshm->P[8200]
#define	gVs_RunOpt	pshm->P[8201]
#define	gWs_StepRun	pshm->P[8202]
#define	gVs_StepRun	pshm->P[8203]
#define	gTest_Vel	pshm->P[8204]
#define	gWs_LaserTest_Ena	pshm->P[8205]
#define	gMc_Servo_Cnt_Cur	pshm->P[8206]
#define	gMc_Servo_Cnt_Old	pshm->P[8207]
#define	gMc_Servo_Cnt_Dlt	pshm->P[8208]
#define	gMc_Servo_Prd_Dlt	pshm->P[8209]
#define	gWs_AccLimitX	pshm->P[8210]
#define	gWs_AccLimitY	pshm->P[8211]
#define	gWs_AccLimitC	pshm->P[8212]
#define	gWs_VelLimitC	pshm->P[8213]
#define	gWs_PosX_Cur	pshm->P[8214]
#define	gWs_PosY_Cur	pshm->P[8215]
#define	gWs_PosX_Old	pshm->P[8216]
#define	gWs_PosY_Old	pshm->P[8217]
#define	gWs_PosX_Dlt	pshm->P[8218]
#define	gWs_PosY_Dlt	pshm->P[8219]
#define	gWs_PosV_Dlt	pshm->P[8220]
#define	gWs_Vect_Vel	pshm->P[8221]
#define	gWs_Vect_Sum	pshm->P[8222]
#define	gWs_OutMode	pshm->P[8223]
#define	gWs_RefVel	pshm->P[8224]
#define	gWs_VelRatio	pshm->P[8225]
#define	gWs_LaserEna	pshm->P[8226]
#define	gWs_OutMode_2	pshm->P[8227]
#define	gWs_RefVel_2	pshm->P[8228]
#define	gWs_CorePowSf	pshm->P[8229]
#define	gWs_CoreRefPow	pshm->P[8230]
#define	gWs_CoreMinPow	pshm->P[8231]
#define	gWs_CoreMaxPow	pshm->P[8232]
#define	gWs_CoreOutPow	pshm->P[8233]
#define	gWs_CoreOutVdc	pshm->P[8234]
#define	gWs_CorePfmEna	pshm->P[8235]
#define	gWs_CoreRefPow_2	pshm->P[8236]
#define	gWs_CorePfmEna_2	pshm->P[8237]
#define	gWs_RingPowSf	pshm->P[8238]
#define	gWs_RingRefPow	pshm->P[8239]
#define	gWs_RingMinPow	pshm->P[8240]
#define	gWs_RingMaxPow	pshm->P[8241]
#define	gWs_RingOutPow	pshm->P[8242]
#define	gWs_RingOutVdc	pshm->P[8243]
#define	gWs_RingPfmEna	pshm->P[8244]
#define	gWs_RingRefPow_2	pshm->P[8245]
#define	gWs_RingPfmEna_2	pshm->P[8246]
#define	gWs_PfmRtiCnt	pshm->P[8247]
#define	gWs_PfmPeriod	pshm->P[8248]
#define	gWs_PfmOnTime	pshm->P[8249]
#define	gWs_PfmOnCnt	pshm->P[8250]
#define	gWs_PfmPeriod_2	pshm->P[8251]
#define	gWs_PfmOnTime_2	pshm->P[8252]
#define	gWs_PfmOut	pshm->P[8253]
#define	gWs_PfmBuf	pshm->P[8254]
#define	gWs_PfmCnt	pshm->P[8255]
#define	gWs_PfmOut_2	pshm->P[8256]
#define	gWs_WblEna	pshm->P[8257]
#define	gWs_WblLen	pshm->P[8258]
#define	gWs_WblDst	pshm->P[8259]
#define	gWs_WblCnt	pshm->P[8260]
#define	gWs_WblType	pshm->P[8261]
#define	gWs_WblRatW	pshm->P[8262]
#define	gWs_WblRatL	pshm->P[8263]
#define	gWs_WblOfsX	pshm->P[8264]
#define	gWs_WblOfsY	pshm->P[8265]
#define	gWs_WblEna_2	pshm->P[8266]
#define	gWs_WblLen_2	pshm->P[8267]
#define	gWs_WblDst_2	pshm->P[8268]
#define	gWs_WblCnt_2	pshm->P[8269]
#define	gWs_WblType_2	pshm->P[8270]
#define	gWs_WblRatW_2	pshm->P[8271]
#define	gWs_WblRatL_2	pshm->P[8272]
#define	gWs_WblOfsX_2	pshm->P[8273]
#define	gWs_WblOfsY_2	pshm->P[8274]
#define	gVs_AccLimitX	pshm->P[8275]
#define	gVs_AccLimitY	pshm->P[8276]
#define	gVs_AccLimitC	pshm->P[8277]
#define	gVs_VelLimitC	pshm->P[8278]
#define	gVs_PosX_Cur	pshm->P[8279]
#define	gVs_PosY_Cur	pshm->P[8280]
#define	gVs_PosX_Old	pshm->P[8281]
#define	gVs_PosY_Old	pshm->P[8282]
#define	gVs_PosX_Dlt	pshm->P[8283]
#define	gVs_PosY_Dlt	pshm->P[8284]
#define	gVs_PosV_Dlt	pshm->P[8285]
#define	gVs_Vect_Vel	pshm->P[8286]
#define	gVs_Vect_Sum	pshm->P[8287]
#define	gVs_RefVel	pshm->P[8288]
#define	gVs_PfmPeriod	pshm->P[8289]
#define	gVs_PfmDuty	pshm->P[8290]
#define	gVs_EquEna	pshm->P[8291]
#define	gVs_EquCnt	pshm->P[8292]
#define	gVs_EquSta_Cur	pshm->P[8293]
#define	gVs_EquSta_Old	pshm->P[8294]
#define	gSc_PosX_Cur	pshm->P[8295]
#define	gSc_PosY_Cur	pshm->P[8296]
#define	gSta_Idx	pshm->P[8297]
#define	gCmd_Idx	pshm->P[8298]
#define	gMt_HomeStart_Cur(i)	pshm->P[(8299+i)%MAX_P]
#define	gMt_HomeStart_Old(i)	pshm->P[(8331+i)%MAX_P]
#define	gMt_HomeAbort_Cur(i)	pshm->P[(8363+i)%MAX_P]
#define	gMt_HomeAbort_Old(i)	pshm->P[(8395+i)%MAX_P]
#define	gMt_ServoOn_Cur(i)	pshm->P[(8427+i)%MAX_P]
#define	gMt_ServoOn_Old(i)	pshm->P[(8459+i)%MAX_P]
#define	gMt_ServoOff_Cur(i)	pshm->P[(8491+i)%MAX_P]
#define	gMt_ServoOff_Old(i)	pshm->P[(8523+i)%MAX_P]
#define	gMt_Jog_Stop_Cur(i)	pshm->P[(8555+i)%MAX_P]
#define	gMt_Jog_Stop_Old(i)	pshm->P[(8587+i)%MAX_P]
#define	gMt_Jog_ContPlus_Cur(i)	pshm->P[(8619+i)%MAX_P]
#define	gMt_Jog_ContPlus_Old(i)	pshm->P[(8651+i)%MAX_P]
#define	gMt_Jog_ContMinus_Cur(i)	pshm->P[(8683+i)%MAX_P]
#define	gMt_Jog_ContMinus_Old(i)	pshm->P[(8715+i)%MAX_P]
#define	gMt_Jog_AbsMove_Cur(i)	pshm->P[(8747+i)%MAX_P]
#define	gMt_Jog_AbsMove_Old(i)	pshm->P[(8779+i)%MAX_P]
#define	gMt_Jog_IncMove_Cur(i)	pshm->P[(8811+i)%MAX_P]
#define	gMt_Jog_IncMove_Old(i)	pshm->P[(8843+i)%MAX_P]
#define	gMc_ServoOn_Cur	pshm->P[8875]
#define	gMc_ServoOn_Old	pshm->P[8876]
#define	gMc_ServoOff_Cur	pshm->P[8877]
#define	gMc_ServoOff_Old	pshm->P[8878]
#define	gMc_HomeStart_Cur	pshm->P[8879]
#define	gMc_HomeStart_Old	pshm->P[8880]
#define	gMc_HomeAbort_Cur	pshm->P[8881]
#define	gMc_HomeAbort_Old	pshm->P[8882]
#define	gMc_AlarmReset_Cur	pshm->P[8883]
#define	gMc_AlarmReset_Old	pshm->P[8884]
#define	gMc_RunMod_Cur	pshm->P[8885]
#define	gMc_RunMod_Old	pshm->P[8886]
#define	gMc_AutoStart_Cur	pshm->P[8887]
#define	gMc_AutoStart_Old	pshm->P[8888]
#define	gMc_AutoAbort_Cur	pshm->P[8889]
#define	gMc_AutoAbort_Old	pshm->P[8890]
#define	gMc_AutoPause_Cur	pshm->P[8891]
#define	gMc_AutoPause_Old	pshm->P[8892]
#define	gMc_CycleStart_Cur	pshm->P[8893]
#define	gMc_CycleStart_Old	pshm->P[8894]
#define	gMc_StepStart_Cur	pshm->P[8895]
#define	gMc_StepStart_Old	pshm->P[8896]
#define	gMc_Fsave_Cur	pshm->P[8897]
#define	gMc_Fsave_Old	pshm->P[8898]
#define	gWs_ServoOn_Cur	pshm->P[8899]
#define	gWs_ServoOn_Old	pshm->P[8900]
#define	gWs_ServoOff_Cur	pshm->P[8901]
#define	gWs_ServoOff_Old	pshm->P[8902]
#define	gWs_HomeStart_Cur	pshm->P[8903]
#define	gWs_HomeStart_Old	pshm->P[8904]
#define	gWs_HomeAbort_Cur	pshm->P[8905]
#define	gWs_HomeAbort_Old	pshm->P[8906]
#define	gWs_AlarmReset_Cur	pshm->P[8907]
#define	gWs_AlarmReset_Old	pshm->P[8908]
#define	gWs_AlarmRetry_Cur	pshm->P[8909]
#define	gWs_AlarmRetry_Old	pshm->P[8910]
#define	gWs_AlarmAbort_Cur	pshm->P[8911]
#define	gWs_AlarmAbort_Old	pshm->P[8912]
#define	gWs_PowerCheck_Cur	pshm->P[8913]
#define	gWs_PowerCheck_Old	pshm->P[8914]
#define	gWs_TestShot_Cur	pshm->P[8915]
#define	gWs_TestShot_Old	pshm->P[8916]
#define	gWs_LaserEnableStart_Cur	pshm->P[8917]
#define	gWs_LaserEnableStart_Old	pshm->P[8918]
#define	gWs_LaserDisableStart_Cur	pshm->P[8919]
#define	gWs_LaserDisableStart_Old	pshm->P[8920]
#define	gWs_LaserTestCrossStart_Cur	pshm->P[8921]
#define	gWs_LaserTestCrossStart_Old	pshm->P[8922]
#define	gWs_LaserTestCrossAbort_Cur	pshm->P[8923]
#define	gWs_LaserTestCrossAbort_Old	pshm->P[8924]
#define	gWs_LaserTestLineStart_Cur	pshm->P[8925]
#define	gWs_LaserTestLineStart_Old	pshm->P[8926]
#define	gWs_LaserTestLineAbort_Cur	pshm->P[8927]
#define	gWs_LaserTestLineAbort_Old	pshm->P[8928]
#define	gWs_PowerCheckStart_Cur	pshm->P[8929]
#define	gWs_PowerCheckStart_Old	pshm->P[8930]
#define	gWs_PowerCheckAbort_Cur	pshm->P[8931]
#define	gWs_PowerCheckAbort_Old	pshm->P[8932]
#define	gVs_ServoOn_Cur	pshm->P[8933]
#define	gVs_ServoOn_Old	pshm->P[8934]
#define	gVs_ServoOff_Cur	pshm->P[8935]
#define	gVs_ServoOff_Old	pshm->P[8936]
#define	gVs_HomeStart_Cur	pshm->P[8937]
#define	gVs_HomeStart_Old	pshm->P[8938]
#define	gVs_HomeAbort_Cur	pshm->P[8939]
#define	gVs_HomeAbort_Old	pshm->P[8940]
#define	gVs_AlarmReset_Cur	pshm->P[8941]
#define	gVs_AlarmReset_Old	pshm->P[8942]
#define	gVs_AlarmRetry_Cur	pshm->P[8943]
#define	gVs_AlarmRetry_Old	pshm->P[8944]
#define	gVs_AlarmAbort_Cur	pshm->P[8945]
#define	gVs_AlarmAbort_Old	pshm->P[8946]
#define	gVs_TestShot_Cur	pshm->P[8947]
#define	gVs_TestShot_Old	pshm->P[8948]
#define	gSc_ServoOn_Cur	pshm->P[8949]
#define	gSc_ServoOn_Old	pshm->P[8950]
#define	gSc_ServoOff_Cur	pshm->P[8951]
#define	gSc_ServoOff_Old	pshm->P[8952]
#define	gSc_HomeStart_Cur	pshm->P[8953]
#define	gSc_HomeStart_Old	pshm->P[8954]
#define	gSc_HomeAbort_Cur	pshm->P[8955]
#define	gSc_HomeAbort_Old	pshm->P[8956]
#define	gSc_AlarmReset_Cur	pshm->P[8957]
#define	gSc_AlarmReset_Old	pshm->P[8958]
#define	gWs_LdStart_Cur	pshm->P[8959]
#define	gWs_LdAbort_Cur	pshm->P[8960]
#define	gWs_LdStart_Old	pshm->P[8961]
#define	gWs_LdAbort_Old	pshm->P[8962]
#define	gWs_RdStart_Cur	pshm->P[8963]
#define	gWs_RdAbort_Cur	pshm->P[8964]
#define	gWs_RdStart_Old	pshm->P[8965]
#define	gWs_RdAbort_Old	pshm->P[8966]
#define	gWs_WdStart_Cur	pshm->P[8967]
#define	gWs_WdAbort_Cur	pshm->P[8968]
#define	gWs_WdStart_Old	pshm->P[8969]
#define	gWs_WdAbort_Old	pshm->P[8970]
#define	gWs_WtStart_Cur	pshm->P[8971]
#define	gWs_WtAbort_Cur	pshm->P[8972]
#define	gWs_WtStart_Old	pshm->P[8973]
#define	gWs_WtAbort_Old	pshm->P[8974]
#define	gWs_UdStart_Cur	pshm->P[8975]
#define	gWs_UdAbort_Cur	pshm->P[8976]
#define	gWs_UdStart_Old	pshm->P[8977]
#define	gWs_UdAbort_Old	pshm->P[8978]
#define	gWs_RjStart_Cur	pshm->P[8979]
#define	gWs_RjAbort_Cur	pshm->P[8980]
#define	gWs_RjStart_Old	pshm->P[8981]
#define	gWs_RjAbort_Old	pshm->P[8982]
#define	gVs_LdStart_Cur	pshm->P[8983]
#define	gVs_LdAbort_Cur	pshm->P[8984]
#define	gVs_LdStart_Old	pshm->P[8985]
#define	gVs_LdAbort_Old	pshm->P[8986]
#define	gVs_RdStart_Cur	pshm->P[8987]
#define	gVs_RdAbort_Cur	pshm->P[8988]
#define	gVs_RdStart_Old	pshm->P[8989]
#define	gVs_RdAbort_Old	pshm->P[8990]
#define	gVs_VnStart_Cur	pshm->P[8991]
#define	gVs_VnAbort_Cur	pshm->P[8992]
#define	gVs_VnStart_Old	pshm->P[8993]
#define	gVs_VnAbort_Old	pshm->P[8994]
#define	gVs_WtStart_Cur	pshm->P[8995]
#define	gVs_WtAbort_Cur	pshm->P[8996]
#define	gVs_WtStart_Old	pshm->P[8997]
#define	gVs_WtAbort_Old	pshm->P[8998]
#define	gVs_UdStart_Cur	pshm->P[8999]
#define	gVs_UdAbort_Cur	pshm->P[9000]
#define	gVs_UdStart_Old	pshm->P[9001]
#define	gVs_UdAbort_Old	pshm->P[9002]
#define	gVs_RjStart_Cur	pshm->P[9003]
#define	gVs_RjAbort_Cur	pshm->P[9004]
#define	gVs_RjStart_Old	pshm->P[9005]
#define	gVs_RjAbort_Old	pshm->P[9006]
#define	gWs_PdtStaChange_Cur	pshm->P[9007]
#define	gVs_PdtStaChange_Cur	pshm->P[9008]
#define	gTr_PdtStaChange_Cur	pshm->P[9009]
#define	gWs_PdtStaChange_Old	pshm->P[9010]
#define	gVs_PdtStaChange_Old	pshm->P[9011]
#define	gTr_PdtStaChange_Old	pshm->P[9012]
#define	gWs_Error	pshm->P[9013]
#define	gVs_Error	pshm->P[9014]
#define	gWs_ErrCode	pshm->P[9015]
#define	gVs_ErrCode	pshm->P[9016]
#define	gWs_Error_Cur	pshm->P[9017]
#define	gWs_Error_Old	pshm->P[9018]
#define	gVs_Error_Cur	pshm->P[9019]
#define	gVs_Error_Old	pshm->P[9020]
#define	gSc_Com_Sta	pshm->P[9021]
#define	gEc_WdTimer	pshm->P[9022]
#define	gMc_DistX_Cur	pshm->P[9023]
#define	gMc_DistX_Err	pshm->P[9024]
#define	gWs_Safety_Sta	pshm->P[9025]
#define	gVs_Safety_Sta	pshm->P[9026]
#define	gWs_Safety_Err	pshm->P[9027]
#define	gVs_Safety_Err	pshm->P[9028]
#define	gMc_AlarmReset_Ena	pshm->P[9029]
#define	gWs_AlarmReset_Ena	pshm->P[9030]
#define	gVs_AlarmReset_Ena	pshm->P[9031]
#define	gSc_AlarmReset_Ena	pshm->P[9032]
#define	gWs_AlarmRetry_Ena	pshm->P[9033]
#define	gVs_AlarmRetry_Ena	pshm->P[9034]
#define	gWs_AlarmAbort_Ena	pshm->P[9035]
#define	gVs_AlarmAbort_Ena	pshm->P[9036]
#define	gEc_Com_Sta(i)	pshm->P[(9037+i)%MAX_P]
#define	gEc_Con_Start	pshm->P[9069]
#define	gEc_Con_Abort	pshm->P[9070]
#define	gEc_Con_Ena	pshm->P[9071]
#define	gEc_Con_Sta	pshm->P[9072]
#define	gEc_Con_Seq	pshm->P[9073]
#define	gEc_Con_Buf	pshm->P[9074]
#define	gEc_Con_Tmr	pshm->P[9075]
#define	gMt_Home_Idx	pshm->P[9076]
#define	gMt_Home_Start(i)	pshm->P[(9077+i)%MAX_P]
#define	gMt_Home_Abort(i)	pshm->P[(9109+i)%MAX_P]
#define	gMt_Home_Ena(i)	pshm->P[(9141+i)%MAX_P]
#define	gMt_Home_Sta(i)	pshm->P[(9173+i)%MAX_P]
#define	gMt_Home_Seq(i)	pshm->P[(9205+i)%MAX_P]
#define	gMt_Home_Buf(i)	pshm->P[(9237+i)%MAX_P]
#define	gMt_Home_Tmr(i)	pshm->P[(9269+i)%MAX_P]
#define	gMt_Home_Err(i)	pshm->P[(9301+i)%MAX_P]
#define	gMt_Home_Pos(i)	pshm->P[(9333+i)%MAX_P]
#define	gMc_Home_Start	pshm->P[9365]
#define	gMc_Home_Abort	pshm->P[9366]
#define	gMc_Home_Ena	pshm->P[9367]
#define	gMc_Home_Sta	pshm->P[9368]
#define	gMc_Home_Seq	pshm->P[9369]
#define	gMc_Home_Buf	pshm->P[9370]
#define	gMc_Home_Tmr	pshm->P[9371]
#define	gMc_Home_Err	pshm->P[9372]
#define	gWs_Home_Start	pshm->P[9373]
#define	gWs_Home_Abort	pshm->P[9374]
#define	gWs_Home_Ena	pshm->P[9375]
#define	gWs_Home_Sta	pshm->P[9376]
#define	gWs_Home_Seq	pshm->P[9377]
#define	gWs_Home_Buf	pshm->P[9378]
#define	gWs_Home_Tmr	pshm->P[9379]
#define	gWs_Home_Err	pshm->P[9380]
#define	gVs_Home_Start	pshm->P[9381]
#define	gVs_Home_Abort	pshm->P[9382]
#define	gVs_Home_Ena	pshm->P[9383]
#define	gVs_Home_Sta	pshm->P[9384]
#define	gVs_Home_Seq	pshm->P[9385]
#define	gVs_Home_Buf	pshm->P[9386]
#define	gVs_Home_Tmr	pshm->P[9387]
#define	gVs_Home_Err	pshm->P[9388]
#define	gSc_Home_Start	pshm->P[9389]
#define	gSc_Home_Abort	pshm->P[9390]
#define	gSc_Home_Ena	pshm->P[9391]
#define	gSc_Home_Sta	pshm->P[9392]
#define	gSc_Home_Seq	pshm->P[9393]
#define	gSc_Home_Buf	pshm->P[9394]
#define	gSc_Home_Tmr	pshm->P[9395]
#define	gSc_Home_Err	pshm->P[9396]
#define	gSc_InitSta	pshm->P[9397]
#define	gJog_Idx	pshm->P[9398]
#define	gMt_ServoOn_Ena(i)	pshm->P[(9399+i)%MAX_P]
#define	gMt_ServoOff_Ena(i)	pshm->P[(9431+i)%MAX_P]
#define	gMc_ServoOn_Ena	pshm->P[9463]
#define	gMc_ServoOff_Ena	pshm->P[9464]
#define	gWs_ServoOn_Ena	pshm->P[9465]
#define	gWs_ServoOff_Ena	pshm->P[9466]
#define	gVs_ServoOn_Ena	pshm->P[9467]
#define	gVs_ServoOff_Ena	pshm->P[9468]
#define	gSc_ServoOn_Ena	pshm->P[9469]
#define	gSc_ServoOff_Ena	pshm->P[9470]
#define	gJog_Stop_Ena(i)	pshm->P[(9471+i)%MAX_P]
#define	gJog_ContPlus_Ena(i)	pshm->P[(9503+i)%MAX_P]
#define	gJog_ContMinus_Ena(i)	pshm->P[(9535+i)%MAX_P]
#define	gJog_AbsMove_Ena(i)	pshm->P[(9567+i)%MAX_P]
#define	gJog_IncMove_Ena(i)	pshm->P[(9599+i)%MAX_P]
#define	gWd_Mdi_Start	pshm->P[9631]
#define	gWd_Mdi_Abort	pshm->P[9632]
#define	gWd_Mdi_Ena	pshm->P[9633]
#define	gWd_Mdi_Sta	pshm->P[9634]
#define	gWd_Mdi_Seq	pshm->P[9635]
#define	gWd_Mdi_Buf	pshm->P[9636]
#define	gWd_Mdi_Tmr	pshm->P[9637]
#define	gWd_Mdi_Stp	pshm->P[9638]
#define	gWd_Mdi_PosX	pshm->P[9639]
#define	gWd_Mdi_PosY	pshm->P[9640]
#define	gWd_Mdi_PosC	pshm->P[9641]
#define	cMachineID	pshm->P[111]
#define	gWs_PdtNo	pshm->P[9642]
#define	gVs_PdtNo	pshm->P[9643]
#define	gTr_PdtNo	pshm->P[9644]
#define	gWs_LdDir	pshm->P[9645]
#define	gMc_AutoRun_Start	pshm->P[9646]
#define	gMc_AutoRun_Abort	pshm->P[9647]
#define	gMc_AutoRun_Pause	pshm->P[9648]
#define	gMc_Cycle_Start	pshm->P[9649]
#define	gMc_Step_Start	pshm->P[9650]
#define	gMc_AutoRun_Ena	pshm->P[9651]
#define	gMc_AutoRun_Sta	pshm->P[9652]
#define	gMc_AutoRun_Seq	pshm->P[9653]
#define	gMc_AutoRun_Buf	pshm->P[9654]
#define	gMc_AutoRun_Tmr	pshm->P[9655]
#define	gMc_AutoRun_Err	pshm->P[9656]
#define	gWs_Loop_Start	pshm->P[9657]
#define	gWs_Loop_Abort	pshm->P[9658]
#define	gWs_Loop_Pause	pshm->P[9659]
#define	gWs_Loop_Ena	pshm->P[9660]
#define	gWs_Loop_Sta	pshm->P[9661]
#define	gWs_Loop_Seq	pshm->P[9662]
#define	gWs_Loop_Buf	pshm->P[9663]
#define	gWs_Loop_Tmr	pshm->P[9664]
#define	gWs_Loop_Err	pshm->P[9665]
#define	gWs_Loop_Time	pshm->P[9666]
#define	gWs_Loop_TimeBuf	pshm->P[9667]
#define	gWs_Seq_Cur	pshm->P[9668]
#define	gWs_Seq_Old	pshm->P[9669]
#define	gWs_Seq_Err	pshm->P[9670]
#define	gVs_Loop_Start	pshm->P[9671]
#define	gVs_Loop_Abort	pshm->P[9672]
#define	gVs_Loop_Pause	pshm->P[9673]
#define	gVs_Loop_Ena	pshm->P[9674]
#define	gVs_Loop_Sta	pshm->P[9675]
#define	gVs_Loop_Seq	pshm->P[9676]
#define	gVs_Loop_Buf	pshm->P[9677]
#define	gVs_Loop_Tmr	pshm->P[9678]
#define	gVs_Loop_Err	pshm->P[9679]
#define	gVs_Loop_Time	pshm->P[9680]
#define	gVs_Loop_TimeBuf	pshm->P[9681]
#define	gVs_Seq_Cur	pshm->P[9682]
#define	gVs_Seq_Old	pshm->P[9683]
#define	gVs_Seq_Err	pshm->P[9684]
#define	gWs_Sta_Pdt	pshm->P[9685]
#define	gVs_Sta_Pdt	pshm->P[9686]
#define	gTr_Sta_Pdt	pshm->P[9687]
#define	gWs_Sta_PdtBuf	pshm->P[9688]
#define	gVs_Sta_PdtBuf	pshm->P[9689]
#define	gTr_Sta_PdtBuf	pshm->P[9690]
#define	gWs_Sta_Stg	pshm->P[9691]
#define	gVs_Sta_Stg	pshm->P[9692]
#define	gWs_Pos_Pdt	pshm->P[9693]
#define	gVs_Pos_Pdt	pshm->P[9694]
#define	gWs_Pos_Stg	pshm->P[9695]
#define	gVs_Pos_Stg	pshm->P[9696]
#define	gWs_PdtStaChange_Ena	pshm->P[9697]
#define	gVs_PdtStaChange_Ena	pshm->P[9698]
#define	gTr_PdtStaChange_Ena	pshm->P[9699]
#define	gWs_Load_Start	pshm->P[9700]
#define	gWs_Load_Abort	pshm->P[9701]
#define	gWs_Load_Ena	pshm->P[9702]
#define	gWs_Load_Sta	pshm->P[9703]
#define	gWs_Load_Seq	pshm->P[9704]
#define	gWs_Load_Buf	pshm->P[9705]
#define	gWs_Load_Tmr	pshm->P[9706]
#define	gWs_Load_Err	pshm->P[9707]
#define	gWs_Load_VelX	pshm->P[9708]
#define	gWs_Load_VelY	pshm->P[9709]
#define	gWs_Load_VelC	pshm->P[9710]
#define	gWs_Load_PosX	pshm->P[9711]
#define	gWs_Load_PosY	pshm->P[9712]
#define	gWs_Load_PosC	pshm->P[9713]
#define	gWs_Load_Time	pshm->P[9714]
#define	gWs_Load_TimeBuf	pshm->P[9715]
#define	gWs_Ready_Start	pshm->P[9716]
#define	gWs_Ready_Abort	pshm->P[9717]
#define	gWs_Ready_Ena	pshm->P[9718]
#define	gWs_Ready_Sta	pshm->P[9719]
#define	gWs_Ready_Seq	pshm->P[9720]
#define	gWs_Ready_Buf	pshm->P[9721]
#define	gWs_Ready_Tmr	pshm->P[9722]
#define	gWs_Ready_Err	pshm->P[9723]
#define	gWs_Ready_VelX	pshm->P[9724]
#define	gWs_Ready_VelY	pshm->P[9725]
#define	gWs_Ready_VelC	pshm->P[9726]
#define	gWs_Ready_PosX	pshm->P[9727]
#define	gWs_Ready_PosY	pshm->P[9728]
#define	gWs_Ready_PosC	pshm->P[9729]
#define	gWs_Ready_Time	pshm->P[9730]
#define	gWs_Ready_TimeBuf	pshm->P[9731]
#define	gWs_Ready_VsnJudge	pshm->P[9732]
#define	gWs_Welding_Start	pshm->P[9733]
#define	gWs_Welding_Abort	pshm->P[9734]
#define	gWs_Welding_Ena	pshm->P[9735]
#define	gWs_Welding_Sta	pshm->P[9736]
#define	gWs_Welding_Seq	pshm->P[9737]
#define	gWs_Welding_Buf	pshm->P[9738]
#define	gWs_Welding_Tmr	pshm->P[9739]
#define	gWs_Welding_Err	pshm->P[9740]
#define	gWs_Welding_VelX	pshm->P[9741]
#define	gWs_Welding_VelY	pshm->P[9742]
#define	gWs_Welding_VelC	pshm->P[9743]
#define	gWs_Welding_PosX	pshm->P[9744]
#define	gWs_Welding_PosY	pshm->P[9745]
#define	gWs_Welding_PosC	pshm->P[9746]
#define	gWs_Welding_Time	pshm->P[9747]
#define	gWs_Welding_TimeBuf	pshm->P[9748]
#define	gWs_Prog_Dist	pshm->P[9749]
#define	gWs_Prog_Time	pshm->P[9750]
#define	gWs_Prog_TimeBuf	pshm->P[9751]
#define	gWs_File_Prog_Time	pshm->P[9752]
#define	gWs_File_Prog_TimeBuf	pshm->P[9753]
#define	gWs_Wait_Start	pshm->P[9754]
#define	gWs_Wait_Abort	pshm->P[9755]
#define	gWs_Wait_Ena	pshm->P[9756]
#define	gWs_Wait_Sta	pshm->P[9757]
#define	gWs_Wait_Seq	pshm->P[9758]
#define	gWs_Wait_Buf	pshm->P[9759]
#define	gWs_Wait_Tmr	pshm->P[9760]
#define	gWs_Wait_Err	pshm->P[9761]
#define	gWs_Wait_VelX	pshm->P[9762]
#define	gWs_Wait_VelY	pshm->P[9763]
#define	gWs_Wait_VelC	pshm->P[9764]
#define	gWs_Wait_PosX	pshm->P[9765]
#define	gWs_Wait_PosY	pshm->P[9766]
#define	gWs_Wait_PosC	pshm->P[9767]
#define	gWs_Wait_Time	pshm->P[9768]
#define	gWs_Wait_TimeBuf	pshm->P[9769]
#define	gWs_Unload_Start	pshm->P[9770]
#define	gWs_Unload_Abort	pshm->P[9771]
#define	gWs_Unload_Ena	pshm->P[9772]
#define	gWs_Unload_Sta	pshm->P[9773]
#define	gWs_Unload_Seq	pshm->P[9774]
#define	gWs_Unload_Buf	pshm->P[9775]
#define	gWs_Unload_Tmr	pshm->P[9776]
#define	gWs_Unload_Err	pshm->P[9777]
#define	gWs_Unload_VelX	pshm->P[9778]
#define	gWs_Unload_VelY	pshm->P[9779]
#define	gWs_Unload_VelC	pshm->P[9780]
#define	gWs_Unload_PosX	pshm->P[9781]
#define	gWs_Unload_PosY	pshm->P[9782]
#define	gWs_Unload_PosC	pshm->P[9783]
#define	gWs_Unload_Time	pshm->P[9784]
#define	gWs_Unload_TimeBuf	pshm->P[9785]
#define	gWs_Reject_Start	pshm->P[9786]
#define	gWs_Reject_Abort	pshm->P[9787]
#define	gWs_Reject_Ena	pshm->P[9788]
#define	gWs_Reject_Sta	pshm->P[9789]
#define	gWs_Reject_Seq	pshm->P[9790]
#define	gWs_Reject_Buf	pshm->P[9791]
#define	gWs_Reject_Tmr	pshm->P[9792]
#define	gWs_Reject_Err	pshm->P[9793]
#define	gWs_Reject_VelX	pshm->P[9794]
#define	gWs_Reject_VelY	pshm->P[9795]
#define	gWs_Reject_VelC	pshm->P[9796]
#define	gWs_Reject_PosX	pshm->P[9797]
#define	gWs_Reject_PosY	pshm->P[9798]
#define	gWs_Reject_PosC	pshm->P[9799]
#define	gWs_Reject_Time	pshm->P[9800]
#define	gWs_Reject_TimeBuf	pshm->P[9801]
#define	gVs_Load_Start	pshm->P[9802]
#define	gVs_Load_Abort	pshm->P[9803]
#define	gVs_Load_Ena	pshm->P[9804]
#define	gVs_Load_Sta	pshm->P[9805]
#define	gVs_Load_Seq	pshm->P[9806]
#define	gVs_Load_Buf	pshm->P[9807]
#define	gVs_Load_Tmr	pshm->P[9808]
#define	gVs_Load_Err	pshm->P[9809]
#define	gVs_Load_VelX	pshm->P[9810]
#define	gVs_Load_VelY	pshm->P[9811]
#define	gVs_Load_VelC	pshm->P[9812]
#define	gVs_Load_PosX	pshm->P[9813]
#define	gVs_Load_PosY	pshm->P[9814]
#define	gVs_Load_PosC	pshm->P[9815]
#define	gVs_Load_Time	pshm->P[9816]
#define	gVs_Load_TimeBuf	pshm->P[9817]
#define	gVs_Ready_Start	pshm->P[9818]
#define	gVs_Ready_Abort	pshm->P[9819]
#define	gVs_Ready_Ena	pshm->P[9820]
#define	gVs_Ready_Sta	pshm->P[9821]
#define	gVs_Ready_Seq	pshm->P[9822]
#define	gVs_Ready_Buf	pshm->P[9823]
#define	gVs_Ready_Tmr	pshm->P[9824]
#define	gVs_Ready_Err	pshm->P[9825]
#define	gVs_Ready_VelX	pshm->P[9826]
#define	gVs_Ready_VelY	pshm->P[9827]
#define	gVs_Ready_VelC	pshm->P[9828]
#define	gVs_Ready_PosX	pshm->P[9829]
#define	gVs_Ready_PosY	pshm->P[9830]
#define	gVs_Ready_PosC	pshm->P[9831]
#define	gVs_Ready_Time	pshm->P[9832]
#define	gVs_Ready_TimeBuf	pshm->P[9833]
#define	gVs_Ready_VsnJudge	pshm->P[9834]
#define	gVs_Vision_Start	pshm->P[9835]
#define	gVs_Vision_Abort	pshm->P[9836]
#define	gVs_Vision_Ena	pshm->P[9837]
#define	gVs_Vision_Sta	pshm->P[9838]
#define	gVs_Vision_Seq	pshm->P[9839]
#define	gVs_Vision_Buf	pshm->P[9840]
#define	gVs_Vision_Tmr	pshm->P[9841]
#define	gVs_Vision_Err	pshm->P[9842]
#define	gVs_Vision_VelX	pshm->P[9843]
#define	gVs_Vision_VelY	pshm->P[9844]
#define	gVs_Vision_VelC	pshm->P[9845]
#define	gVs_Vision_PosX	pshm->P[9846]
#define	gVs_Vision_PosY	pshm->P[9847]
#define	gVs_Vision_PosC	pshm->P[9848]
#define	gVs_Vision_Time	pshm->P[9849]
#define	gVs_Vision_TimeBuf	pshm->P[9850]
#define	gVs_Prog_Dist	pshm->P[9851]
#define	gVs_Prog_Time	pshm->P[9852]
#define	gVs_Prog_TimeBuf	pshm->P[9853]
#define	gVs_Vision_VsnJudge	pshm->P[9854]
#define	gVs_Wait_Start	pshm->P[9855]
#define	gVs_Wait_Abort	pshm->P[9856]
#define	gVs_Wait_Ena	pshm->P[9857]
#define	gVs_Wait_Sta	pshm->P[9858]
#define	gVs_Wait_Seq	pshm->P[9859]
#define	gVs_Wait_Buf	pshm->P[9860]
#define	gVs_Wait_Tmr	pshm->P[9861]
#define	gVs_Wait_Err	pshm->P[9862]
#define	gVs_Wait_VelX	pshm->P[9863]
#define	gVs_Wait_VelY	pshm->P[9864]
#define	gVs_Wait_VelC	pshm->P[9865]
#define	gVs_Wait_PosX	pshm->P[9866]
#define	gVs_Wait_PosY	pshm->P[9867]
#define	gVs_Wait_PosC	pshm->P[9868]
#define	gVs_Wait_Time	pshm->P[9869]
#define	gVs_Wait_TimeBuf	pshm->P[9870]
#define	gVs_Unload_Start	pshm->P[9871]
#define	gVs_Unload_Abort	pshm->P[9872]
#define	gVs_Unload_Ena	pshm->P[9873]
#define	gVs_Unload_Sta	pshm->P[9874]
#define	gVs_Unload_Seq	pshm->P[9875]
#define	gVs_Unload_Buf	pshm->P[9876]
#define	gVs_Unload_Tmr	pshm->P[9877]
#define	gVs_Unload_Err	pshm->P[9878]
#define	gVs_Unload_VelX	pshm->P[9879]
#define	gVs_Unload_VelY	pshm->P[9880]
#define	gVs_Unload_VelC	pshm->P[9881]
#define	gVs_Unload_PosX	pshm->P[9882]
#define	gVs_Unload_PosY	pshm->P[9883]
#define	gVs_Unload_PosC	pshm->P[9884]
#define	gVs_Unload_Time	pshm->P[9885]
#define	gVs_Unload_TimeBuf	pshm->P[9886]
#define	gVs_Reject_Start	pshm->P[9887]
#define	gVs_Reject_Abort	pshm->P[9888]
#define	gVs_Reject_Ena	pshm->P[9889]
#define	gVs_Reject_Sta	pshm->P[9890]
#define	gVs_Reject_Seq	pshm->P[9891]
#define	gVs_Reject_Buf	pshm->P[9892]
#define	gVs_Reject_Tmr	pshm->P[9893]
#define	gVs_Reject_Err	pshm->P[9894]
#define	gVs_Reject_VelX	pshm->P[9895]
#define	gVs_Reject_VelY	pshm->P[9896]
#define	gVs_Reject_VelC	pshm->P[9897]
#define	gVs_Reject_PosX	pshm->P[9898]
#define	gVs_Reject_PosY	pshm->P[9899]
#define	gVs_Reject_PosC	pshm->P[9900]
#define	gVs_Reject_Time	pshm->P[9901]
#define	gVs_Reject_TimeBuf	pshm->P[9902]
#define	gWs_CldInpos_Delay	pshm->P[9903]
#define	gVs_CldInpos_Delay	pshm->P[9904]
#define	gWs_CldIn_CoverUD	pshm->P[9905]
#define	gWs_CldIn_CoverFB	pshm->P[9906]
#define	gWs_CldIn_TempFB	pshm->P[9907]
#define	gWs_CldIn_ShtrOC	pshm->P[9908]
#define	gVs_CldIn_CoverUD	pshm->P[9909]
#define	gVs_CldIn_CoverFB	pshm->P[9910]
#define	gTr_CldIn_PickerUD	pshm->P[9911]
#define	gTr_CldIn_PickerOC	pshm->P[9912]
#define	gWs_Epr_OutVdc	pshm->P[9913]
#define	gWs_EcldHome_Start	pshm->P[9914]
#define	gWs_EcldHome_Abort	pshm->P[9915]
#define	gWs_EcldHome_Ena	pshm->P[9916]
#define	gWs_EcldHome_Sta	pshm->P[9917]
#define	gWs_EcldHome_Seq	pshm->P[9918]
#define	gWs_EcldHome_Buf	pshm->P[9919]
#define	gWs_EcldHome_Tmr	pshm->P[9920]
#define	gWs_EcldHome_Err	pshm->P[9921]
#define	gWs_EcldHome_Try	pshm->P[9922]
#define	gWs_EcldHome_Fin	pshm->P[9923]
#define	gWs_EcldFwd_Start	pshm->P[9924]
#define	gWs_EcldFwd_Abort	pshm->P[9925]
#define	gWs_EcldFwd_Ena	pshm->P[9926]
#define	gWs_EcldFwd_Sta	pshm->P[9927]
#define	gWs_EcldFwd_Seq	pshm->P[9928]
#define	gWs_EcldFwd_Buf	pshm->P[9929]
#define	gWs_EcldFwd_Tmr	pshm->P[9930]
#define	gWs_EcldFwd_Err	pshm->P[9931]
#define	gWs_EcldFwd_Try	pshm->P[9932]
#define	gWs_EcldBwd_Start	pshm->P[9933]
#define	gWs_EcldBwd_Abort	pshm->P[9934]
#define	gWs_EcldBwd_Ena	pshm->P[9935]
#define	gWs_EcldBwd_Sta	pshm->P[9936]
#define	gWs_EcldBwd_Seq	pshm->P[9937]
#define	gWs_EcldBwd_Buf	pshm->P[9938]
#define	gWs_EcldBwd_Tmr	pshm->P[9939]
#define	gWs_EcldBwd_Err	pshm->P[9940]
#define	gWs_EcldBwd_Try	pshm->P[9941]
#define	gWs_EcldCmdFwd_Cur	pshm->P[9942]
#define	gWs_EcldCmdFwd_Old	pshm->P[9943]
#define	gWs_EcldCmdBwd_Cur	pshm->P[9944]
#define	gWs_EcldCmdBwd_Old	pshm->P[9945]
#define	gWs_TestShot_Ena	pshm->P[9946]
#define	gWs_TestShot_Time	pshm->P[9947]
#define	gVs_TestShot_Ena	pshm->P[9948]
#define	gVs_TestShot_Time	pshm->P[9949]
#define	gVs_TestShot_TimeBuf	pshm->P[9950]
#define	gVs_TestShot_Seq	pshm->P[9951]
#define	gVs_TestShot_Tmr	pshm->P[9952]
#define	gWs_LaserSta_Ready	pshm->P[9953]
#define	gWs_LaserSta_Enable	pshm->P[9954]
#define	gWs_LaserSta_CorePower	pshm->P[9955]
#define	gWs_LaserSta_RingPower	pshm->P[9956]
#define	gWs_LaserEnable_Start	pshm->P[9957]
#define	gWs_LaserEnable_Abort	pshm->P[9958]
#define	gWs_LaserEnable_Ena	pshm->P[9959]
#define	gWs_LaserEnable_Sta	pshm->P[9960]
#define	gWs_LaserEnable_Seq	pshm->P[9961]
#define	gWs_LaserEnable_Buf	pshm->P[9962]
#define	gWs_LaserEnable_Tmr	pshm->P[9963]
#define	gWs_LaserEnable_Err	pshm->P[9964]
#define	gWs_LaserDisable_Start	pshm->P[9965]
#define	gWs_LaserDisable_Abort	pshm->P[9966]
#define	gWs_LaserDisable_Ena	pshm->P[9967]
#define	gWs_LaserDisable_Sta	pshm->P[9968]
#define	gWs_LaserDisable_Seq	pshm->P[9969]
#define	gWs_LaserDisable_Buf	pshm->P[9970]
#define	gWs_LaserDisable_Tmr	pshm->P[9971]
#define	gWs_LaserDisable_Err	pshm->P[9972]
#define	gWs_LaserTestCross_Start	pshm->P[9973]
#define	gWs_LaserTestCross_Abort	pshm->P[9974]
#define	gWs_LaserTestCross_Ena	pshm->P[9975]
#define	gWs_LaserTestCross_Sta	pshm->P[9976]
#define	gWs_LaserTestCross_Seq	pshm->P[9977]
#define	gWs_LaserTestCross_Buf	pshm->P[9978]
#define	gWs_LaserTestCross_Tmr	pshm->P[9979]
#define	gWs_LaserTestCross_Err	pshm->P[9980]
#define	gWs_LaserTestLine_Start	pshm->P[9981]
#define	gWs_LaserTestLine_Abort	pshm->P[9982]
#define	gWs_LaserTestLine_Ena	pshm->P[9983]
#define	gWs_LaserTestLine_Sta	pshm->P[9984]
#define	gWs_LaserTestLine_Seq	pshm->P[9985]
#define	gWs_LaserTestLine_Buf	pshm->P[9986]
#define	gWs_LaserTestLine_Tmr	pshm->P[9987]
#define	gWs_LaserTestLine_Err	pshm->P[9988]
#define	gWs_TgtMov_Start	pshm->P[9989]
#define	gWs_TgtMov_Abort	pshm->P[9990]
#define	gWs_TgtMov_Ena	pshm->P[9991]
#define	gWs_TgtMov_Sta	pshm->P[9992]
#define	gWs_TgtMov_Seq	pshm->P[9993]
#define	gWs_TgtMov_Buf	pshm->P[9994]
#define	gWs_TgtMov_Tmr	pshm->P[9995]
#define	gWs_TgtMov_Err	pshm->P[9996]
#define	gVs_TgtMov_Start	pshm->P[9997]
#define	gVs_TgtMov_Abort	pshm->P[9998]
#define	gVs_TgtMov_Ena	pshm->P[9999]
#define	gVs_TgtMov_Sta	pshm->P[10000]
#define	gVs_TgtMov_Seq	pshm->P[10001]
#define	gVs_TgtMov_Buf	pshm->P[10002]
#define	gVs_TgtMov_Tmr	pshm->P[10003]
#define	gVs_TgtMov_Err	pshm->P[10004]
#define	gWs_TgtMov_VelX	pshm->P[10005]
#define	gWs_TgtMov_VelY	pshm->P[10006]
#define	gWs_TgtMov_VelC	pshm->P[10007]
#define	gWs_TgtMov_PosX	pshm->P[10008]
#define	gWs_TgtMov_PosY	pshm->P[10009]
#define	gWs_TgtMov_PosC	pshm->P[10010]
#define	gVs_TgtMov_VelX	pshm->P[10011]
#define	gVs_TgtMov_VelY	pshm->P[10012]
#define	gVs_TgtMov_VelC	pshm->P[10013]
#define	gVs_TgtMov_PosX	pshm->P[10014]
#define	gVs_TgtMov_PosY	pshm->P[10015]
#define	gVs_TgtMov_PosC	pshm->P[10016]
#define	gWs_CoverOpn_TgtAng	pshm->P[10017]
#define	gWs_CoverOpn_Start	pshm->P[10018]
#define	gWs_CoverOpn_Abort	pshm->P[10019]
#define	gWs_CoverOpn_Ena	pshm->P[10020]
#define	gWs_CoverOpn_Sta	pshm->P[10021]
#define	gWs_CoverOpn_Seq	pshm->P[10022]
#define	gWs_CoverOpn_Buf	pshm->P[10023]
#define	gWs_CoverOpn_Tmr	pshm->P[10024]
#define	gWs_CoverOpn_Err	pshm->P[10025]
#define	gWs_CoverCls_Start	pshm->P[10026]
#define	gWs_CoverCls_Abort	pshm->P[10027]
#define	gWs_CoverCls_Ena	pshm->P[10028]
#define	gWs_CoverCls_Sta	pshm->P[10029]
#define	gWs_CoverCls_Seq	pshm->P[10030]
#define	gWs_CoverCls_Buf	pshm->P[10031]
#define	gWs_CoverCls_Tmr	pshm->P[10032]
#define	gWs_CoverCls_Err	pshm->P[10033]
#define	gWsV_CoverOpn_Start	pshm->P[10034]
#define	gWsV_CoverOpn_Abort	pshm->P[10035]
#define	gWsV_CoverOpn_Ena	pshm->P[10036]
#define	gWsV_CoverOpn_Sta	pshm->P[10037]
#define	gWsV_CoverOpn_Seq	pshm->P[10038]
#define	gWsV_CoverOpn_Buf	pshm->P[10039]
#define	gWsV_CoverOpn_Tmr	pshm->P[10040]
#define	gWsV_CoverOpn_Err	pshm->P[10041]
#define	gWsV_CoverCls_Start	pshm->P[10042]
#define	gWsV_CoverCls_Abort	pshm->P[10043]
#define	gWsV_CoverCls_Ena	pshm->P[10044]
#define	gWsV_CoverCls_Sta	pshm->P[10045]
#define	gWsV_CoverCls_Seq	pshm->P[10046]
#define	gWsV_CoverCls_Buf	pshm->P[10047]
#define	gWsV_CoverCls_Tmr	pshm->P[10048]
#define	gWsV_CoverCls_Err	pshm->P[10049]
#define	gWsV_Cover_Cur	pshm->P[10050]
#define	gVs_CoverOpn_Start	pshm->P[10051]
#define	gVs_CoverOpn_Abort	pshm->P[10052]
#define	gVs_CoverOpn_Ena	pshm->P[10053]
#define	gVs_CoverOpn_Sta	pshm->P[10054]
#define	gVs_CoverOpn_Seq	pshm->P[10055]
#define	gVs_CoverOpn_Buf	pshm->P[10056]
#define	gVs_CoverOpn_Tmr	pshm->P[10057]
#define	gVs_CoverOpn_Err	pshm->P[10058]
#define	gVs_CoverCls_Start	pshm->P[10059]
#define	gVs_CoverCls_Abort	pshm->P[10060]
#define	gVs_CoverCls_Ena	pshm->P[10061]
#define	gVs_CoverCls_Sta	pshm->P[10062]
#define	gVs_CoverCls_Seq	pshm->P[10063]
#define	gVs_CoverCls_Buf	pshm->P[10064]
#define	gVs_CoverCls_Tmr	pshm->P[10065]
#define	gVs_CoverCls_Err	pshm->P[10066]
#define	gWs_ThCoverPos_Old	pshm->P[10067]
#define	gVs_ThCoverPos_Old	pshm->P[10068]
#define	gWs_ThTargetPos_Old	pshm->P[10069]
#define	gVs_ThTargetPos_Old	pshm->P[10070]
#define	gWs_CoverMoving_Sta	pshm->P[10071]
#define	gVs_CoverMoving_Sta	pshm->P[10072]
#define	gBlow_Time	pshm->P[10073]
#define	gWs_PowerCheck_Shot_Start	pshm->P[10074]
#define	gWs_PowerCheck_Shot_Abort	pshm->P[10075]
#define	gWs_PowerCheck_Shot_Ena	pshm->P[10076]
#define	gWs_PowerCheck_Shot_Sta	pshm->P[10077]
#define	gWs_PowerCheck_Shot_Seq	pshm->P[10078]
#define	gWs_PowerCheck_Shot_Buf	pshm->P[10079]
#define	gWs_PowerCheck_Shot_Tmr	pshm->P[10080]
#define	gWs_PowerCheck_Shot_Err	pshm->P[10081]
#define	gWs_PowerCheck_Shot_Time	pshm->P[10082]
#define	gWs_PowerCheck_Shot_TimeBuf	pshm->P[10083]
#define	gWs_PowerCheck_Stop_Start	pshm->P[10084]
#define	gWs_PowerCheck_Stop_Abort	pshm->P[10085]
#define	gWs_PowerCheck_Stop_Ena	pshm->P[10086]
#define	gWs_PowerCheck_Stop_Sta	pshm->P[10087]
#define	gWs_PowerCheck_Stop_Seq	pshm->P[10088]
#define	gWs_PowerCheck_Stop_Buf	pshm->P[10089]
#define	gWs_PowerCheck_Stop_Tmr	pshm->P[10090]
#define	gWs_PowerCheck_Stop_Err	pshm->P[10091]
#define	gVs_PostVisionST_Start	pshm->P[10092]
#define	gVs_PostVisionST_Abort	pshm->P[10093]
#define	gVs_PostVisionST_Ena	pshm->P[10094]
#define	gVs_PostVisionST_Sta	pshm->P[10095]
#define	gVs_PostVisionST_Seq	pshm->P[10096]
#define	gVs_PostVisionST_Buf	pshm->P[10097]
#define	gVs_PostVisionST_Tmr	pshm->P[10098]
#define	gVs_PostVisionST_Err	pshm->P[10099]
#define	gVs_PostVisionED_Start	pshm->P[10100]
#define	gVs_PostVisionED_Abort	pshm->P[10101]
#define	gVs_PostVisionED_Ena	pshm->P[10102]
#define	gVs_PostVisionED_Sta	pshm->P[10103]
#define	gVs_PostVisionED_Seq	pshm->P[10104]
#define	gVs_PostVisionED_Buf	pshm->P[10105]
#define	gVs_PostVisionED_Tmr	pshm->P[10106]
#define	gVs_PostVisionED_Err	pshm->P[10107]
#define	gWs_Skip_N2	pshm->P[10108]
#define	gN2BlowState	pshm->P[10109]
#define	gN2BlowOld	pshm->P[10110]
#define	gN2BlowTime	pshm->P[10111]
#define	gIsWsCoverComplete	pshm->P[10112]
#define	gIsVsCoverComplete	pshm->P[10113]
#define	gIsWStationReady	pshm->P[10114]
#define	gIsVStationReady	pshm->P[10115]
#define	gKin_Sf(i)	pshm->P[(10116+i)%MAX_P]
#define	gKin_RotOffset(i)	pshm->P[(10148+i)%MAX_P]
#define	gKin_Len1	pshm->P[10180]
#define	gKin_Len2	pshm->P[10181]
#define	gKin_GalvoSfX	pshm->P[10182]
#define	gKin_GalvoSfY	pshm->P[10183]
#define	gMc_SeqBuf_Idx	pshm->P[10184]
#define	gWs_SeqBuf_Cur	pshm->P[10185]
#define	gWs_SeqBuf_Old	pshm->P[10186]
#define	gVs_SeqBuf_Cur	pshm->P[10187]
#define	gVs_SeqBuf_Old	pshm->P[10188]
#define	gScMon_GalvoAngX	pshm->P[10189]
#define	gScMon_GalvoAngY	pshm->P[10190]
#define	gCoreVoltMin	pshm->P[10191]
#define	gCoreVoltMax	pshm->P[10192]
#define	gCorePowerMin	pshm->P[10193]
#define	gCorePowerMax	pshm->P[10194]
#define	gRingVoltMin	pshm->P[10195]
#define	gRingVoltMax	pshm->P[10196]
#define	gRingPowerMin	pshm->P[10197]
#define	gRingPowerMax	pshm->P[10198]
#define	gTempRawMin	pshm->P[10199]
#define	gTempRawMax	pshm->P[10200]
#define	gSensorTempMin	pshm->P[10201]
#define	gSensorTempMax	pshm->P[10202]
#define	Len_X	pshm->P[10203]
#define	Len_Y	pshm->P[10204]
#define	Len_R	pshm->P[10205]
#define	gWs_Error_Cur2	pshm->P[10206]
#define	gWs_Error_Old2	pshm->P[10207]
#define	gVs_Error_Cur2	pshm->P[10208]
#define	gVs_Error_Old2	pshm->P[10209]
#define	gMc_TransTest_Start	pshm->P[10210]
#define	gMc_TransTest_Abort	pshm->P[10211]
#define	gMc_TransTest_Ena	pshm->P[10212]
#define	gMc_TransTest_Sta	pshm->P[10213]
#define	gMc_TransTest_Seq	pshm->P[10214]
#define	gMc_TransTest_Buf	pshm->P[10215]
#define	gMc_TransTest_Tmr	pshm->P[10216]
#define	gMc_TransTest_Err	pshm->P[10217]
#define	gMc_TransTest_Vel	pshm->P[10218]
#define	gRspSim_PdtNo	pshm->P[10219]
#define	gRspSim_LdAlignX	pshm->P[10220]
#define	gRspSim_LdAlignY	pshm->P[10221]
#define	gRspSim_LdAlignC	pshm->P[10222]
#define	gRspSim_LdDirRep	pshm->P[10223]
#define	gRspSim_2dVsnRsp	pshm->P[10224]
#define	gRspSim_3dVsnRsp	pshm->P[10225]
#define	gRspSim_LdDirJug	pshm->P[10226]
#define	gRspSim_2dVsnJug	pshm->P[10227]
#define	gRspSim_3dVsnJug	pshm->P[10228]
#define	gRspSim_LdDirRat	pshm->P[10229]
#define	gRspSim_2dVsnRat	pshm->P[10230]
#define	gRspSim_3dVsnRat	pshm->P[10231]
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _PPScriptMode_
#else
#ifdef _EnumMode_
enum globalP {_globalP_=-1
,gMach_Type=8192
,gTest_Cnt=8193
,gAi00_WsLoadCell=8194
,gTi00_Ws_TempSen1=8195
,gTi01_Ws_TempSen2=8196
,gKey_RunMod=8197
,gMc_RunMod=8198
,gMc_RunOpt=8199
,gWs_RunOpt=8200
,gVs_RunOpt=8201
,gWs_StepRun=8202
,gVs_StepRun=8203
,gTest_Vel=8204
,gWs_LaserTest_Ena=8205
,gMc_Servo_Cnt_Cur=8206
,gMc_Servo_Cnt_Old=8207
,gMc_Servo_Cnt_Dlt=8208
,gMc_Servo_Prd_Dlt=8209
,gWs_AccLimitX=8210
,gWs_AccLimitY=8211
,gWs_AccLimitC=8212
,gWs_VelLimitC=8213
,gWs_PosX_Cur=8214
,gWs_PosY_Cur=8215
,gWs_PosX_Old=8216
,gWs_PosY_Old=8217
,gWs_PosX_Dlt=8218
,gWs_PosY_Dlt=8219
,gWs_PosV_Dlt=8220
,gWs_Vect_Vel=8221
,gWs_Vect_Sum=8222
,gWs_OutMode=8223
,gWs_RefVel=8224
,gWs_VelRatio=8225
,gWs_LaserEna=8226
,gWs_OutMode_2=8227
,gWs_RefVel_2=8228
,gWs_CorePowSf=8229
,gWs_CoreRefPow=8230
,gWs_CoreMinPow=8231
,gWs_CoreMaxPow=8232
,gWs_CoreOutPow=8233
,gWs_CoreOutVdc=8234
,gWs_CorePfmEna=8235
,gWs_CoreRefPow_2=8236
,gWs_CorePfmEna_2=8237
,gWs_RingPowSf=8238
,gWs_RingRefPow=8239
,gWs_RingMinPow=8240
,gWs_RingMaxPow=8241
,gWs_RingOutPow=8242
,gWs_RingOutVdc=8243
,gWs_RingPfmEna=8244
,gWs_RingRefPow_2=8245
,gWs_RingPfmEna_2=8246
,gWs_PfmRtiCnt=8247
,gWs_PfmPeriod=8248
,gWs_PfmOnTime=8249
,gWs_PfmOnCnt=8250
,gWs_PfmPeriod_2=8251
,gWs_PfmOnTime_2=8252
,gWs_PfmOut=8253
,gWs_PfmBuf=8254
,gWs_PfmCnt=8255
,gWs_PfmOut_2=8256
,gWs_WblEna=8257
,gWs_WblLen=8258
,gWs_WblDst=8259
,gWs_WblCnt=8260
,gWs_WblType=8261
,gWs_WblRatW=8262
,gWs_WblRatL=8263
,gWs_WblOfsX=8264
,gWs_WblOfsY=8265
,gWs_WblEna_2=8266
,gWs_WblLen_2=8267
,gWs_WblDst_2=8268
,gWs_WblCnt_2=8269
,gWs_WblType_2=8270
,gWs_WblRatW_2=8271
,gWs_WblRatL_2=8272
,gWs_WblOfsX_2=8273
,gWs_WblOfsY_2=8274
,gVs_AccLimitX=8275
,gVs_AccLimitY=8276
,gVs_AccLimitC=8277
,gVs_VelLimitC=8278
,gVs_PosX_Cur=8279
,gVs_PosY_Cur=8280
,gVs_PosX_Old=8281
,gVs_PosY_Old=8282
,gVs_PosX_Dlt=8283
,gVs_PosY_Dlt=8284
,gVs_PosV_Dlt=8285
,gVs_Vect_Vel=8286
,gVs_Vect_Sum=8287
,gVs_RefVel=8288
,gVs_PfmPeriod=8289
,gVs_PfmDuty=8290
,gVs_EquEna=8291
,gVs_EquCnt=8292
,gVs_EquSta_Cur=8293
,gVs_EquSta_Old=8294
,gSc_PosX_Cur=8295
,gSc_PosY_Cur=8296
,gSta_Idx=8297
,gCmd_Idx=8298
,gMc_ServoOn_Cur=8875
,gMc_ServoOn_Old=8876
,gMc_ServoOff_Cur=8877
,gMc_ServoOff_Old=8878
,gMc_HomeStart_Cur=8879
,gMc_HomeStart_Old=8880
,gMc_HomeAbort_Cur=8881
,gMc_HomeAbort_Old=8882
,gMc_AlarmReset_Cur=8883
,gMc_AlarmReset_Old=8884
,gMc_RunMod_Cur=8885
,gMc_RunMod_Old=8886
,gMc_AutoStart_Cur=8887
,gMc_AutoStart_Old=8888
,gMc_AutoAbort_Cur=8889
,gMc_AutoAbort_Old=8890
,gMc_AutoPause_Cur=8891
,gMc_AutoPause_Old=8892
,gMc_CycleStart_Cur=8893
,gMc_CycleStart_Old=8894
,gMc_StepStart_Cur=8895
,gMc_StepStart_Old=8896
,gMc_Fsave_Cur=8897
,gMc_Fsave_Old=8898
,gWs_ServoOn_Cur=8899
,gWs_ServoOn_Old=8900
,gWs_ServoOff_Cur=8901
,gWs_ServoOff_Old=8902
,gWs_HomeStart_Cur=8903
,gWs_HomeStart_Old=8904
,gWs_HomeAbort_Cur=8905
,gWs_HomeAbort_Old=8906
,gWs_AlarmReset_Cur=8907
,gWs_AlarmReset_Old=8908
,gWs_AlarmRetry_Cur=8909
,gWs_AlarmRetry_Old=8910
,gWs_AlarmAbort_Cur=8911
,gWs_AlarmAbort_Old=8912
,gWs_PowerCheck_Cur=8913
,gWs_PowerCheck_Old=8914
,gWs_TestShot_Cur=8915
,gWs_TestShot_Old=8916
,gWs_LaserEnableStart_Cur=8917
,gWs_LaserEnableStart_Old=8918
,gWs_LaserDisableStart_Cur=8919
,gWs_LaserDisableStart_Old=8920
,gWs_LaserTestCrossStart_Cur=8921
,gWs_LaserTestCrossStart_Old=8922
,gWs_LaserTestCrossAbort_Cur=8923
,gWs_LaserTestCrossAbort_Old=8924
,gWs_LaserTestLineStart_Cur=8925
,gWs_LaserTestLineStart_Old=8926
,gWs_LaserTestLineAbort_Cur=8927
,gWs_LaserTestLineAbort_Old=8928
,gWs_PowerCheckStart_Cur=8929
,gWs_PowerCheckStart_Old=8930
,gWs_PowerCheckAbort_Cur=8931
,gWs_PowerCheckAbort_Old=8932
,gVs_ServoOn_Cur=8933
,gVs_ServoOn_Old=8934
,gVs_ServoOff_Cur=8935
,gVs_ServoOff_Old=8936
,gVs_HomeStart_Cur=8937
,gVs_HomeStart_Old=8938
,gVs_HomeAbort_Cur=8939
,gVs_HomeAbort_Old=8940
,gVs_AlarmReset_Cur=8941
,gVs_AlarmReset_Old=8942
,gVs_AlarmRetry_Cur=8943
,gVs_AlarmRetry_Old=8944
,gVs_AlarmAbort_Cur=8945
,gVs_AlarmAbort_Old=8946
,gVs_TestShot_Cur=8947
,gVs_TestShot_Old=8948
,gSc_ServoOn_Cur=8949
,gSc_ServoOn_Old=8950
,gSc_ServoOff_Cur=8951
,gSc_ServoOff_Old=8952
,gSc_HomeStart_Cur=8953
,gSc_HomeStart_Old=8954
,gSc_HomeAbort_Cur=8955
,gSc_HomeAbort_Old=8956
,gSc_AlarmReset_Cur=8957
,gSc_AlarmReset_Old=8958
,gWs_LdStart_Cur=8959
,gWs_LdAbort_Cur=8960
,gWs_LdStart_Old=8961
,gWs_LdAbort_Old=8962
,gWs_RdStart_Cur=8963
,gWs_RdAbort_Cur=8964
,gWs_RdStart_Old=8965
,gWs_RdAbort_Old=8966
,gWs_WdStart_Cur=8967
,gWs_WdAbort_Cur=8968
,gWs_WdStart_Old=8969
,gWs_WdAbort_Old=8970
,gWs_WtStart_Cur=8971
,gWs_WtAbort_Cur=8972
,gWs_WtStart_Old=8973
,gWs_WtAbort_Old=8974
,gWs_UdStart_Cur=8975
,gWs_UdAbort_Cur=8976
,gWs_UdStart_Old=8977
,gWs_UdAbort_Old=8978
,gWs_RjStart_Cur=8979
,gWs_RjAbort_Cur=8980
,gWs_RjStart_Old=8981
,gWs_RjAbort_Old=8982
,gVs_LdStart_Cur=8983
,gVs_LdAbort_Cur=8984
,gVs_LdStart_Old=8985
,gVs_LdAbort_Old=8986
,gVs_RdStart_Cur=8987
,gVs_RdAbort_Cur=8988
,gVs_RdStart_Old=8989
,gVs_RdAbort_Old=8990
,gVs_VnStart_Cur=8991
,gVs_VnAbort_Cur=8992
,gVs_VnStart_Old=8993
,gVs_VnAbort_Old=8994
,gVs_WtStart_Cur=8995
,gVs_WtAbort_Cur=8996
,gVs_WtStart_Old=8997
,gVs_WtAbort_Old=8998
,gVs_UdStart_Cur=8999
,gVs_UdAbort_Cur=9000
,gVs_UdStart_Old=9001
,gVs_UdAbort_Old=9002
,gVs_RjStart_Cur=9003
,gVs_RjAbort_Cur=9004
,gVs_RjStart_Old=9005
,gVs_RjAbort_Old=9006
,gWs_PdtStaChange_Cur=9007
,gVs_PdtStaChange_Cur=9008
,gTr_PdtStaChange_Cur=9009
,gWs_PdtStaChange_Old=9010
,gVs_PdtStaChange_Old=9011
,gTr_PdtStaChange_Old=9012
,gWs_Error=9013
,gVs_Error=9014
,gWs_ErrCode=9015
,gVs_ErrCode=9016
,gWs_Error_Cur=9017
,gWs_Error_Old=9018
,gVs_Error_Cur=9019
,gVs_Error_Old=9020
,gSc_Com_Sta=9021
,gEc_WdTimer=9022
,gMc_DistX_Cur=9023
,gMc_DistX_Err=9024
,gWs_Safety_Sta=9025
,gVs_Safety_Sta=9026
,gWs_Safety_Err=9027
,gVs_Safety_Err=9028
,gMc_AlarmReset_Ena=9029
,gWs_AlarmReset_Ena=9030
,gVs_AlarmReset_Ena=9031
,gSc_AlarmReset_Ena=9032
,gWs_AlarmRetry_Ena=9033
,gVs_AlarmRetry_Ena=9034
,gWs_AlarmAbort_Ena=9035
,gVs_AlarmAbort_Ena=9036
,gEc_Con_Start=9069
,gEc_Con_Abort=9070
,gEc_Con_Ena=9071
,gEc_Con_Sta=9072
,gEc_Con_Seq=9073
,gEc_Con_Buf=9074
,gEc_Con_Tmr=9075
,gMt_Home_Idx=9076
,gMc_Home_Start=9365
,gMc_Home_Abort=9366
,gMc_Home_Ena=9367
,gMc_Home_Sta=9368
,gMc_Home_Seq=9369
,gMc_Home_Buf=9370
,gMc_Home_Tmr=9371
,gMc_Home_Err=9372
,gWs_Home_Start=9373
,gWs_Home_Abort=9374
,gWs_Home_Ena=9375
,gWs_Home_Sta=9376
,gWs_Home_Seq=9377
,gWs_Home_Buf=9378
,gWs_Home_Tmr=9379
,gWs_Home_Err=9380
,gVs_Home_Start=9381
,gVs_Home_Abort=9382
,gVs_Home_Ena=9383
,gVs_Home_Sta=9384
,gVs_Home_Seq=9385
,gVs_Home_Buf=9386
,gVs_Home_Tmr=9387
,gVs_Home_Err=9388
,gSc_Home_Start=9389
,gSc_Home_Abort=9390
,gSc_Home_Ena=9391
,gSc_Home_Sta=9392
,gSc_Home_Seq=9393
,gSc_Home_Buf=9394
,gSc_Home_Tmr=9395
,gSc_Home_Err=9396
,gSc_InitSta=9397
,gJog_Idx=9398
,gMc_ServoOn_Ena=9463
,gMc_ServoOff_Ena=9464
,gWs_ServoOn_Ena=9465
,gWs_ServoOff_Ena=9466
,gVs_ServoOn_Ena=9467
,gVs_ServoOff_Ena=9468
,gSc_ServoOn_Ena=9469
,gSc_ServoOff_Ena=9470
,gWd_Mdi_Start=9631
,gWd_Mdi_Abort=9632
,gWd_Mdi_Ena=9633
,gWd_Mdi_Sta=9634
,gWd_Mdi_Seq=9635
,gWd_Mdi_Buf=9636
,gWd_Mdi_Tmr=9637
,gWd_Mdi_Stp=9638
,gWd_Mdi_PosX=9639
,gWd_Mdi_PosY=9640
,gWd_Mdi_PosC=9641
,cMachineID=111
,gWs_PdtNo=9642
,gVs_PdtNo=9643
,gTr_PdtNo=9644
,gWs_LdDir=9645
,gMc_AutoRun_Start=9646
,gMc_AutoRun_Abort=9647
,gMc_AutoRun_Pause=9648
,gMc_Cycle_Start=9649
,gMc_Step_Start=9650
,gMc_AutoRun_Ena=9651
,gMc_AutoRun_Sta=9652
,gMc_AutoRun_Seq=9653
,gMc_AutoRun_Buf=9654
,gMc_AutoRun_Tmr=9655
,gMc_AutoRun_Err=9656
,gWs_Loop_Start=9657
,gWs_Loop_Abort=9658
,gWs_Loop_Pause=9659
,gWs_Loop_Ena=9660
,gWs_Loop_Sta=9661
,gWs_Loop_Seq=9662
,gWs_Loop_Buf=9663
,gWs_Loop_Tmr=9664
,gWs_Loop_Err=9665
,gWs_Loop_Time=9666
,gWs_Loop_TimeBuf=9667
,gWs_Seq_Cur=9668
,gWs_Seq_Old=9669
,gWs_Seq_Err=9670
,gVs_Loop_Start=9671
,gVs_Loop_Abort=9672
,gVs_Loop_Pause=9673
,gVs_Loop_Ena=9674
,gVs_Loop_Sta=9675
,gVs_Loop_Seq=9676
,gVs_Loop_Buf=9677
,gVs_Loop_Tmr=9678
,gVs_Loop_Err=9679
,gVs_Loop_Time=9680
,gVs_Loop_TimeBuf=9681
,gVs_Seq_Cur=9682
,gVs_Seq_Old=9683
,gVs_Seq_Err=9684
,gWs_Sta_Pdt=9685
,gVs_Sta_Pdt=9686
,gTr_Sta_Pdt=9687
,gWs_Sta_PdtBuf=9688
,gVs_Sta_PdtBuf=9689
,gTr_Sta_PdtBuf=9690
,gWs_Sta_Stg=9691
,gVs_Sta_Stg=9692
,gWs_Pos_Pdt=9693
,gVs_Pos_Pdt=9694
,gWs_Pos_Stg=9695
,gVs_Pos_Stg=9696
,gWs_PdtStaChange_Ena=9697
,gVs_PdtStaChange_Ena=9698
,gTr_PdtStaChange_Ena=9699
,gWs_Load_Start=9700
,gWs_Load_Abort=9701
,gWs_Load_Ena=9702
,gWs_Load_Sta=9703
,gWs_Load_Seq=9704
,gWs_Load_Buf=9705
,gWs_Load_Tmr=9706
,gWs_Load_Err=9707
,gWs_Load_VelX=9708
,gWs_Load_VelY=9709
,gWs_Load_VelC=9710
,gWs_Load_PosX=9711
,gWs_Load_PosY=9712
,gWs_Load_PosC=9713
,gWs_Load_Time=9714
,gWs_Load_TimeBuf=9715
,gWs_Ready_Start=9716
,gWs_Ready_Abort=9717
,gWs_Ready_Ena=9718
,gWs_Ready_Sta=9719
,gWs_Ready_Seq=9720
,gWs_Ready_Buf=9721
,gWs_Ready_Tmr=9722
,gWs_Ready_Err=9723
,gWs_Ready_VelX=9724
,gWs_Ready_VelY=9725
,gWs_Ready_VelC=9726
,gWs_Ready_PosX=9727
,gWs_Ready_PosY=9728
,gWs_Ready_PosC=9729
,gWs_Ready_Time=9730
,gWs_Ready_TimeBuf=9731
,gWs_Ready_VsnJudge=9732
,gWs_Welding_Start=9733
,gWs_Welding_Abort=9734
,gWs_Welding_Ena=9735
,gWs_Welding_Sta=9736
,gWs_Welding_Seq=9737
,gWs_Welding_Buf=9738
,gWs_Welding_Tmr=9739
,gWs_Welding_Err=9740
,gWs_Welding_VelX=9741
,gWs_Welding_VelY=9742
,gWs_Welding_VelC=9743
,gWs_Welding_PosX=9744
,gWs_Welding_PosY=9745
,gWs_Welding_PosC=9746
,gWs_Welding_Time=9747
,gWs_Welding_TimeBuf=9748
,gWs_Prog_Dist=9749
,gWs_Prog_Time=9750
,gWs_Prog_TimeBuf=9751
,gWs_File_Prog_Time=9752
,gWs_File_Prog_TimeBuf=9753
,gWs_Wait_Start=9754
,gWs_Wait_Abort=9755
,gWs_Wait_Ena=9756
,gWs_Wait_Sta=9757
,gWs_Wait_Seq=9758
,gWs_Wait_Buf=9759
,gWs_Wait_Tmr=9760
,gWs_Wait_Err=9761
,gWs_Wait_VelX=9762
,gWs_Wait_VelY=9763
,gWs_Wait_VelC=9764
,gWs_Wait_PosX=9765
,gWs_Wait_PosY=9766
,gWs_Wait_PosC=9767
,gWs_Wait_Time=9768
,gWs_Wait_TimeBuf=9769
,gWs_Unload_Start=9770
,gWs_Unload_Abort=9771
,gWs_Unload_Ena=9772
,gWs_Unload_Sta=9773
,gWs_Unload_Seq=9774
,gWs_Unload_Buf=9775
,gWs_Unload_Tmr=9776
,gWs_Unload_Err=9777
,gWs_Unload_VelX=9778
,gWs_Unload_VelY=9779
,gWs_Unload_VelC=9780
,gWs_Unload_PosX=9781
,gWs_Unload_PosY=9782
,gWs_Unload_PosC=9783
,gWs_Unload_Time=9784
,gWs_Unload_TimeBuf=9785
,gWs_Reject_Start=9786
,gWs_Reject_Abort=9787
,gWs_Reject_Ena=9788
,gWs_Reject_Sta=9789
,gWs_Reject_Seq=9790
,gWs_Reject_Buf=9791
,gWs_Reject_Tmr=9792
,gWs_Reject_Err=9793
,gWs_Reject_VelX=9794
,gWs_Reject_VelY=9795
,gWs_Reject_VelC=9796
,gWs_Reject_PosX=9797
,gWs_Reject_PosY=9798
,gWs_Reject_PosC=9799
,gWs_Reject_Time=9800
,gWs_Reject_TimeBuf=9801
,gVs_Load_Start=9802
,gVs_Load_Abort=9803
,gVs_Load_Ena=9804
,gVs_Load_Sta=9805
,gVs_Load_Seq=9806
,gVs_Load_Buf=9807
,gVs_Load_Tmr=9808
,gVs_Load_Err=9809
,gVs_Load_VelX=9810
,gVs_Load_VelY=9811
,gVs_Load_VelC=9812
,gVs_Load_PosX=9813
,gVs_Load_PosY=9814
,gVs_Load_PosC=9815
,gVs_Load_Time=9816
,gVs_Load_TimeBuf=9817
,gVs_Ready_Start=9818
,gVs_Ready_Abort=9819
,gVs_Ready_Ena=9820
,gVs_Ready_Sta=9821
,gVs_Ready_Seq=9822
,gVs_Ready_Buf=9823
,gVs_Ready_Tmr=9824
,gVs_Ready_Err=9825
,gVs_Ready_VelX=9826
,gVs_Ready_VelY=9827
,gVs_Ready_VelC=9828
,gVs_Ready_PosX=9829
,gVs_Ready_PosY=9830
,gVs_Ready_PosC=9831
,gVs_Ready_Time=9832
,gVs_Ready_TimeBuf=9833
,gVs_Ready_VsnJudge=9834
,gVs_Vision_Start=9835
,gVs_Vision_Abort=9836
,gVs_Vision_Ena=9837
,gVs_Vision_Sta=9838
,gVs_Vision_Seq=9839
,gVs_Vision_Buf=9840
,gVs_Vision_Tmr=9841
,gVs_Vision_Err=9842
,gVs_Vision_VelX=9843
,gVs_Vision_VelY=9844
,gVs_Vision_VelC=9845
,gVs_Vision_PosX=9846
,gVs_Vision_PosY=9847
,gVs_Vision_PosC=9848
,gVs_Vision_Time=9849
,gVs_Vision_TimeBuf=9850
,gVs_Prog_Dist=9851
,gVs_Prog_Time=9852
,gVs_Prog_TimeBuf=9853
,gVs_Vision_VsnJudge=9854
,gVs_Wait_Start=9855
,gVs_Wait_Abort=9856
,gVs_Wait_Ena=9857
,gVs_Wait_Sta=9858
,gVs_Wait_Seq=9859
,gVs_Wait_Buf=9860
,gVs_Wait_Tmr=9861
,gVs_Wait_Err=9862
,gVs_Wait_VelX=9863
,gVs_Wait_VelY=9864
,gVs_Wait_VelC=9865
,gVs_Wait_PosX=9866
,gVs_Wait_PosY=9867
,gVs_Wait_PosC=9868
,gVs_Wait_Time=9869
,gVs_Wait_TimeBuf=9870
,gVs_Unload_Start=9871
,gVs_Unload_Abort=9872
,gVs_Unload_Ena=9873
,gVs_Unload_Sta=9874
,gVs_Unload_Seq=9875
,gVs_Unload_Buf=9876
,gVs_Unload_Tmr=9877
,gVs_Unload_Err=9878
,gVs_Unload_VelX=9879
,gVs_Unload_VelY=9880
,gVs_Unload_VelC=9881
,gVs_Unload_PosX=9882
,gVs_Unload_PosY=9883
,gVs_Unload_PosC=9884
,gVs_Unload_Time=9885
,gVs_Unload_TimeBuf=9886
,gVs_Reject_Start=9887
,gVs_Reject_Abort=9888
,gVs_Reject_Ena=9889
,gVs_Reject_Sta=9890
,gVs_Reject_Seq=9891
,gVs_Reject_Buf=9892
,gVs_Reject_Tmr=9893
,gVs_Reject_Err=9894
,gVs_Reject_VelX=9895
,gVs_Reject_VelY=9896
,gVs_Reject_VelC=9897
,gVs_Reject_PosX=9898
,gVs_Reject_PosY=9899
,gVs_Reject_PosC=9900
,gVs_Reject_Time=9901
,gVs_Reject_TimeBuf=9902
,gWs_CldInpos_Delay=9903
,gVs_CldInpos_Delay=9904
,gWs_CldIn_CoverUD=9905
,gWs_CldIn_CoverFB=9906
,gWs_CldIn_TempFB=9907
,gWs_CldIn_ShtrOC=9908
,gVs_CldIn_CoverUD=9909
,gVs_CldIn_CoverFB=9910
,gTr_CldIn_PickerUD=9911
,gTr_CldIn_PickerOC=9912
,gWs_Epr_OutVdc=9913
,gWs_EcldHome_Start=9914
,gWs_EcldHome_Abort=9915
,gWs_EcldHome_Ena=9916
,gWs_EcldHome_Sta=9917
,gWs_EcldHome_Seq=9918
,gWs_EcldHome_Buf=9919
,gWs_EcldHome_Tmr=9920
,gWs_EcldHome_Err=9921
,gWs_EcldHome_Try=9922
,gWs_EcldHome_Fin=9923
,gWs_EcldFwd_Start=9924
,gWs_EcldFwd_Abort=9925
,gWs_EcldFwd_Ena=9926
,gWs_EcldFwd_Sta=9927
,gWs_EcldFwd_Seq=9928
,gWs_EcldFwd_Buf=9929
,gWs_EcldFwd_Tmr=9930
,gWs_EcldFwd_Err=9931
,gWs_EcldFwd_Try=9932
,gWs_EcldBwd_Start=9933
,gWs_EcldBwd_Abort=9934
,gWs_EcldBwd_Ena=9935
,gWs_EcldBwd_Sta=9936
,gWs_EcldBwd_Seq=9937
,gWs_EcldBwd_Buf=9938
,gWs_EcldBwd_Tmr=9939
,gWs_EcldBwd_Err=9940
,gWs_EcldBwd_Try=9941
,gWs_EcldCmdFwd_Cur=9942
,gWs_EcldCmdFwd_Old=9943
,gWs_EcldCmdBwd_Cur=9944
,gWs_EcldCmdBwd_Old=9945
,gWs_TestShot_Ena=9946
,gWs_TestShot_Time=9947
,gVs_TestShot_Ena=9948
,gVs_TestShot_Time=9949
,gVs_TestShot_TimeBuf=9950
,gVs_TestShot_Seq=9951
,gVs_TestShot_Tmr=9952
,gWs_LaserSta_Ready=9953
,gWs_LaserSta_Enable=9954
,gWs_LaserSta_CorePower=9955
,gWs_LaserSta_RingPower=9956
,gWs_LaserEnable_Start=9957
,gWs_LaserEnable_Abort=9958
,gWs_LaserEnable_Ena=9959
,gWs_LaserEnable_Sta=9960
,gWs_LaserEnable_Seq=9961
,gWs_LaserEnable_Buf=9962
,gWs_LaserEnable_Tmr=9963
,gWs_LaserEnable_Err=9964
,gWs_LaserDisable_Start=9965
,gWs_LaserDisable_Abort=9966
,gWs_LaserDisable_Ena=9967
,gWs_LaserDisable_Sta=9968
,gWs_LaserDisable_Seq=9969
,gWs_LaserDisable_Buf=9970
,gWs_LaserDisable_Tmr=9971
,gWs_LaserDisable_Err=9972
,gWs_LaserTestCross_Start=9973
,gWs_LaserTestCross_Abort=9974
,gWs_LaserTestCross_Ena=9975
,gWs_LaserTestCross_Sta=9976
,gWs_LaserTestCross_Seq=9977
,gWs_LaserTestCross_Buf=9978
,gWs_LaserTestCross_Tmr=9979
,gWs_LaserTestCross_Err=9980
,gWs_LaserTestLine_Start=9981
,gWs_LaserTestLine_Abort=9982
,gWs_LaserTestLine_Ena=9983
,gWs_LaserTestLine_Sta=9984
,gWs_LaserTestLine_Seq=9985
,gWs_LaserTestLine_Buf=9986
,gWs_LaserTestLine_Tmr=9987
,gWs_LaserTestLine_Err=9988
,gWs_TgtMov_Start=9989
,gWs_TgtMov_Abort=9990
,gWs_TgtMov_Ena=9991
,gWs_TgtMov_Sta=9992
,gWs_TgtMov_Seq=9993
,gWs_TgtMov_Buf=9994
,gWs_TgtMov_Tmr=9995
,gWs_TgtMov_Err=9996
,gVs_TgtMov_Start=9997
,gVs_TgtMov_Abort=9998
,gVs_TgtMov_Ena=9999
,gVs_TgtMov_Sta=10000
,gVs_TgtMov_Seq=10001
,gVs_TgtMov_Buf=10002
,gVs_TgtMov_Tmr=10003
,gVs_TgtMov_Err=10004
,gWs_TgtMov_VelX=10005
,gWs_TgtMov_VelY=10006
,gWs_TgtMov_VelC=10007
,gWs_TgtMov_PosX=10008
,gWs_TgtMov_PosY=10009
,gWs_TgtMov_PosC=10010
,gVs_TgtMov_VelX=10011
,gVs_TgtMov_VelY=10012
,gVs_TgtMov_VelC=10013
,gVs_TgtMov_PosX=10014
,gVs_TgtMov_PosY=10015
,gVs_TgtMov_PosC=10016
,gWs_CoverOpn_TgtAng=10017
,gWs_CoverOpn_Start=10018
,gWs_CoverOpn_Abort=10019
,gWs_CoverOpn_Ena=10020
,gWs_CoverOpn_Sta=10021
,gWs_CoverOpn_Seq=10022
,gWs_CoverOpn_Buf=10023
,gWs_CoverOpn_Tmr=10024
,gWs_CoverOpn_Err=10025
,gWs_CoverCls_Start=10026
,gWs_CoverCls_Abort=10027
,gWs_CoverCls_Ena=10028
,gWs_CoverCls_Sta=10029
,gWs_CoverCls_Seq=10030
,gWs_CoverCls_Buf=10031
,gWs_CoverCls_Tmr=10032
,gWs_CoverCls_Err=10033
,gWsV_CoverOpn_Start=10034
,gWsV_CoverOpn_Abort=10035
,gWsV_CoverOpn_Ena=10036
,gWsV_CoverOpn_Sta=10037
,gWsV_CoverOpn_Seq=10038
,gWsV_CoverOpn_Buf=10039
,gWsV_CoverOpn_Tmr=10040
,gWsV_CoverOpn_Err=10041
,gWsV_CoverCls_Start=10042
,gWsV_CoverCls_Abort=10043
,gWsV_CoverCls_Ena=10044
,gWsV_CoverCls_Sta=10045
,gWsV_CoverCls_Seq=10046
,gWsV_CoverCls_Buf=10047
,gWsV_CoverCls_Tmr=10048
,gWsV_CoverCls_Err=10049
,gWsV_Cover_Cur=10050
,gVs_CoverOpn_Start=10051
,gVs_CoverOpn_Abort=10052
,gVs_CoverOpn_Ena=10053
,gVs_CoverOpn_Sta=10054
,gVs_CoverOpn_Seq=10055
,gVs_CoverOpn_Buf=10056
,gVs_CoverOpn_Tmr=10057
,gVs_CoverOpn_Err=10058
,gVs_CoverCls_Start=10059
,gVs_CoverCls_Abort=10060
,gVs_CoverCls_Ena=10061
,gVs_CoverCls_Sta=10062
,gVs_CoverCls_Seq=10063
,gVs_CoverCls_Buf=10064
,gVs_CoverCls_Tmr=10065
,gVs_CoverCls_Err=10066
,gWs_ThCoverPos_Old=10067
,gVs_ThCoverPos_Old=10068
,gWs_ThTargetPos_Old=10069
,gVs_ThTargetPos_Old=10070
,gWs_CoverMoving_Sta=10071
,gVs_CoverMoving_Sta=10072
,gBlow_Time=10073
,gWs_PowerCheck_Shot_Start=10074
,gWs_PowerCheck_Shot_Abort=10075
,gWs_PowerCheck_Shot_Ena=10076
,gWs_PowerCheck_Shot_Sta=10077
,gWs_PowerCheck_Shot_Seq=10078
,gWs_PowerCheck_Shot_Buf=10079
,gWs_PowerCheck_Shot_Tmr=10080
,gWs_PowerCheck_Shot_Err=10081
,gWs_PowerCheck_Shot_Time=10082
,gWs_PowerCheck_Shot_TimeBuf=10083
,gWs_PowerCheck_Stop_Start=10084
,gWs_PowerCheck_Stop_Abort=10085
,gWs_PowerCheck_Stop_Ena=10086
,gWs_PowerCheck_Stop_Sta=10087
,gWs_PowerCheck_Stop_Seq=10088
,gWs_PowerCheck_Stop_Buf=10089
,gWs_PowerCheck_Stop_Tmr=10090
,gWs_PowerCheck_Stop_Err=10091
,gVs_PostVisionST_Start=10092
,gVs_PostVisionST_Abort=10093
,gVs_PostVisionST_Ena=10094
,gVs_PostVisionST_Sta=10095
,gVs_PostVisionST_Seq=10096
,gVs_PostVisionST_Buf=10097
,gVs_PostVisionST_Tmr=10098
,gVs_PostVisionST_Err=10099
,gVs_PostVisionED_Start=10100
,gVs_PostVisionED_Abort=10101
,gVs_PostVisionED_Ena=10102
,gVs_PostVisionED_Sta=10103
,gVs_PostVisionED_Seq=10104
,gVs_PostVisionED_Buf=10105
,gVs_PostVisionED_Tmr=10106
,gVs_PostVisionED_Err=10107
,gWs_Skip_N2=10108
,gN2BlowState=10109
,gN2BlowOld=10110
,gN2BlowTime=10111
,gIsWsCoverComplete=10112
,gIsVsCoverComplete=10113
,gIsWStationReady=10114
,gIsVStationReady=10115
,gKin_Len1=10180
,gKin_Len2=10181
,gKin_GalvoSfX=10182
,gKin_GalvoSfY=10183
,gMc_SeqBuf_Idx=10184
,gWs_SeqBuf_Cur=10185
,gWs_SeqBuf_Old=10186
,gVs_SeqBuf_Cur=10187
,gVs_SeqBuf_Old=10188
,gScMon_GalvoAngX=10189
,gScMon_GalvoAngY=10190
,gCoreVoltMin=10191
,gCoreVoltMax=10192
,gCorePowerMin=10193
,gCorePowerMax=10194
,gRingVoltMin=10195
,gRingVoltMax=10196
,gRingPowerMin=10197
,gRingPowerMax=10198
,gTempRawMin=10199
,gTempRawMax=10200
,gSensorTempMin=10201
,gSensorTempMax=10202
,Len_X=10203
,Len_Y=10204
,Len_R=10205
,gWs_Error_Cur2=10206
,gWs_Error_Old2=10207
,gVs_Error_Cur2=10208
,gVs_Error_Old2=10209
,gMc_TransTest_Start=10210
,gMc_TransTest_Abort=10211
,gMc_TransTest_Ena=10212
,gMc_TransTest_Sta=10213
,gMc_TransTest_Seq=10214
,gMc_TransTest_Buf=10215
,gMc_TransTest_Tmr=10216
,gMc_TransTest_Err=10217
,gMc_TransTest_Vel=10218
,gRspSim_PdtNo=10219
,gRspSim_LdAlignX=10220
,gRspSim_LdAlignY=10221
,gRspSim_LdAlignC=10222
,gRspSim_LdDirRep=10223
,gRspSim_2dVsnRsp=10224
,gRspSim_3dVsnRsp=10225
,gRspSim_LdDirJug=10226
,gRspSim_2dVsnJug=10227
,gRspSim_3dVsnJug=10228
,gRspSim_LdDirRat=10229
,gRspSim_2dVsnRat=10230
,gRspSim_3dVsnRat=10231};
enum globalParray {_globalParray_=-1
,gMt_HomeStart_Cur=8299
,gMt_HomeStart_Old=8331
,gMt_HomeAbort_Cur=8363
,gMt_HomeAbort_Old=8395
,gMt_ServoOn_Cur=8427
,gMt_ServoOn_Old=8459
,gMt_ServoOff_Cur=8491
,gMt_ServoOff_Old=8523
,gMt_Jog_Stop_Cur=8555
,gMt_Jog_Stop_Old=8587
,gMt_Jog_ContPlus_Cur=8619
,gMt_Jog_ContPlus_Old=8651
,gMt_Jog_ContMinus_Cur=8683
,gMt_Jog_ContMinus_Old=8715
,gMt_Jog_AbsMove_Cur=8747
,gMt_Jog_AbsMove_Old=8779
,gMt_Jog_IncMove_Cur=8811
,gMt_Jog_IncMove_Old=8843
,gEc_Com_Sta=9037
,gMt_Home_Start=9077
,gMt_Home_Abort=9109
,gMt_Home_Ena=9141
,gMt_Home_Sta=9173
,gMt_Home_Seq=9205
,gMt_Home_Buf=9237
,gMt_Home_Tmr=9269
,gMt_Home_Err=9301
,gMt_Home_Pos=9333
,gMt_ServoOn_Ena=9399
,gMt_ServoOff_Ena=9431
,gJog_Stop_Ena=9471
,gJog_ContPlus_Ena=9503
,gJog_ContMinus_Ena=9535
,gJog_AbsMove_Ena=9567
,gJog_IncMove_Ena=9599
,gKin_Sf=10116
,gKin_RotOffset=10148};
enum csglobalQ {_csglobalQ_=-1};
enum csglobalQarray {_csglobalQarray_=-1};
enum ptrM {_ptrM_=-1
,pEcat_EcldrDi_Out0=8192
,pEcat_EcldrDi_Out1=8193
,pEcat_EcldrDi_Out2=8194
,pEcat_EcldrDi_Out3=8195
,pEcat_EcldrDi_Out4=8196
,pEcat_EcldrDi_Out5=8197
,pEcat_EcldrDi_Busy=8198
,pEcat_EcldrDi_Svre=8199
,pEcat_EcldrDi_Seton=8200
,pEcat_EcldrDi_Inp=8201
,pEcat_EcldrDi_Area=8202
,pEcat_EcldrDi_Warea=8203
,pEcat_EcldrDi_Estop=8204
,pEcat_EcldrDi_Alarm=8205
,pEcat_EcldrDo_In0=8206
,pEcat_EcldrDo_In1=8207
,pEcat_EcldrDo_In2=8208
,pEcat_EcldrDo_In3=8209
,pEcat_EcldrDo_In4=8210
,pEcat_EcldrDo_In5=8211
,pEcat_EcldrDo_Hold=8212
,pEcat_EcldrDo_Svon=8213
,pEcat_EcldrDo_Drive=8214
,pEcat_EcldrDo_Reset=8215
,pEcat_EcldrDo_Setup=8216
,pEcat_EcldrDo_JogM=8217
,pEcat_EcldrDo_JogP=8218
,pEcat_EcldrDo_Flgth=8219
,pEcat_EcldrJog_Flg=8220
,pEcat_EcldrJog_Std=8221
,pEcat_EcldrJog_Trg=8222
,pEcat_EcldrJog_Mod=8223
,pEcat_EcldrJog_Vel=8224
,pEcat_EcldrJog_Pos=8225
,pEcat_EcldrJog_Acc=8226
,pEcat_EcldrJog_Dec=8227
,pEcat_EcldrJog_InP=8228
,pEcat_Ecldr_CmdPos=8229
,pEcat_Ecldr_ActPos=8230
,pEcat_Di10_WsLtFixUp=8295
,pEcat_Di11_WsVsLtStrCls=8296
,pEcat_Di12_WsLtFixDn=8297
,pEcat_Di13_WsVsLtStrOpn=8298
,pEcat_Di14_WsRtFixUp=8299
,pEcat_Di15_WsVsRtStrCls=8300
,pEcat_Di16_WsRtFixDn=8301
,pEcat_Di17_WsVsRtStrOpn=8302
,pEcat_Di18_WsTempBwd=8303
,pEcat_Di19_TrPickUp=8304
,pEcat_Di1A_WsTempFwd=8305
,pEcat_Di1B_TrPickDn=8306
,pEcat_Di1C_WsTbDet=8307
,pEcat_Di1D_TrGripCls=8308
,pEcat_Di1E=8309
,pEcat_Di1F_TrGripOpn=8310
,pEcat_Di20_VsTbFixBwd=8311
,pEcat_Di21_WsAirCurtain=8312
,pEcat_Di22_VsTbFixFwd=8313
,pEcat_Di23_WsN2Blow=8314
,pEcat_Di24_VsTbFixUp=8315
,pEcat_Di25=8316
,pEcat_Di26_VsTbFixDn=8317
,pEcat_Di27=8318
,pEcat_Di28=8319
,pEcat_Di29=8320
,pEcat_Di2A=8321
,pEcat_Di2B=8322
,pEcat_Di2C_VsTbDet=8323
,pEcat_Di2D=8324
,pEcat_Di2E=8325
,pEcat_Di2F=8326
,pEcat_Do10_WsTbFixUp=8327
,pEcat_Do11_WsTempBwd=8328
,pEcat_Do12_WsTbFixDn=8329
,pEcat_Do13_WsTempFwd=8330
,pEcat_Do14_TrGripCls=8331
,pEcat_Do15_VsTbFixBwd=8332
,pEcat_Do16_TrGripOpn=8333
,pEcat_Do17_VsTbFixFwd=8334
,pEcat_Do18_TrPickUp=8335
,pEcat_Do19_VsTbFixUp=8336
,pEcat_Do1A_TrPickDn=8337
,pEcat_Do1B_VsTbFixDn=8338
,pEcat_Do1C_WsVsStrCls=8339
,pEcat_Do1D_WsCoolAir=8340
,pEcat_Do1E_WsVsStrOpn=8341
,pEcat_Do1F=8342
,pEcat_Do20_WsTbVacm=8343
,pEcat_Do21_WsAirCurtain=8344
,pEcat_Do22_WsTbBlow=8345
,pEcat_Do23_WsN2Blow=8346
,pEcat_Do24=8347
,pEcat_Do25_WsTbVacmBlowEna=8348
,pEcat_Do26=8349
,pEcat_Do27=8350
,pEcat_Do28=8351
,pEcat_Do29=8352
,pEcat_Do2A=8353
,pEcat_Do2B=8354
,pEcat_Di2C_VsTbDetect=8355
,pEcat_Do2D=8356
,pEcat_Do2E=8357
,pEcat_Do2F=8358
,pEcat_Ai00_WsLoadCell=8359
,pBuf_Ai00_WsLoadCell=8360
,pEcat_Ai01=8361
,pEcat_Ai03_WsCorePower=8362
,pBuf_Ai03_WsCorePower=8363
,pEcat_Ai04_WsRingPower=8364
,pBuf_Ai04_WsRingPower=8365
,pEcat_Ti00_Ws_TempSen1=8366
,pEcat_Ti01_Ws_TempSen2=8367
,pBuf_Ti00_Ws_TempSen1=8368
,pBuf_Ti01_Ws_TempSen2=8369
,pGpio_Di00=8562
,pGpio_Di01_LaserReady=8563
,pGpio_Di02_LaserReqResp=8564
,pGpio_Di03_LaserPowerOn=8565
,pGpio_Di04_LaserProgRun=8566
,pGpio_Di05_LaserWarning=8567
,pGpio_Di06_LaserAbnormal=8568
,pGpio_Di07=8569
,pGpio_Di08=8570
,pGpio_Di09=8571
,pGpio_Di0A=8572
,pGpio_Di0B=8573
,pGpio_Di0C=8574
,pGpio_Di0D=8575
,pGpio_Di0E=8576
,pGpio_Di0F=8577
,pGpio_Do00_LaserEmission=8578
,pGpio_Do01_LaserReset=8579
,pGpio_Do02_LaserRequest=8580
,pGpio_Do03_LaserPowerOn=8581
,pGpio_Do04_LaserAdInEna=8582
,pGpio_Do05_LaserGuideEna=8583
,pGpio_Do06_LaserProgEna=8584
,pGpio_Do07_LaserProgStop=8585
,pGpio_Do08=8586
,pGpio_Do09=8587
,pGpio_Do0A=8588
,pGpio_Do0B=8589
,pGpio_Do0C=8590
,pGpio_Do0D=8591
,pGpio_Do0E=8592
,pGpio_Do0F=8593
,pUmem_Sta_01_CmdPos=8594
,pUmem_Sta_01_ActPos=8595
,pUmem_Sta_01_Velocity=8596
,pUmem_Sta_01_Load=8597
,pUmem_Sta_01_AmpEna=8598
,pUmem_Sta_01_CloseLoop=8599
,pUmem_Sta_01_InPos=8600
,pUmem_Sta_01_HomeFin=8601
,pUmem_Sta_01_HomeIng=8602
,pUmem_Sta_01_LimitMinus=8603
,pUmem_Sta_01_LimitPlus=8604
,pUmem_Sta_01_FollowingErr=8605
,pUmem_Sta_01_AmpFault=8606
,pUmem_Sta_01_EncLoss=8607
,pUmem_Sta_01_I2tErr=8608
,pUmem_Sta_01_ProgPos=8609
,pUmem_Sta_TBD_2750=8610
,pUmem_Sta_TBD_2754=8611
,pUmem_Sta_TBD_2758=8612
,pUmem_Sta_TBD_275C=8613
,pUmem_Sta_02_CmdPos=8614
,pUmem_Sta_02_ActPos=8615
,pUmem_Sta_02_Velocity=8616
,pUmem_Sta_02_Load=8617
,pUmem_Sta_02_AmpEna=8618
,pUmem_Sta_02_CloseLoop=8619
,pUmem_Sta_02_InPos=8620
,pUmem_Sta_02_HomeFin=8621
,pUmem_Sta_02_HomeIng=8622
,pUmem_Sta_02_LimitMinus=8623
,pUmem_Sta_02_LimitPlus=8624
,pUmem_Sta_02_FollowingErr=8625
,pUmem_Sta_02_AmpFault=8626
,pUmem_Sta_02_EncLoss=8627
,pUmem_Sta_02_I2tErr=8628
,pUmem_Sta_02_ProgPos=8629
,pUmem_Sta_TBD_27A0=8630
,pUmem_Sta_TBD_27A4=8631
,pUmem_Sta_TBD_27A8=8632
,pUmem_Sta_TBD_27AC=8633
,pUmem_Sta_03_CmdPos=8634
,pUmem_Sta_03_ActPos=8635
,pUmem_Sta_03_Velocity=8636
,pUmem_Sta_03_Load=8637
,pUmem_Sta_03_AmpEna=8638
,pUmem_Sta_03_CloseLoop=8639
,pUmem_Sta_03_InPos=8640
,pUmem_Sta_03_HomeFin=8641
,pUmem_Sta_03_HomeIng=8642
,pUmem_Sta_03_LimitMinus=8643
,pUmem_Sta_03_LimitPlus=8644
,pUmem_Sta_03_FollowingErr=8645
,pUmem_Sta_03_AmpFault=8646
,pUmem_Sta_03_EncLoss=8647
,pUmem_Sta_03_I2tErr=8648
,pUmem_Sta_03_ProgPos=8649
,pUmem_Sta_TBD_27F0=8650
,pUmem_Sta_TBD_27F4=8651
,pUmem_Sta_TBD_27F8=8652
,pUmem_Sta_TBD_27FC=8653
,pUmem_Sta_04_CmdPos=8654
,pUmem_Sta_04_ActPos=8655
,pUmem_Sta_04_Velocity=8656
,pUmem_Sta_04_Load=8657
,pUmem_Sta_04_AmpEna=8658
,pUmem_Sta_04_CloseLoop=8659
,pUmem_Sta_04_InPos=8660
,pUmem_Sta_04_HomeFin=8661
,pUmem_Sta_04_HomeIng=8662
,pUmem_Sta_04_LimitMinus=8663
,pUmem_Sta_04_LimitPlus=8664
,pUmem_Sta_04_FollowingErr=8665
,pUmem_Sta_04_AmpFault=8666
,pUmem_Sta_04_EncLoss=8667
,pUmem_Sta_04_I2tErr=8668
,pUmem_Sta_04_ProgPos=8669
,pUmem_Sta_TBD_2840=8670
,pUmem_Sta_TBD_2844=8671
,pUmem_Sta_TBD_2848=8672
,pUmem_Sta_TBD_284C=8673
,pUmem_Sta_05_CmdPos=8674
,pUmem_Sta_05_ActPos=8675
,pUmem_Sta_05_Velocity=8676
,pUmem_Sta_05_Load=8677
,pUmem_Sta_05_AmpEna=8678
,pUmem_Sta_05_CloseLoop=8679
,pUmem_Sta_05_InPos=8680
,pUmem_Sta_05_HomeFin=8681
,pUmem_Sta_05_HomeIng=8682
,pUmem_Sta_05_LimitMinus=8683
,pUmem_Sta_05_LimitPlus=8684
,pUmem_Sta_05_FollowingErr=8685
,pUmem_Sta_05_AmpFault=8686
,pUmem_Sta_05_EncLoss=8687
,pUmem_Sta_05_I2tErr=8688
,pUmem_Sta_05_ProgPos=8689
,pUmem_Sta_TBD_2890=8690
,pUmem_Sta_TBD_2894=8691
,pUmem_Sta_TBD_2898=8692
,pUmem_Sta_TBD_289C=8693
,pUmem_Sta_06_CmdPos=8694
,pUmem_Sta_06_ActPos=8695
,pUmem_Sta_06_Velocity=8696
,pUmem_Sta_06_Load=8697
,pUmem_Sta_06_AmpEna=8698
,pUmem_Sta_06_CloseLoop=8699
,pUmem_Sta_06_InPos=8700
,pUmem_Sta_06_HomeFin=8701
,pUmem_Sta_06_HomeIng=8702
,pUmem_Sta_06_LimitMinus=8703
,pUmem_Sta_06_LimitPlus=8704
,pUmem_Sta_06_FollowingErr=8705
,pUmem_Sta_06_AmpFault=8706
,pUmem_Sta_06_EncLoss=8707
,pUmem_Sta_06_I2tErr=8708
,pUmem_Sta_06_ProgPos=8709
,pUmem_Sta_TBD_28E0=8710
,pUmem_Sta_TBD_28E4=8711
,pUmem_Sta_TBD_28E8=8712
,pUmem_Sta_TBD_28EC=8713
,pUmem_Sta_07_CmdPos=8714
,pUmem_Sta_07_ActPos=8715
,pUmem_Sta_07_Velocity=8716
,pUmem_Sta_07_Load=8717
,pUmem_Sta_07_AmpEna=8718
,pUmem_Sta_07_CloseLoop=8719
,pUmem_Sta_07_InPos=8720
,pUmem_Sta_07_HomeFin=8721
,pUmem_Sta_07_HomeIng=8722
,pUmem_Sta_07_LimitMinus=8723
,pUmem_Sta_07_LimitPlus=8724
,pUmem_Sta_07_FollowingErr=8725
,pUmem_Sta_07_AmpFault=8726
,pUmem_Sta_07_EncLoss=8727
,pUmem_Sta_07_I2tErr=8728
,pUmem_Sta_07_ProgPos=8729
,pUmem_Sta_TBD_2930=8730
,pUmem_Sta_TBD_2934=8731
,pUmem_Sta_TBD_2938=8732
,pUmem_Sta_TBD_293C=8733
,pUmem_Sta_08_CmdPos=8734
,pUmem_Sta_08_ActPos=8735
,pUmem_Sta_08_Velocity=8736
,pUmem_Sta_08_Load=8737
,pUmem_Sta_08_AmpEna=8738
,pUmem_Sta_08_CloseLoop=8739
,pUmem_Sta_08_InPos=8740
,pUmem_Sta_08_HomeFin=8741
,pUmem_Sta_08_HomeIng=8742
,pUmem_Sta_08_LimitMinus=8743
,pUmem_Sta_08_LimitPlus=8744
,pUmem_Sta_08_FollowingErr=8745
,pUmem_Sta_08_AmpFault=8746
,pUmem_Sta_08_EncLoss=8747
,pUmem_Sta_08_I2tErr=8748
,pUmem_Sta_08_ProgPos=8749
,pUmem_Sta_TBD_2980=8750
,pUmem_Sta_TBD_2984=8751
,pUmem_Sta_TBD_2988=8752
,pUmem_Sta_TBD_298C=8753
,pUmem_Sta_09_CmdPos=8754
,pUmem_Sta_09_ActPos=8755
,pUmem_Sta_09_Velocity=8756
,pUmem_Sta_09_Load=8757
,pUmem_Sta_09_AmpEna=8758
,pUmem_Sta_09_CloseLoop=8759
,pUmem_Sta_09_InPos=8760
,pUmem_Sta_09_HomeFin=8761
,pUmem_Sta_09_HomeIng=8762
,pUmem_Sta_09_LimitMinus=8763
,pUmem_Sta_09_LimitPlus=8764
,pUmem_Sta_09_FollowingErr=8765
,pUmem_Sta_09_AmpFault=8766
,pUmem_Sta_09_EncLoss=8767
,pUmem_Sta_09_I2tErr=8768
,pUmem_Sta_09_ProgPos=8769
,pUmem_Sta_TBD_29D0=8770
,pUmem_Sta_TBD_29D4=8771
,pUmem_Sta_TBD_29D8=8772
,pUmem_Sta_TBD_29DC=8773
,pUmem_Sta_10_CmdPos=8774
,pUmem_Sta_10_ActPos=8775
,pUmem_Sta_10_Velocity=8776
,pUmem_Sta_10_Load=8777
,pUmem_Sta_10_AmpEna=8778
,pUmem_Sta_10_CloseLoop=8779
,pUmem_Sta_10_InPos=8780
,pUmem_Sta_10_HomeFin=8781
,pUmem_Sta_10_HomeIng=8782
,pUmem_Sta_10_LimitMinus=8783
,pUmem_Sta_10_LimitPlus=8784
,pUmem_Sta_10_FollowingErr=8785
,pUmem_Sta_10_AmpFault=8786
,pUmem_Sta_10_EncLoss=8787
,pUmem_Sta_10_I2tErr=8788
,pUmem_Sta_10_ProgPos=8789
,pUmem_Sta_TBD_2A20=8790
,pUmem_Sta_TBD_2A24=8791
,pUmem_Sta_TBD_2A28=8792
,pUmem_Sta_TBD_2A2C=8793
,pUmem_Sta_11_CmdPos=8794
,pUmem_Sta_11_ActPos=8795
,pUmem_Sta_11_Velocity=8796
,pUmem_Sta_11_Load=8797
,pUmem_Sta_11_AmpEna=8798
,pUmem_Sta_11_CloseLoop=8799
,pUmem_Sta_11_InPos=8800
,pUmem_Sta_11_HomeFin=8801
,pUmem_Sta_11_HomeIng=8802
,pUmem_Sta_11_LimitMinus=8803
,pUmem_Sta_11_LimitPlus=8804
,pUmem_Sta_11_FollowingErr=8805
,pUmem_Sta_11_AmpFault=8806
,pUmem_Sta_11_EncLoss=8807
,pUmem_Sta_11_I2tErr=8808
,pUmem_Sta_11_ProgPos=8809
,pUmem_Sta_TBD_2A70=8810
,pUmem_Sta_TBD_2A74=8811
,pUmem_Sta_TBD_2A78=8812
,pUmem_Sta_TBD_2A7C=8813
,pUmem_Sta_12_CmdPos=8814
,pUmem_Sta_12_ActPos=8815
,pUmem_Sta_12_Velocity=8816
,pUmem_Sta_12_Load=8817
,pUmem_Sta_12_AmpEna=8818
,pUmem_Sta_12_CloseLoop=8819
,pUmem_Sta_12_InPos=8820
,pUmem_Sta_12_HomeFin=8821
,pUmem_Sta_12_HomeIng=8822
,pUmem_Sta_12_LimitMinus=8823
,pUmem_Sta_12_LimitPlus=8824
,pUmem_Sta_12_FollowingErr=8825
,pUmem_Sta_12_AmpFault=8826
,pUmem_Sta_12_EncLoss=8827
,pUmem_Sta_12_I2tErr=8828
,pUmem_Sta_12_ProgPos=8829
,pUmem_Sta_TBD_2AC0=8830
,pUmem_Sta_TBD_2AC4=8831
,pUmem_Sta_TBD_2AC8=8832
,pUmem_Sta_TBD_2ACC=8833
,pUmem_Sta_13_CmdPos=8834
,pUmem_Sta_13_ActPos=8835
,pUmem_Sta_13_Velocity=8836
,pUmem_Sta_13_Load=8837
,pUmem_Sta_13_AmpEna=8838
,pUmem_Sta_13_CloseLoop=8839
,pUmem_Sta_13_InPos=8840
,pUmem_Sta_13_HomeFin=8841
,pUmem_Sta_13_HomeIng=8842
,pUmem_Sta_13_LimitMinus=8843
,pUmem_Sta_13_LimitPlus=8844
,pUmem_Sta_13_FollowingErr=8845
,pUmem_Sta_13_AmpFault=8846
,pUmem_Sta_13_EncLoss=8847
,pUmem_Sta_13_I2tErr=8848
,pUmem_Sta_13_ProgPos=8849
,pUmem_Sta_TBD_2B10=8850
,pUmem_Sta_TBD_2B14=8851
,pUmem_Sta_TBD_2B18=8852
,pUmem_Sta_TBD_2B1C=8853
,pUmem_Sta_14_CmdPos=8854
,pUmem_Sta_14_ActPos=8855
,pUmem_Sta_14_Velocity=8856
,pUmem_Sta_14_Load=8857
,pUmem_Sta_14_AmpEna=8858
,pUmem_Sta_14_CloseLoop=8859
,pUmem_Sta_14_InPos=8860
,pUmem_Sta_14_HomeFin=8861
,pUmem_Sta_14_HomeIng=8862
,pUmem_Sta_14_LimitMinus=8863
,pUmem_Sta_14_LimitPlus=8864
,pUmem_Sta_14_FollowingErr=8865
,pUmem_Sta_14_AmpFault=8866
,pUmem_Sta_14_EncLoss=8867
,pUmem_Sta_14_I2tErr=8868
,pUmem_Sta_14_ProgPos=8869
,pUmem_Sta_TBD_2B60=8870
,pUmem_Sta_TBD_2B64=8871
,pUmem_Sta_TBD_2B68=8872
,pUmem_Sta_TBD_2B6C=8873
,pUmem_Sta_15_CmdPos=8874
,pUmem_Sta_15_ActPos=8875
,pUmem_Sta_15_Velocity=8876
,pUmem_Sta_15_Load=8877
,pUmem_Sta_15_AmpEna=8878
,pUmem_Sta_15_CloseLoop=8879
,pUmem_Sta_15_InPos=8880
,pUmem_Sta_15_HomeFin=8881
,pUmem_Sta_15_HomeIng=8882
,pUmem_Sta_15_LimitMinus=8883
,pUmem_Sta_15_LimitPlus=8884
,pUmem_Sta_15_FollowingErr=8885
,pUmem_Sta_15_AmpFault=8886
,pUmem_Sta_15_EncLoss=8887
,pUmem_Sta_15_I2tErr=8888
,pUmem_Sta_15_ProgPos=8889
,pUmem_Sta_TBD_2BB0=8890
,pUmem_Sta_TBD_2BB4=8891
,pUmem_Sta_TBD_2BB8=8892
,pUmem_Sta_TBD_2BBC=8893
,pUmem_Sta_16_CmdPos=8894
,pUmem_Sta_16_ActPos=8895
,pUmem_Sta_16_Velocity=8896
,pUmem_Sta_16_Load=8897
,pUmem_Sta_16_AmpEna=8898
,pUmem_Sta_16_CloseLoop=8899
,pUmem_Sta_16_InPos=8900
,pUmem_Sta_16_HomeFin=8901
,pUmem_Sta_16_HomeIng=8902
,pUmem_Sta_16_LimitMinus=8903
,pUmem_Sta_16_LimitPlus=8904
,pUmem_Sta_16_FollowingErr=8905
,pUmem_Sta_16_AmpFault=8906
,pUmem_Sta_16_EncLoss=8907
,pUmem_Sta_16_I2tErr=8908
,pUmem_Sta_16_ProgPos=8909
,pUmem_Sta_TBD_2C00=8910
,pUmem_Sta_TBD_2C04=8911
,pUmem_Sta_TBD_2C08=8912
,pUmem_Sta_TBD_2C0C=8913
,pUmem_Sta_17_CmdPos=8914
,pUmem_Sta_17_ActPos=8915
,pUmem_Sta_17_Velocity=8916
,pUmem_Sta_17_Load=8917
,pUmem_Sta_17_AmpEna=8918
,pUmem_Sta_17_CloseLoop=8919
,pUmem_Sta_17_InPos=8920
,pUmem_Sta_17_HomeFin=8921
,pUmem_Sta_17_HomeIng=8922
,pUmem_Sta_17_LimitMinus=8923
,pUmem_Sta_17_LimitPlus=8924
,pUmem_Sta_17_FollowingErr=8925
,pUmem_Sta_17_AmpFault=8926
,pUmem_Sta_17_EncLoss=8927
,pUmem_Sta_17_I2tErr=8928
,pUmem_Sta_17_ProgPos=8929
,pUmem_Sta_TBD_2C50=8930
,pUmem_Sta_TBD_2C54=8931
,pUmem_Sta_TBD_2C58=8932
,pUmem_Sta_TBD_2C5C=8933
,pUmem_Sta_18_CmdPos=8934
,pUmem_Sta_18_ActPos=8935
,pUmem_Sta_18_Velocity=8936
,pUmem_Sta_18_Load=8937
,pUmem_Sta_18_AmpEna=8938
,pUmem_Sta_18_CloseLoop=8939
,pUmem_Sta_18_InPos=8940
,pUmem_Sta_18_HomeFin=8941
,pUmem_Sta_18_HomeIng=8942
,pUmem_Sta_18_LimitMinus=8943
,pUmem_Sta_18_LimitPlus=8944
,pUmem_Sta_18_FollowingErr=8945
,pUmem_Sta_18_AmpFault=8946
,pUmem_Sta_18_EncLoss=8947
,pUmem_Sta_18_I2tErr=8948
,pUmem_Sta_18_ProgPos=8949
,pUmem_Sta_TBD_2CA0=8950
,pUmem_Sta_TBD_2CA4=8951
,pUmem_Sta_TBD_2CA8=8952
,pUmem_Sta_TBD_2CAC=8953
,pUmem_Sta_19_CmdPos=8954
,pUmem_Sta_19_ActPos=8955
,pUmem_Sta_19_Velocity=8956
,pUmem_Sta_19_Load=8957
,pUmem_Sta_19_AmpEna=8958
,pUmem_Sta_19_CloseLoop=8959
,pUmem_Sta_19_InPos=8960
,pUmem_Sta_19_HomeFin=8961
,pUmem_Sta_19_HomeIng=8962
,pUmem_Sta_19_LimitMinus=8963
,pUmem_Sta_19_LimitPlus=8964
,pUmem_Sta_19_FollowingErr=8965
,pUmem_Sta_19_AmpFault=8966
,pUmem_Sta_19_EncLoss=8967
,pUmem_Sta_19_I2tErr=8968
,pUmem_Sta_19_ProgPos=8969
,pUmem_Sta_TBD_2CF0=8970
,pUmem_Sta_TBD_2CF4=8971
,pUmem_Sta_TBD_2CF8=8972
,pUmem_Sta_TBD_2CFC=8973
,pUmem_Sta_20_CmdPos=8974
,pUmem_Sta_20_ActPos=8975
,pUmem_Sta_20_Velocity=8976
,pUmem_Sta_20_Load=8977
,pUmem_Sta_20_AmpEna=8978
,pUmem_Sta_20_CloseLoop=8979
,pUmem_Sta_20_InPos=8980
,pUmem_Sta_20_HomeFin=8981
,pUmem_Sta_20_HomeIng=8982
,pUmem_Sta_20_LimitMinus=8983
,pUmem_Sta_20_LimitPlus=8984
,pUmem_Sta_20_FollowingErr=8985
,pUmem_Sta_20_AmpFault=8986
,pUmem_Sta_20_EncLoss=8987
,pUmem_Sta_20_I2tErr=8988
,pUmem_Sta_20_ProgPos=8989
,pUmem_Sta_TBD_2D40=8990
,pUmem_Sta_TBD_2D44=8991
,pUmem_Sta_TBD_2D48=8992
,pUmem_Sta_TBD_2D4C=8993
,pUmem_Sta_21_CmdPos=8994
,pUmem_Sta_21_ActPos=8995
,pUmem_Sta_21_Velocity=8996
,pUmem_Sta_21_Load=8997
,pUmem_Sta_21_AmpEna=8998
,pUmem_Sta_21_CloseLoop=8999
,pUmem_Sta_21_InPos=9000
,pUmem_Sta_21_HomeFin=9001
,pUmem_Sta_21_HomeIng=9002
,pUmem_Sta_21_LimitMinus=9003
,pUmem_Sta_21_LimitPlus=9004
,pUmem_Sta_21_FollowingErr=9005
,pUmem_Sta_21_AmpFault=9006
,pUmem_Sta_21_EncLoss=9007
,pUmem_Sta_21_I2tErr=9008
,pUmem_Sta_21_ProgPos=9009
,pUmem_Sta_TBD_2D90=9010
,pUmem_Sta_TBD_2D94=9011
,pUmem_Sta_TBD_2D98=9012
,pUmem_Sta_TBD_2D9C=9013
,pUmem_Sta_22_CmdPos=9014
,pUmem_Sta_22_ActPos=9015
,pUmem_Sta_22_Velocity=9016
,pUmem_Sta_22_Load=9017
,pUmem_Sta_22_AmpEna=9018
,pUmem_Sta_22_CloseLoop=9019
,pUmem_Sta_22_InPos=9020
,pUmem_Sta_22_HomeFin=9021
,pUmem_Sta_22_HomeIng=9022
,pUmem_Sta_22_LimitMinus=9023
,pUmem_Sta_22_LimitPlus=9024
,pUmem_Sta_22_FollowingErr=9025
,pUmem_Sta_22_AmpFault=9026
,pUmem_Sta_22_EncLoss=9027
,pUmem_Sta_22_I2tErr=9028
,pUmem_Sta_22_ProgPos=9029
,pUmem_Sta_TBD_2DE0=9030
,pUmem_Sta_TBD_2DE4=9031
,pUmem_Sta_TBD_2DE8=9032
,pUmem_Sta_TBD_2DEC=9033
,pUmem_Sta_23_CmdPos=9034
,pUmem_Sta_23_ActPos=9035
,pUmem_Sta_23_Velocity=9036
,pUmem_Sta_23_Load=9037
,pUmem_Sta_23_AmpEna=9038
,pUmem_Sta_23_CloseLoop=9039
,pUmem_Sta_23_InPos=9040
,pUmem_Sta_23_HomeFin=9041
,pUmem_Sta_23_HomeIng=9042
,pUmem_Sta_23_LimitMinus=9043
,pUmem_Sta_23_LimitPlus=9044
,pUmem_Sta_23_FollowingErr=9045
,pUmem_Sta_23_AmpFault=9046
,pUmem_Sta_23_EncLoss=9047
,pUmem_Sta_23_I2tErr=9048
,pUmem_Sta_23_ProgPos=9049
,pUmem_Sta_TBD_2E30=9050
,pUmem_Sta_TBD_2E34=9051
,pUmem_Sta_TBD_2E38=9052
,pUmem_Sta_TBD_2E3C=9053
,pUmem_Sta_24_CmdPos=9054
,pUmem_Sta_24_ActPos=9055
,pUmem_Sta_24_Velocity=9056
,pUmem_Sta_24_Load=9057
,pUmem_Sta_24_AmpEna=9058
,pUmem_Sta_24_CloseLoop=9059
,pUmem_Sta_24_InPos=9060
,pUmem_Sta_24_HomeFin=9061
,pUmem_Sta_24_HomeIng=9062
,pUmem_Sta_24_LimitMinus=9063
,pUmem_Sta_24_LimitPlus=9064
,pUmem_Sta_24_FollowingErr=9065
,pUmem_Sta_24_AmpFault=9066
,pUmem_Sta_24_EncLoss=9067
,pUmem_Sta_24_I2tErr=9068
,pUmem_Sta_24_ProgPos=9069
,pUmem_Sta_TBD_2E80=9070
,pUmem_Sta_TBD_2E84=9071
,pUmem_Sta_TBD_2E88=9072
,pUmem_Sta_TBD_2E8C=9073
,pUmem_Sta_25_CmdPos=9074
,pUmem_Sta_25_ActPos=9075
,pUmem_Sta_25_Velocity=9076
,pUmem_Sta_25_Load=9077
,pUmem_Sta_25_AmpEna=9078
,pUmem_Sta_25_CloseLoop=9079
,pUmem_Sta_25_InPos=9080
,pUmem_Sta_25_HomeFin=9081
,pUmem_Sta_25_HomeIng=9082
,pUmem_Sta_25_LimitMinus=9083
,pUmem_Sta_25_LimitPlus=9084
,pUmem_Sta_25_FollowingErr=9085
,pUmem_Sta_25_AmpFault=9086
,pUmem_Sta_25_EncLoss=9087
,pUmem_Sta_25_I2tErr=9088
,pUmem_Sta_25_ProgPos=9089
,pUmem_Sta_TBD_2ED0=9090
,pUmem_Sta_TBD_2ED4=9091
,pUmem_Sta_TBD_2ED8=9092
,pUmem_Sta_TBD_2EDC=9093
,pUmem_Sta_26_CmdPos=9094
,pUmem_Sta_26_ActPos=9095
,pUmem_Sta_26_Velocity=9096
,pUmem_Sta_26_Load=9097
,pUmem_Sta_26_AmpEna=9098
,pUmem_Sta_26_CloseLoop=9099
,pUmem_Sta_26_InPos=9100
,pUmem_Sta_26_HomeFin=9101
,pUmem_Sta_26_HomeIng=9102
,pUmem_Sta_26_LimitMinus=9103
,pUmem_Sta_26_LimitPlus=9104
,pUmem_Sta_26_FollowingErr=9105
,pUmem_Sta_26_AmpFault=9106
,pUmem_Sta_26_EncLoss=9107
,pUmem_Sta_26_I2tErr=9108
,pUmem_Sta_26_ProgPos=9109
,pUmem_Sta_TBD_2F20=9110
,pUmem_Sta_TBD_2F24=9111
,pUmem_Sta_TBD_2F28=9112
,pUmem_Sta_TBD_2F2C=9113
,pUmem_Sta_27_CmdPos=9114
,pUmem_Sta_27_ActPos=9115
,pUmem_Sta_27_Velocity=9116
,pUmem_Sta_27_Load=9117
,pUmem_Sta_27_AmpEna=9118
,pUmem_Sta_27_CloseLoop=9119
,pUmem_Sta_27_InPos=9120
,pUmem_Sta_27_HomeFin=9121
,pUmem_Sta_27_HomeIng=9122
,pUmem_Sta_27_LimitMinus=9123
,pUmem_Sta_27_LimitPlus=9124
,pUmem_Sta_27_FollowingErr=9125
,pUmem_Sta_27_AmpFault=9126
,pUmem_Sta_27_EncLoss=9127
,pUmem_Sta_27_I2tErr=9128
,pUmem_Sta_27_ProgPos=9129
,pUmem_Sta_TBD_2F70=9130
,pUmem_Sta_TBD_2F74=9131
,pUmem_Sta_TBD_2F78=9132
,pUmem_Sta_TBD_2F7C=9133
,pUmem_Sta_28_CmdPos=9134
,pUmem_Sta_28_ActPos=9135
,pUmem_Sta_28_Velocity=9136
,pUmem_Sta_28_Load=9137
,pUmem_Sta_28_AmpEna=9138
,pUmem_Sta_28_CloseLoop=9139
,pUmem_Sta_28_InPos=9140
,pUmem_Sta_28_HomeFin=9141
,pUmem_Sta_28_HomeIng=9142
,pUmem_Sta_28_LimitMinus=9143
,pUmem_Sta_28_LimitPlus=9144
,pUmem_Sta_28_FollowingErr=9145
,pUmem_Sta_28_AmpFault=9146
,pUmem_Sta_28_EncLoss=9147
,pUmem_Sta_28_I2tErr=9148
,pUmem_Sta_28_ProgPos=9149
,pUmem_Sta_TBD_2FC0=9150
,pUmem_Sta_TBD_2FC4=9151
,pUmem_Sta_TBD_2FC8=9152
,pUmem_Sta_TBD_2FCC=9153
,pUmem_Sta_29_CmdPos=9154
,pUmem_Sta_29_ActPos=9155
,pUmem_Sta_29_Velocity=9156
,pUmem_Sta_29_Load=9157
,pUmem_Sta_29_AmpEna=9158
,pUmem_Sta_29_CloseLoop=9159
,pUmem_Sta_29_InPos=9160
,pUmem_Sta_29_HomeFin=9161
,pUmem_Sta_29_HomeIng=9162
,pUmem_Sta_29_LimitMinus=9163
,pUmem_Sta_29_LimitPlus=9164
,pUmem_Sta_29_FollowingErr=9165
,pUmem_Sta_29_AmpFault=9166
,pUmem_Sta_29_EncLoss=9167
,pUmem_Sta_29_I2tErr=9168
,pUmem_Sta_29_ProgPos=9169
,pUmem_Sta_TBD_3010=9170
,pUmem_Sta_TBD_3014=9171
,pUmem_Sta_TBD_3018=9172
,pUmem_Sta_TBD_301C=9173
,pUmem_Sta_30_CmdPos=9174
,pUmem_Sta_30_ActPos=9175
,pUmem_Sta_30_Velocity=9176
,pUmem_Sta_30_Load=9177
,pUmem_Sta_30_AmpEna=9178
,pUmem_Sta_30_CloseLoop=9179
,pUmem_Sta_30_InPos=9180
,pUmem_Sta_30_HomeFin=9181
,pUmem_Sta_30_HomeIng=9182
,pUmem_Sta_30_LimitMinus=9183
,pUmem_Sta_30_LimitPlus=9184
,pUmem_Sta_30_FollowingErr=9185
,pUmem_Sta_30_AmpFault=9186
,pUmem_Sta_30_EncLoss=9187
,pUmem_Sta_30_I2tErr=9188
,pUmem_Sta_30_ProgPos=9189
,pUmem_Sta_TBD_3060=9190
,pUmem_Sta_TBD_3064=9191
,pUmem_Sta_TBD_3068=9192
,pUmem_Sta_TBD_306C=9193
,pUmem_Sta_31_CmdPos=9194
,pUmem_Sta_31_ActPos=9195
,pUmem_Sta_31_Velocity=9196
,pUmem_Sta_31_Load=9197
,pUmem_Sta_31_AmpEna=9198
,pUmem_Sta_31_CloseLoop=9199
,pUmem_Sta_31_InPos=9200
,pUmem_Sta_31_HomeFin=9201
,pUmem_Sta_31_HomeIng=9202
,pUmem_Sta_31_LimitMinus=9203
,pUmem_Sta_31_LimitPlus=9204
,pUmem_Sta_31_FollowingErr=9205
,pUmem_Sta_31_AmpFault=9206
,pUmem_Sta_31_EncLoss=9207
,pUmem_Sta_31_I2tErr=9208
,pUmem_Sta_31_ProgPos=9209
,pUmem_Sta_TBD_30B0=9210
,pUmem_Sta_TBD_30B4=9211
,pUmem_Sta_TBD_30B8=9212
,pUmem_Sta_TBD_30BC=9213
,pUmem_Sta_32_CmdPos=9214
,pUmem_Sta_32_ActPos=9215
,pUmem_Sta_32_Velocity=9216
,pUmem_Sta_32_Load=9217
,pUmem_Sta_32_AmpEna=9218
,pUmem_Sta_32_CloseLoop=9219
,pUmem_Sta_32_InPos=9220
,pUmem_Sta_32_HomeFin=9221
,pUmem_Sta_32_HomeIng=9222
,pUmem_Sta_32_LimitMinus=9223
,pUmem_Sta_32_LimitPlus=9224
,pUmem_Sta_32_FollowingErr=9225
,pUmem_Sta_32_AmpFault=9226
,pUmem_Sta_32_EncLoss=9227
,pUmem_Sta_32_I2tErr=9228
,pUmem_Sta_32_ProgPos=9229
,pUmem_Sta_TBD_3100=9230
,pUmem_Sta_TBD_3104=9231
,pUmem_Sta_TBD_3108=9232
,pUmem_Sta_TBD_310C=9233
,pUmem_Sta_Mc_AmpEna=9234
,pUmem_Sta_Mc_InPos=9235
,pUmem_Sta_Mc_Home=9236
,pUmem_Sta_Mc_HomeErr=9237
,pUmem_Sta_Mc_RunMode=9238
,pUmem_Sta_Mc_AutoRun=9239
,pUmem_Sta_Mc_EcatCon=9240
,pUmem_Sta_Mc_Error=9241
,pUmem_Sta_TBD_3AB8=9242
,pUmem_Sta_TBD_3ABC=9243
,pUmem_Sta_Mc_ID=9244
,pUmem_Sta_Mc_ErasePdtFlgWs=9245
,pUmem_Sta_Mc_ErasePdtFlgVs=9246
,pUmem_Sta_Mc_ErasePdtFlgTr=9247
,pUmem_Sta_Mc_ErasePdtNoWs=9248
,pUmem_Sta_Mc_ErasePdtNoVs=9249
,pUmem_Sta_Mc_ErasePdtNoTr=9250
,pUmem_Sta_Ws_AmpEna=9251
,pUmem_Sta_Ws_InPos=9252
,pUmem_Sta_Ws_Home=9253
,pUmem_Sta_Ws_HomeErr=9254
,pUmem_Sta_Ws_EcatCon=9255
,pUmem_Sta_Ws_Error=9256
,pUmem_Sta_Ws_ErrCode=9257
,pUmem_Sta_TBD_3E9C=9258
,pUmem_Sta_TBD_3EA0=9259
,pUmem_Sta_Ws_ProgRun=9260
,pUmem_Sta_Ws_VectorVel=9261
,pUmem_Sta_Ws_ProgTime=9262
,pUmem_Sta_Ws_PosStage=9263
,pUmem_Sta_Ws_PosProduct=9264
,pUmem_Sta_Ws_Cover=9265
,pUmem_Sta_Ws_PdtSta=9266
,pUmem_Sta_Tr_PdtSta=9267
,pUmem_Sta_Ws_LaserReady=9268
,pUmem_Sta_Ws_LaserEnable=9269
,pUmem_Sta_Ws_LaserCorePower=9270
,pUmem_Sta_Ws_LaserRingPower=9271
,pUmem_Sta_Ws_PdtNo=9272
,pUmem_Sta_TBD_3ED8=9273
,pUmem_Sta_Ws_LaserActCorePower=9274
,pUmem_Sta_Ws_LaserActRingPower=9275
,pUmem_Sta_Ws_LaserActCoreVolt=9276
,pUmem_Sta_Ws_LaserActRingVolt=9277
,pUmem_Cmd_Ws_PowerCheckSta=9278
,pUmem_Sta_TBD_3EF0=9279
,pUmem_Sta_TBD_3EF4=9280
,pUmem_Sta_Ws_LdSeq=9281
,pUmem_Sta_Ws_LdErr=9282
,pUmem_Sta_Ws_LdTime=9283
,pUmem_Sta_Ws_RdSeq=9284
,pUmem_Sta_Ws_RdErr=9285
,pUmem_Sta_Ws_RdTime=9286
,pUmem_Sta_Ws_WdSeq=9287
,pUmem_Sta_Ws_WdErr=9288
,pUmem_Sta_Ws_WdTime=9289
,pUmem_Sta_Ws_WtSeq=9290
,pUmem_Sta_Ws_WtErr=9291
,pUmem_Sta_Ws_WtTime=9292
,pUmem_Sta_Ws_UdSeq=9293
,pUmem_Sta_Ws_UdErr=9294
,pUmem_Sta_Ws_UdTime=9295
,pUmem_Sta_Ws_RjSeq=9296
,pUmem_Sta_Ws_RjErr=9297
,pUmem_Sta_Ws_RjTime=9298
,pUmem_Sta_TBD_3F40=9299
,pUmem_Sta_TBD_3F44=9300
,pUmem_Sta_TBD_3F48=9301
,pUmem_Sta_TBD_3F4C=9302
,pUmem_Sta_TBD_3F50=9303
,pUmem_Sta_TBD_3F54=9304
,pUmem_Sta_TBD_3F58=9305
,pUmem_Sta_TBD_3F5C=9306
,pUmem_Sta_TBD_3F60=9307
,pUmem_Sta_TBD_3F64=9308
,pUmem_Sta_TBD_3F68=9309
,pUmem_Sta_TBD_3F6C=9310
,pUmem_Sta_Ws_1stTransRjReq=9311
,pUmem_Sta_Ws_2ndTransLdReq=9312
,pUmem_Sta_Ws_2dVisionCkReq=9313
,pUmem_Sta_Ws_LwmStartReq=9314
,pUmem_Sta_TBD_3F80=9315
,pUmem_Sta_TBD_3F84=9316
,pUmem_Sta_TBD_3F88=9317
,pUmem_Sta_TBD_3F8C=9318
,pUmem_Sta_TBD_3F90=9319
,pUmem_Sta_TBD_3F94=9320
,pUmem_Sta_Ws_1stTransPdtNo=9321
,pUmem_Sta_Ws_TempResult1=9322
,pUmem_Sta_Ws_TempResult2=9323
,pUmem_Sta_TBD_3FA4=9324
,pUmem_Sta_TBD_3FA8=9325
,pUmem_Sta_TBD_3FAC=9326
,pUmem_Sta_TBD_3FB0=9327
,pUmem_Sta_TBD_3FB4=9328
,pUmem_Sta_TBD_3FB8=9329
,pUmem_Sta_TBD_3FBC=9330
,pUmem_Sta_TBD_3FC0=9331
,pUmem_Sta_TBD_3FC4=9332
,pUmem_Sta_TBD_3FC8=9333
,pUmem_Sta_TBD_3FCC=9334
,pUmem_Sta_TBD_3FD0=9335
,pUmem_Sta_TBD_3FD4=9336
,pUmem_Sta_TBD_3FD8=9337
,pUmem_Sta_TBD_3FDC=9338
,pUmem_Sta_TBD_3FE0=9339
,pUmem_Sta_TBD_3FE4=9340
,pUmem_Sta_Vs_AmpEna=9341
,pUmem_Sta_Vs_InPos=9342
,pUmem_Sta_Vs_Home=9343
,pUmem_Sta_Vs_HomeErr=9344
,pUmem_Sta_Vs_EcatCon=9345
,pUmem_Sta_Vs_Error=9346
,pUmem_Sta_Vs_ErrCode=9347
,pUmem_Sta_TBD_4284=9348
,pUmem_Sta_TBD_4288=9349
,pUmem_Sta_Vs_ProgRun=9350
,pUmem_Sta_Vs_VectorVel=9351
,pUmem_Sta_Vs_ProgTime=9352
,pUmem_Sta_Vs_PosStage=9353
,pUmem_Sta_Vs_PosProduct=9354
,pUmem_Sta_Vs_Cover=9355
,pUmem_Sta_Vs_PdtSta=9356
,pUmem_Sta_Vs_PdtNo=9357
,pUmem_Sta_TBD_42AC=9358
,pUmem_Sta_TBD_42B0=9359
,pUmem_Sta_TBD_42B4=9360
,pUmem_Sta_TBD_42B8=9361
,pUmem_Sta_TBD_42BC=9362
,pUmem_Sta_TBD_42C0=9363
,pUmem_Sta_TBD_42C4=9364
,pUmem_Sta_TBD_42C8=9365
,pUmem_Sta_TBD_42CC=9366
,pUmem_Sta_TBD_42D0=9367
,pUmem_Sta_TBD_42D4=9368
,pUmem_Sta_TBD_42D8=9369
,pUmem_Sta_TBD_42DC=9370
,pUmem_Sta_Vs_LdSeq=9371
,pUmem_Sta_Vs_LdErr=9372
,pUmem_Sta_Vs_LdTime=9373
,pUmem_Sta_Vs_RdSeq=9374
,pUmem_Sta_Vs_RdErr=9375
,pUmem_Sta_Vs_RdTime=9376
,pUmem_Sta_Vs_VnSeq=9377
,pUmem_Sta_Vs_VnErr=9378
,pUmem_Sta_Vs_VnTime=9379
,pUmem_Sta_Vs_WtSeq=9380
,pUmem_Sta_Vs_WtErr=9381
,pUmem_Sta_Vs_WtTime=9382
,pUmem_Sta_Vs_UdSeq=9383
,pUmem_Sta_Vs_UdErr=9384
,pUmem_Sta_Vs_UdTime=9385
,pUmem_Sta_Vs_RjSeq=9386
,pUmem_Sta_Vs_RjErr=9387
,pUmem_Sta_Vs_RjTime=9388
,pUmem_Sta_TBD_4328=9389
,pUmem_Sta_TBD_432C=9390
,pUmem_Sta_TBD_4330=9391
,pUmem_Sta_TBD_4334=9392
,pUmem_Sta_TBD_4338=9393
,pUmem_Sta_TBD_433C=9394
,pUmem_Sta_TBD_4340=9395
,pUmem_Sta_TBD_4344=9396
,pUmem_Sta_TBD_4348=9397
,pUmem_Sta_TBD_434C=9398
,pUmem_Sta_TBD_4350=9399
,pUmem_Sta_TBD_4354=9400
,pUmem_Sta_Vs_3rdTransUdReq=9401
,pUmem_Sta_Vs_3rdTransRjReq=9402
,pUmem_Sta_Vs_3DVisionStReq=9403
,pUmem_Sta_Vs_3DVisionEdReq=9404
,pUmem_Sta_TBD_4368=9405
,pUmem_Sta_TBD_436C=9406
,pUmem_Sta_TBD_4370=9407
,pUmem_Sta_TBD_4374=9408
,pUmem_Sta_TBD_4378=9409
,pUmem_Sta_TBD_437C=9410
,pUmem_Sta_Vs_3rdTransPtdNo=9411
,pUmem_Sta_TBD_4384=9412
,pUmem_Sta_TBD_4388=9413
,pUmem_Sta_TBD_438C=9414
,pUmem_Sta_TBD_4390=9415
,pUmem_Sta_TBD_4394=9416
,pUmem_Sta_TBD_4398=9417
,pUmem_Sta_TBD_439C=9418
,pUmem_Sta_TBD_43A0=9419
,pUmem_Sta_TBD_43A4=9420
,pUmem_Sta_TBD_43A8=9421
,pUmem_Sta_TBD_43AC=9422
,pUmem_Sta_TBD_43B0=9423
,pUmem_Sta_TBD_43B4=9424
,pUmem_Sta_TBD_43B8=9425
,pUmem_Sta_TBD_43BC=9426
,pUmem_Sta_TBD_43C0=9427
,pUmem_Sta_TBD_43C4=9428
,pUmem_Sta_TBD_43C8=9429
,pUmem_Sta_TBD_43CC=9430
,pUmem_Sta_Sc_AmpEna=9431
,pUmem_Sta_Sc_InPos=9432
,pUmem_Sta_Sc_Home=9433
,pUmem_Sta_Sc_HomeErr=9434
,pUmem_Sta_Sc_Con=9435
,pUmem_Sta_Sc_Error=9436
,pUmem_Sta_Sc_ErrCode=9437
,pUmem_Cmd_01_ServoOn=9438
,pUmem_Cmd_01_ServoOff=9439
,pUmem_Cmd_01_HomeStart=9440
,pUmem_Cmd_01_HomeAbort=9441
,pUmem_Cmd_01_HomeOffset=9442
,pUmem_Cmd_01_JogStop=9443
,pUmem_Cmd_01_JogContPlus=9444
,pUmem_Cmd_01_JogContMinus=9445
,pUmem_Cmd_01_JogAbsMove=9446
,pUmem_Cmd_01_JogIncMove=9447
,pUmem_Cmd_01_JogAbsPos=9448
,pUmem_Cmd_01_JogIncDist=9449
,pUmem_Cmd_01_JogSpeed=9450
,pUmem_Cmd_01_JogTa=9451
,pUmem_Cmd_01_JogTs=9452
,pUmem_Cmd_TBD_4E5C=9453
,pUmem_Cmd_TBD_4E60=9454
,pUmem_Cmd_TBD_4E64=9455
,pUmem_Cmd_TBD_4E68=9456
,pUmem_Cmd_TBD_4E6C=9457
,pUmem_Cmd_02_ServoOn=9458
,pUmem_Cmd_02_ServoOff=9459
,pUmem_Cmd_02_HomeStart=9460
,pUmem_Cmd_02_HomeAbort=9461
,pUmem_Cmd_02_HomeOffset=9462
,pUmem_Cmd_02_JogStop=9463
,pUmem_Cmd_02_JogContPlus=9464
,pUmem_Cmd_02_JogContMinus=9465
,pUmem_Cmd_02_JogAbsMove=9466
,pUmem_Cmd_02_JogIncMove=9467
,pUmem_Cmd_02_JogAbsPos=9468
,pUmem_Cmd_02_JogIncDist=9469
,pUmem_Cmd_02_JogSpeed=9470
,pUmem_Cmd_02_JogTa=9471
,pUmem_Cmd_02_JogTs=9472
,pUmem_Cmd_TBD_4EAC=9473
,pUmem_Cmd_TBD_4EB0=9474
,pUmem_Cmd_TBD_4EB4=9475
,pUmem_Cmd_TBD_4EB8=9476
,pUmem_Cmd_TBD_4EBC=9477
,pUmem_Cmd_03_ServoOn=9478
,pUmem_Cmd_03_ServoOff=9479
,pUmem_Cmd_03_HomeStart=9480
,pUmem_Cmd_03_HomeAbort=9481
,pUmem_Cmd_03_HomeOffset=9482
,pUmem_Cmd_03_JogStop=9483
,pUmem_Cmd_03_JogContPlus=9484
,pUmem_Cmd_03_JogContMinus=9485
,pUmem_Cmd_03_JogAbsMove=9486
,pUmem_Cmd_03_JogIncMove=9487
,pUmem_Cmd_03_JogAbsPos=9488
,pUmem_Cmd_03_JogIncDist=9489
,pUmem_Cmd_03_JogSpeed=9490
,pUmem_Cmd_03_JogTa=9491
,pUmem_Cmd_03_JogTs=9492
,pUmem_Cmd_TBD_4EFC=9493
,pUmem_Cmd_TBD_4F00=9494
,pUmem_Cmd_TBD_4F04=9495
,pUmem_Cmd_TBD_4F08=9496
,pUmem_Cmd_TBD_4F0C=9497
,pUmem_Cmd_04_ServoOn=9498
,pUmem_Cmd_04_ServoOff=9499
,pUmem_Cmd_04_HomeStart=9500
,pUmem_Cmd_04_HomeAbort=9501
,pUmem_Cmd_04_HomeOffset=9502
,pUmem_Cmd_04_JogStop=9503
,pUmem_Cmd_04_JogContPlus=9504
,pUmem_Cmd_04_JogContMinus=9505
,pUmem_Cmd_04_JogAbsMove=9506
,pUmem_Cmd_04_JogIncMove=9507
,pUmem_Cmd_04_JogAbsPos=9508
,pUmem_Cmd_04_JogIncDist=9509
,pUmem_Cmd_04_JogSpeed=9510
,pUmem_Cmd_04_JogTa=9511
,pUmem_Cmd_04_JogTs=9512
,pUmem_Cmd_TBD_4F4C=9513
,pUmem_Cmd_TBD_4F50=9514
,pUmem_Cmd_TBD_4F54=9515
,pUmem_Cmd_TBD_4F58=9516
,pUmem_Cmd_TBD_4F5C=9517
,pUmem_Cmd_05_ServoOn=9518
,pUmem_Cmd_05_ServoOff=9519
,pUmem_Cmd_05_HomeStart=9520
,pUmem_Cmd_05_HomeAbort=9521
,pUmem_Cmd_05_HomeOffset=9522
,pUmem_Cmd_05_JogStop=9523
,pUmem_Cmd_05_JogContPlus=9524
,pUmem_Cmd_05_JogContMinus=9525
,pUmem_Cmd_05_JogAbsMove=9526
,pUmem_Cmd_05_JogIncMove=9527
,pUmem_Cmd_05_JogAbsPos=9528
,pUmem_Cmd_05_JogIncDist=9529
,pUmem_Cmd_05_JogSpeed=9530
,pUmem_Cmd_05_JogTa=9531
,pUmem_Cmd_05_JogTs=9532
,pUmem_Cmd_TBD_4F9C=9533
,pUmem_Cmd_TBD_4FA0=9534
,pUmem_Cmd_TBD_4FA4=9535
,pUmem_Cmd_TBD_4FA8=9536
,pUmem_Cmd_TBD_4FAC=9537
,pUmem_Cmd_06_ServoOn=9538
,pUmem_Cmd_06_ServoOff=9539
,pUmem_Cmd_06_HomeStart=9540
,pUmem_Cmd_06_HomeAbort=9541
,pUmem_Cmd_06_HomeOffset=9542
,pUmem_Cmd_06_JogStop=9543
,pUmem_Cmd_06_JogContPlus=9544
,pUmem_Cmd_06_JogContMinus=9545
,pUmem_Cmd_06_JogAbsMove=9546
,pUmem_Cmd_06_JogIncMove=9547
,pUmem_Cmd_06_JogAbsPos=9548
,pUmem_Cmd_06_JogIncDist=9549
,pUmem_Cmd_06_JogSpeed=9550
,pUmem_Cmd_06_JogTa=9551
,pUmem_Cmd_06_JogTs=9552
,pUmem_Cmd_TBD_4FEC=9553
,pUmem_Cmd_TBD_4FF0=9554
,pUmem_Cmd_TBD_4FF4=9555
,pUmem_Cmd_TBD_4FF8=9556
,pUmem_Cmd_TBD_4FFC=9557
,pUmem_Cmd_07_ServoOn=9558
,pUmem_Cmd_07_ServoOff=9559
,pUmem_Cmd_07_HomeStart=9560
,pUmem_Cmd_07_HomeAbort=9561
,pUmem_Cmd_07_HomeOffset=9562
,pUmem_Cmd_07_JogStop=9563
,pUmem_Cmd_07_JogContPlus=9564
,pUmem_Cmd_07_JogContMinus=9565
,pUmem_Cmd_07_JogAbsMove=9566
,pUmem_Cmd_07_JogIncMove=9567
,pUmem_Cmd_07_JogAbsPos=9568
,pUmem_Cmd_07_JogIncDist=9569
,pUmem_Cmd_07_JogSpeed=9570
,pUmem_Cmd_07_JogTa=9571
,pUmem_Cmd_07_JogTs=9572
,pUmem_Cmd_TBD_503C=9573
,pUmem_Cmd_TBD_5040=9574
,pUmem_Cmd_TBD_5044=9575
,pUmem_Cmd_TBD_5048=9576
,pUmem_Cmd_TBD_504C=9577
,pUmem_Cmd_08_ServoOn=9578
,pUmem_Cmd_08_ServoOff=9579
,pUmem_Cmd_08_HomeStart=9580
,pUmem_Cmd_08_HomeAbort=9581
,pUmem_Cmd_08_HomeOffset=9582
,pUmem_Cmd_08_JogStop=9583
,pUmem_Cmd_08_JogContPlus=9584
,pUmem_Cmd_08_JogContMinus=9585
,pUmem_Cmd_08_JogAbsMove=9586
,pUmem_Cmd_08_JogIncMove=9587
,pUmem_Cmd_08_JogAbsPos=9588
,pUmem_Cmd_08_JogIncDist=9589
,pUmem_Cmd_08_JogSpeed=9590
,pUmem_Cmd_08_JogTa=9591
,pUmem_Cmd_08_JogTs=9592
,pUmem_Cmd_TBD_508C=9593
,pUmem_Cmd_TBD_5090=9594
,pUmem_Cmd_TBD_5094=9595
,pUmem_Cmd_TBD_5098=9596
,pUmem_Cmd_TBD_509C=9597
,pUmem_Cmd_09_ServoOn=9598
,pUmem_Cmd_09_ServoOff=9599
,pUmem_Cmd_09_HomeStart=9600
,pUmem_Cmd_09_HomeAbort=9601
,pUmem_Cmd_09_HomeOffset=9602
,pUmem_Cmd_09_JogStop=9603
,pUmem_Cmd_09_JogContPlus=9604
,pUmem_Cmd_09_JogContMinus=9605
,pUmem_Cmd_09_JogAbsMove=9606
,pUmem_Cmd_09_JogIncMove=9607
,pUmem_Cmd_09_JogAbsPos=9608
,pUmem_Cmd_09_JogIncDist=9609
,pUmem_Cmd_09_JogSpeed=9610
,pUmem_Cmd_09_JogTa=9611
,pUmem_Cmd_09_JogTs=9612
,pUmem_Cmd_TBD_50DC=9613
,pUmem_Cmd_TBD_50E0=9614
,pUmem_Cmd_TBD_50E4=9615
,pUmem_Cmd_TBD_50E8=9616
,pUmem_Cmd_TBD_50EC=9617
,pUmem_Cmd_10_ServoOn=9618
,pUmem_Cmd_10_ServoOff=9619
,pUmem_Cmd_10_HomeStart=9620
,pUmem_Cmd_10_HomeAbort=9621
,pUmem_Cmd_10_HomeOffset=9622
,pUmem_Cmd_10_JogStop=9623
,pUmem_Cmd_10_JogContPlus=9624
,pUmem_Cmd_10_JogContMinus=9625
,pUmem_Cmd_10_JogAbsMove=9626
,pUmem_Cmd_10_JogIncMove=9627
,pUmem_Cmd_10_JogAbsPos=9628
,pUmem_Cmd_10_JogIncDist=9629
,pUmem_Cmd_10_JogSpeed=9630
,pUmem_Cmd_10_JogTa=9631
,pUmem_Cmd_10_JogTs=9632
,pUmem_Cmd_TBD_512C=9633
,pUmem_Cmd_TBD_5130=9634
,pUmem_Cmd_TBD_5134=9635
,pUmem_Cmd_TBD_5138=9636
,pUmem_Cmd_TBD_513C=9637
,pUmem_Cmd_11_ServoOn=9638
,pUmem_Cmd_11_ServoOff=9639
,pUmem_Cmd_11_HomeStart=9640
,pUmem_Cmd_11_HomeAbort=9641
,pUmem_Cmd_11_HomeOffset=9642
,pUmem_Cmd_11_JogStop=9643
,pUmem_Cmd_11_JogContPlus=9644
,pUmem_Cmd_11_JogContMinus=9645
,pUmem_Cmd_11_JogAbsMove=9646
,pUmem_Cmd_11_JogIncMove=9647
,pUmem_Cmd_11_JogAbsPos=9648
,pUmem_Cmd_11_JogIncDist=9649
,pUmem_Cmd_11_JogSpeed=9650
,pUmem_Cmd_11_JogTa=9651
,pUmem_Cmd_11_JogTs=9652
,pUmem_Cmd_TBD_517C=9653
,pUmem_Cmd_TBD_5180=9654
,pUmem_Cmd_TBD_5184=9655
,pUmem_Cmd_TBD_5188=9656
,pUmem_Cmd_TBD_518C=9657
,pUmem_Cmd_12_ServoOn=9658
,pUmem_Cmd_12_ServoOff=9659
,pUmem_Cmd_12_HomeStart=9660
,pUmem_Cmd_12_HomeAbort=9661
,pUmem_Cmd_12_HomeOffset=9662
,pUmem_Cmd_12_JogStop=9663
,pUmem_Cmd_12_JogContPlus=9664
,pUmem_Cmd_12_JogContMinus=9665
,pUmem_Cmd_12_JogAbsMove=9666
,pUmem_Cmd_12_JogIncMove=9667
,pUmem_Cmd_12_JogAbsPos=9668
,pUmem_Cmd_12_JogIncDist=9669
,pUmem_Cmd_12_JogSpeed=9670
,pUmem_Cmd_12_JogTa=9671
,pUmem_Cmd_12_JogTs=9672
,pUmem_Cmd_TBD_51CC=9673
,pUmem_Cmd_TBD_51D0=9674
,pUmem_Cmd_TBD_51D4=9675
,pUmem_Cmd_TBD_51D8=9676
,pUmem_Cmd_TBD_51DC=9677
,pUmem_Cmd_13_ServoOn=9678
,pUmem_Cmd_13_ServoOff=9679
,pUmem_Cmd_13_HomeStart=9680
,pUmem_Cmd_13_HomeAbort=9681
,pUmem_Cmd_13_HomeOffset=9682
,pUmem_Cmd_13_JogStop=9683
,pUmem_Cmd_13_JogContPlus=9684
,pUmem_Cmd_13_JogContMinus=9685
,pUmem_Cmd_13_JogAbsMove=9686
,pUmem_Cmd_13_JogIncMove=9687
,pUmem_Cmd_13_JogAbsPos=9688
,pUmem_Cmd_13_JogIncDist=9689
,pUmem_Cmd_13_JogSpeed=9690
,pUmem_Cmd_13_JogTa=9691
,pUmem_Cmd_13_JogTs=9692
,pUmem_Cmd_TBD_521C=9693
,pUmem_Cmd_TBD_5220=9694
,pUmem_Cmd_TBD_5224=9695
,pUmem_Cmd_TBD_5228=9696
,pUmem_Cmd_TBD_522C=9697
,pUmem_Cmd_14_ServoOn=9698
,pUmem_Cmd_14_ServoOff=9699
,pUmem_Cmd_14_HomeStart=9700
,pUmem_Cmd_14_HomeAbort=9701
,pUmem_Cmd_14_HomeOffset=9702
,pUmem_Cmd_14_JogStop=9703
,pUmem_Cmd_14_JogContPlus=9704
,pUmem_Cmd_14_JogContMinus=9705
,pUmem_Cmd_14_JogAbsMove=9706
,pUmem_Cmd_14_JogIncMove=9707
,pUmem_Cmd_14_JogAbsPos=9708
,pUmem_Cmd_14_JogIncDist=9709
,pUmem_Cmd_14_JogSpeed=9710
,pUmem_Cmd_14_JogTa=9711
,pUmem_Cmd_14_JogTs=9712
,pUmem_Cmd_TBD_526C=9713
,pUmem_Cmd_TBD_5270=9714
,pUmem_Cmd_TBD_5274=9715
,pUmem_Cmd_TBD_5278=9716
,pUmem_Cmd_TBD_527C=9717
,pUmem_Cmd_15_ServoOn=9718
,pUmem_Cmd_15_ServoOff=9719
,pUmem_Cmd_15_HomeStart=9720
,pUmem_Cmd_15_HomeAbort=9721
,pUmem_Cmd_15_HomeOffset=9722
,pUmem_Cmd_15_JogStop=9723
,pUmem_Cmd_15_JogContPlus=9724
,pUmem_Cmd_15_JogContMinus=9725
,pUmem_Cmd_15_JogAbsMove=9726
,pUmem_Cmd_15_JogIncMove=9727
,pUmem_Cmd_15_JogAbsPos=9728
,pUmem_Cmd_15_JogIncDist=9729
,pUmem_Cmd_15_JogSpeed=9730
,pUmem_Cmd_15_JogTa=9731
,pUmem_Cmd_15_JogTs=9732
,pUmem_Cmd_TBD_52BC=9733
,pUmem_Cmd_TBD_52C0=9734
,pUmem_Cmd_TBD_52C4=9735
,pUmem_Cmd_TBD_52C8=9736
,pUmem_Cmd_TBD_52CC=9737
,pUmem_Cmd_16_ServoOn=9738
,pUmem_Cmd_16_ServoOff=9739
,pUmem_Cmd_16_HomeStart=9740
,pUmem_Cmd_16_HomeAbort=9741
,pUmem_Cmd_16_HomeOffset=9742
,pUmem_Cmd_16_JogStop=9743
,pUmem_Cmd_16_JogContPlus=9744
,pUmem_Cmd_16_JogContMinus=9745
,pUmem_Cmd_16_JogAbsMove=9746
,pUmem_Cmd_16_JogIncMove=9747
,pUmem_Cmd_16_JogAbsPos=9748
,pUmem_Cmd_16_JogIncDist=9749
,pUmem_Cmd_16_JogSpeed=9750
,pUmem_Cmd_16_JogTa=9751
,pUmem_Cmd_16_JogTs=9752
,pUmem_Cmd_TBD_530C=9753
,pUmem_Cmd_TBD_5310=9754
,pUmem_Cmd_TBD_5314=9755
,pUmem_Cmd_TBD_5318=9756
,pUmem_Cmd_TBD_531C=9757
,pUmem_Cmd_17_ServoOn=9758
,pUmem_Cmd_17_ServoOff=9759
,pUmem_Cmd_17_HomeStart=9760
,pUmem_Cmd_17_HomeAbort=9761
,pUmem_Cmd_17_HomeOffset=9762
,pUmem_Cmd_17_JogStop=9763
,pUmem_Cmd_17_JogContPlus=9764
,pUmem_Cmd_17_JogContMinus=9765
,pUmem_Cmd_17_JogAbsMove=9766
,pUmem_Cmd_17_JogIncMove=9767
,pUmem_Cmd_17_JogAbsPos=9768
,pUmem_Cmd_17_JogIncDist=9769
,pUmem_Cmd_17_JogSpeed=9770
,pUmem_Cmd_17_JogTa=9771
,pUmem_Cmd_17_JogTs=9772
,pUmem_Cmd_TBD_535C=9773
,pUmem_Cmd_TBD_5360=9774
,pUmem_Cmd_TBD_5364=9775
,pUmem_Cmd_TBD_5368=9776
,pUmem_Cmd_TBD_536C=9777
,pUmem_Cmd_18_ServoOn=9778
,pUmem_Cmd_18_ServoOff=9779
,pUmem_Cmd_18_HomeStart=9780
,pUmem_Cmd_18_HomeAbort=9781
,pUmem_Cmd_18_HomeOffset=9782
,pUmem_Cmd_18_JogStop=9783
,pUmem_Cmd_18_JogContPlus=9784
,pUmem_Cmd_18_JogContMinus=9785
,pUmem_Cmd_18_JogAbsMove=9786
,pUmem_Cmd_18_JogIncMove=9787
,pUmem_Cmd_18_JogAbsPos=9788
,pUmem_Cmd_18_JogIncDist=9789
,pUmem_Cmd_18_JogSpeed=9790
,pUmem_Cmd_18_JogTa=9791
,pUmem_Cmd_18_JogTs=9792
,pUmem_Cmd_TBD_53AC=9793
,pUmem_Cmd_TBD_53B0=9794
,pUmem_Cmd_TBD_53B4=9795
,pUmem_Cmd_TBD_53B8=9796
,pUmem_Cmd_TBD_53BC=9797
,pUmem_Cmd_19_ServoOn=9798
,pUmem_Cmd_19_ServoOff=9799
,pUmem_Cmd_19_HomeStart=9800
,pUmem_Cmd_19_HomeAbort=9801
,pUmem_Cmd_19_HomeOffset=9802
,pUmem_Cmd_19_JogStop=9803
,pUmem_Cmd_19_JogContPlus=9804
,pUmem_Cmd_19_JogContMinus=9805
,pUmem_Cmd_19_JogAbsMove=9806
,pUmem_Cmd_19_JogIncMove=9807
,pUmem_Cmd_19_JogAbsPos=9808
,pUmem_Cmd_19_JogIncDist=9809
,pUmem_Cmd_19_JogSpeed=9810
,pUmem_Cmd_19_JogTa=9811
,pUmem_Cmd_19_JogTs=9812
,pUmem_Cmd_TBD_53FC=9813
,pUmem_Cmd_TBD_5400=9814
,pUmem_Cmd_TBD_5404=9815
,pUmem_Cmd_TBD_5408=9816
,pUmem_Cmd_TBD_540C=9817
,pUmem_Cmd_20_ServoOn=9818
,pUmem_Cmd_20_ServoOff=9819
,pUmem_Cmd_20_HomeStart=9820
,pUmem_Cmd_20_HomeAbort=9821
,pUmem_Cmd_20_HomeOffset=9822
,pUmem_Cmd_20_JogStop=9823
,pUmem_Cmd_20_JogContPlus=9824
,pUmem_Cmd_20_JogContMinus=9825
,pUmem_Cmd_20_JogAbsMove=9826
,pUmem_Cmd_20_JogIncMove=9827
,pUmem_Cmd_20_JogAbsPos=9828
,pUmem_Cmd_20_JogIncDist=9829
,pUmem_Cmd_20_JogSpeed=9830
,pUmem_Cmd_20_JogTa=9831
,pUmem_Cmd_20_JogTs=9832
,pUmem_Cmd_TBD_544C=9833
,pUmem_Cmd_TBD_5450=9834
,pUmem_Cmd_TBD_5454=9835
,pUmem_Cmd_TBD_5458=9836
,pUmem_Cmd_TBD_545C=9837
,pUmem_Cmd_21_ServoOn=9838
,pUmem_Cmd_21_ServoOff=9839
,pUmem_Cmd_21_HomeStart=9840
,pUmem_Cmd_21_HomeAbort=9841
,pUmem_Cmd_21_HomeOffset=9842
,pUmem_Cmd_21_JogStop=9843
,pUmem_Cmd_21_JogContPlus=9844
,pUmem_Cmd_21_JogContMinus=9845
,pUmem_Cmd_21_JogAbsMove=9846
,pUmem_Cmd_21_JogIncMove=9847
,pUmem_Cmd_21_JogAbsPos=9848
,pUmem_Cmd_21_JogIncDist=9849
,pUmem_Cmd_21_JogSpeed=9850
,pUmem_Cmd_21_JogTa=9851
,pUmem_Cmd_21_JogTs=9852
,pUmem_Cmd_TBD_549C=9853
,pUmem_Cmd_TBD_54A0=9854
,pUmem_Cmd_TBD_54A4=9855
,pUmem_Cmd_TBD_54A8=9856
,pUmem_Cmd_TBD_54AC=9857
,pUmem_Cmd_22_ServoOn=9858
,pUmem_Cmd_22_ServoOff=9859
,pUmem_Cmd_22_HomeStart=9860
,pUmem_Cmd_22_HomeAbort=9861
,pUmem_Cmd_22_HomeOffset=9862
,pUmem_Cmd_22_JogStop=9863
,pUmem_Cmd_22_JogContPlus=9864
,pUmem_Cmd_22_JogContMinus=9865
,pUmem_Cmd_22_JogAbsMove=9866
,pUmem_Cmd_22_JogIncMove=9867
,pUmem_Cmd_22_JogAbsPos=9868
,pUmem_Cmd_22_JogIncDist=9869
,pUmem_Cmd_22_JogSpeed=9870
,pUmem_Cmd_22_JogTa=9871
,pUmem_Cmd_22_JogTs=9872
,pUmem_Cmd_TBD_54EC=9873
,pUmem_Cmd_TBD_54F0=9874
,pUmem_Cmd_TBD_54F4=9875
,pUmem_Cmd_TBD_54F8=9876
,pUmem_Cmd_TBD_54FC=9877
,pUmem_Cmd_23_ServoOn=9878
,pUmem_Cmd_23_ServoOff=9879
,pUmem_Cmd_23_HomeStart=9880
,pUmem_Cmd_23_HomeAbort=9881
,pUmem_Cmd_23_HomeOffset=9882
,pUmem_Cmd_23_JogStop=9883
,pUmem_Cmd_23_JogContPlus=9884
,pUmem_Cmd_23_JogContMinus=9885
,pUmem_Cmd_23_JogAbsMove=9886
,pUmem_Cmd_23_JogIncMove=9887
,pUmem_Cmd_23_JogAbsPos=9888
,pUmem_Cmd_23_JogIncDist=9889
,pUmem_Cmd_23_JogSpeed=9890
,pUmem_Cmd_23_JogTa=9891
,pUmem_Cmd_23_JogTs=9892
,pUmem_Cmd_TBD_553C=9893
,pUmem_Cmd_TBD_5540=9894
,pUmem_Cmd_TBD_5544=9895
,pUmem_Cmd_TBD_5548=9896
,pUmem_Cmd_TBD_554C=9897
,pUmem_Cmd_24_ServoOn=9898
,pUmem_Cmd_24_ServoOff=9899
,pUmem_Cmd_24_HomeStart=9900
,pUmem_Cmd_24_HomeAbort=9901
,pUmem_Cmd_24_HomeOffset=9902
,pUmem_Cmd_24_JogStop=9903
,pUmem_Cmd_24_JogContPlus=9904
,pUmem_Cmd_24_JogContMinus=9905
,pUmem_Cmd_24_JogAbsMove=9906
,pUmem_Cmd_24_JogIncMove=9907
,pUmem_Cmd_24_JogAbsPos=9908
,pUmem_Cmd_24_JogIncDist=9909
,pUmem_Cmd_24_JogSpeed=9910
,pUmem_Cmd_24_JogTa=9911
,pUmem_Cmd_24_JogTs=9912
,pUmem_Cmd_TBD_558C=9913
,pUmem_Cmd_TBD_5590=9914
,pUmem_Cmd_TBD_5594=9915
,pUmem_Cmd_TBD_5598=9916
,pUmem_Cmd_TBD_559C=9917
,pUmem_Cmd_25_ServoOn=9918
,pUmem_Cmd_25_ServoOff=9919
,pUmem_Cmd_25_HomeStart=9920
,pUmem_Cmd_25_HomeAbort=9921
,pUmem_Cmd_25_HomeOffset=9922
,pUmem_Cmd_25_JogStop=9923
,pUmem_Cmd_25_JogContPlus=9924
,pUmem_Cmd_25_JogContMinus=9925
,pUmem_Cmd_25_JogAbsMove=9926
,pUmem_Cmd_25_JogIncMove=9927
,pUmem_Cmd_25_JogAbsPos=9928
,pUmem_Cmd_25_JogIncDist=9929
,pUmem_Cmd_25_JogSpeed=9930
,pUmem_Cmd_25_JogTa=9931
,pUmem_Cmd_25_JogTs=9932
,pUmem_Cmd_TBD_55DC=9933
,pUmem_Cmd_TBD_55E0=9934
,pUmem_Cmd_TBD_55E4=9935
,pUmem_Cmd_TBD_55E8=9936
,pUmem_Cmd_TBD_55EC=9937
,pUmem_Cmd_26_ServoOn=9938
,pUmem_Cmd_26_ServoOff=9939
,pUmem_Cmd_26_HomeStart=9940
,pUmem_Cmd_26_HomeAbort=9941
,pUmem_Cmd_26_HomeOffset=9942
,pUmem_Cmd_26_JogStop=9943
,pUmem_Cmd_26_JogContPlus=9944
,pUmem_Cmd_26_JogContMinus=9945
,pUmem_Cmd_26_JogAbsMove=9946
,pUmem_Cmd_26_JogIncMove=9947
,pUmem_Cmd_26_JogAbsPos=9948
,pUmem_Cmd_26_JogIncDist=9949
,pUmem_Cmd_26_JogSpeed=9950
,pUmem_Cmd_26_JogTa=9951
,pUmem_Cmd_26_JogTs=9952
,pUmem_Cmd_TBD_562C=9953
,pUmem_Cmd_TBD_5630=9954
,pUmem_Cmd_TBD_5634=9955
,pUmem_Cmd_TBD_5638=9956
,pUmem_Cmd_TBD_563C=9957
,pUmem_Cmd_27_ServoOn=9958
,pUmem_Cmd_27_ServoOff=9959
,pUmem_Cmd_27_HomeStart=9960
,pUmem_Cmd_27_HomeAbort=9961
,pUmem_Cmd_27_HomeOffset=9962
,pUmem_Cmd_27_JogStop=9963
,pUmem_Cmd_27_JogContPlus=9964
,pUmem_Cmd_27_JogContMinus=9965
,pUmem_Cmd_27_JogAbsMove=9966
,pUmem_Cmd_27_JogIncMove=9967
,pUmem_Cmd_27_JogAbsPos=9968
,pUmem_Cmd_27_JogIncDist=9969
,pUmem_Cmd_27_JogSpeed=9970
,pUmem_Cmd_27_JogTa=9971
,pUmem_Cmd_27_JogTs=9972
,pUmem_Cmd_TBD_567C=9973
,pUmem_Cmd_TBD_5680=9974
,pUmem_Cmd_TBD_5684=9975
,pUmem_Cmd_TBD_5688=9976
,pUmem_Cmd_TBD_568C=9977
,pUmem_Cmd_28_ServoOn=9978
,pUmem_Cmd_28_ServoOff=9979
,pUmem_Cmd_28_HomeStart=9980
,pUmem_Cmd_28_HomeAbort=9981
,pUmem_Cmd_28_HomeOffset=9982
,pUmem_Cmd_28_JogStop=9983
,pUmem_Cmd_28_JogContPlus=9984
,pUmem_Cmd_28_JogContMinus=9985
,pUmem_Cmd_28_JogAbsMove=9986
,pUmem_Cmd_28_JogIncMove=9987
,pUmem_Cmd_28_JogAbsPos=9988
,pUmem_Cmd_28_JogIncDist=9989
,pUmem_Cmd_28_JogSpeed=9990
,pUmem_Cmd_28_JogTa=9991
,pUmem_Cmd_28_JogTs=9992
,pUmem_Cmd_TBD_56CC=9993
,pUmem_Cmd_TBD_56D0=9994
,pUmem_Cmd_TBD_56D4=9995
,pUmem_Cmd_TBD_56D8=9996
,pUmem_Cmd_TBD_56DC=9997
,pUmem_Cmd_29_ServoOn=9998
,pUmem_Cmd_29_ServoOff=9999
,pUmem_Cmd_29_HomeStart=10000
,pUmem_Cmd_29_HomeAbort=10001
,pUmem_Cmd_29_HomeOffset=10002
,pUmem_Cmd_29_JogStop=10003
,pUmem_Cmd_29_JogContPlus=10004
,pUmem_Cmd_29_JogContMinus=10005
,pUmem_Cmd_29_JogAbsMove=10006
,pUmem_Cmd_29_JogIncMove=10007
,pUmem_Cmd_29_JogAbsPos=10008
,pUmem_Cmd_29_JogIncDist=10009
,pUmem_Cmd_29_JogSpeed=10010
,pUmem_Cmd_29_JogTa=10011
,pUmem_Cmd_29_JogTs=10012
,pUmem_Cmd_TBD_571C=10013
,pUmem_Cmd_TBD_5720=10014
,pUmem_Cmd_TBD_5724=10015
,pUmem_Cmd_TBD_5728=10016
,pUmem_Cmd_TBD_572C=10017
,pUmem_Cmd_30_ServoOn=10018
,pUmem_Cmd_30_ServoOff=10019
,pUmem_Cmd_30_HomeStart=10020
,pUmem_Cmd_30_HomeAbort=10021
,pUmem_Cmd_30_HomeOffset=10022
,pUmem_Cmd_30_JogStop=10023
,pUmem_Cmd_30_JogContPlus=10024
,pUmem_Cmd_30_JogContMinus=10025
,pUmem_Cmd_30_JogAbsMove=10026
,pUmem_Cmd_30_JogIncMove=10027
,pUmem_Cmd_30_JogAbsPos=10028
,pUmem_Cmd_30_JogIncDist=10029
,pUmem_Cmd_30_JogSpeed=10030
,pUmem_Cmd_30_JogTa=10031
,pUmem_Cmd_30_JogTs=10032
,pUmem_Cmd_TBD_576C=10033
,pUmem_Cmd_TBD_5770=10034
,pUmem_Cmd_TBD_5774=10035
,pUmem_Cmd_TBD_5778=10036
,pUmem_Cmd_TBD_577C=10037
,pUmem_Cmd_31_ServoOn=10038
,pUmem_Cmd_31_ServoOff=10039
,pUmem_Cmd_31_HomeStart=10040
,pUmem_Cmd_31_HomeAbort=10041
,pUmem_Cmd_31_HomeOffset=10042
,pUmem_Cmd_31_JogStop=10043
,pUmem_Cmd_31_JogContPlus=10044
,pUmem_Cmd_31_JogContMinus=10045
,pUmem_Cmd_31_JogAbsMove=10046
,pUmem_Cmd_31_JogIncMove=10047
,pUmem_Cmd_31_JogAbsPos=10048
,pUmem_Cmd_31_JogIncDist=10049
,pUmem_Cmd_31_JogSpeed=10050
,pUmem_Cmd_31_JogTa=10051
,pUmem_Cmd_31_JogTs=10052
,pUmem_Cmd_TBD_57BC=10053
,pUmem_Cmd_TBD_57C0=10054
,pUmem_Cmd_TBD_57C4=10055
,pUmem_Cmd_TBD_57C8=10056
,pUmem_Cmd_TBD_57CC=10057
,pUmem_Cmd_32_ServoOn=10058
,pUmem_Cmd_32_ServoOff=10059
,pUmem_Cmd_32_HomeStart=10060
,pUmem_Cmd_32_HomeAbort=10061
,pUmem_Cmd_32_HomeOffset=10062
,pUmem_Cmd_32_JogStop=10063
,pUmem_Cmd_32_JogContPlus=10064
,pUmem_Cmd_32_JogContMinus=10065
,pUmem_Cmd_32_JogAbsMove=10066
,pUmem_Cmd_32_JogIncMove=10067
,pUmem_Cmd_32_JogAbsPos=10068
,pUmem_Cmd_32_JogIncDist=10069
,pUmem_Cmd_32_JogSpeed=10070
,pUmem_Cmd_32_JogTa=10071
,pUmem_Cmd_32_JogTs=10072
,pUmem_Cmd_TBD_580C=10073
,pUmem_Cmd_TBD_5810=10074
,pUmem_Cmd_TBD_5814=10075
,pUmem_Cmd_TBD_5818=10076
,pUmem_Cmd_TBD_581C=10077
,pUmem_Cmd_Mc_ServoOn=10078
,pUmem_Cmd_Mc_ServoOff=10079
,pUmem_Cmd_Mc_HomeStart=10080
,pUmem_Cmd_Mc_HomeAbort=10081
,pUmem_Cmd_Mc_AlarmReset=10082
,pUmem_Cmd_Mc_RunMode=10083
,pUmem_Cmd_Mc_AutoStart=10084
,pUmem_Cmd_Mc_AutoAbort=10085
,pUmem_Cmd_Mc_CycleStart=10086
,pUmem_Cmd_Mc_Fsave=10087
,pUmem_Cmd_Mc_StepStart=10088
,pUmem_Cmd_Mc_AutoPause=10089
,pUmem_Cmd_TBD_61D8=10090
,pUmem_Cmd_TBD_61DC=10091
,pUmem_Cmd_TBD_61E0=10092
,pUmem_Cmd_TBD_61E4=10093
,pUmem_Cmd_TBD_61E8=10094
,pUmem_Cmd_TBD_61EC=10095
,pUmem_Cmd_TBD_61F0=10096
,pUmem_Cmd_TBD_61F4=10097
,pUmem_Cmd_TBD_61F8=10098
,pUmem_Cmd_TBD_61FC=10099
,pUmem_Cmd_TBD_6200=10100
,pUmem_Cmd_TBD_6204=10101
,pUmem_Cmd_TBD_6208=10102
,pUmem_Cmd_TBD_620C=10103
,pUmem_Cmd_TBD_6210=10104
,pUmem_Cmd_TBD_6214=10105
,pUmem_Cmd_TBD_6218=10106
,pUmem_Cmd_TBD_621C=10107
,pUmem_Cmd_TBD_6220=10108
,pUmem_Cmd_TBD_6224=10109
,pUmem_Cmd_TBD_6228=10110
,pUmem_Cmd_TBD_622C=10111
,pUmem_Cmd_TBD_6230=10112
,pUmem_Cmd_TBD_6234=10113
,pUmem_Cmd_TBD_6238=10114
,pUmem_Cmd_TBD_623C=10115
,pUmem_Cmd_TBD_6240=10116
,pUmem_Cmd_TBD_6244=10117
,pUmem_Cmd_Ws_ServoOn=10118
,pUmem_Cmd_Ws_ServoOff=10119
,pUmem_Cmd_Ws_HomeStart=10120
,pUmem_Cmd_Ws_HomeAbort=10121
,pUmem_Cmd_Ws_AlarmReset=10122
,pUmem_Cmd_Ws_AlarmRetry=10123
,pUmem_Cmd_Ws_AlarmAbort=10124
,pUmem_Cmd_TBD_65AC=10125
,pUmem_Cmd_TBD_65B0=10126
,pUmem_Cmd_TBD_65B4=10127
,pUmem_Cmd_Ws_TestShot=10128
,pUmem_Cmd_Ws_PdtStaChange=10129
,pUmem_Cmd_Tr_PdtStaChange=10130
,pUmem_Cmd_Ws_LaserEnableStart=10131
,pUmem_Cmd_Ws_LaserDisableStart=10132
,pUmem_Cmd_Ws_LaserTestCrossStart=10133
,pUmem_Cmd_Ws_LaserTestCrossAbort=10134
,pUmem_Cmd_Ws_LaserTestLineStart=10135
,pUmem_Cmd_Ws_LaserTestLineAbort=10136
,pUmem_Cmd_TBD_65DC=10137
,pUmem_Cmd_Ws_ReadyPowerCheck=10138
,pUmem_Cmd_Ws_PowerCheckStart=10139
,pUmem_Cmd_Ws_PowerCheckAbort=10140
,pUmem_Cmd_TBD_65EC=10141
,pUmem_Cmd_Wd_SrtVelC=10142
,pUmem_Cmd_Wd_MdiStart=10143
,pUmem_Cmd_Wd_MdiAbort=10144
,pUmem_Cmd_Wd_MdiPosX=10145
,pUmem_Cmd_Wd_MdiPosY=10146
,pUmem_Cmd_Wd_MdiPosC=10147
,pUmem_Cmd_Ws_LdStart=10148
,pUmem_Cmd_Ws_LdAbort=10149
,pUmem_Cmd_Ws_LdHold=10150
,pUmem_Cmd_Ws_RdStart=10151
,pUmem_Cmd_Ws_RdAbort=10152
,pUmem_Cmd_Ws_RdHold=10153
,pUmem_Cmd_Ws_WdStart=10154
,pUmem_Cmd_Ws_WdAbort=10155
,pUmem_Cmd_Ws_WdHold=10156
,pUmem_Cmd_Ws_WtStart=10157
,pUmem_Cmd_Ws_WtAbort=10158
,pUmem_Cmd_Ws_WtHold=10159
,pUmem_Cmd_Ws_UdStart=10160
,pUmem_Cmd_Ws_UdAbort=10161
,pUmem_Cmd_Ws_UdHold=10162
,pUmem_Cmd_Ws_RjStart=10163
,pUmem_Cmd_Ws_RjAbort=10164
,pUmem_Cmd_Ws_RjHold=10165
,pUmem_Cmd_TBD_6650=10166
,pUmem_Cmd_TBD_6654=10167
,pUmem_Cmd_TBD_6658=10168
,pUmem_Cmd_TBD_665C=10169
,pUmem_Cmd_TBD_6660=10170
,pUmem_Cmd_TBD_6664=10171
,pUmem_Cmd_TBD_6668=10172
,pUmem_Cmd_TBD_666C=10173
,pUmem_Cmd_TBD_6670=10174
,pUmem_Cmd_TBD_6674=10175
,pUmem_Cmd_TBD_6678=10176
,pUmem_Cmd_TBD_667C=10177
,pUmem_Cmd_Ws_1stTransRjRsp=10178
,pUmem_Cmd_Ws_2ndTransLdRsp=10179
,pUmem_Cmd_Ws_2dVisionCkRsp=10180
,pUmem_Cmd_Ws_LwmStartRsp=10181
,pUmem_Cmd_TBD_6690=10182
,pUmem_Cmd_TBD_6694=10183
,pUmem_Cmd_TBD_6698=10184
,pUmem_Cmd_TBD_669C=10185
,pUmem_Cmd_Ws_WeldingSkip=10186
,pUmem_Cmd_Ws_RspSkipOpt=10187
,pUmem_Cmd_Ws_2ndTransLdAlignX=10188
,pUmem_Cmd_Ws_2ndTransLdAlignY=10189
,pUmem_Cmd_Ws_2ndTransLdAlignC=10190
,pUmem_Cmd_TBD_66B4=10191
,pUmem_Cmd_TBD_66B8=10192
,pUmem_Cmd_TBD_66BC=10193
,pUmem_Cmd_TBD_66C0=10194
,pUmem_Cmd_TBD_66C4=10195
,pUmem_Cmd_TBD_66C8=10196
,pUmem_Cmd_TBD_66CC=10197
,pUmem_Cmd_Ws_2ndTransPdtDir=10198
,pUmem_Cmd_Ws_2ndTransPdtNo=10199
,pUmem_Cmd_Ws_2ndTransTempOpt=10200
,pUmem_Cmd_TBD_66DC=10201
,pUmem_Cmd_TBD_66E0=10202
,pUmem_Cmd_TBD_66E4=10203
,pUmem_Cmd_TBD_66E8=10204
,pUmem_Cmd_TBD_66EC=10205
,pUmem_Cmd_TBD_66F0=10206
,pUmem_Cmd_TBD_66F4=10207
,pUmem_Cmd_Ws_AccLimitX=10208
,pUmem_Cmd_Ws_AccLimitY=10209
,pUmem_Cmd_Ws_AccLimitC=10210
,pUmem_Cmd_Ws_VelLimitC=10211
,pUmem_Cmd_Ws_RefVel=10212
,pUmem_Cmd_Ws_RotOffsetX=10213
,pUmem_Cmd_Ws_RotOffsetY=10214
,pUmem_Cmd_Ws_RefVel_2=10215
,pUmem_Cmd_Ws_OutMode_2=10216
,pUmem_Cmd_TBD_671C=10217
,pUmem_Cmd_Ws_OutMode=10218
,pUmem_Cmd_Ws_PfmPeriod=10219
,pUmem_Cmd_Ws_PfmOnTime=10220
,pUmem_Cmd_Ws_CorePfmEna=10221
,pUmem_Cmd_Ws_RingPfmEna=10222
,pUmem_Cmd_Ws_CorePowerSf=10223
,pUmem_Cmd_Ws_CoreRefPower=10224
,pUmem_Cmd_Ws_CoreMinPower=10225
,pUmem_Cmd_Ws_CoreMaxPower=10226
,pUmem_Cmd_Ws_RingPowerSf=10227
,pUmem_Cmd_Ws_RingRefPower=10228
,pUmem_Cmd_Ws_RingMinPower=10229
,pUmem_Cmd_Ws_RingMaxPower=10230
,pUmem_Cmd_Ws_PfmPeriod_2=10231
,pUmem_Cmd_Ws_PfmOnTime_2=10232
,pUmem_Cmd_Ws_CorePfmEna_2=10233
,pUmem_Cmd_Ws_RingPfmEna_2=10234
,pUmem_Cmd_Ws_CoreRefPower_2=10235
,pUmem_Cmd_Ws_RingRefPower_2=10236
,pUmem_Cmd_TBD_676C=10237
,pUmem_Cmd_Ws_ShotTime=10238
,pUmem_Cmd_Ws_EprOut=10239
,pUmem_Cmd_Ws_TempCkTime=10240
,pUmem_Cmd_Ws_TempOffset1=10241
,pUmem_Cmd_Ws_CldInposDelay=10242
,pUmem_Cmd_Ws_CoverFwdPos=10243
,pUmem_Cmd_Ws_CoverBwdPos=10244
,pUmem_Cmd_Ws_TempOffset2=10245
,pUmem_Cmd_Ws_PowerCheck_CorePower=10246
,pUmem_Cmd_Ws_PowerCheck_RingPower=10247
,pUmem_Cmd_Ws_TbVacBlow=10248
,pUmem_Cmd_TBD_679C=10249
,pUmem_Cmd_TBD_67A0=10250
,pUmem_Cmd_TBD_67A4=10251
,pUmem_Cmd_TBD_67A8=10252
,pUmem_Cmd_TBD_67AC=10253
,pUmem_Cmd_TBD_67B0=10254
,pUmem_Cmd_TBD_67B4=10255
,pUmem_Cmd_TBD_67B8=10256
,pUmem_Cmd_TBD_67BC=10257
,pUmem_Cmd_Ws_LdVelX=10258
,pUmem_Cmd_Ws_LdVelY=10259
,pUmem_Cmd_Ws_LdVelC=10260
,pUmem_Cmd_Ws_LdPosX=10261
,pUmem_Cmd_Ws_LdPosY=10262
,pUmem_Cmd_Ws_LdPosC=10263
,pUmem_Cmd_Ws_RdVelX=10264
,pUmem_Cmd_Ws_RdVelY=10265
,pUmem_Cmd_Ws_RdVelC=10266
,pUmem_Cmd_Ws_RdPosX=10267
,pUmem_Cmd_Ws_RdPosY=10268
,pUmem_Cmd_Ws_RdPosC=10269
,pUmem_Cmd_Ws_WdVelX=10270
,pUmem_Cmd_Ws_WdVelY=10271
,pUmem_Cmd_Ws_WdVelC=10272
,pUmem_Cmd_Ws_WdPosX=10273
,pUmem_Cmd_Ws_WdPosY=10274
,pUmem_Cmd_Ws_WdPosC=10275
,pUmem_Cmd_Ws_WtVelX=10276
,pUmem_Cmd_Ws_WtVelY=10277
,pUmem_Cmd_Ws_WtVelC=10278
,pUmem_Cmd_Ws_WtPosX=10279
,pUmem_Cmd_Ws_WtPosY=10280
,pUmem_Cmd_Ws_WtPosC=10281
,pUmem_Cmd_Ws_UdVelX=10282
,pUmem_Cmd_Ws_UdVelY=10283
,pUmem_Cmd_Ws_UdVelC=10284
,pUmem_Cmd_Ws_UdPosX=10285
,pUmem_Cmd_Ws_UdPosY=10286
,pUmem_Cmd_Ws_UdPosC=10287
,pUmem_Cmd_Ws_RjVelX=10288
,pUmem_Cmd_Ws_RjVelY=10289
,pUmem_Cmd_Ws_RjVelC=10290
,pUmem_Cmd_Ws_RjPosX=10291
,pUmem_Cmd_Ws_RjPosY=10292
,pUmem_Cmd_Ws_RjPosC=10293
,pUmem_Cmd_TBD_6850=10294
,pUmem_Cmd_TBD_6854=10295
,pUmem_Cmd_TBD_6858=10296
,pUmem_Cmd_TBD_685C=10297
,pUmem_Cmd_TBD_6860=10298
,pUmem_Cmd_TBD_6864=10299
,pUmem_Cmd_TBD_6868=10300
,pUmem_Cmd_TBD_686C=10301
,pUmem_Cmd_TBD_6870=10302
,pUmem_Cmd_TBD_6874=10303
,pUmem_Cmd_TBD_6878=10304
,pUmem_Cmd_TBD_687C=10305
,pUmem_Cmd_TBD_6880=10306
,pUmem_Cmd_TBD_6884=10307
,pUmem_Cmd_Vs_ServoOn=10308
,pUmem_Cmd_Vs_ServoOff=10309
,pUmem_Cmd_Vs_HomeStart=10310
,pUmem_Cmd_Vs_HomeAbort=10311
,pUmem_Cmd_Vs_AlarmReset=10312
,pUmem_Cmd_Vs_AlarmRetry=10313
,pUmem_Cmd_Vs_AlarmAbort=10314
,pUmem_Cmd_TBD_6994=10315
,pUmem_Cmd_TBD_6998=10316
,pUmem_Cmd_TBD_699C=10317
,pUmem_Cmd_Vs_TestShot=10318
,pUmem_Cmd_Vs_PdtStaChange=10319
,pUmem_Cmd_TBD_69A8=10320
,pUmem_Cmd_TBD_69AC=10321
,pUmem_Cmd_TBD_69B0=10322
,pUmem_Cmd_TBD_69B4=10323
,pUmem_Cmd_TBD_69B8=10324
,pUmem_Cmd_TBD_69BC=10325
,pUmem_Cmd_TBD_69C0=10326
,pUmem_Cmd_TBD_69C4=10327
,pUmem_Cmd_TBD_69C8=10328
,pUmem_Cmd_TBD_69CC=10329
,pUmem_Cmd_TBD_69D0=10330
,pUmem_Cmd_TBD_69D4=10331
,pUmem_Cmd_TBD_69D8=10332
,pUmem_Cmd_TBD_69DC=10333
,pUmem_Cmd_TBD_69E0=10334
,pUmem_Cmd_TBD_69E4=10335
,pUmem_Cmd_TBD_69E8=10336
,pUmem_Cmd_TBD_69EC=10337
,pUmem_Cmd_Vs_LdStart=10338
,pUmem_Cmd_Vs_LdAbort=10339
,pUmem_Cmd_Vs_LdHold=10340
,pUmem_Cmd_Vs_RdStart=10341
,pUmem_Cmd_Vs_RdAbort=10342
,pUmem_Cmd_Vs_RdHold=10343
,pUmem_Cmd_Vs_VnStart=10344
,pUmem_Cmd_Vs_VnAbort=10345
,pUmem_Cmd_Vs_VnHold=10346
,pUmem_Cmd_Vs_WtStart=10347
,pUmem_Cmd_Vs_WtAbort=10348
,pUmem_Cmd_Vs_WtHold=10349
,pUmem_Cmd_Vs_UdStart=10350
,pUmem_Cmd_Vs_UdAbort=10351
,pUmem_Cmd_Vs_UdHold=10352
,pUmem_Cmd_Vs_RjStart=10353
,pUmem_Cmd_Vs_RjAbort=10354
,pUmem_Cmd_Vs_RjHold=10355
,pUmem_Cmd_TBD_6A38=10356
,pUmem_Cmd_TBD_6A3C=10357
,pUmem_Cmd_TBD_6A40=10358
,pUmem_Cmd_TBD_6A44=10359
,pUmem_Cmd_TBD_6A48=10360
,pUmem_Cmd_TBD_6A4C=10361
,pUmem_Cmd_TBD_6A50=10362
,pUmem_Cmd_TBD_6A54=10363
,pUmem_Cmd_TBD_6A58=10364
,pUmem_Cmd_TBD_6A5C=10365
,pUmem_Cmd_TBD_6A60=10366
,pUmem_Cmd_TBD_6A64=10367
,pUmem_Cmd_Vs_3rdTransUdRsp=10368
,pUmem_Cmd_Vs_3rdTransRjRsp=10369
,pUmem_Cmd_Vs_3DVisionStRsp=10370
,pUmem_Cmd_Vs_3DVisionEdRsp=10371
,pUmem_Cmd_TBD_6A78=10372
,pUmem_Cmd_TBD_6A7C=10373
,pUmem_Cmd_TBD_6A80=10374
,pUmem_Cmd_TBD_6A84=10375
,pUmem_Cmd_Vs_VisionSkip=10376
,pUmem_Cmd_Vs_RspSkipOpt=10377
,pUmem_Cmd_TBD_6A90=10378
,pUmem_Cmd_TBD_6A94=10379
,pUmem_Cmd_TBD_6A98=10380
,pUmem_Cmd_TBD_6A9C=10381
,pUmem_Cmd_TBD_6AA0=10382
,pUmem_Cmd_TBD_6AA4=10383
,pUmem_Cmd_TBD_6AA8=10384
,pUmem_Cmd_TBD_6AAC=10385
,pUmem_Cmd_TBD_6AB0=10386
,pUmem_Cmd_TBD_6AB4=10387
,pUmem_Cmd_TBD_6AB8=10388
,pUmem_Cmd_TBD_6ABC=10389
,pUmem_Cmd_TBD_6AC0=10390
,pUmem_Cmd_TBD_6AC4=10391
,pUmem_Cmd_TBD_6AC8=10392
,pUmem_Cmd_TBD_6ACC=10393
,pUmem_Cmd_TBD_6AD0=10394
,pUmem_Cmd_TBD_6AD4=10395
,pUmem_Cmd_TBD_6AD8=10396
,pUmem_Cmd_TBD_6ADC=10397
,pUmem_Cmd_Vs_AccLimitX=10398
,pUmem_Cmd_Vs_AccLimitY=10399
,pUmem_Cmd_Vs_AccLimitC=10400
,pUmem_Cmd_Vs_VelLimitC=10401
,pUmem_Cmd_Vs_RefVel=10402
,pUmem_Cmd_Vs_RotOffsetX=10403
,pUmem_Cmd_Vs_RotOffsetY=10404
,pUmem_Cmd_TBD_6AFC=10405
,pUmem_Cmd_TBD_6B00=10406
,pUmem_Cmd_TBD_6B04=10407
,pUmem_Cmd_Vs_PfmPeriod=10408
,pUmem_Cmd_Vs_PfmDuty=10409
,pUmem_Cmd_TBD_6B10=10410
,pUmem_Cmd_TBD_6B14=10411
,pUmem_Cmd_TBD_6B18=10412
,pUmem_Cmd_TBD_6B1C=10413
,pUmem_Cmd_TBD_6B20=10414
,pUmem_Cmd_TBD_6B24=10415
,pUmem_Cmd_TBD_6B28=10416
,pUmem_Cmd_TBD_6B2C=10417
,pUmem_Cmd_TBD_6B30=10418
,pUmem_Cmd_TBD_6B34=10419
,pUmem_Cmd_TBD_6B38=10420
,pUmem_Cmd_TBD_6B3C=10421
,pUmem_Cmd_TBD_6B40=10422
,pUmem_Cmd_TBD_6B44=10423
,pUmem_Cmd_TBD_6B48=10424
,pUmem_Cmd_TBD_6B4C=10425
,pUmem_Cmd_TBD_6B50=10426
,pUmem_Cmd_TBD_6B54=10427
,pUmem_Cmd_Vs_ShotTime=10428
,pUmem_Cmd_Vs_CldInposDelay=10429
,pUmem_Cmd_TBD_6B60=10430
,pUmem_Cmd_TBD_6B64=10431
,pUmem_Cmd_TBD_6B68=10432
,pUmem_Cmd_TBD_6B6C=10433
,pUmem_Cmd_TBD_6B70=10434
,pUmem_Cmd_TBD_6B74=10435
,pUmem_Cmd_TBD_6B78=10436
,pUmem_Cmd_TBD_6B7C=10437
,pUmem_Cmd_TBD_6B80=10438
,pUmem_Cmd_TBD_6B84=10439
,pUmem_Cmd_TBD_6B88=10440
,pUmem_Cmd_TBD_6B8C=10441
,pUmem_Cmd_TBD_6B90=10442
,pUmem_Cmd_TBD_6B94=10443
,pUmem_Cmd_TBD_6B98=10444
,pUmem_Cmd_TBD_6B9C=10445
,pUmem_Cmd_TBD_6BA0=10446
,pUmem_Cmd_TBD_6BA4=10447
,pUmem_Cmd_Vs_LdVelX=10448
,pUmem_Cmd_Vs_LdVelY=10449
,pUmem_Cmd_Vs_LdVelC=10450
,pUmem_Cmd_Vs_LdPosX=10451
,pUmem_Cmd_Vs_LdPosY=10452
,pUmem_Cmd_Vs_LdPosC=10453
,pUmem_Cmd_Vs_RdVelX=10454
,pUmem_Cmd_Vs_RdVelY=10455
,pUmem_Cmd_Vs_RdVelC=10456
,pUmem_Cmd_Vs_RdPosX=10457
,pUmem_Cmd_Vs_RdPosY=10458
,pUmem_Cmd_Vs_RdPosC=10459
,pUmem_Cmd_Vs_VnVelX=10460
,pUmem_Cmd_Vs_VnVelY=10461
,pUmem_Cmd_Vs_VnVelC=10462
,pUmem_Cmd_Vs_VnPosX=10463
,pUmem_Cmd_Vs_VnPosY=10464
,pUmem_Cmd_Vs_VnPosC=10465
,pUmem_Cmd_Vs_WtVelX=10466
,pUmem_Cmd_Vs_WtVelY=10467
,pUmem_Cmd_Vs_WtVelC=10468
,pUmem_Cmd_Vs_WtPosX=10469
,pUmem_Cmd_Vs_WtPosY=10470
,pUmem_Cmd_Vs_WtPosC=10471
,pUmem_Cmd_Vs_UdVelX=10472
,pUmem_Cmd_Vs_UdVelY=10473
,pUmem_Cmd_Vs_UdVelC=10474
,pUmem_Cmd_Vs_UdPosX=10475
,pUmem_Cmd_Vs_UdPosY=10476
,pUmem_Cmd_Vs_UdPosC=10477
,pUmem_Cmd_Vs_RjVelX=10478
,pUmem_Cmd_Vs_RjVelY=10479
,pUmem_Cmd_Vs_RjVelC=10480
,pUmem_Cmd_Vs_RjPosX=10481
,pUmem_Cmd_Vs_RjPosY=10482
,pUmem_Cmd_Vs_RjPosC=10483
,pUmem_Cmd_TBD_6C38=10484
,pUmem_Cmd_TBD_6C3C=10485
,pUmem_Cmd_TBD_6C40=10486
,pUmem_Cmd_TBD_6C44=10487
,pUmem_Cmd_TBD_6C48=10488
,pUmem_Cmd_TBD_6C4C=10489
,pUmem_Cmd_TBD_6C50=10490
,pUmem_Cmd_TBD_6C54=10491
,pUmem_Cmd_TBD_6C58=10492
,pUmem_Cmd_TBD_6C5C=10493
,pUmem_Cmd_TBD_6C60=10494
,pUmem_Cmd_TBD_6C64=10495
,pUmem_Cmd_TBD_6C68=10496
,pUmem_Cmd_TBD_6C6C=10497
,pUmem_Cmd_Sc_ServoOn=10498
,pUmem_Cmd_Sc_ServoOff=10499
,pUmem_Cmd_Sc_HomeStart=10500
,pUmem_Cmd_Sc_HomeAbort=10501
,pUmem_Cmd_Sc_AlarmReset=10502
,pUmem_Cmd_Sc_Fsave=10503
,pUmem_Cmd_Sc_WblEna=10504
,pUmem_Cmd_Sc_WblLen=10505
,pUmem_Cmd_Sc_WblDist=10506
,pUmem_Cmd_Sc_WblType=10507
,pUmem_Cmd_Sc_WblRatioW=10508
,pUmem_Cmd_Sc_WblRatioL=10509
,pUmem_Cmd_Sc_WblOffsetX=10510
,pUmem_Cmd_Sc_WblOffsetY=10511
,pUmem_Cmd_Sc_WblEna_2=10512
,pUmem_Cmd_Sc_WblLen_2=10513
,pUmem_Cmd_Sc_WblDist_2=10514
,pUmem_Cmd_Sc_WblType_2=10515
,pUmem_Cmd_Sc_WblRatioW_2=10516
,pUmem_Cmd_Sc_WblRatioL_2=10517
,pUmem_Cmd_Sc_WblOffsetX_2=10518
,pUmem_Cmd_Sc_WblOffsetY_2=10519
,pUmem_Di00=10616
,pUmem_Di01_LaserReady=10617
,pUmem_Di02_LaserReqResp=10618
,pUmem_Di03_LaserPowerOn=10619
,pUmem_Di04_LaserAdMode=10620
,pUmem_Di05_LaserProgRun=10621
,pUmem_Di06_LaserWarning=10622
,pUmem_Di07_LaserAbnormal=10623
,pUmem_Di08=10624
,pUmem_Di09=10625
,pUmem_Di0A=10626
,pUmem_Di0B=10627
,pUmem_Di0C=10628
,pUmem_Di0D=10629
,pUmem_Di0E=10630
,pUmem_Di0F=10631
,pUmem_Di10_WsLtFixUp=10632
,pUmem_Di11_WsVsLtStrCls=10633
,pUmem_Di12_WsLtFixDn=10634
,pUmem_Di13_WsVsLtStrOpn=10635
,pUmem_Di14_WsRtFixUp=10636
,pUmem_Di15_WsVsRtStrCls=10637
,pUmem_Di16_WsRtFixDn=10638
,pUmem_Di17_WsVsRtStrOpn=10639
,pUmem_Di18_WsTempBwd=10640
,pUmem_Di19_TrPickUp=10641
,pUmem_Di1A_WsTempFwd=10642
,pUmem_Di1B_TrPickDn=10643
,pUmem_Di1C_WsTbOutOfRange=10644
,pUmem_Di1D_TrGripCls=10645
,pUmem_Di1E=10646
,pUmem_Di1F_TrGripOpn=10647
,pUmem_Di20_VsTbFixBwd=10648
,pUmem_Di21_WsAirCurtain=10649
,pUmem_Di22_VsTbFixFwd=10650
,pUmem_Di23_WsN2Blow=10651
,pUmem_Di24_VsTbFixUp=10652
,pUmem_Di25=10653
,pUmem_Di26_VsTbFixDn=10654
,pUmem_Di27=10655
,pUmem_Di28_WsTbDet=10656
,pUmem_Di29=10657
,pUmem_Di2A_VsTbDet=10658
,pUmem_Di2B=10659
,pUmem_Di2C_VsTbOutOfRange=10660
,pUmem_Di2D=10661
,pUmem_Di2E=10662
,pUmem_Di2F=10663
,pUmem_Di30_EcldFwd=10664
,pUmem_Di31_EcldBwd=10665
,pUmem_Do00_LaserEmission=10666
,pUmem_Do01_LaserReset=10667
,pUmem_Do02_LaserRequest=10668
,pUmem_Do03_LaserPowerOn=10669
,pUmem_Do04_LaserAdInEna=10670
,pUmem_Do05_LaserGuideEna=10671
,pUmem_Do06_LaserProgEna=10672
,pUmem_Do07_LaserProgStop=10673
,pUmem_Do08=10674
,pUmem_Do09=10675
,pUmem_Do0A=10676
,pUmem_Do0B=10677
,pUmem_Do0C=10678
,pUmem_Do0D=10679
,pUmem_Do0E=10680
,pUmem_Do0F=10681
,pUmem_Do10_WsTbFixUp=10682
,pUmem_Do11_WsTempBwd=10683
,pUmem_Do12_WsTbFixDn=10684
,pUmem_Do13_WsTempFwd=10685
,pUmem_Do14_TrGripCls=10686
,pUmem_Do15_VsTbFixBwd=10687
,pUmem_Do16_TrGripOpn=10688
,pUmem_Do17_VsTbFixFwd=10689
,pUmem_Do18_TrPickUp=10690
,pUmem_Do19_VsTbFixUp=10691
,pUmem_Do1A_TrPickDn=10692
,pUmem_Do1B_VsTbFixDn=10693
,pUmem_Do1C_WsVsStrCls=10694
,pUmem_Do1D_WsCoolAir=10695
,pUmem_Do1E_WsVsStrOpn=10696
,pUmem_Do1F=10697
,pUmem_Do20_WsTbVacm=10698
,pUmem_Do21_WsAirCurtain=10699
,pUmem_Do22_WsTbBlow=10700
,pUmem_Do23_WsN2Blow=10701
,pUmem_Do24=10702
,pUmem_Do25_WsTbVacmValve=10703
,pUmem_Do26=10704
,pUmem_Do27=10705
,pUmem_Do28=10706
,pUmem_Do29=10707
,pUmem_Do2A=10708
,pUmem_Do2B=10709
,pUmem_Do2C=10710
,pUmem_Do2D=10711
,pUmem_Do2E=10712
,pUmem_Do2F=10713
,pUmem_Do30_EcldFwd=10714
,pUmem_Do31_EcldBwd=10715
,pUmem_Ai00_WsLoadCell=10716
,pUmem_Ai01=10717
,pUmem_Ai03_WsCorePower=10718
,pUmem_Ai04_WsRingPower=10719
,pUmem_Ti00_WsTempSen1=10720
,pUmem_Ti01_WsTempSen2=10721
,pUmem_Sta_Mc_BufIdx=10722
,pWs_Vect_Dlt=12115
,pVs_Vect_Dlt=12116
,pWs_Epr_OutVdc=12117};
enum ptrMarray {_ptrMarray_=-1
,pEcat_Di_Md01=8231
,pEcat_Di_Md02=8247
,pEcat_Do_Md01=8263
,pEcat_Do_Md02=8279
,pEcat_CmdPos=8370
,pEcat_ActErr=8402
,pEcat_ActTrq=8434
,pBuf_ActTrq=8466
,pEcat_AlarmReset=8498
,pGpio_Di_Md00=8530
,pGpio_Do_Md00=8546
,pUmem_Di_Md00=10520
,pUmem_Di_Md01=10536
,pUmem_Di_Md02=10552
,pUmem_Do_Md00=10568
,pUmem_Do_Md01=10584
,pUmem_Do_Md02=10600
,pUmem_Sta_Mc_SeqCur=10723
,pUmem_Sta_Mc_SeqOld=10773
,pUmem_Sta_Mc_Pdt=10823
,pUmem_Sta_Mc_Time_L=10873
,pUmem_Sta_Mc_Time_H=10923
,pUmem_Sta_Mc_Time_BufD=10973
,pUmem_Sta_Mc_Time_BufL=11023
,pUmem_Sta_Mc_Time_BufH=11073
,pUmem_Sta_CmdPos=11123
,pUmem_Sta_ActPos=11155
,pUmem_Sta_Velocity=11187
,pUmem_Sta_Load=11219
,pUmem_Sta_AmpEna=11251
,pUmem_Sta_CloseLoop=11283
,pUmem_Sta_InPos=11315
,pUmem_Sta_HomeFin=11347
,pUmem_Sta_HomeIng=11379
,pUmem_Sta_LimitMinus=11411
,pUmem_Sta_LimitPlus=11443
,pUmem_Sta_FollowingErr=11475
,pUmem_Sta_AmpFault=11507
,pUmem_Sta_EncLoss=11539
,pUmem_Sta_I2tErr=11571
,pUmem_Sta_ProgPos=11603
,pUmem_Cmd_ServoOn=11635
,pUmem_Cmd_ServoOff=11667
,pUmem_Cmd_HomeStart=11699
,pUmem_Cmd_HomeAbort=11731
,pUmem_Cmd_HomeOffset=11763
,pUmem_Cmd_JogStop=11795
,pUmem_Cmd_JogContPlus=11827
,pUmem_Cmd_JogContMinus=11859
,pUmem_Cmd_JogAbsMove=11891
,pUmem_Cmd_JogIncMove=11923
,pUmem_Cmd_JogAbsPos=11955
,pUmem_Cmd_JogIncDist=11987
,pUmem_Cmd_JogSpeed=12019
,pUmem_Cmd_JogTa=12051
,pUmem_Cmd_JogTs=12083};
#ifndef _PP_PROJ_HDR_
  void SetEnumGlobalVar(enum globalP var, double data)
  {
    pshm->P[var] = data;
  }

  double GetEnumGlobalVar(enum globalP var)
  {
    return pshm->P[var];
  }

  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data)
  {
    pshm->P[(var + index)%MAX_P] = data;
  }

  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index)
  {
    return pshm->P[(var + index)%MAX_P];
  }

  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[var] = data;
  }

  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[var];
  }

  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data)
  {
    pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q] = data;
  }

  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs)
  {
    return pshm->Coord[cs % MAX_COORDS].Q[(var + index)%MAX_Q];
  }

  void SetEnumPtrVar(enum ptrM var, double data)
  {
    im_write(pshm->Mdef + var, data, &pshm->Ldata);
  }

  double GetEnumPtrVar(enum ptrM var)
  {
    return im_read(pshm->Mdef + var, &pshm->Ldata);
  }

  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data)
  {
    im_write(pshm->Mdef + ((var + index)%MAX_M), data, &pshm->Ldata);
  }

  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index)
  {
    return im_read(pshm->Mdef + ((var + index)%MAX_M), &pshm->Ldata);
  }

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#else

  void SetEnumGlobalVar(enum globalP var, double data);
  double GetEnumGlobalVar(enum globalP var);
  void SetEnumGlobalArrayVar(enum globalParray var, unsigned index, double data);
  double GetEnumGlobalArrayVar(enum globalParray var, unsigned index);
  void SetEnumCSGlobalVar(enum csglobalQ var, unsigned cs, double data);
  double GetEnumCSGlobalVar(enum csglobalQ var, unsigned cs);
  void SetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs, double data);
  double GetEnumCSGlobalArrayVar(enum csglobalQarray var, unsigned index, unsigned cs);
  void SetEnumPtrVar(enum ptrM var, double data);
  double GetEnumPtrVar(enum ptrM var);
  void SetEnumPtrArrayVar(enum ptrMarray var, unsigned index, double data);
  double GetEnumPtrArrayVar(enum ptrMarray var, unsigned index);

  #define SetGlobalVar(i, x)              SetEnumGlobalVar(i, x)
  #define SetGlobalArrayVar(i, j, x)      SetEnumGlobalArrayVar(i, j, x)
  #define GetGlobalVar(i)                 GetEnumGlobalVar(i)
  #define GetGlobalArrayVar(i, j)         GetEnumGlobalArrayVar(i, j)

  #define SetCSGlobalVar(i, j, x)         SetEnumCSGlobalVar(i, j, x)
  #define SetCSGlobalArrayVar(i, j, k, x) SetEnumCSGlobalArrayVar(i, j, k, x)
  #define GetCSGlobalVar(i, j)            GetEnumCSGlobalVar(i, j)
  #define GetCSGlobalArrayVar(i, j, k)    GetEnumCSGlobalArrayVar(i, j, k)

  #define SetPtrVar(i, x)                 SetEnumPtrVar(i, x)
  #define SetPtrArrayVar(i, j, x)         SetEnumPtrArrayVar(i, j, x)
  #define GetPtrVar(i)                    GetEnumPtrVar(i)
  #define GetPtrArrayVar(i, j)            GetEnumPtrArrayVar(i, j)

#endif
// end of #ifdef _EnumMode_
#else
// ***** Standard default mode *****
#define gMach_Type 8192
#define gTest_Cnt 8193
#define pEcat_EcldrDi_Out0 8192
#define pEcat_EcldrDi_Out1 8193
#define pEcat_EcldrDi_Out2 8194
#define pEcat_EcldrDi_Out3 8195
#define pEcat_EcldrDi_Out4 8196
#define pEcat_EcldrDi_Out5 8197
#define pEcat_EcldrDi_Busy 8198
#define pEcat_EcldrDi_Svre 8199
#define pEcat_EcldrDi_Seton 8200
#define pEcat_EcldrDi_Inp 8201
#define pEcat_EcldrDi_Area 8202
#define pEcat_EcldrDi_Warea 8203
#define pEcat_EcldrDi_Estop 8204
#define pEcat_EcldrDi_Alarm 8205
#define pEcat_EcldrDo_In0 8206
#define pEcat_EcldrDo_In1 8207
#define pEcat_EcldrDo_In2 8208
#define pEcat_EcldrDo_In3 8209
#define pEcat_EcldrDo_In4 8210
#define pEcat_EcldrDo_In5 8211
#define pEcat_EcldrDo_Hold 8212
#define pEcat_EcldrDo_Svon 8213
#define pEcat_EcldrDo_Drive 8214
#define pEcat_EcldrDo_Reset 8215
#define pEcat_EcldrDo_Setup 8216
#define pEcat_EcldrDo_JogM 8217
#define pEcat_EcldrDo_JogP 8218
#define pEcat_EcldrDo_Flgth 8219
#define pEcat_EcldrJog_Flg 8220
#define pEcat_EcldrJog_Std 8221
#define pEcat_EcldrJog_Trg 8222
#define pEcat_EcldrJog_Mod 8223
#define pEcat_EcldrJog_Vel 8224
#define pEcat_EcldrJog_Pos 8225
#define pEcat_EcldrJog_Acc 8226
#define pEcat_EcldrJog_Dec 8227
#define pEcat_EcldrJog_InP 8228
#define pEcat_Ecldr_CmdPos 8229
#define pEcat_Ecldr_ActPos 8230
#define pEcat_Di_Md01 8231
#define pEcat_Di_Md02 8247
#define pEcat_Do_Md01 8263
#define pEcat_Do_Md02 8279
#define pEcat_Di10_WsLtFixUp 8295
#define pEcat_Di11_WsVsLtStrCls 8296
#define pEcat_Di12_WsLtFixDn 8297
#define pEcat_Di13_WsVsLtStrOpn 8298
#define pEcat_Di14_WsRtFixUp 8299
#define pEcat_Di15_WsVsRtStrCls 8300
#define pEcat_Di16_WsRtFixDn 8301
#define pEcat_Di17_WsVsRtStrOpn 8302
#define pEcat_Di18_WsTempBwd 8303
#define pEcat_Di19_TrPickUp 8304
#define pEcat_Di1A_WsTempFwd 8305
#define pEcat_Di1B_TrPickDn 8306
#define pEcat_Di1C_WsTbDet 8307
#define pEcat_Di1D_TrGripCls 8308
#define pEcat_Di1E 8309
#define pEcat_Di1F_TrGripOpn 8310
#define pEcat_Di20_VsTbFixBwd 8311
#define pEcat_Di21_WsAirCurtain 8312
#define pEcat_Di22_VsTbFixFwd 8313
#define pEcat_Di23_WsN2Blow 8314
#define pEcat_Di24_VsTbFixUp 8315
#define pEcat_Di25 8316
#define pEcat_Di26_VsTbFixDn 8317
#define pEcat_Di27 8318
#define pEcat_Di28 8319
#define pEcat_Di29 8320
#define pEcat_Di2A 8321
#define pEcat_Di2B 8322
#define pEcat_Di2C_VsTbDet 8323
#define pEcat_Di2D 8324
#define pEcat_Di2E 8325
#define pEcat_Di2F 8326
#define pEcat_Do10_WsTbFixUp 8327
#define pEcat_Do11_WsTempBwd 8328
#define pEcat_Do12_WsTbFixDn 8329
#define pEcat_Do13_WsTempFwd 8330
#define pEcat_Do14_TrGripCls 8331
#define pEcat_Do15_VsTbFixBwd 8332
#define pEcat_Do16_TrGripOpn 8333
#define pEcat_Do17_VsTbFixFwd 8334
#define pEcat_Do18_TrPickUp 8335
#define pEcat_Do19_VsTbFixUp 8336
#define pEcat_Do1A_TrPickDn 8337
#define pEcat_Do1B_VsTbFixDn 8338
#define pEcat_Do1C_WsVsStrCls 8339
#define pEcat_Do1D_WsCoolAir 8340
#define pEcat_Do1E_WsVsStrOpn 8341
#define pEcat_Do1F 8342
#define pEcat_Do20_WsTbVacm 8343
#define pEcat_Do21_WsAirCurtain 8344
#define pEcat_Do22_WsTbBlow 8345
#define pEcat_Do23_WsN2Blow 8346
#define pEcat_Do24 8347
#define pEcat_Do25_WsTbVacmBlowEna 8348
#define pEcat_Do26 8349
#define pEcat_Do27 8350
#define pEcat_Do28 8351
#define pEcat_Do29 8352
#define pEcat_Do2A 8353
#define pEcat_Do2B 8354
#define pEcat_Di2C_VsTbDetect 8355
#define pEcat_Do2D 8356
#define pEcat_Do2E 8357
#define pEcat_Do2F 8358
#define pEcat_Ai00_WsLoadCell 8359
#define pBuf_Ai00_WsLoadCell 8360
#define gAi00_WsLoadCell 8194
#define pEcat_Ai01 8361
#define pEcat_Ai03_WsCorePower 8362
#define pBuf_Ai03_WsCorePower 8363
#define pEcat_Ai04_WsRingPower 8364
#define pBuf_Ai04_WsRingPower 8365
#define pEcat_Ti00_Ws_TempSen1 8366
#define pEcat_Ti01_Ws_TempSen2 8367
#define pBuf_Ti00_Ws_TempSen1 8368
#define pBuf_Ti01_Ws_TempSen2 8369
#define gTi00_Ws_TempSen1 8195
#define gTi01_Ws_TempSen2 8196
#define pEcat_CmdPos 8370
#define pEcat_ActErr 8402
#define pEcat_ActTrq 8434
#define pBuf_ActTrq 8466
#define pEcat_AlarmReset 8498
#define pGpio_Di_Md00 8530
#define pGpio_Do_Md00 8546
#define pGpio_Di00 8562
#define pGpio_Di01_LaserReady 8563
#define pGpio_Di02_LaserReqResp 8564
#define pGpio_Di03_LaserPowerOn 8565
#define pGpio_Di04_LaserProgRun 8566
#define pGpio_Di05_LaserWarning 8567
#define pGpio_Di06_LaserAbnormal 8568
#define pGpio_Di07 8569
#define pGpio_Di08 8570
#define pGpio_Di09 8571
#define pGpio_Di0A 8572
#define pGpio_Di0B 8573
#define pGpio_Di0C 8574
#define pGpio_Di0D 8575
#define pGpio_Di0E 8576
#define pGpio_Di0F 8577
#define pGpio_Do00_LaserEmission 8578
#define pGpio_Do01_LaserReset 8579
#define pGpio_Do02_LaserRequest 8580
#define pGpio_Do03_LaserPowerOn 8581
#define pGpio_Do04_LaserAdInEna 8582
#define pGpio_Do05_LaserGuideEna 8583
#define pGpio_Do06_LaserProgEna 8584
#define pGpio_Do07_LaserProgStop 8585
#define pGpio_Do08 8586
#define pGpio_Do09 8587
#define pGpio_Do0A 8588
#define pGpio_Do0B 8589
#define pGpio_Do0C 8590
#define pGpio_Do0D 8591
#define pGpio_Do0E 8592
#define pGpio_Do0F 8593
#define pUmem_Sta_01_CmdPos 8594
#define pUmem_Sta_01_ActPos 8595
#define pUmem_Sta_01_Velocity 8596
#define pUmem_Sta_01_Load 8597
#define pUmem_Sta_01_AmpEna 8598
#define pUmem_Sta_01_CloseLoop 8599
#define pUmem_Sta_01_InPos 8600
#define pUmem_Sta_01_HomeFin 8601
#define pUmem_Sta_01_HomeIng 8602
#define pUmem_Sta_01_LimitMinus 8603
#define pUmem_Sta_01_LimitPlus 8604
#define pUmem_Sta_01_FollowingErr 8605
#define pUmem_Sta_01_AmpFault 8606
#define pUmem_Sta_01_EncLoss 8607
#define pUmem_Sta_01_I2tErr 8608
#define pUmem_Sta_01_ProgPos 8609
#define pUmem_Sta_TBD_2750 8610
#define pUmem_Sta_TBD_2754 8611
#define pUmem_Sta_TBD_2758 8612
#define pUmem_Sta_TBD_275C 8613
#define pUmem_Sta_02_CmdPos 8614
#define pUmem_Sta_02_ActPos 8615
#define pUmem_Sta_02_Velocity 8616
#define pUmem_Sta_02_Load 8617
#define pUmem_Sta_02_AmpEna 8618
#define pUmem_Sta_02_CloseLoop 8619
#define pUmem_Sta_02_InPos 8620
#define pUmem_Sta_02_HomeFin 8621
#define pUmem_Sta_02_HomeIng 8622
#define pUmem_Sta_02_LimitMinus 8623
#define pUmem_Sta_02_LimitPlus 8624
#define pUmem_Sta_02_FollowingErr 8625
#define pUmem_Sta_02_AmpFault 8626
#define pUmem_Sta_02_EncLoss 8627
#define pUmem_Sta_02_I2tErr 8628
#define pUmem_Sta_02_ProgPos 8629
#define pUmem_Sta_TBD_27A0 8630
#define pUmem_Sta_TBD_27A4 8631
#define pUmem_Sta_TBD_27A8 8632
#define pUmem_Sta_TBD_27AC 8633
#define pUmem_Sta_03_CmdPos 8634
#define pUmem_Sta_03_ActPos 8635
#define pUmem_Sta_03_Velocity 8636
#define pUmem_Sta_03_Load 8637
#define pUmem_Sta_03_AmpEna 8638
#define pUmem_Sta_03_CloseLoop 8639
#define pUmem_Sta_03_InPos 8640
#define pUmem_Sta_03_HomeFin 8641
#define pUmem_Sta_03_HomeIng 8642
#define pUmem_Sta_03_LimitMinus 8643
#define pUmem_Sta_03_LimitPlus 8644
#define pUmem_Sta_03_FollowingErr 8645
#define pUmem_Sta_03_AmpFault 8646
#define pUmem_Sta_03_EncLoss 8647
#define pUmem_Sta_03_I2tErr 8648
#define pUmem_Sta_03_ProgPos 8649
#define pUmem_Sta_TBD_27F0 8650
#define pUmem_Sta_TBD_27F4 8651
#define pUmem_Sta_TBD_27F8 8652
#define pUmem_Sta_TBD_27FC 8653
#define pUmem_Sta_04_CmdPos 8654
#define pUmem_Sta_04_ActPos 8655
#define pUmem_Sta_04_Velocity 8656
#define pUmem_Sta_04_Load 8657
#define pUmem_Sta_04_AmpEna 8658
#define pUmem_Sta_04_CloseLoop 8659
#define pUmem_Sta_04_InPos 8660
#define pUmem_Sta_04_HomeFin 8661
#define pUmem_Sta_04_HomeIng 8662
#define pUmem_Sta_04_LimitMinus 8663
#define pUmem_Sta_04_LimitPlus 8664
#define pUmem_Sta_04_FollowingErr 8665
#define pUmem_Sta_04_AmpFault 8666
#define pUmem_Sta_04_EncLoss 8667
#define pUmem_Sta_04_I2tErr 8668
#define pUmem_Sta_04_ProgPos 8669
#define pUmem_Sta_TBD_2840 8670
#define pUmem_Sta_TBD_2844 8671
#define pUmem_Sta_TBD_2848 8672
#define pUmem_Sta_TBD_284C 8673
#define pUmem_Sta_05_CmdPos 8674
#define pUmem_Sta_05_ActPos 8675
#define pUmem_Sta_05_Velocity 8676
#define pUmem_Sta_05_Load 8677
#define pUmem_Sta_05_AmpEna 8678
#define pUmem_Sta_05_CloseLoop 8679
#define pUmem_Sta_05_InPos 8680
#define pUmem_Sta_05_HomeFin 8681
#define pUmem_Sta_05_HomeIng 8682
#define pUmem_Sta_05_LimitMinus 8683
#define pUmem_Sta_05_LimitPlus 8684
#define pUmem_Sta_05_FollowingErr 8685
#define pUmem_Sta_05_AmpFault 8686
#define pUmem_Sta_05_EncLoss 8687
#define pUmem_Sta_05_I2tErr 8688
#define pUmem_Sta_05_ProgPos 8689
#define pUmem_Sta_TBD_2890 8690
#define pUmem_Sta_TBD_2894 8691
#define pUmem_Sta_TBD_2898 8692
#define pUmem_Sta_TBD_289C 8693
#define pUmem_Sta_06_CmdPos 8694
#define pUmem_Sta_06_ActPos 8695
#define pUmem_Sta_06_Velocity 8696
#define pUmem_Sta_06_Load 8697
#define pUmem_Sta_06_AmpEna 8698
#define pUmem_Sta_06_CloseLoop 8699
#define pUmem_Sta_06_InPos 8700
#define pUmem_Sta_06_HomeFin 8701
#define pUmem_Sta_06_HomeIng 8702
#define pUmem_Sta_06_LimitMinus 8703
#define pUmem_Sta_06_LimitPlus 8704
#define pUmem_Sta_06_FollowingErr 8705
#define pUmem_Sta_06_AmpFault 8706
#define pUmem_Sta_06_EncLoss 8707
#define pUmem_Sta_06_I2tErr 8708
#define pUmem_Sta_06_ProgPos 8709
#define pUmem_Sta_TBD_28E0 8710
#define pUmem_Sta_TBD_28E4 8711
#define pUmem_Sta_TBD_28E8 8712
#define pUmem_Sta_TBD_28EC 8713
#define pUmem_Sta_07_CmdPos 8714
#define pUmem_Sta_07_ActPos 8715
#define pUmem_Sta_07_Velocity 8716
#define pUmem_Sta_07_Load 8717
#define pUmem_Sta_07_AmpEna 8718
#define pUmem_Sta_07_CloseLoop 8719
#define pUmem_Sta_07_InPos 8720
#define pUmem_Sta_07_HomeFin 8721
#define pUmem_Sta_07_HomeIng 8722
#define pUmem_Sta_07_LimitMinus 8723
#define pUmem_Sta_07_LimitPlus 8724
#define pUmem_Sta_07_FollowingErr 8725
#define pUmem_Sta_07_AmpFault 8726
#define pUmem_Sta_07_EncLoss 8727
#define pUmem_Sta_07_I2tErr 8728
#define pUmem_Sta_07_ProgPos 8729
#define pUmem_Sta_TBD_2930 8730
#define pUmem_Sta_TBD_2934 8731
#define pUmem_Sta_TBD_2938 8732
#define pUmem_Sta_TBD_293C 8733
#define pUmem_Sta_08_CmdPos 8734
#define pUmem_Sta_08_ActPos 8735
#define pUmem_Sta_08_Velocity 8736
#define pUmem_Sta_08_Load 8737
#define pUmem_Sta_08_AmpEna 8738
#define pUmem_Sta_08_CloseLoop 8739
#define pUmem_Sta_08_InPos 8740
#define pUmem_Sta_08_HomeFin 8741
#define pUmem_Sta_08_HomeIng 8742
#define pUmem_Sta_08_LimitMinus 8743
#define pUmem_Sta_08_LimitPlus 8744
#define pUmem_Sta_08_FollowingErr 8745
#define pUmem_Sta_08_AmpFault 8746
#define pUmem_Sta_08_EncLoss 8747
#define pUmem_Sta_08_I2tErr 8748
#define pUmem_Sta_08_ProgPos 8749
#define pUmem_Sta_TBD_2980 8750
#define pUmem_Sta_TBD_2984 8751
#define pUmem_Sta_TBD_2988 8752
#define pUmem_Sta_TBD_298C 8753
#define pUmem_Sta_09_CmdPos 8754
#define pUmem_Sta_09_ActPos 8755
#define pUmem_Sta_09_Velocity 8756
#define pUmem_Sta_09_Load 8757
#define pUmem_Sta_09_AmpEna 8758
#define pUmem_Sta_09_CloseLoop 8759
#define pUmem_Sta_09_InPos 8760
#define pUmem_Sta_09_HomeFin 8761
#define pUmem_Sta_09_HomeIng 8762
#define pUmem_Sta_09_LimitMinus 8763
#define pUmem_Sta_09_LimitPlus 8764
#define pUmem_Sta_09_FollowingErr 8765
#define pUmem_Sta_09_AmpFault 8766
#define pUmem_Sta_09_EncLoss 8767
#define pUmem_Sta_09_I2tErr 8768
#define pUmem_Sta_09_ProgPos 8769
#define pUmem_Sta_TBD_29D0 8770
#define pUmem_Sta_TBD_29D4 8771
#define pUmem_Sta_TBD_29D8 8772
#define pUmem_Sta_TBD_29DC 8773
#define pUmem_Sta_10_CmdPos 8774
#define pUmem_Sta_10_ActPos 8775
#define pUmem_Sta_10_Velocity 8776
#define pUmem_Sta_10_Load 8777
#define pUmem_Sta_10_AmpEna 8778
#define pUmem_Sta_10_CloseLoop 8779
#define pUmem_Sta_10_InPos 8780
#define pUmem_Sta_10_HomeFin 8781
#define pUmem_Sta_10_HomeIng 8782
#define pUmem_Sta_10_LimitMinus 8783
#define pUmem_Sta_10_LimitPlus 8784
#define pUmem_Sta_10_FollowingErr 8785
#define pUmem_Sta_10_AmpFault 8786
#define pUmem_Sta_10_EncLoss 8787
#define pUmem_Sta_10_I2tErr 8788
#define pUmem_Sta_10_ProgPos 8789
#define pUmem_Sta_TBD_2A20 8790
#define pUmem_Sta_TBD_2A24 8791
#define pUmem_Sta_TBD_2A28 8792
#define pUmem_Sta_TBD_2A2C 8793
#define pUmem_Sta_11_CmdPos 8794
#define pUmem_Sta_11_ActPos 8795
#define pUmem_Sta_11_Velocity 8796
#define pUmem_Sta_11_Load 8797
#define pUmem_Sta_11_AmpEna 8798
#define pUmem_Sta_11_CloseLoop 8799
#define pUmem_Sta_11_InPos 8800
#define pUmem_Sta_11_HomeFin 8801
#define pUmem_Sta_11_HomeIng 8802
#define pUmem_Sta_11_LimitMinus 8803
#define pUmem_Sta_11_LimitPlus 8804
#define pUmem_Sta_11_FollowingErr 8805
#define pUmem_Sta_11_AmpFault 8806
#define pUmem_Sta_11_EncLoss 8807
#define pUmem_Sta_11_I2tErr 8808
#define pUmem_Sta_11_ProgPos 8809
#define pUmem_Sta_TBD_2A70 8810
#define pUmem_Sta_TBD_2A74 8811
#define pUmem_Sta_TBD_2A78 8812
#define pUmem_Sta_TBD_2A7C 8813
#define pUmem_Sta_12_CmdPos 8814
#define pUmem_Sta_12_ActPos 8815
#define pUmem_Sta_12_Velocity 8816
#define pUmem_Sta_12_Load 8817
#define pUmem_Sta_12_AmpEna 8818
#define pUmem_Sta_12_CloseLoop 8819
#define pUmem_Sta_12_InPos 8820
#define pUmem_Sta_12_HomeFin 8821
#define pUmem_Sta_12_HomeIng 8822
#define pUmem_Sta_12_LimitMinus 8823
#define pUmem_Sta_12_LimitPlus 8824
#define pUmem_Sta_12_FollowingErr 8825
#define pUmem_Sta_12_AmpFault 8826
#define pUmem_Sta_12_EncLoss 8827
#define pUmem_Sta_12_I2tErr 8828
#define pUmem_Sta_12_ProgPos 8829
#define pUmem_Sta_TBD_2AC0 8830
#define pUmem_Sta_TBD_2AC4 8831
#define pUmem_Sta_TBD_2AC8 8832
#define pUmem_Sta_TBD_2ACC 8833
#define pUmem_Sta_13_CmdPos 8834
#define pUmem_Sta_13_ActPos 8835
#define pUmem_Sta_13_Velocity 8836
#define pUmem_Sta_13_Load 8837
#define pUmem_Sta_13_AmpEna 8838
#define pUmem_Sta_13_CloseLoop 8839
#define pUmem_Sta_13_InPos 8840
#define pUmem_Sta_13_HomeFin 8841
#define pUmem_Sta_13_HomeIng 8842
#define pUmem_Sta_13_LimitMinus 8843
#define pUmem_Sta_13_LimitPlus 8844
#define pUmem_Sta_13_FollowingErr 8845
#define pUmem_Sta_13_AmpFault 8846
#define pUmem_Sta_13_EncLoss 8847
#define pUmem_Sta_13_I2tErr 8848
#define pUmem_Sta_13_ProgPos 8849
#define pUmem_Sta_TBD_2B10 8850
#define pUmem_Sta_TBD_2B14 8851
#define pUmem_Sta_TBD_2B18 8852
#define pUmem_Sta_TBD_2B1C 8853
#define pUmem_Sta_14_CmdPos 8854
#define pUmem_Sta_14_ActPos 8855
#define pUmem_Sta_14_Velocity 8856
#define pUmem_Sta_14_Load 8857
#define pUmem_Sta_14_AmpEna 8858
#define pUmem_Sta_14_CloseLoop 8859
#define pUmem_Sta_14_InPos 8860
#define pUmem_Sta_14_HomeFin 8861
#define pUmem_Sta_14_HomeIng 8862
#define pUmem_Sta_14_LimitMinus 8863
#define pUmem_Sta_14_LimitPlus 8864
#define pUmem_Sta_14_FollowingErr 8865
#define pUmem_Sta_14_AmpFault 8866
#define pUmem_Sta_14_EncLoss 8867
#define pUmem_Sta_14_I2tErr 8868
#define pUmem_Sta_14_ProgPos 8869
#define pUmem_Sta_TBD_2B60 8870
#define pUmem_Sta_TBD_2B64 8871
#define pUmem_Sta_TBD_2B68 8872
#define pUmem_Sta_TBD_2B6C 8873
#define pUmem_Sta_15_CmdPos 8874
#define pUmem_Sta_15_ActPos 8875
#define pUmem_Sta_15_Velocity 8876
#define pUmem_Sta_15_Load 8877
#define pUmem_Sta_15_AmpEna 8878
#define pUmem_Sta_15_CloseLoop 8879
#define pUmem_Sta_15_InPos 8880
#define pUmem_Sta_15_HomeFin 8881
#define pUmem_Sta_15_HomeIng 8882
#define pUmem_Sta_15_LimitMinus 8883
#define pUmem_Sta_15_LimitPlus 8884
#define pUmem_Sta_15_FollowingErr 8885
#define pUmem_Sta_15_AmpFault 8886
#define pUmem_Sta_15_EncLoss 8887
#define pUmem_Sta_15_I2tErr 8888
#define pUmem_Sta_15_ProgPos 8889
#define pUmem_Sta_TBD_2BB0 8890
#define pUmem_Sta_TBD_2BB4 8891
#define pUmem_Sta_TBD_2BB8 8892
#define pUmem_Sta_TBD_2BBC 8893
#define pUmem_Sta_16_CmdPos 8894
#define pUmem_Sta_16_ActPos 8895
#define pUmem_Sta_16_Velocity 8896
#define pUmem_Sta_16_Load 8897
#define pUmem_Sta_16_AmpEna 8898
#define pUmem_Sta_16_CloseLoop 8899
#define pUmem_Sta_16_InPos 8900
#define pUmem_Sta_16_HomeFin 8901
#define pUmem_Sta_16_HomeIng 8902
#define pUmem_Sta_16_LimitMinus 8903
#define pUmem_Sta_16_LimitPlus 8904
#define pUmem_Sta_16_FollowingErr 8905
#define pUmem_Sta_16_AmpFault 8906
#define pUmem_Sta_16_EncLoss 8907
#define pUmem_Sta_16_I2tErr 8908
#define pUmem_Sta_16_ProgPos 8909
#define pUmem_Sta_TBD_2C00 8910
#define pUmem_Sta_TBD_2C04 8911
#define pUmem_Sta_TBD_2C08 8912
#define pUmem_Sta_TBD_2C0C 8913
#define pUmem_Sta_17_CmdPos 8914
#define pUmem_Sta_17_ActPos 8915
#define pUmem_Sta_17_Velocity 8916
#define pUmem_Sta_17_Load 8917
#define pUmem_Sta_17_AmpEna 8918
#define pUmem_Sta_17_CloseLoop 8919
#define pUmem_Sta_17_InPos 8920
#define pUmem_Sta_17_HomeFin 8921
#define pUmem_Sta_17_HomeIng 8922
#define pUmem_Sta_17_LimitMinus 8923
#define pUmem_Sta_17_LimitPlus 8924
#define pUmem_Sta_17_FollowingErr 8925
#define pUmem_Sta_17_AmpFault 8926
#define pUmem_Sta_17_EncLoss 8927
#define pUmem_Sta_17_I2tErr 8928
#define pUmem_Sta_17_ProgPos 8929
#define pUmem_Sta_TBD_2C50 8930
#define pUmem_Sta_TBD_2C54 8931
#define pUmem_Sta_TBD_2C58 8932
#define pUmem_Sta_TBD_2C5C 8933
#define pUmem_Sta_18_CmdPos 8934
#define pUmem_Sta_18_ActPos 8935
#define pUmem_Sta_18_Velocity 8936
#define pUmem_Sta_18_Load 8937
#define pUmem_Sta_18_AmpEna 8938
#define pUmem_Sta_18_CloseLoop 8939
#define pUmem_Sta_18_InPos 8940
#define pUmem_Sta_18_HomeFin 8941
#define pUmem_Sta_18_HomeIng 8942
#define pUmem_Sta_18_LimitMinus 8943
#define pUmem_Sta_18_LimitPlus 8944
#define pUmem_Sta_18_FollowingErr 8945
#define pUmem_Sta_18_AmpFault 8946
#define pUmem_Sta_18_EncLoss 8947
#define pUmem_Sta_18_I2tErr 8948
#define pUmem_Sta_18_ProgPos 8949
#define pUmem_Sta_TBD_2CA0 8950
#define pUmem_Sta_TBD_2CA4 8951
#define pUmem_Sta_TBD_2CA8 8952
#define pUmem_Sta_TBD_2CAC 8953
#define pUmem_Sta_19_CmdPos 8954
#define pUmem_Sta_19_ActPos 8955
#define pUmem_Sta_19_Velocity 8956
#define pUmem_Sta_19_Load 8957
#define pUmem_Sta_19_AmpEna 8958
#define pUmem_Sta_19_CloseLoop 8959
#define pUmem_Sta_19_InPos 8960
#define pUmem_Sta_19_HomeFin 8961
#define pUmem_Sta_19_HomeIng 8962
#define pUmem_Sta_19_LimitMinus 8963
#define pUmem_Sta_19_LimitPlus 8964
#define pUmem_Sta_19_FollowingErr 8965
#define pUmem_Sta_19_AmpFault 8966
#define pUmem_Sta_19_EncLoss 8967
#define pUmem_Sta_19_I2tErr 8968
#define pUmem_Sta_19_ProgPos 8969
#define pUmem_Sta_TBD_2CF0 8970
#define pUmem_Sta_TBD_2CF4 8971
#define pUmem_Sta_TBD_2CF8 8972
#define pUmem_Sta_TBD_2CFC 8973
#define pUmem_Sta_20_CmdPos 8974
#define pUmem_Sta_20_ActPos 8975
#define pUmem_Sta_20_Velocity 8976
#define pUmem_Sta_20_Load 8977
#define pUmem_Sta_20_AmpEna 8978
#define pUmem_Sta_20_CloseLoop 8979
#define pUmem_Sta_20_InPos 8980
#define pUmem_Sta_20_HomeFin 8981
#define pUmem_Sta_20_HomeIng 8982
#define pUmem_Sta_20_LimitMinus 8983
#define pUmem_Sta_20_LimitPlus 8984
#define pUmem_Sta_20_FollowingErr 8985
#define pUmem_Sta_20_AmpFault 8986
#define pUmem_Sta_20_EncLoss 8987
#define pUmem_Sta_20_I2tErr 8988
#define pUmem_Sta_20_ProgPos 8989
#define pUmem_Sta_TBD_2D40 8990
#define pUmem_Sta_TBD_2D44 8991
#define pUmem_Sta_TBD_2D48 8992
#define pUmem_Sta_TBD_2D4C 8993
#define pUmem_Sta_21_CmdPos 8994
#define pUmem_Sta_21_ActPos 8995
#define pUmem_Sta_21_Velocity 8996
#define pUmem_Sta_21_Load 8997
#define pUmem_Sta_21_AmpEna 8998
#define pUmem_Sta_21_CloseLoop 8999
#define pUmem_Sta_21_InPos 9000
#define pUmem_Sta_21_HomeFin 9001
#define pUmem_Sta_21_HomeIng 9002
#define pUmem_Sta_21_LimitMinus 9003
#define pUmem_Sta_21_LimitPlus 9004
#define pUmem_Sta_21_FollowingErr 9005
#define pUmem_Sta_21_AmpFault 9006
#define pUmem_Sta_21_EncLoss 9007
#define pUmem_Sta_21_I2tErr 9008
#define pUmem_Sta_21_ProgPos 9009
#define pUmem_Sta_TBD_2D90 9010
#define pUmem_Sta_TBD_2D94 9011
#define pUmem_Sta_TBD_2D98 9012
#define pUmem_Sta_TBD_2D9C 9013
#define pUmem_Sta_22_CmdPos 9014
#define pUmem_Sta_22_ActPos 9015
#define pUmem_Sta_22_Velocity 9016
#define pUmem_Sta_22_Load 9017
#define pUmem_Sta_22_AmpEna 9018
#define pUmem_Sta_22_CloseLoop 9019
#define pUmem_Sta_22_InPos 9020
#define pUmem_Sta_22_HomeFin 9021
#define pUmem_Sta_22_HomeIng 9022
#define pUmem_Sta_22_LimitMinus 9023
#define pUmem_Sta_22_LimitPlus 9024
#define pUmem_Sta_22_FollowingErr 9025
#define pUmem_Sta_22_AmpFault 9026
#define pUmem_Sta_22_EncLoss 9027
#define pUmem_Sta_22_I2tErr 9028
#define pUmem_Sta_22_ProgPos 9029
#define pUmem_Sta_TBD_2DE0 9030
#define pUmem_Sta_TBD_2DE4 9031
#define pUmem_Sta_TBD_2DE8 9032
#define pUmem_Sta_TBD_2DEC 9033
#define pUmem_Sta_23_CmdPos 9034
#define pUmem_Sta_23_ActPos 9035
#define pUmem_Sta_23_Velocity 9036
#define pUmem_Sta_23_Load 9037
#define pUmem_Sta_23_AmpEna 9038
#define pUmem_Sta_23_CloseLoop 9039
#define pUmem_Sta_23_InPos 9040
#define pUmem_Sta_23_HomeFin 9041
#define pUmem_Sta_23_HomeIng 9042
#define pUmem_Sta_23_LimitMinus 9043
#define pUmem_Sta_23_LimitPlus 9044
#define pUmem_Sta_23_FollowingErr 9045
#define pUmem_Sta_23_AmpFault 9046
#define pUmem_Sta_23_EncLoss 9047
#define pUmem_Sta_23_I2tErr 9048
#define pUmem_Sta_23_ProgPos 9049
#define pUmem_Sta_TBD_2E30 9050
#define pUmem_Sta_TBD_2E34 9051
#define pUmem_Sta_TBD_2E38 9052
#define pUmem_Sta_TBD_2E3C 9053
#define pUmem_Sta_24_CmdPos 9054
#define pUmem_Sta_24_ActPos 9055
#define pUmem_Sta_24_Velocity 9056
#define pUmem_Sta_24_Load 9057
#define pUmem_Sta_24_AmpEna 9058
#define pUmem_Sta_24_CloseLoop 9059
#define pUmem_Sta_24_InPos 9060
#define pUmem_Sta_24_HomeFin 9061
#define pUmem_Sta_24_HomeIng 9062
#define pUmem_Sta_24_LimitMinus 9063
#define pUmem_Sta_24_LimitPlus 9064
#define pUmem_Sta_24_FollowingErr 9065
#define pUmem_Sta_24_AmpFault 9066
#define pUmem_Sta_24_EncLoss 9067
#define pUmem_Sta_24_I2tErr 9068
#define pUmem_Sta_24_ProgPos 9069
#define pUmem_Sta_TBD_2E80 9070
#define pUmem_Sta_TBD_2E84 9071
#define pUmem_Sta_TBD_2E88 9072
#define pUmem_Sta_TBD_2E8C 9073
#define pUmem_Sta_25_CmdPos 9074
#define pUmem_Sta_25_ActPos 9075
#define pUmem_Sta_25_Velocity 9076
#define pUmem_Sta_25_Load 9077
#define pUmem_Sta_25_AmpEna 9078
#define pUmem_Sta_25_CloseLoop 9079
#define pUmem_Sta_25_InPos 9080
#define pUmem_Sta_25_HomeFin 9081
#define pUmem_Sta_25_HomeIng 9082
#define pUmem_Sta_25_LimitMinus 9083
#define pUmem_Sta_25_LimitPlus 9084
#define pUmem_Sta_25_FollowingErr 9085
#define pUmem_Sta_25_AmpFault 9086
#define pUmem_Sta_25_EncLoss 9087
#define pUmem_Sta_25_I2tErr 9088
#define pUmem_Sta_25_ProgPos 9089
#define pUmem_Sta_TBD_2ED0 9090
#define pUmem_Sta_TBD_2ED4 9091
#define pUmem_Sta_TBD_2ED8 9092
#define pUmem_Sta_TBD_2EDC 9093
#define pUmem_Sta_26_CmdPos 9094
#define pUmem_Sta_26_ActPos 9095
#define pUmem_Sta_26_Velocity 9096
#define pUmem_Sta_26_Load 9097
#define pUmem_Sta_26_AmpEna 9098
#define pUmem_Sta_26_CloseLoop 9099
#define pUmem_Sta_26_InPos 9100
#define pUmem_Sta_26_HomeFin 9101
#define pUmem_Sta_26_HomeIng 9102
#define pUmem_Sta_26_LimitMinus 9103
#define pUmem_Sta_26_LimitPlus 9104
#define pUmem_Sta_26_FollowingErr 9105
#define pUmem_Sta_26_AmpFault 9106
#define pUmem_Sta_26_EncLoss 9107
#define pUmem_Sta_26_I2tErr 9108
#define pUmem_Sta_26_ProgPos 9109
#define pUmem_Sta_TBD_2F20 9110
#define pUmem_Sta_TBD_2F24 9111
#define pUmem_Sta_TBD_2F28 9112
#define pUmem_Sta_TBD_2F2C 9113
#define pUmem_Sta_27_CmdPos 9114
#define pUmem_Sta_27_ActPos 9115
#define pUmem_Sta_27_Velocity 9116
#define pUmem_Sta_27_Load 9117
#define pUmem_Sta_27_AmpEna 9118
#define pUmem_Sta_27_CloseLoop 9119
#define pUmem_Sta_27_InPos 9120
#define pUmem_Sta_27_HomeFin 9121
#define pUmem_Sta_27_HomeIng 9122
#define pUmem_Sta_27_LimitMinus 9123
#define pUmem_Sta_27_LimitPlus 9124
#define pUmem_Sta_27_FollowingErr 9125
#define pUmem_Sta_27_AmpFault 9126
#define pUmem_Sta_27_EncLoss 9127
#define pUmem_Sta_27_I2tErr 9128
#define pUmem_Sta_27_ProgPos 9129
#define pUmem_Sta_TBD_2F70 9130
#define pUmem_Sta_TBD_2F74 9131
#define pUmem_Sta_TBD_2F78 9132
#define pUmem_Sta_TBD_2F7C 9133
#define pUmem_Sta_28_CmdPos 9134
#define pUmem_Sta_28_ActPos 9135
#define pUmem_Sta_28_Velocity 9136
#define pUmem_Sta_28_Load 9137
#define pUmem_Sta_28_AmpEna 9138
#define pUmem_Sta_28_CloseLoop 9139
#define pUmem_Sta_28_InPos 9140
#define pUmem_Sta_28_HomeFin 9141
#define pUmem_Sta_28_HomeIng 9142
#define pUmem_Sta_28_LimitMinus 9143
#define pUmem_Sta_28_LimitPlus 9144
#define pUmem_Sta_28_FollowingErr 9145
#define pUmem_Sta_28_AmpFault 9146
#define pUmem_Sta_28_EncLoss 9147
#define pUmem_Sta_28_I2tErr 9148
#define pUmem_Sta_28_ProgPos 9149
#define pUmem_Sta_TBD_2FC0 9150
#define pUmem_Sta_TBD_2FC4 9151
#define pUmem_Sta_TBD_2FC8 9152
#define pUmem_Sta_TBD_2FCC 9153
#define pUmem_Sta_29_CmdPos 9154
#define pUmem_Sta_29_ActPos 9155
#define pUmem_Sta_29_Velocity 9156
#define pUmem_Sta_29_Load 9157
#define pUmem_Sta_29_AmpEna 9158
#define pUmem_Sta_29_CloseLoop 9159
#define pUmem_Sta_29_InPos 9160
#define pUmem_Sta_29_HomeFin 9161
#define pUmem_Sta_29_HomeIng 9162
#define pUmem_Sta_29_LimitMinus 9163
#define pUmem_Sta_29_LimitPlus 9164
#define pUmem_Sta_29_FollowingErr 9165
#define pUmem_Sta_29_AmpFault 9166
#define pUmem_Sta_29_EncLoss 9167
#define pUmem_Sta_29_I2tErr 9168
#define pUmem_Sta_29_ProgPos 9169
#define pUmem_Sta_TBD_3010 9170
#define pUmem_Sta_TBD_3014 9171
#define pUmem_Sta_TBD_3018 9172
#define pUmem_Sta_TBD_301C 9173
#define pUmem_Sta_30_CmdPos 9174
#define pUmem_Sta_30_ActPos 9175
#define pUmem_Sta_30_Velocity 9176
#define pUmem_Sta_30_Load 9177
#define pUmem_Sta_30_AmpEna 9178
#define pUmem_Sta_30_CloseLoop 9179
#define pUmem_Sta_30_InPos 9180
#define pUmem_Sta_30_HomeFin 9181
#define pUmem_Sta_30_HomeIng 9182
#define pUmem_Sta_30_LimitMinus 9183
#define pUmem_Sta_30_LimitPlus 9184
#define pUmem_Sta_30_FollowingErr 9185
#define pUmem_Sta_30_AmpFault 9186
#define pUmem_Sta_30_EncLoss 9187
#define pUmem_Sta_30_I2tErr 9188
#define pUmem_Sta_30_ProgPos 9189
#define pUmem_Sta_TBD_3060 9190
#define pUmem_Sta_TBD_3064 9191
#define pUmem_Sta_TBD_3068 9192
#define pUmem_Sta_TBD_306C 9193
#define pUmem_Sta_31_CmdPos 9194
#define pUmem_Sta_31_ActPos 9195
#define pUmem_Sta_31_Velocity 9196
#define pUmem_Sta_31_Load 9197
#define pUmem_Sta_31_AmpEna 9198
#define pUmem_Sta_31_CloseLoop 9199
#define pUmem_Sta_31_InPos 9200
#define pUmem_Sta_31_HomeFin 9201
#define pUmem_Sta_31_HomeIng 9202
#define pUmem_Sta_31_LimitMinus 9203
#define pUmem_Sta_31_LimitPlus 9204
#define pUmem_Sta_31_FollowingErr 9205
#define pUmem_Sta_31_AmpFault 9206
#define pUmem_Sta_31_EncLoss 9207
#define pUmem_Sta_31_I2tErr 9208
#define pUmem_Sta_31_ProgPos 9209
#define pUmem_Sta_TBD_30B0 9210
#define pUmem_Sta_TBD_30B4 9211
#define pUmem_Sta_TBD_30B8 9212
#define pUmem_Sta_TBD_30BC 9213
#define pUmem_Sta_32_CmdPos 9214
#define pUmem_Sta_32_ActPos 9215
#define pUmem_Sta_32_Velocity 9216
#define pUmem_Sta_32_Load 9217
#define pUmem_Sta_32_AmpEna 9218
#define pUmem_Sta_32_CloseLoop 9219
#define pUmem_Sta_32_InPos 9220
#define pUmem_Sta_32_HomeFin 9221
#define pUmem_Sta_32_HomeIng 9222
#define pUmem_Sta_32_LimitMinus 9223
#define pUmem_Sta_32_LimitPlus 9224
#define pUmem_Sta_32_FollowingErr 9225
#define pUmem_Sta_32_AmpFault 9226
#define pUmem_Sta_32_EncLoss 9227
#define pUmem_Sta_32_I2tErr 9228
#define pUmem_Sta_32_ProgPos 9229
#define pUmem_Sta_TBD_3100 9230
#define pUmem_Sta_TBD_3104 9231
#define pUmem_Sta_TBD_3108 9232
#define pUmem_Sta_TBD_310C 9233
#define pUmem_Sta_Mc_AmpEna 9234
#define pUmem_Sta_Mc_InPos 9235
#define pUmem_Sta_Mc_Home 9236
#define pUmem_Sta_Mc_HomeErr 9237
#define pUmem_Sta_Mc_RunMode 9238
#define pUmem_Sta_Mc_AutoRun 9239
#define pUmem_Sta_Mc_EcatCon 9240
#define pUmem_Sta_Mc_Error 9241
#define pUmem_Sta_TBD_3AB8 9242
#define pUmem_Sta_TBD_3ABC 9243
#define pUmem_Sta_Mc_ID 9244
#define pUmem_Sta_Mc_ErasePdtFlgWs 9245
#define pUmem_Sta_Mc_ErasePdtFlgVs 9246
#define pUmem_Sta_Mc_ErasePdtFlgTr 9247
#define pUmem_Sta_Mc_ErasePdtNoWs 9248
#define pUmem_Sta_Mc_ErasePdtNoVs 9249
#define pUmem_Sta_Mc_ErasePdtNoTr 9250
#define pUmem_Sta_Ws_AmpEna 9251
#define pUmem_Sta_Ws_InPos 9252
#define pUmem_Sta_Ws_Home 9253
#define pUmem_Sta_Ws_HomeErr 9254
#define pUmem_Sta_Ws_EcatCon 9255
#define pUmem_Sta_Ws_Error 9256
#define pUmem_Sta_Ws_ErrCode 9257
#define pUmem_Sta_TBD_3E9C 9258
#define pUmem_Sta_TBD_3EA0 9259
#define pUmem_Sta_Ws_ProgRun 9260
#define pUmem_Sta_Ws_VectorVel 9261
#define pUmem_Sta_Ws_ProgTime 9262
#define pUmem_Sta_Ws_PosStage 9263
#define pUmem_Sta_Ws_PosProduct 9264
#define pUmem_Sta_Ws_Cover 9265
#define pUmem_Sta_Ws_PdtSta 9266
#define pUmem_Sta_Tr_PdtSta 9267
#define pUmem_Sta_Ws_LaserReady 9268
#define pUmem_Sta_Ws_LaserEnable 9269
#define pUmem_Sta_Ws_LaserCorePower 9270
#define pUmem_Sta_Ws_LaserRingPower 9271
#define pUmem_Sta_Ws_PdtNo 9272
#define pUmem_Sta_TBD_3ED8 9273
#define pUmem_Sta_Ws_LaserActCorePower 9274
#define pUmem_Sta_Ws_LaserActRingPower 9275
#define pUmem_Sta_Ws_LaserActCoreVolt 9276
#define pUmem_Sta_Ws_LaserActRingVolt 9277
#define pUmem_Cmd_Ws_PowerCheckSta 9278
#define pUmem_Sta_TBD_3EF0 9279
#define pUmem_Sta_TBD_3EF4 9280
#define pUmem_Sta_Ws_LdSeq 9281
#define pUmem_Sta_Ws_LdErr 9282
#define pUmem_Sta_Ws_LdTime 9283
#define pUmem_Sta_Ws_RdSeq 9284
#define pUmem_Sta_Ws_RdErr 9285
#define pUmem_Sta_Ws_RdTime 9286
#define pUmem_Sta_Ws_WdSeq 9287
#define pUmem_Sta_Ws_WdErr 9288
#define pUmem_Sta_Ws_WdTime 9289
#define pUmem_Sta_Ws_WtSeq 9290
#define pUmem_Sta_Ws_WtErr 9291
#define pUmem_Sta_Ws_WtTime 9292
#define pUmem_Sta_Ws_UdSeq 9293
#define pUmem_Sta_Ws_UdErr 9294
#define pUmem_Sta_Ws_UdTime 9295
#define pUmem_Sta_Ws_RjSeq 9296
#define pUmem_Sta_Ws_RjErr 9297
#define pUmem_Sta_Ws_RjTime 9298
#define pUmem_Sta_TBD_3F40 9299
#define pUmem_Sta_TBD_3F44 9300
#define pUmem_Sta_TBD_3F48 9301
#define pUmem_Sta_TBD_3F4C 9302
#define pUmem_Sta_TBD_3F50 9303
#define pUmem_Sta_TBD_3F54 9304
#define pUmem_Sta_TBD_3F58 9305
#define pUmem_Sta_TBD_3F5C 9306
#define pUmem_Sta_TBD_3F60 9307
#define pUmem_Sta_TBD_3F64 9308
#define pUmem_Sta_TBD_3F68 9309
#define pUmem_Sta_TBD_3F6C 9310
#define pUmem_Sta_Ws_1stTransRjReq 9311
#define pUmem_Sta_Ws_2ndTransLdReq 9312
#define pUmem_Sta_Ws_2dVisionCkReq 9313
#define pUmem_Sta_Ws_LwmStartReq 9314
#define pUmem_Sta_TBD_3F80 9315
#define pUmem_Sta_TBD_3F84 9316
#define pUmem_Sta_TBD_3F88 9317
#define pUmem_Sta_TBD_3F8C 9318
#define pUmem_Sta_TBD_3F90 9319
#define pUmem_Sta_TBD_3F94 9320
#define pUmem_Sta_Ws_1stTransPdtNo 9321
#define pUmem_Sta_Ws_TempResult1 9322
#define pUmem_Sta_Ws_TempResult2 9323
#define pUmem_Sta_TBD_3FA4 9324
#define pUmem_Sta_TBD_3FA8 9325
#define pUmem_Sta_TBD_3FAC 9326
#define pUmem_Sta_TBD_3FB0 9327
#define pUmem_Sta_TBD_3FB4 9328
#define pUmem_Sta_TBD_3FB8 9329
#define pUmem_Sta_TBD_3FBC 9330
#define pUmem_Sta_TBD_3FC0 9331
#define pUmem_Sta_TBD_3FC4 9332
#define pUmem_Sta_TBD_3FC8 9333
#define pUmem_Sta_TBD_3FCC 9334
#define pUmem_Sta_TBD_3FD0 9335
#define pUmem_Sta_TBD_3FD4 9336
#define pUmem_Sta_TBD_3FD8 9337
#define pUmem_Sta_TBD_3FDC 9338
#define pUmem_Sta_TBD_3FE0 9339
#define pUmem_Sta_TBD_3FE4 9340
#define pUmem_Sta_Vs_AmpEna 9341
#define pUmem_Sta_Vs_InPos 9342
#define pUmem_Sta_Vs_Home 9343
#define pUmem_Sta_Vs_HomeErr 9344
#define pUmem_Sta_Vs_EcatCon 9345
#define pUmem_Sta_Vs_Error 9346
#define pUmem_Sta_Vs_ErrCode 9347
#define pUmem_Sta_TBD_4284 9348
#define pUmem_Sta_TBD_4288 9349
#define pUmem_Sta_Vs_ProgRun 9350
#define pUmem_Sta_Vs_VectorVel 9351
#define pUmem_Sta_Vs_ProgTime 9352
#define pUmem_Sta_Vs_PosStage 9353
#define pUmem_Sta_Vs_PosProduct 9354
#define pUmem_Sta_Vs_Cover 9355
#define pUmem_Sta_Vs_PdtSta 9356
#define pUmem_Sta_Vs_PdtNo 9357
#define pUmem_Sta_TBD_42AC 9358
#define pUmem_Sta_TBD_42B0 9359
#define pUmem_Sta_TBD_42B4 9360
#define pUmem_Sta_TBD_42B8 9361
#define pUmem_Sta_TBD_42BC 9362
#define pUmem_Sta_TBD_42C0 9363
#define pUmem_Sta_TBD_42C4 9364
#define pUmem_Sta_TBD_42C8 9365
#define pUmem_Sta_TBD_42CC 9366
#define pUmem_Sta_TBD_42D0 9367
#define pUmem_Sta_TBD_42D4 9368
#define pUmem_Sta_TBD_42D8 9369
#define pUmem_Sta_TBD_42DC 9370
#define pUmem_Sta_Vs_LdSeq 9371
#define pUmem_Sta_Vs_LdErr 9372
#define pUmem_Sta_Vs_LdTime 9373
#define pUmem_Sta_Vs_RdSeq 9374
#define pUmem_Sta_Vs_RdErr 9375
#define pUmem_Sta_Vs_RdTime 9376
#define pUmem_Sta_Vs_VnSeq 9377
#define pUmem_Sta_Vs_VnErr 9378
#define pUmem_Sta_Vs_VnTime 9379
#define pUmem_Sta_Vs_WtSeq 9380
#define pUmem_Sta_Vs_WtErr 9381
#define pUmem_Sta_Vs_WtTime 9382
#define pUmem_Sta_Vs_UdSeq 9383
#define pUmem_Sta_Vs_UdErr 9384
#define pUmem_Sta_Vs_UdTime 9385
#define pUmem_Sta_Vs_RjSeq 9386
#define pUmem_Sta_Vs_RjErr 9387
#define pUmem_Sta_Vs_RjTime 9388
#define pUmem_Sta_TBD_4328 9389
#define pUmem_Sta_TBD_432C 9390
#define pUmem_Sta_TBD_4330 9391
#define pUmem_Sta_TBD_4334 9392
#define pUmem_Sta_TBD_4338 9393
#define pUmem_Sta_TBD_433C 9394
#define pUmem_Sta_TBD_4340 9395
#define pUmem_Sta_TBD_4344 9396
#define pUmem_Sta_TBD_4348 9397
#define pUmem_Sta_TBD_434C 9398
#define pUmem_Sta_TBD_4350 9399
#define pUmem_Sta_TBD_4354 9400
#define pUmem_Sta_Vs_3rdTransUdReq 9401
#define pUmem_Sta_Vs_3rdTransRjReq 9402
#define pUmem_Sta_Vs_3DVisionStReq 9403
#define pUmem_Sta_Vs_3DVisionEdReq 9404
#define pUmem_Sta_TBD_4368 9405
#define pUmem_Sta_TBD_436C 9406
#define pUmem_Sta_TBD_4370 9407
#define pUmem_Sta_TBD_4374 9408
#define pUmem_Sta_TBD_4378 9409
#define pUmem_Sta_TBD_437C 9410
#define pUmem_Sta_Vs_3rdTransPtdNo 9411
#define pUmem_Sta_TBD_4384 9412
#define pUmem_Sta_TBD_4388 9413
#define pUmem_Sta_TBD_438C 9414
#define pUmem_Sta_TBD_4390 9415
#define pUmem_Sta_TBD_4394 9416
#define pUmem_Sta_TBD_4398 9417
#define pUmem_Sta_TBD_439C 9418
#define pUmem_Sta_TBD_43A0 9419
#define pUmem_Sta_TBD_43A4 9420
#define pUmem_Sta_TBD_43A8 9421
#define pUmem_Sta_TBD_43AC 9422
#define pUmem_Sta_TBD_43B0 9423
#define pUmem_Sta_TBD_43B4 9424
#define pUmem_Sta_TBD_43B8 9425
#define pUmem_Sta_TBD_43BC 9426
#define pUmem_Sta_TBD_43C0 9427
#define pUmem_Sta_TBD_43C4 9428
#define pUmem_Sta_TBD_43C8 9429
#define pUmem_Sta_TBD_43CC 9430
#define pUmem_Sta_Sc_AmpEna 9431
#define pUmem_Sta_Sc_InPos 9432
#define pUmem_Sta_Sc_Home 9433
#define pUmem_Sta_Sc_HomeErr 9434
#define pUmem_Sta_Sc_Con 9435
#define pUmem_Sta_Sc_Error 9436
#define pUmem_Sta_Sc_ErrCode 9437
#define pUmem_Cmd_01_ServoOn 9438
#define pUmem_Cmd_01_ServoOff 9439
#define pUmem_Cmd_01_HomeStart 9440
#define pUmem_Cmd_01_HomeAbort 9441
#define pUmem_Cmd_01_HomeOffset 9442
#define pUmem_Cmd_01_JogStop 9443
#define pUmem_Cmd_01_JogContPlus 9444
#define pUmem_Cmd_01_JogContMinus 9445
#define pUmem_Cmd_01_JogAbsMove 9446
#define pUmem_Cmd_01_JogIncMove 9447
#define pUmem_Cmd_01_JogAbsPos 9448
#define pUmem_Cmd_01_JogIncDist 9449
#define pUmem_Cmd_01_JogSpeed 9450
#define pUmem_Cmd_01_JogTa 9451
#define pUmem_Cmd_01_JogTs 9452
#define pUmem_Cmd_TBD_4E5C 9453
#define pUmem_Cmd_TBD_4E60 9454
#define pUmem_Cmd_TBD_4E64 9455
#define pUmem_Cmd_TBD_4E68 9456
#define pUmem_Cmd_TBD_4E6C 9457
#define pUmem_Cmd_02_ServoOn 9458
#define pUmem_Cmd_02_ServoOff 9459
#define pUmem_Cmd_02_HomeStart 9460
#define pUmem_Cmd_02_HomeAbort 9461
#define pUmem_Cmd_02_HomeOffset 9462
#define pUmem_Cmd_02_JogStop 9463
#define pUmem_Cmd_02_JogContPlus 9464
#define pUmem_Cmd_02_JogContMinus 9465
#define pUmem_Cmd_02_JogAbsMove 9466
#define pUmem_Cmd_02_JogIncMove 9467
#define pUmem_Cmd_02_JogAbsPos 9468
#define pUmem_Cmd_02_JogIncDist 9469
#define pUmem_Cmd_02_JogSpeed 9470
#define pUmem_Cmd_02_JogTa 9471
#define pUmem_Cmd_02_JogTs 9472
#define pUmem_Cmd_TBD_4EAC 9473
#define pUmem_Cmd_TBD_4EB0 9474
#define pUmem_Cmd_TBD_4EB4 9475
#define pUmem_Cmd_TBD_4EB8 9476
#define pUmem_Cmd_TBD_4EBC 9477
#define pUmem_Cmd_03_ServoOn 9478
#define pUmem_Cmd_03_ServoOff 9479
#define pUmem_Cmd_03_HomeStart 9480
#define pUmem_Cmd_03_HomeAbort 9481
#define pUmem_Cmd_03_HomeOffset 9482
#define pUmem_Cmd_03_JogStop 9483
#define pUmem_Cmd_03_JogContPlus 9484
#define pUmem_Cmd_03_JogContMinus 9485
#define pUmem_Cmd_03_JogAbsMove 9486
#define pUmem_Cmd_03_JogIncMove 9487
#define pUmem_Cmd_03_JogAbsPos 9488
#define pUmem_Cmd_03_JogIncDist 9489
#define pUmem_Cmd_03_JogSpeed 9490
#define pUmem_Cmd_03_JogTa 9491
#define pUmem_Cmd_03_JogTs 9492
#define pUmem_Cmd_TBD_4EFC 9493
#define pUmem_Cmd_TBD_4F00 9494
#define pUmem_Cmd_TBD_4F04 9495
#define pUmem_Cmd_TBD_4F08 9496
#define pUmem_Cmd_TBD_4F0C 9497
#define pUmem_Cmd_04_ServoOn 9498
#define pUmem_Cmd_04_ServoOff 9499
#define pUmem_Cmd_04_HomeStart 9500
#define pUmem_Cmd_04_HomeAbort 9501
#define pUmem_Cmd_04_HomeOffset 9502
#define pUmem_Cmd_04_JogStop 9503
#define pUmem_Cmd_04_JogContPlus 9504
#define pUmem_Cmd_04_JogContMinus 9505
#define pUmem_Cmd_04_JogAbsMove 9506
#define pUmem_Cmd_04_JogIncMove 9507
#define pUmem_Cmd_04_JogAbsPos 9508
#define pUmem_Cmd_04_JogIncDist 9509
#define pUmem_Cmd_04_JogSpeed 9510
#define pUmem_Cmd_04_JogTa 9511
#define pUmem_Cmd_04_JogTs 9512
#define pUmem_Cmd_TBD_4F4C 9513
#define pUmem_Cmd_TBD_4F50 9514
#define pUmem_Cmd_TBD_4F54 9515
#define pUmem_Cmd_TBD_4F58 9516
#define pUmem_Cmd_TBD_4F5C 9517
#define pUmem_Cmd_05_ServoOn 9518
#define pUmem_Cmd_05_ServoOff 9519
#define pUmem_Cmd_05_HomeStart 9520
#define pUmem_Cmd_05_HomeAbort 9521
#define pUmem_Cmd_05_HomeOffset 9522
#define pUmem_Cmd_05_JogStop 9523
#define pUmem_Cmd_05_JogContPlus 9524
#define pUmem_Cmd_05_JogContMinus 9525
#define pUmem_Cmd_05_JogAbsMove 9526
#define pUmem_Cmd_05_JogIncMove 9527
#define pUmem_Cmd_05_JogAbsPos 9528
#define pUmem_Cmd_05_JogIncDist 9529
#define pUmem_Cmd_05_JogSpeed 9530
#define pUmem_Cmd_05_JogTa 9531
#define pUmem_Cmd_05_JogTs 9532
#define pUmem_Cmd_TBD_4F9C 9533
#define pUmem_Cmd_TBD_4FA0 9534
#define pUmem_Cmd_TBD_4FA4 9535
#define pUmem_Cmd_TBD_4FA8 9536
#define pUmem_Cmd_TBD_4FAC 9537
#define pUmem_Cmd_06_ServoOn 9538
#define pUmem_Cmd_06_ServoOff 9539
#define pUmem_Cmd_06_HomeStart 9540
#define pUmem_Cmd_06_HomeAbort 9541
#define pUmem_Cmd_06_HomeOffset 9542
#define pUmem_Cmd_06_JogStop 9543
#define pUmem_Cmd_06_JogContPlus 9544
#define pUmem_Cmd_06_JogContMinus 9545
#define pUmem_Cmd_06_JogAbsMove 9546
#define pUmem_Cmd_06_JogIncMove 9547
#define pUmem_Cmd_06_JogAbsPos 9548
#define pUmem_Cmd_06_JogIncDist 9549
#define pUmem_Cmd_06_JogSpeed 9550
#define pUmem_Cmd_06_JogTa 9551
#define pUmem_Cmd_06_JogTs 9552
#define pUmem_Cmd_TBD_4FEC 9553
#define pUmem_Cmd_TBD_4FF0 9554
#define pUmem_Cmd_TBD_4FF4 9555
#define pUmem_Cmd_TBD_4FF8 9556
#define pUmem_Cmd_TBD_4FFC 9557
#define pUmem_Cmd_07_ServoOn 9558
#define pUmem_Cmd_07_ServoOff 9559
#define pUmem_Cmd_07_HomeStart 9560
#define pUmem_Cmd_07_HomeAbort 9561
#define pUmem_Cmd_07_HomeOffset 9562
#define pUmem_Cmd_07_JogStop 9563
#define pUmem_Cmd_07_JogContPlus 9564
#define pUmem_Cmd_07_JogContMinus 9565
#define pUmem_Cmd_07_JogAbsMove 9566
#define pUmem_Cmd_07_JogIncMove 9567
#define pUmem_Cmd_07_JogAbsPos 9568
#define pUmem_Cmd_07_JogIncDist 9569
#define pUmem_Cmd_07_JogSpeed 9570
#define pUmem_Cmd_07_JogTa 9571
#define pUmem_Cmd_07_JogTs 9572
#define pUmem_Cmd_TBD_503C 9573
#define pUmem_Cmd_TBD_5040 9574
#define pUmem_Cmd_TBD_5044 9575
#define pUmem_Cmd_TBD_5048 9576
#define pUmem_Cmd_TBD_504C 9577
#define pUmem_Cmd_08_ServoOn 9578
#define pUmem_Cmd_08_ServoOff 9579
#define pUmem_Cmd_08_HomeStart 9580
#define pUmem_Cmd_08_HomeAbort 9581
#define pUmem_Cmd_08_HomeOffset 9582
#define pUmem_Cmd_08_JogStop 9583
#define pUmem_Cmd_08_JogContPlus 9584
#define pUmem_Cmd_08_JogContMinus 9585
#define pUmem_Cmd_08_JogAbsMove 9586
#define pUmem_Cmd_08_JogIncMove 9587
#define pUmem_Cmd_08_JogAbsPos 9588
#define pUmem_Cmd_08_JogIncDist 9589
#define pUmem_Cmd_08_JogSpeed 9590
#define pUmem_Cmd_08_JogTa 9591
#define pUmem_Cmd_08_JogTs 9592
#define pUmem_Cmd_TBD_508C 9593
#define pUmem_Cmd_TBD_5090 9594
#define pUmem_Cmd_TBD_5094 9595
#define pUmem_Cmd_TBD_5098 9596
#define pUmem_Cmd_TBD_509C 9597
#define pUmem_Cmd_09_ServoOn 9598
#define pUmem_Cmd_09_ServoOff 9599
#define pUmem_Cmd_09_HomeStart 9600
#define pUmem_Cmd_09_HomeAbort 9601
#define pUmem_Cmd_09_HomeOffset 9602
#define pUmem_Cmd_09_JogStop 9603
#define pUmem_Cmd_09_JogContPlus 9604
#define pUmem_Cmd_09_JogContMinus 9605
#define pUmem_Cmd_09_JogAbsMove 9606
#define pUmem_Cmd_09_JogIncMove 9607
#define pUmem_Cmd_09_JogAbsPos 9608
#define pUmem_Cmd_09_JogIncDist 9609
#define pUmem_Cmd_09_JogSpeed 9610
#define pUmem_Cmd_09_JogTa 9611
#define pUmem_Cmd_09_JogTs 9612
#define pUmem_Cmd_TBD_50DC 9613
#define pUmem_Cmd_TBD_50E0 9614
#define pUmem_Cmd_TBD_50E4 9615
#define pUmem_Cmd_TBD_50E8 9616
#define pUmem_Cmd_TBD_50EC 9617
#define pUmem_Cmd_10_ServoOn 9618
#define pUmem_Cmd_10_ServoOff 9619
#define pUmem_Cmd_10_HomeStart 9620
#define pUmem_Cmd_10_HomeAbort 9621
#define pUmem_Cmd_10_HomeOffset 9622
#define pUmem_Cmd_10_JogStop 9623
#define pUmem_Cmd_10_JogContPlus 9624
#define pUmem_Cmd_10_JogContMinus 9625
#define pUmem_Cmd_10_JogAbsMove 9626
#define pUmem_Cmd_10_JogIncMove 9627
#define pUmem_Cmd_10_JogAbsPos 9628
#define pUmem_Cmd_10_JogIncDist 9629
#define pUmem_Cmd_10_JogSpeed 9630
#define pUmem_Cmd_10_JogTa 9631
#define pUmem_Cmd_10_JogTs 9632
#define pUmem_Cmd_TBD_512C 9633
#define pUmem_Cmd_TBD_5130 9634
#define pUmem_Cmd_TBD_5134 9635
#define pUmem_Cmd_TBD_5138 9636
#define pUmem_Cmd_TBD_513C 9637
#define pUmem_Cmd_11_ServoOn 9638
#define pUmem_Cmd_11_ServoOff 9639
#define pUmem_Cmd_11_HomeStart 9640
#define pUmem_Cmd_11_HomeAbort 9641
#define pUmem_Cmd_11_HomeOffset 9642
#define pUmem_Cmd_11_JogStop 9643
#define pUmem_Cmd_11_JogContPlus 9644
#define pUmem_Cmd_11_JogContMinus 9645
#define pUmem_Cmd_11_JogAbsMove 9646
#define pUmem_Cmd_11_JogIncMove 9647
#define pUmem_Cmd_11_JogAbsPos 9648
#define pUmem_Cmd_11_JogIncDist 9649
#define pUmem_Cmd_11_JogSpeed 9650
#define pUmem_Cmd_11_JogTa 9651
#define pUmem_Cmd_11_JogTs 9652
#define pUmem_Cmd_TBD_517C 9653
#define pUmem_Cmd_TBD_5180 9654
#define pUmem_Cmd_TBD_5184 9655
#define pUmem_Cmd_TBD_5188 9656
#define pUmem_Cmd_TBD_518C 9657
#define pUmem_Cmd_12_ServoOn 9658
#define pUmem_Cmd_12_ServoOff 9659
#define pUmem_Cmd_12_HomeStart 9660
#define pUmem_Cmd_12_HomeAbort 9661
#define pUmem_Cmd_12_HomeOffset 9662
#define pUmem_Cmd_12_JogStop 9663
#define pUmem_Cmd_12_JogContPlus 9664
#define pUmem_Cmd_12_JogContMinus 9665
#define pUmem_Cmd_12_JogAbsMove 9666
#define pUmem_Cmd_12_JogIncMove 9667
#define pUmem_Cmd_12_JogAbsPos 9668
#define pUmem_Cmd_12_JogIncDist 9669
#define pUmem_Cmd_12_JogSpeed 9670
#define pUmem_Cmd_12_JogTa 9671
#define pUmem_Cmd_12_JogTs 9672
#define pUmem_Cmd_TBD_51CC 9673
#define pUmem_Cmd_TBD_51D0 9674
#define pUmem_Cmd_TBD_51D4 9675
#define pUmem_Cmd_TBD_51D8 9676
#define pUmem_Cmd_TBD_51DC 9677
#define pUmem_Cmd_13_ServoOn 9678
#define pUmem_Cmd_13_ServoOff 9679
#define pUmem_Cmd_13_HomeStart 9680
#define pUmem_Cmd_13_HomeAbort 9681
#define pUmem_Cmd_13_HomeOffset 9682
#define pUmem_Cmd_13_JogStop 9683
#define pUmem_Cmd_13_JogContPlus 9684
#define pUmem_Cmd_13_JogContMinus 9685
#define pUmem_Cmd_13_JogAbsMove 9686
#define pUmem_Cmd_13_JogIncMove 9687
#define pUmem_Cmd_13_JogAbsPos 9688
#define pUmem_Cmd_13_JogIncDist 9689
#define pUmem_Cmd_13_JogSpeed 9690
#define pUmem_Cmd_13_JogTa 9691
#define pUmem_Cmd_13_JogTs 9692
#define pUmem_Cmd_TBD_521C 9693
#define pUmem_Cmd_TBD_5220 9694
#define pUmem_Cmd_TBD_5224 9695
#define pUmem_Cmd_TBD_5228 9696
#define pUmem_Cmd_TBD_522C 9697
#define pUmem_Cmd_14_ServoOn 9698
#define pUmem_Cmd_14_ServoOff 9699
#define pUmem_Cmd_14_HomeStart 9700
#define pUmem_Cmd_14_HomeAbort 9701
#define pUmem_Cmd_14_HomeOffset 9702
#define pUmem_Cmd_14_JogStop 9703
#define pUmem_Cmd_14_JogContPlus 9704
#define pUmem_Cmd_14_JogContMinus 9705
#define pUmem_Cmd_14_JogAbsMove 9706
#define pUmem_Cmd_14_JogIncMove 9707
#define pUmem_Cmd_14_JogAbsPos 9708
#define pUmem_Cmd_14_JogIncDist 9709
#define pUmem_Cmd_14_JogSpeed 9710
#define pUmem_Cmd_14_JogTa 9711
#define pUmem_Cmd_14_JogTs 9712
#define pUmem_Cmd_TBD_526C 9713
#define pUmem_Cmd_TBD_5270 9714
#define pUmem_Cmd_TBD_5274 9715
#define pUmem_Cmd_TBD_5278 9716
#define pUmem_Cmd_TBD_527C 9717
#define pUmem_Cmd_15_ServoOn 9718
#define pUmem_Cmd_15_ServoOff 9719
#define pUmem_Cmd_15_HomeStart 9720
#define pUmem_Cmd_15_HomeAbort 9721
#define pUmem_Cmd_15_HomeOffset 9722
#define pUmem_Cmd_15_JogStop 9723
#define pUmem_Cmd_15_JogContPlus 9724
#define pUmem_Cmd_15_JogContMinus 9725
#define pUmem_Cmd_15_JogAbsMove 9726
#define pUmem_Cmd_15_JogIncMove 9727
#define pUmem_Cmd_15_JogAbsPos 9728
#define pUmem_Cmd_15_JogIncDist 9729
#define pUmem_Cmd_15_JogSpeed 9730
#define pUmem_Cmd_15_JogTa 9731
#define pUmem_Cmd_15_JogTs 9732
#define pUmem_Cmd_TBD_52BC 9733
#define pUmem_Cmd_TBD_52C0 9734
#define pUmem_Cmd_TBD_52C4 9735
#define pUmem_Cmd_TBD_52C8 9736
#define pUmem_Cmd_TBD_52CC 9737
#define pUmem_Cmd_16_ServoOn 9738
#define pUmem_Cmd_16_ServoOff 9739
#define pUmem_Cmd_16_HomeStart 9740
#define pUmem_Cmd_16_HomeAbort 9741
#define pUmem_Cmd_16_HomeOffset 9742
#define pUmem_Cmd_16_JogStop 9743
#define pUmem_Cmd_16_JogContPlus 9744
#define pUmem_Cmd_16_JogContMinus 9745
#define pUmem_Cmd_16_JogAbsMove 9746
#define pUmem_Cmd_16_JogIncMove 9747
#define pUmem_Cmd_16_JogAbsPos 9748
#define pUmem_Cmd_16_JogIncDist 9749
#define pUmem_Cmd_16_JogSpeed 9750
#define pUmem_Cmd_16_JogTa 9751
#define pUmem_Cmd_16_JogTs 9752
#define pUmem_Cmd_TBD_530C 9753
#define pUmem_Cmd_TBD_5310 9754
#define pUmem_Cmd_TBD_5314 9755
#define pUmem_Cmd_TBD_5318 9756
#define pUmem_Cmd_TBD_531C 9757
#define pUmem_Cmd_17_ServoOn 9758
#define pUmem_Cmd_17_ServoOff 9759
#define pUmem_Cmd_17_HomeStart 9760
#define pUmem_Cmd_17_HomeAbort 9761
#define pUmem_Cmd_17_HomeOffset 9762
#define pUmem_Cmd_17_JogStop 9763
#define pUmem_Cmd_17_JogContPlus 9764
#define pUmem_Cmd_17_JogContMinus 9765
#define pUmem_Cmd_17_JogAbsMove 9766
#define pUmem_Cmd_17_JogIncMove 9767
#define pUmem_Cmd_17_JogAbsPos 9768
#define pUmem_Cmd_17_JogIncDist 9769
#define pUmem_Cmd_17_JogSpeed 9770
#define pUmem_Cmd_17_JogTa 9771
#define pUmem_Cmd_17_JogTs 9772
#define pUmem_Cmd_TBD_535C 9773
#define pUmem_Cmd_TBD_5360 9774
#define pUmem_Cmd_TBD_5364 9775
#define pUmem_Cmd_TBD_5368 9776
#define pUmem_Cmd_TBD_536C 9777
#define pUmem_Cmd_18_ServoOn 9778
#define pUmem_Cmd_18_ServoOff 9779
#define pUmem_Cmd_18_HomeStart 9780
#define pUmem_Cmd_18_HomeAbort 9781
#define pUmem_Cmd_18_HomeOffset 9782
#define pUmem_Cmd_18_JogStop 9783
#define pUmem_Cmd_18_JogContPlus 9784
#define pUmem_Cmd_18_JogContMinus 9785
#define pUmem_Cmd_18_JogAbsMove 9786
#define pUmem_Cmd_18_JogIncMove 9787
#define pUmem_Cmd_18_JogAbsPos 9788
#define pUmem_Cmd_18_JogIncDist 9789
#define pUmem_Cmd_18_JogSpeed 9790
#define pUmem_Cmd_18_JogTa 9791
#define pUmem_Cmd_18_JogTs 9792
#define pUmem_Cmd_TBD_53AC 9793
#define pUmem_Cmd_TBD_53B0 9794
#define pUmem_Cmd_TBD_53B4 9795
#define pUmem_Cmd_TBD_53B8 9796
#define pUmem_Cmd_TBD_53BC 9797
#define pUmem_Cmd_19_ServoOn 9798
#define pUmem_Cmd_19_ServoOff 9799
#define pUmem_Cmd_19_HomeStart 9800
#define pUmem_Cmd_19_HomeAbort 9801
#define pUmem_Cmd_19_HomeOffset 9802
#define pUmem_Cmd_19_JogStop 9803
#define pUmem_Cmd_19_JogContPlus 9804
#define pUmem_Cmd_19_JogContMinus 9805
#define pUmem_Cmd_19_JogAbsMove 9806
#define pUmem_Cmd_19_JogIncMove 9807
#define pUmem_Cmd_19_JogAbsPos 9808
#define pUmem_Cmd_19_JogIncDist 9809
#define pUmem_Cmd_19_JogSpeed 9810
#define pUmem_Cmd_19_JogTa 9811
#define pUmem_Cmd_19_JogTs 9812
#define pUmem_Cmd_TBD_53FC 9813
#define pUmem_Cmd_TBD_5400 9814
#define pUmem_Cmd_TBD_5404 9815
#define pUmem_Cmd_TBD_5408 9816
#define pUmem_Cmd_TBD_540C 9817
#define pUmem_Cmd_20_ServoOn 9818
#define pUmem_Cmd_20_ServoOff 9819
#define pUmem_Cmd_20_HomeStart 9820
#define pUmem_Cmd_20_HomeAbort 9821
#define pUmem_Cmd_20_HomeOffset 9822
#define pUmem_Cmd_20_JogStop 9823
#define pUmem_Cmd_20_JogContPlus 9824
#define pUmem_Cmd_20_JogContMinus 9825
#define pUmem_Cmd_20_JogAbsMove 9826
#define pUmem_Cmd_20_JogIncMove 9827
#define pUmem_Cmd_20_JogAbsPos 9828
#define pUmem_Cmd_20_JogIncDist 9829
#define pUmem_Cmd_20_JogSpeed 9830
#define pUmem_Cmd_20_JogTa 9831
#define pUmem_Cmd_20_JogTs 9832
#define pUmem_Cmd_TBD_544C 9833
#define pUmem_Cmd_TBD_5450 9834
#define pUmem_Cmd_TBD_5454 9835
#define pUmem_Cmd_TBD_5458 9836
#define pUmem_Cmd_TBD_545C 9837
#define pUmem_Cmd_21_ServoOn 9838
#define pUmem_Cmd_21_ServoOff 9839
#define pUmem_Cmd_21_HomeStart 9840
#define pUmem_Cmd_21_HomeAbort 9841
#define pUmem_Cmd_21_HomeOffset 9842
#define pUmem_Cmd_21_JogStop 9843
#define pUmem_Cmd_21_JogContPlus 9844
#define pUmem_Cmd_21_JogContMinus 9845
#define pUmem_Cmd_21_JogAbsMove 9846
#define pUmem_Cmd_21_JogIncMove 9847
#define pUmem_Cmd_21_JogAbsPos 9848
#define pUmem_Cmd_21_JogIncDist 9849
#define pUmem_Cmd_21_JogSpeed 9850
#define pUmem_Cmd_21_JogTa 9851
#define pUmem_Cmd_21_JogTs 9852
#define pUmem_Cmd_TBD_549C 9853
#define pUmem_Cmd_TBD_54A0 9854
#define pUmem_Cmd_TBD_54A4 9855
#define pUmem_Cmd_TBD_54A8 9856
#define pUmem_Cmd_TBD_54AC 9857
#define pUmem_Cmd_22_ServoOn 9858
#define pUmem_Cmd_22_ServoOff 9859
#define pUmem_Cmd_22_HomeStart 9860
#define pUmem_Cmd_22_HomeAbort 9861
#define pUmem_Cmd_22_HomeOffset 9862
#define pUmem_Cmd_22_JogStop 9863
#define pUmem_Cmd_22_JogContPlus 9864
#define pUmem_Cmd_22_JogContMinus 9865
#define pUmem_Cmd_22_JogAbsMove 9866
#define pUmem_Cmd_22_JogIncMove 9867
#define pUmem_Cmd_22_JogAbsPos 9868
#define pUmem_Cmd_22_JogIncDist 9869
#define pUmem_Cmd_22_JogSpeed 9870
#define pUmem_Cmd_22_JogTa 9871
#define pUmem_Cmd_22_JogTs 9872
#define pUmem_Cmd_TBD_54EC 9873
#define pUmem_Cmd_TBD_54F0 9874
#define pUmem_Cmd_TBD_54F4 9875
#define pUmem_Cmd_TBD_54F8 9876
#define pUmem_Cmd_TBD_54FC 9877
#define pUmem_Cmd_23_ServoOn 9878
#define pUmem_Cmd_23_ServoOff 9879
#define pUmem_Cmd_23_HomeStart 9880
#define pUmem_Cmd_23_HomeAbort 9881
#define pUmem_Cmd_23_HomeOffset 9882
#define pUmem_Cmd_23_JogStop 9883
#define pUmem_Cmd_23_JogContPlus 9884
#define pUmem_Cmd_23_JogContMinus 9885
#define pUmem_Cmd_23_JogAbsMove 9886
#define pUmem_Cmd_23_JogIncMove 9887
#define pUmem_Cmd_23_JogAbsPos 9888
#define pUmem_Cmd_23_JogIncDist 9889
#define pUmem_Cmd_23_JogSpeed 9890
#define pUmem_Cmd_23_JogTa 9891
#define pUmem_Cmd_23_JogTs 9892
#define pUmem_Cmd_TBD_553C 9893
#define pUmem_Cmd_TBD_5540 9894
#define pUmem_Cmd_TBD_5544 9895
#define pUmem_Cmd_TBD_5548 9896
#define pUmem_Cmd_TBD_554C 9897
#define pUmem_Cmd_24_ServoOn 9898
#define pUmem_Cmd_24_ServoOff 9899
#define pUmem_Cmd_24_HomeStart 9900
#define pUmem_Cmd_24_HomeAbort 9901
#define pUmem_Cmd_24_HomeOffset 9902
#define pUmem_Cmd_24_JogStop 9903
#define pUmem_Cmd_24_JogContPlus 9904
#define pUmem_Cmd_24_JogContMinus 9905
#define pUmem_Cmd_24_JogAbsMove 9906
#define pUmem_Cmd_24_JogIncMove 9907
#define pUmem_Cmd_24_JogAbsPos 9908
#define pUmem_Cmd_24_JogIncDist 9909
#define pUmem_Cmd_24_JogSpeed 9910
#define pUmem_Cmd_24_JogTa 9911
#define pUmem_Cmd_24_JogTs 9912
#define pUmem_Cmd_TBD_558C 9913
#define pUmem_Cmd_TBD_5590 9914
#define pUmem_Cmd_TBD_5594 9915
#define pUmem_Cmd_TBD_5598 9916
#define pUmem_Cmd_TBD_559C 9917
#define pUmem_Cmd_25_ServoOn 9918
#define pUmem_Cmd_25_ServoOff 9919
#define pUmem_Cmd_25_HomeStart 9920
#define pUmem_Cmd_25_HomeAbort 9921
#define pUmem_Cmd_25_HomeOffset 9922
#define pUmem_Cmd_25_JogStop 9923
#define pUmem_Cmd_25_JogContPlus 9924
#define pUmem_Cmd_25_JogContMinus 9925
#define pUmem_Cmd_25_JogAbsMove 9926
#define pUmem_Cmd_25_JogIncMove 9927
#define pUmem_Cmd_25_JogAbsPos 9928
#define pUmem_Cmd_25_JogIncDist 9929
#define pUmem_Cmd_25_JogSpeed 9930
#define pUmem_Cmd_25_JogTa 9931
#define pUmem_Cmd_25_JogTs 9932
#define pUmem_Cmd_TBD_55DC 9933
#define pUmem_Cmd_TBD_55E0 9934
#define pUmem_Cmd_TBD_55E4 9935
#define pUmem_Cmd_TBD_55E8 9936
#define pUmem_Cmd_TBD_55EC 9937
#define pUmem_Cmd_26_ServoOn 9938
#define pUmem_Cmd_26_ServoOff 9939
#define pUmem_Cmd_26_HomeStart 9940
#define pUmem_Cmd_26_HomeAbort 9941
#define pUmem_Cmd_26_HomeOffset 9942
#define pUmem_Cmd_26_JogStop 9943
#define pUmem_Cmd_26_JogContPlus 9944
#define pUmem_Cmd_26_JogContMinus 9945
#define pUmem_Cmd_26_JogAbsMove 9946
#define pUmem_Cmd_26_JogIncMove 9947
#define pUmem_Cmd_26_JogAbsPos 9948
#define pUmem_Cmd_26_JogIncDist 9949
#define pUmem_Cmd_26_JogSpeed 9950
#define pUmem_Cmd_26_JogTa 9951
#define pUmem_Cmd_26_JogTs 9952
#define pUmem_Cmd_TBD_562C 9953
#define pUmem_Cmd_TBD_5630 9954
#define pUmem_Cmd_TBD_5634 9955
#define pUmem_Cmd_TBD_5638 9956
#define pUmem_Cmd_TBD_563C 9957
#define pUmem_Cmd_27_ServoOn 9958
#define pUmem_Cmd_27_ServoOff 9959
#define pUmem_Cmd_27_HomeStart 9960
#define pUmem_Cmd_27_HomeAbort 9961
#define pUmem_Cmd_27_HomeOffset 9962
#define pUmem_Cmd_27_JogStop 9963
#define pUmem_Cmd_27_JogContPlus 9964
#define pUmem_Cmd_27_JogContMinus 9965
#define pUmem_Cmd_27_JogAbsMove 9966
#define pUmem_Cmd_27_JogIncMove 9967
#define pUmem_Cmd_27_JogAbsPos 9968
#define pUmem_Cmd_27_JogIncDist 9969
#define pUmem_Cmd_27_JogSpeed 9970
#define pUmem_Cmd_27_JogTa 9971
#define pUmem_Cmd_27_JogTs 9972
#define pUmem_Cmd_TBD_567C 9973
#define pUmem_Cmd_TBD_5680 9974
#define pUmem_Cmd_TBD_5684 9975
#define pUmem_Cmd_TBD_5688 9976
#define pUmem_Cmd_TBD_568C 9977
#define pUmem_Cmd_28_ServoOn 9978
#define pUmem_Cmd_28_ServoOff 9979
#define pUmem_Cmd_28_HomeStart 9980
#define pUmem_Cmd_28_HomeAbort 9981
#define pUmem_Cmd_28_HomeOffset 9982
#define pUmem_Cmd_28_JogStop 9983
#define pUmem_Cmd_28_JogContPlus 9984
#define pUmem_Cmd_28_JogContMinus 9985
#define pUmem_Cmd_28_JogAbsMove 9986
#define pUmem_Cmd_28_JogIncMove 9987
#define pUmem_Cmd_28_JogAbsPos 9988
#define pUmem_Cmd_28_JogIncDist 9989
#define pUmem_Cmd_28_JogSpeed 9990
#define pUmem_Cmd_28_JogTa 9991
#define pUmem_Cmd_28_JogTs 9992
#define pUmem_Cmd_TBD_56CC 9993
#define pUmem_Cmd_TBD_56D0 9994
#define pUmem_Cmd_TBD_56D4 9995
#define pUmem_Cmd_TBD_56D8 9996
#define pUmem_Cmd_TBD_56DC 9997
#define pUmem_Cmd_29_ServoOn 9998
#define pUmem_Cmd_29_ServoOff 9999
#define pUmem_Cmd_29_HomeStart 10000
#define pUmem_Cmd_29_HomeAbort 10001
#define pUmem_Cmd_29_HomeOffset 10002
#define pUmem_Cmd_29_JogStop 10003
#define pUmem_Cmd_29_JogContPlus 10004
#define pUmem_Cmd_29_JogContMinus 10005
#define pUmem_Cmd_29_JogAbsMove 10006
#define pUmem_Cmd_29_JogIncMove 10007
#define pUmem_Cmd_29_JogAbsPos 10008
#define pUmem_Cmd_29_JogIncDist 10009
#define pUmem_Cmd_29_JogSpeed 10010
#define pUmem_Cmd_29_JogTa 10011
#define pUmem_Cmd_29_JogTs 10012
#define pUmem_Cmd_TBD_571C 10013
#define pUmem_Cmd_TBD_5720 10014
#define pUmem_Cmd_TBD_5724 10015
#define pUmem_Cmd_TBD_5728 10016
#define pUmem_Cmd_TBD_572C 10017
#define pUmem_Cmd_30_ServoOn 10018
#define pUmem_Cmd_30_ServoOff 10019
#define pUmem_Cmd_30_HomeStart 10020
#define pUmem_Cmd_30_HomeAbort 10021
#define pUmem_Cmd_30_HomeOffset 10022
#define pUmem_Cmd_30_JogStop 10023
#define pUmem_Cmd_30_JogContPlus 10024
#define pUmem_Cmd_30_JogContMinus 10025
#define pUmem_Cmd_30_JogAbsMove 10026
#define pUmem_Cmd_30_JogIncMove 10027
#define pUmem_Cmd_30_JogAbsPos 10028
#define pUmem_Cmd_30_JogIncDist 10029
#define pUmem_Cmd_30_JogSpeed 10030
#define pUmem_Cmd_30_JogTa 10031
#define pUmem_Cmd_30_JogTs 10032
#define pUmem_Cmd_TBD_576C 10033
#define pUmem_Cmd_TBD_5770 10034
#define pUmem_Cmd_TBD_5774 10035
#define pUmem_Cmd_TBD_5778 10036
#define pUmem_Cmd_TBD_577C 10037
#define pUmem_Cmd_31_ServoOn 10038
#define pUmem_Cmd_31_ServoOff 10039
#define pUmem_Cmd_31_HomeStart 10040
#define pUmem_Cmd_31_HomeAbort 10041
#define pUmem_Cmd_31_HomeOffset 10042
#define pUmem_Cmd_31_JogStop 10043
#define pUmem_Cmd_31_JogContPlus 10044
#define pUmem_Cmd_31_JogContMinus 10045
#define pUmem_Cmd_31_JogAbsMove 10046
#define pUmem_Cmd_31_JogIncMove 10047
#define pUmem_Cmd_31_JogAbsPos 10048
#define pUmem_Cmd_31_JogIncDist 10049
#define pUmem_Cmd_31_JogSpeed 10050
#define pUmem_Cmd_31_JogTa 10051
#define pUmem_Cmd_31_JogTs 10052
#define pUmem_Cmd_TBD_57BC 10053
#define pUmem_Cmd_TBD_57C0 10054
#define pUmem_Cmd_TBD_57C4 10055
#define pUmem_Cmd_TBD_57C8 10056
#define pUmem_Cmd_TBD_57CC 10057
#define pUmem_Cmd_32_ServoOn 10058
#define pUmem_Cmd_32_ServoOff 10059
#define pUmem_Cmd_32_HomeStart 10060
#define pUmem_Cmd_32_HomeAbort 10061
#define pUmem_Cmd_32_HomeOffset 10062
#define pUmem_Cmd_32_JogStop 10063
#define pUmem_Cmd_32_JogContPlus 10064
#define pUmem_Cmd_32_JogContMinus 10065
#define pUmem_Cmd_32_JogAbsMove 10066
#define pUmem_Cmd_32_JogIncMove 10067
#define pUmem_Cmd_32_JogAbsPos 10068
#define pUmem_Cmd_32_JogIncDist 10069
#define pUmem_Cmd_32_JogSpeed 10070
#define pUmem_Cmd_32_JogTa 10071
#define pUmem_Cmd_32_JogTs 10072
#define pUmem_Cmd_TBD_580C 10073
#define pUmem_Cmd_TBD_5810 10074
#define pUmem_Cmd_TBD_5814 10075
#define pUmem_Cmd_TBD_5818 10076
#define pUmem_Cmd_TBD_581C 10077
#define pUmem_Cmd_Mc_ServoOn 10078
#define pUmem_Cmd_Mc_ServoOff 10079
#define pUmem_Cmd_Mc_HomeStart 10080
#define pUmem_Cmd_Mc_HomeAbort 10081
#define pUmem_Cmd_Mc_AlarmReset 10082
#define pUmem_Cmd_Mc_RunMode 10083
#define pUmem_Cmd_Mc_AutoStart 10084
#define pUmem_Cmd_Mc_AutoAbort 10085
#define pUmem_Cmd_Mc_CycleStart 10086
#define pUmem_Cmd_Mc_Fsave 10087
#define pUmem_Cmd_Mc_StepStart 10088
#define pUmem_Cmd_Mc_AutoPause 10089
#define pUmem_Cmd_TBD_61D8 10090
#define pUmem_Cmd_TBD_61DC 10091
#define pUmem_Cmd_TBD_61E0 10092
#define pUmem_Cmd_TBD_61E4 10093
#define pUmem_Cmd_TBD_61E8 10094
#define pUmem_Cmd_TBD_61EC 10095
#define pUmem_Cmd_TBD_61F0 10096
#define pUmem_Cmd_TBD_61F4 10097
#define pUmem_Cmd_TBD_61F8 10098
#define pUmem_Cmd_TBD_61FC 10099
#define pUmem_Cmd_TBD_6200 10100
#define pUmem_Cmd_TBD_6204 10101
#define pUmem_Cmd_TBD_6208 10102
#define pUmem_Cmd_TBD_620C 10103
#define pUmem_Cmd_TBD_6210 10104
#define pUmem_Cmd_TBD_6214 10105
#define pUmem_Cmd_TBD_6218 10106
#define pUmem_Cmd_TBD_621C 10107
#define pUmem_Cmd_TBD_6220 10108
#define pUmem_Cmd_TBD_6224 10109
#define pUmem_Cmd_TBD_6228 10110
#define pUmem_Cmd_TBD_622C 10111
#define pUmem_Cmd_TBD_6230 10112
#define pUmem_Cmd_TBD_6234 10113
#define pUmem_Cmd_TBD_6238 10114
#define pUmem_Cmd_TBD_623C 10115
#define pUmem_Cmd_TBD_6240 10116
#define pUmem_Cmd_TBD_6244 10117
#define pUmem_Cmd_Ws_ServoOn 10118
#define pUmem_Cmd_Ws_ServoOff 10119
#define pUmem_Cmd_Ws_HomeStart 10120
#define pUmem_Cmd_Ws_HomeAbort 10121
#define pUmem_Cmd_Ws_AlarmReset 10122
#define pUmem_Cmd_Ws_AlarmRetry 10123
#define pUmem_Cmd_Ws_AlarmAbort 10124
#define pUmem_Cmd_TBD_65AC 10125
#define pUmem_Cmd_TBD_65B0 10126
#define pUmem_Cmd_TBD_65B4 10127
#define pUmem_Cmd_Ws_TestShot 10128
#define pUmem_Cmd_Ws_PdtStaChange 10129
#define pUmem_Cmd_Tr_PdtStaChange 10130
#define pUmem_Cmd_Ws_LaserEnableStart 10131
#define pUmem_Cmd_Ws_LaserDisableStart 10132
#define pUmem_Cmd_Ws_LaserTestCrossStart 10133
#define pUmem_Cmd_Ws_LaserTestCrossAbort 10134
#define pUmem_Cmd_Ws_LaserTestLineStart 10135
#define pUmem_Cmd_Ws_LaserTestLineAbort 10136
#define pUmem_Cmd_TBD_65DC 10137
#define pUmem_Cmd_Ws_ReadyPowerCheck 10138
#define pUmem_Cmd_Ws_PowerCheckStart 10139
#define pUmem_Cmd_Ws_PowerCheckAbort 10140
#define pUmem_Cmd_TBD_65EC 10141
#define pUmem_Cmd_Wd_SrtVelC 10142
#define pUmem_Cmd_Wd_MdiStart 10143
#define pUmem_Cmd_Wd_MdiAbort 10144
#define pUmem_Cmd_Wd_MdiPosX 10145
#define pUmem_Cmd_Wd_MdiPosY 10146
#define pUmem_Cmd_Wd_MdiPosC 10147
#define pUmem_Cmd_Ws_LdStart 10148
#define pUmem_Cmd_Ws_LdAbort 10149
#define pUmem_Cmd_Ws_LdHold 10150
#define pUmem_Cmd_Ws_RdStart 10151
#define pUmem_Cmd_Ws_RdAbort 10152
#define pUmem_Cmd_Ws_RdHold 10153
#define pUmem_Cmd_Ws_WdStart 10154
#define pUmem_Cmd_Ws_WdAbort 10155
#define pUmem_Cmd_Ws_WdHold 10156
#define pUmem_Cmd_Ws_WtStart 10157
#define pUmem_Cmd_Ws_WtAbort 10158
#define pUmem_Cmd_Ws_WtHold 10159
#define pUmem_Cmd_Ws_UdStart 10160
#define pUmem_Cmd_Ws_UdAbort 10161
#define pUmem_Cmd_Ws_UdHold 10162
#define pUmem_Cmd_Ws_RjStart 10163
#define pUmem_Cmd_Ws_RjAbort 10164
#define pUmem_Cmd_Ws_RjHold 10165
#define pUmem_Cmd_TBD_6650 10166
#define pUmem_Cmd_TBD_6654 10167
#define pUmem_Cmd_TBD_6658 10168
#define pUmem_Cmd_TBD_665C 10169
#define pUmem_Cmd_TBD_6660 10170
#define pUmem_Cmd_TBD_6664 10171
#define pUmem_Cmd_TBD_6668 10172
#define pUmem_Cmd_TBD_666C 10173
#define pUmem_Cmd_TBD_6670 10174
#define pUmem_Cmd_TBD_6674 10175
#define pUmem_Cmd_TBD_6678 10176
#define pUmem_Cmd_TBD_667C 10177
#define pUmem_Cmd_Ws_1stTransRjRsp 10178
#define pUmem_Cmd_Ws_2ndTransLdRsp 10179
#define pUmem_Cmd_Ws_2dVisionCkRsp 10180
#define pUmem_Cmd_Ws_LwmStartRsp 10181
#define pUmem_Cmd_TBD_6690 10182
#define pUmem_Cmd_TBD_6694 10183
#define pUmem_Cmd_TBD_6698 10184
#define pUmem_Cmd_TBD_669C 10185
#define pUmem_Cmd_Ws_WeldingSkip 10186
#define pUmem_Cmd_Ws_RspSkipOpt 10187
#define pUmem_Cmd_Ws_2ndTransLdAlignX 10188
#define pUmem_Cmd_Ws_2ndTransLdAlignY 10189
#define pUmem_Cmd_Ws_2ndTransLdAlignC 10190
#define pUmem_Cmd_TBD_66B4 10191
#define pUmem_Cmd_TBD_66B8 10192
#define pUmem_Cmd_TBD_66BC 10193
#define pUmem_Cmd_TBD_66C0 10194
#define pUmem_Cmd_TBD_66C4 10195
#define pUmem_Cmd_TBD_66C8 10196
#define pUmem_Cmd_TBD_66CC 10197
#define pUmem_Cmd_Ws_2ndTransPdtDir 10198
#define pUmem_Cmd_Ws_2ndTransPdtNo 10199
#define pUmem_Cmd_Ws_2ndTransTempOpt 10200
#define pUmem_Cmd_TBD_66DC 10201
#define pUmem_Cmd_TBD_66E0 10202
#define pUmem_Cmd_TBD_66E4 10203
#define pUmem_Cmd_TBD_66E8 10204
#define pUmem_Cmd_TBD_66EC 10205
#define pUmem_Cmd_TBD_66F0 10206
#define pUmem_Cmd_TBD_66F4 10207
#define pUmem_Cmd_Ws_AccLimitX 10208
#define pUmem_Cmd_Ws_AccLimitY 10209
#define pUmem_Cmd_Ws_AccLimitC 10210
#define pUmem_Cmd_Ws_VelLimitC 10211
#define pUmem_Cmd_Ws_RefVel 10212
#define pUmem_Cmd_Ws_RotOffsetX 10213
#define pUmem_Cmd_Ws_RotOffsetY 10214
#define pUmem_Cmd_Ws_RefVel_2 10215
#define pUmem_Cmd_Ws_OutMode_2 10216
#define pUmem_Cmd_TBD_671C 10217
#define pUmem_Cmd_Ws_OutMode 10218
#define pUmem_Cmd_Ws_PfmPeriod 10219
#define pUmem_Cmd_Ws_PfmOnTime 10220
#define pUmem_Cmd_Ws_CorePfmEna 10221
#define pUmem_Cmd_Ws_RingPfmEna 10222
#define pUmem_Cmd_Ws_CorePowerSf 10223
#define pUmem_Cmd_Ws_CoreRefPower 10224
#define pUmem_Cmd_Ws_CoreMinPower 10225
#define pUmem_Cmd_Ws_CoreMaxPower 10226
#define pUmem_Cmd_Ws_RingPowerSf 10227
#define pUmem_Cmd_Ws_RingRefPower 10228
#define pUmem_Cmd_Ws_RingMinPower 10229
#define pUmem_Cmd_Ws_RingMaxPower 10230
#define pUmem_Cmd_Ws_PfmPeriod_2 10231
#define pUmem_Cmd_Ws_PfmOnTime_2 10232
#define pUmem_Cmd_Ws_CorePfmEna_2 10233
#define pUmem_Cmd_Ws_RingPfmEna_2 10234
#define pUmem_Cmd_Ws_CoreRefPower_2 10235
#define pUmem_Cmd_Ws_RingRefPower_2 10236
#define pUmem_Cmd_TBD_676C 10237
#define pUmem_Cmd_Ws_ShotTime 10238
#define pUmem_Cmd_Ws_EprOut 10239
#define pUmem_Cmd_Ws_TempCkTime 10240
#define pUmem_Cmd_Ws_TempOffset1 10241
#define pUmem_Cmd_Ws_CldInposDelay 10242
#define pUmem_Cmd_Ws_CoverFwdPos 10243
#define pUmem_Cmd_Ws_CoverBwdPos 10244
#define pUmem_Cmd_Ws_TempOffset2 10245
#define pUmem_Cmd_Ws_PowerCheck_CorePower 10246
#define pUmem_Cmd_Ws_PowerCheck_RingPower 10247
#define pUmem_Cmd_Ws_TbVacBlow 10248
#define pUmem_Cmd_TBD_679C 10249
#define pUmem_Cmd_TBD_67A0 10250
#define pUmem_Cmd_TBD_67A4 10251
#define pUmem_Cmd_TBD_67A8 10252
#define pUmem_Cmd_TBD_67AC 10253
#define pUmem_Cmd_TBD_67B0 10254
#define pUmem_Cmd_TBD_67B4 10255
#define pUmem_Cmd_TBD_67B8 10256
#define pUmem_Cmd_TBD_67BC 10257
#define pUmem_Cmd_Ws_LdVelX 10258
#define pUmem_Cmd_Ws_LdVelY 10259
#define pUmem_Cmd_Ws_LdVelC 10260
#define pUmem_Cmd_Ws_LdPosX 10261
#define pUmem_Cmd_Ws_LdPosY 10262
#define pUmem_Cmd_Ws_LdPosC 10263
#define pUmem_Cmd_Ws_RdVelX 10264
#define pUmem_Cmd_Ws_RdVelY 10265
#define pUmem_Cmd_Ws_RdVelC 10266
#define pUmem_Cmd_Ws_RdPosX 10267
#define pUmem_Cmd_Ws_RdPosY 10268
#define pUmem_Cmd_Ws_RdPosC 10269
#define pUmem_Cmd_Ws_WdVelX 10270
#define pUmem_Cmd_Ws_WdVelY 10271
#define pUmem_Cmd_Ws_WdVelC 10272
#define pUmem_Cmd_Ws_WdPosX 10273
#define pUmem_Cmd_Ws_WdPosY 10274
#define pUmem_Cmd_Ws_WdPosC 10275
#define pUmem_Cmd_Ws_WtVelX 10276
#define pUmem_Cmd_Ws_WtVelY 10277
#define pUmem_Cmd_Ws_WtVelC 10278
#define pUmem_Cmd_Ws_WtPosX 10279
#define pUmem_Cmd_Ws_WtPosY 10280
#define pUmem_Cmd_Ws_WtPosC 10281
#define pUmem_Cmd_Ws_UdVelX 10282
#define pUmem_Cmd_Ws_UdVelY 10283
#define pUmem_Cmd_Ws_UdVelC 10284
#define pUmem_Cmd_Ws_UdPosX 10285
#define pUmem_Cmd_Ws_UdPosY 10286
#define pUmem_Cmd_Ws_UdPosC 10287
#define pUmem_Cmd_Ws_RjVelX 10288
#define pUmem_Cmd_Ws_RjVelY 10289
#define pUmem_Cmd_Ws_RjVelC 10290
#define pUmem_Cmd_Ws_RjPosX 10291
#define pUmem_Cmd_Ws_RjPosY 10292
#define pUmem_Cmd_Ws_RjPosC 10293
#define pUmem_Cmd_TBD_6850 10294
#define pUmem_Cmd_TBD_6854 10295
#define pUmem_Cmd_TBD_6858 10296
#define pUmem_Cmd_TBD_685C 10297
#define pUmem_Cmd_TBD_6860 10298
#define pUmem_Cmd_TBD_6864 10299
#define pUmem_Cmd_TBD_6868 10300
#define pUmem_Cmd_TBD_686C 10301
#define pUmem_Cmd_TBD_6870 10302
#define pUmem_Cmd_TBD_6874 10303
#define pUmem_Cmd_TBD_6878 10304
#define pUmem_Cmd_TBD_687C 10305
#define pUmem_Cmd_TBD_6880 10306
#define pUmem_Cmd_TBD_6884 10307
#define pUmem_Cmd_Vs_ServoOn 10308
#define pUmem_Cmd_Vs_ServoOff 10309
#define pUmem_Cmd_Vs_HomeStart 10310
#define pUmem_Cmd_Vs_HomeAbort 10311
#define pUmem_Cmd_Vs_AlarmReset 10312
#define pUmem_Cmd_Vs_AlarmRetry 10313
#define pUmem_Cmd_Vs_AlarmAbort 10314
#define pUmem_Cmd_TBD_6994 10315
#define pUmem_Cmd_TBD_6998 10316
#define pUmem_Cmd_TBD_699C 10317
#define pUmem_Cmd_Vs_TestShot 10318
#define pUmem_Cmd_Vs_PdtStaChange 10319
#define pUmem_Cmd_TBD_69A8 10320
#define pUmem_Cmd_TBD_69AC 10321
#define pUmem_Cmd_TBD_69B0 10322
#define pUmem_Cmd_TBD_69B4 10323
#define pUmem_Cmd_TBD_69B8 10324
#define pUmem_Cmd_TBD_69BC 10325
#define pUmem_Cmd_TBD_69C0 10326
#define pUmem_Cmd_TBD_69C4 10327
#define pUmem_Cmd_TBD_69C8 10328
#define pUmem_Cmd_TBD_69CC 10329
#define pUmem_Cmd_TBD_69D0 10330
#define pUmem_Cmd_TBD_69D4 10331
#define pUmem_Cmd_TBD_69D8 10332
#define pUmem_Cmd_TBD_69DC 10333
#define pUmem_Cmd_TBD_69E0 10334
#define pUmem_Cmd_TBD_69E4 10335
#define pUmem_Cmd_TBD_69E8 10336
#define pUmem_Cmd_TBD_69EC 10337
#define pUmem_Cmd_Vs_LdStart 10338
#define pUmem_Cmd_Vs_LdAbort 10339
#define pUmem_Cmd_Vs_LdHold 10340
#define pUmem_Cmd_Vs_RdStart 10341
#define pUmem_Cmd_Vs_RdAbort 10342
#define pUmem_Cmd_Vs_RdHold 10343
#define pUmem_Cmd_Vs_VnStart 10344
#define pUmem_Cmd_Vs_VnAbort 10345
#define pUmem_Cmd_Vs_VnHold 10346
#define pUmem_Cmd_Vs_WtStart 10347
#define pUmem_Cmd_Vs_WtAbort 10348
#define pUmem_Cmd_Vs_WtHold 10349
#define pUmem_Cmd_Vs_UdStart 10350
#define pUmem_Cmd_Vs_UdAbort 10351
#define pUmem_Cmd_Vs_UdHold 10352
#define pUmem_Cmd_Vs_RjStart 10353
#define pUmem_Cmd_Vs_RjAbort 10354
#define pUmem_Cmd_Vs_RjHold 10355
#define pUmem_Cmd_TBD_6A38 10356
#define pUmem_Cmd_TBD_6A3C 10357
#define pUmem_Cmd_TBD_6A40 10358
#define pUmem_Cmd_TBD_6A44 10359
#define pUmem_Cmd_TBD_6A48 10360
#define pUmem_Cmd_TBD_6A4C 10361
#define pUmem_Cmd_TBD_6A50 10362
#define pUmem_Cmd_TBD_6A54 10363
#define pUmem_Cmd_TBD_6A58 10364
#define pUmem_Cmd_TBD_6A5C 10365
#define pUmem_Cmd_TBD_6A60 10366
#define pUmem_Cmd_TBD_6A64 10367
#define pUmem_Cmd_Vs_3rdTransUdRsp 10368
#define pUmem_Cmd_Vs_3rdTransRjRsp 10369
#define pUmem_Cmd_Vs_3DVisionStRsp 10370
#define pUmem_Cmd_Vs_3DVisionEdRsp 10371
#define pUmem_Cmd_TBD_6A78 10372
#define pUmem_Cmd_TBD_6A7C 10373
#define pUmem_Cmd_TBD_6A80 10374
#define pUmem_Cmd_TBD_6A84 10375
#define pUmem_Cmd_Vs_VisionSkip 10376
#define pUmem_Cmd_Vs_RspSkipOpt 10377
#define pUmem_Cmd_TBD_6A90 10378
#define pUmem_Cmd_TBD_6A94 10379
#define pUmem_Cmd_TBD_6A98 10380
#define pUmem_Cmd_TBD_6A9C 10381
#define pUmem_Cmd_TBD_6AA0 10382
#define pUmem_Cmd_TBD_6AA4 10383
#define pUmem_Cmd_TBD_6AA8 10384
#define pUmem_Cmd_TBD_6AAC 10385
#define pUmem_Cmd_TBD_6AB0 10386
#define pUmem_Cmd_TBD_6AB4 10387
#define pUmem_Cmd_TBD_6AB8 10388
#define pUmem_Cmd_TBD_6ABC 10389
#define pUmem_Cmd_TBD_6AC0 10390
#define pUmem_Cmd_TBD_6AC4 10391
#define pUmem_Cmd_TBD_6AC8 10392
#define pUmem_Cmd_TBD_6ACC 10393
#define pUmem_Cmd_TBD_6AD0 10394
#define pUmem_Cmd_TBD_6AD4 10395
#define pUmem_Cmd_TBD_6AD8 10396
#define pUmem_Cmd_TBD_6ADC 10397
#define pUmem_Cmd_Vs_AccLimitX 10398
#define pUmem_Cmd_Vs_AccLimitY 10399
#define pUmem_Cmd_Vs_AccLimitC 10400
#define pUmem_Cmd_Vs_VelLimitC 10401
#define pUmem_Cmd_Vs_RefVel 10402
#define pUmem_Cmd_Vs_RotOffsetX 10403
#define pUmem_Cmd_Vs_RotOffsetY 10404
#define pUmem_Cmd_TBD_6AFC 10405
#define pUmem_Cmd_TBD_6B00 10406
#define pUmem_Cmd_TBD_6B04 10407
#define pUmem_Cmd_Vs_PfmPeriod 10408
#define pUmem_Cmd_Vs_PfmDuty 10409
#define pUmem_Cmd_TBD_6B10 10410
#define pUmem_Cmd_TBD_6B14 10411
#define pUmem_Cmd_TBD_6B18 10412
#define pUmem_Cmd_TBD_6B1C 10413
#define pUmem_Cmd_TBD_6B20 10414
#define pUmem_Cmd_TBD_6B24 10415
#define pUmem_Cmd_TBD_6B28 10416
#define pUmem_Cmd_TBD_6B2C 10417
#define pUmem_Cmd_TBD_6B30 10418
#define pUmem_Cmd_TBD_6B34 10419
#define pUmem_Cmd_TBD_6B38 10420
#define pUmem_Cmd_TBD_6B3C 10421
#define pUmem_Cmd_TBD_6B40 10422
#define pUmem_Cmd_TBD_6B44 10423
#define pUmem_Cmd_TBD_6B48 10424
#define pUmem_Cmd_TBD_6B4C 10425
#define pUmem_Cmd_TBD_6B50 10426
#define pUmem_Cmd_TBD_6B54 10427
#define pUmem_Cmd_Vs_ShotTime 10428
#define pUmem_Cmd_Vs_CldInposDelay 10429
#define pUmem_Cmd_TBD_6B60 10430
#define pUmem_Cmd_TBD_6B64 10431
#define pUmem_Cmd_TBD_6B68 10432
#define pUmem_Cmd_TBD_6B6C 10433
#define pUmem_Cmd_TBD_6B70 10434
#define pUmem_Cmd_TBD_6B74 10435
#define pUmem_Cmd_TBD_6B78 10436
#define pUmem_Cmd_TBD_6B7C 10437
#define pUmem_Cmd_TBD_6B80 10438
#define pUmem_Cmd_TBD_6B84 10439
#define pUmem_Cmd_TBD_6B88 10440
#define pUmem_Cmd_TBD_6B8C 10441
#define pUmem_Cmd_TBD_6B90 10442
#define pUmem_Cmd_TBD_6B94 10443
#define pUmem_Cmd_TBD_6B98 10444
#define pUmem_Cmd_TBD_6B9C 10445
#define pUmem_Cmd_TBD_6BA0 10446
#define pUmem_Cmd_TBD_6BA4 10447
#define pUmem_Cmd_Vs_LdVelX 10448
#define pUmem_Cmd_Vs_LdVelY 10449
#define pUmem_Cmd_Vs_LdVelC 10450
#define pUmem_Cmd_Vs_LdPosX 10451
#define pUmem_Cmd_Vs_LdPosY 10452
#define pUmem_Cmd_Vs_LdPosC 10453
#define pUmem_Cmd_Vs_RdVelX 10454
#define pUmem_Cmd_Vs_RdVelY 10455
#define pUmem_Cmd_Vs_RdVelC 10456
#define pUmem_Cmd_Vs_RdPosX 10457
#define pUmem_Cmd_Vs_RdPosY 10458
#define pUmem_Cmd_Vs_RdPosC 10459
#define pUmem_Cmd_Vs_VnVelX 10460
#define pUmem_Cmd_Vs_VnVelY 10461
#define pUmem_Cmd_Vs_VnVelC 10462
#define pUmem_Cmd_Vs_VnPosX 10463
#define pUmem_Cmd_Vs_VnPosY 10464
#define pUmem_Cmd_Vs_VnPosC 10465
#define pUmem_Cmd_Vs_WtVelX 10466
#define pUmem_Cmd_Vs_WtVelY 10467
#define pUmem_Cmd_Vs_WtVelC 10468
#define pUmem_Cmd_Vs_WtPosX 10469
#define pUmem_Cmd_Vs_WtPosY 10470
#define pUmem_Cmd_Vs_WtPosC 10471
#define pUmem_Cmd_Vs_UdVelX 10472
#define pUmem_Cmd_Vs_UdVelY 10473
#define pUmem_Cmd_Vs_UdVelC 10474
#define pUmem_Cmd_Vs_UdPosX 10475
#define pUmem_Cmd_Vs_UdPosY 10476
#define pUmem_Cmd_Vs_UdPosC 10477
#define pUmem_Cmd_Vs_RjVelX 10478
#define pUmem_Cmd_Vs_RjVelY 10479
#define pUmem_Cmd_Vs_RjVelC 10480
#define pUmem_Cmd_Vs_RjPosX 10481
#define pUmem_Cmd_Vs_RjPosY 10482
#define pUmem_Cmd_Vs_RjPosC 10483
#define pUmem_Cmd_TBD_6C38 10484
#define pUmem_Cmd_TBD_6C3C 10485
#define pUmem_Cmd_TBD_6C40 10486
#define pUmem_Cmd_TBD_6C44 10487
#define pUmem_Cmd_TBD_6C48 10488
#define pUmem_Cmd_TBD_6C4C 10489
#define pUmem_Cmd_TBD_6C50 10490
#define pUmem_Cmd_TBD_6C54 10491
#define pUmem_Cmd_TBD_6C58 10492
#define pUmem_Cmd_TBD_6C5C 10493
#define pUmem_Cmd_TBD_6C60 10494
#define pUmem_Cmd_TBD_6C64 10495
#define pUmem_Cmd_TBD_6C68 10496
#define pUmem_Cmd_TBD_6C6C 10497
#define pUmem_Cmd_Sc_ServoOn 10498
#define pUmem_Cmd_Sc_ServoOff 10499
#define pUmem_Cmd_Sc_HomeStart 10500
#define pUmem_Cmd_Sc_HomeAbort 10501
#define pUmem_Cmd_Sc_AlarmReset 10502
#define pUmem_Cmd_Sc_Fsave 10503
#define pUmem_Cmd_Sc_WblEna 10504
#define pUmem_Cmd_Sc_WblLen 10505
#define pUmem_Cmd_Sc_WblDist 10506
#define pUmem_Cmd_Sc_WblType 10507
#define pUmem_Cmd_Sc_WblRatioW 10508
#define pUmem_Cmd_Sc_WblRatioL 10509
#define pUmem_Cmd_Sc_WblOffsetX 10510
#define pUmem_Cmd_Sc_WblOffsetY 10511
#define pUmem_Cmd_Sc_WblEna_2 10512
#define pUmem_Cmd_Sc_WblLen_2 10513
#define pUmem_Cmd_Sc_WblDist_2 10514
#define pUmem_Cmd_Sc_WblType_2 10515
#define pUmem_Cmd_Sc_WblRatioW_2 10516
#define pUmem_Cmd_Sc_WblRatioL_2 10517
#define pUmem_Cmd_Sc_WblOffsetX_2 10518
#define pUmem_Cmd_Sc_WblOffsetY_2 10519
#define pUmem_Di_Md00 10520
#define pUmem_Di_Md01 10536
#define pUmem_Di_Md02 10552
#define pUmem_Do_Md00 10568
#define pUmem_Do_Md01 10584
#define pUmem_Do_Md02 10600
#define pUmem_Di00 10616
#define pUmem_Di01_LaserReady 10617
#define pUmem_Di02_LaserReqResp 10618
#define pUmem_Di03_LaserPowerOn 10619
#define pUmem_Di04_LaserAdMode 10620
#define pUmem_Di05_LaserProgRun 10621
#define pUmem_Di06_LaserWarning 10622
#define pUmem_Di07_LaserAbnormal 10623
#define pUmem_Di08 10624
#define pUmem_Di09 10625
#define pUmem_Di0A 10626
#define pUmem_Di0B 10627
#define pUmem_Di0C 10628
#define pUmem_Di0D 10629
#define pUmem_Di0E 10630
#define pUmem_Di0F 10631
#define pUmem_Di10_WsLtFixUp 10632
#define pUmem_Di11_WsVsLtStrCls 10633
#define pUmem_Di12_WsLtFixDn 10634
#define pUmem_Di13_WsVsLtStrOpn 10635
#define pUmem_Di14_WsRtFixUp 10636
#define pUmem_Di15_WsVsRtStrCls 10637
#define pUmem_Di16_WsRtFixDn 10638
#define pUmem_Di17_WsVsRtStrOpn 10639
#define pUmem_Di18_WsTempBwd 10640
#define pUmem_Di19_TrPickUp 10641
#define pUmem_Di1A_WsTempFwd 10642
#define pUmem_Di1B_TrPickDn 10643
#define pUmem_Di1C_WsTbOutOfRange 10644
#define pUmem_Di1D_TrGripCls 10645
#define pUmem_Di1E 10646
#define pUmem_Di1F_TrGripOpn 10647
#define pUmem_Di20_VsTbFixBwd 10648
#define pUmem_Di21_WsAirCurtain 10649
#define pUmem_Di22_VsTbFixFwd 10650
#define pUmem_Di23_WsN2Blow 10651
#define pUmem_Di24_VsTbFixUp 10652
#define pUmem_Di25 10653
#define pUmem_Di26_VsTbFixDn 10654
#define pUmem_Di27 10655
#define pUmem_Di28_WsTbDet 10656
#define pUmem_Di29 10657
#define pUmem_Di2A_VsTbDet 10658
#define pUmem_Di2B 10659
#define pUmem_Di2C_VsTbOutOfRange 10660
#define pUmem_Di2D 10661
#define pUmem_Di2E 10662
#define pUmem_Di2F 10663
#define pUmem_Di30_EcldFwd 10664
#define pUmem_Di31_EcldBwd 10665
#define pUmem_Do00_LaserEmission 10666
#define pUmem_Do01_LaserReset 10667
#define pUmem_Do02_LaserRequest 10668
#define pUmem_Do03_LaserPowerOn 10669
#define pUmem_Do04_LaserAdInEna 10670
#define pUmem_Do05_LaserGuideEna 10671
#define pUmem_Do06_LaserProgEna 10672
#define pUmem_Do07_LaserProgStop 10673
#define pUmem_Do08 10674
#define pUmem_Do09 10675
#define pUmem_Do0A 10676
#define pUmem_Do0B 10677
#define pUmem_Do0C 10678
#define pUmem_Do0D 10679
#define pUmem_Do0E 10680
#define pUmem_Do0F 10681
#define pUmem_Do10_WsTbFixUp 10682
#define pUmem_Do11_WsTempBwd 10683
#define pUmem_Do12_WsTbFixDn 10684
#define pUmem_Do13_WsTempFwd 10685
#define pUmem_Do14_TrGripCls 10686
#define pUmem_Do15_VsTbFixBwd 10687
#define pUmem_Do16_TrGripOpn 10688
#define pUmem_Do17_VsTbFixFwd 10689
#define pUmem_Do18_TrPickUp 10690
#define pUmem_Do19_VsTbFixUp 10691
#define pUmem_Do1A_TrPickDn 10692
#define pUmem_Do1B_VsTbFixDn 10693
#define pUmem_Do1C_WsVsStrCls 10694
#define pUmem_Do1D_WsCoolAir 10695
#define pUmem_Do1E_WsVsStrOpn 10696
#define pUmem_Do1F 10697
#define pUmem_Do20_WsTbVacm 10698
#define pUmem_Do21_WsAirCurtain 10699
#define pUmem_Do22_WsTbBlow 10700
#define pUmem_Do23_WsN2Blow 10701
#define pUmem_Do24 10702
#define pUmem_Do25_WsTbVacmValve 10703
#define pUmem_Do26 10704
#define pUmem_Do27 10705
#define pUmem_Do28 10706
#define pUmem_Do29 10707
#define pUmem_Do2A 10708
#define pUmem_Do2B 10709
#define pUmem_Do2C 10710
#define pUmem_Do2D 10711
#define pUmem_Do2E 10712
#define pUmem_Do2F 10713
#define pUmem_Do30_EcldFwd 10714
#define pUmem_Do31_EcldBwd 10715
#define pUmem_Ai00_WsLoadCell 10716
#define pUmem_Ai01 10717
#define pUmem_Ai03_WsCorePower 10718
#define pUmem_Ai04_WsRingPower 10719
#define pUmem_Ti00_WsTempSen1 10720
#define pUmem_Ti01_WsTempSen2 10721
#define pUmem_Sta_Mc_BufIdx 10722
#define pUmem_Sta_Mc_SeqCur 10723
#define pUmem_Sta_Mc_SeqOld 10773
#define pUmem_Sta_Mc_Pdt 10823
#define pUmem_Sta_Mc_Time_L 10873
#define pUmem_Sta_Mc_Time_H 10923
#define pUmem_Sta_Mc_Time_BufD 10973
#define pUmem_Sta_Mc_Time_BufL 11023
#define pUmem_Sta_Mc_Time_BufH 11073
#define pUmem_Sta_CmdPos 11123
#define pUmem_Sta_ActPos 11155
#define pUmem_Sta_Velocity 11187
#define pUmem_Sta_Load 11219
#define pUmem_Sta_AmpEna 11251
#define pUmem_Sta_CloseLoop 11283
#define pUmem_Sta_InPos 11315
#define pUmem_Sta_HomeFin 11347
#define pUmem_Sta_HomeIng 11379
#define pUmem_Sta_LimitMinus 11411
#define pUmem_Sta_LimitPlus 11443
#define pUmem_Sta_FollowingErr 11475
#define pUmem_Sta_AmpFault 11507
#define pUmem_Sta_EncLoss 11539
#define pUmem_Sta_I2tErr 11571
#define pUmem_Sta_ProgPos 11603
#define pUmem_Cmd_ServoOn 11635
#define pUmem_Cmd_ServoOff 11667
#define pUmem_Cmd_HomeStart 11699
#define pUmem_Cmd_HomeAbort 11731
#define pUmem_Cmd_HomeOffset 11763
#define pUmem_Cmd_JogStop 11795
#define pUmem_Cmd_JogContPlus 11827
#define pUmem_Cmd_JogContMinus 11859
#define pUmem_Cmd_JogAbsMove 11891
#define pUmem_Cmd_JogIncMove 11923
#define pUmem_Cmd_JogAbsPos 11955
#define pUmem_Cmd_JogIncDist 11987
#define pUmem_Cmd_JogSpeed 12019
#define pUmem_Cmd_JogTa 12051
#define pUmem_Cmd_JogTs 12083
#define gKey_RunMod 8197
#define gMc_RunMod 8198
#define gMc_RunOpt 8199
#define gWs_RunOpt 8200
#define gVs_RunOpt 8201
#define gWs_StepRun 8202
#define gVs_StepRun 8203
#define gTest_Vel 8204
#define gWs_LaserTest_Ena 8205
#define gMc_Servo_Cnt_Cur 8206
#define gMc_Servo_Cnt_Old 8207
#define gMc_Servo_Cnt_Dlt 8208
#define gMc_Servo_Prd_Dlt 8209
#define gWs_AccLimitX 8210
#define gWs_AccLimitY 8211
#define gWs_AccLimitC 8212
#define gWs_VelLimitC 8213
#define gWs_PosX_Cur 8214
#define gWs_PosY_Cur 8215
#define gWs_PosX_Old 8216
#define gWs_PosY_Old 8217
#define gWs_PosX_Dlt 8218
#define gWs_PosY_Dlt 8219
#define gWs_PosV_Dlt 8220
#define gWs_Vect_Vel 8221
#define gWs_Vect_Sum 8222
#define pWs_Vect_Dlt 12115
#define gWs_OutMode 8223
#define gWs_RefVel 8224
#define gWs_VelRatio 8225
#define gWs_LaserEna 8226
#define gWs_OutMode_2 8227
#define gWs_RefVel_2 8228
#define gWs_CorePowSf 8229
#define gWs_CoreRefPow 8230
#define gWs_CoreMinPow 8231
#define gWs_CoreMaxPow 8232
#define gWs_CoreOutPow 8233
#define gWs_CoreOutVdc 8234
#define gWs_CorePfmEna 8235
#define gWs_CoreRefPow_2 8236
#define gWs_CorePfmEna_2 8237
#define gWs_RingPowSf 8238
#define gWs_RingRefPow 8239
#define gWs_RingMinPow 8240
#define gWs_RingMaxPow 8241
#define gWs_RingOutPow 8242
#define gWs_RingOutVdc 8243
#define gWs_RingPfmEna 8244
#define gWs_RingRefPow_2 8245
#define gWs_RingPfmEna_2 8246
#define gWs_PfmRtiCnt 8247
#define gWs_PfmPeriod 8248
#define gWs_PfmOnTime 8249
#define gWs_PfmOnCnt 8250
#define gWs_PfmPeriod_2 8251
#define gWs_PfmOnTime_2 8252
#define gWs_PfmOut 8253
#define gWs_PfmBuf 8254
#define gWs_PfmCnt 8255
#define gWs_PfmOut_2 8256
#define gWs_WblEna 8257
#define gWs_WblLen 8258
#define gWs_WblDst 8259
#define gWs_WblCnt 8260
#define gWs_WblType 8261
#define gWs_WblRatW 8262
#define gWs_WblRatL 8263
#define gWs_WblOfsX 8264
#define gWs_WblOfsY 8265
#define gWs_WblEna_2 8266
#define gWs_WblLen_2 8267
#define gWs_WblDst_2 8268
#define gWs_WblCnt_2 8269
#define gWs_WblType_2 8270
#define gWs_WblRatW_2 8271
#define gWs_WblRatL_2 8272
#define gWs_WblOfsX_2 8273
#define gWs_WblOfsY_2 8274
#define gVs_AccLimitX 8275
#define gVs_AccLimitY 8276
#define gVs_AccLimitC 8277
#define gVs_VelLimitC 8278
#define gVs_PosX_Cur 8279
#define gVs_PosY_Cur 8280
#define gVs_PosX_Old 8281
#define gVs_PosY_Old 8282
#define gVs_PosX_Dlt 8283
#define gVs_PosY_Dlt 8284
#define gVs_PosV_Dlt 8285
#define gVs_Vect_Vel 8286
#define gVs_Vect_Sum 8287
#define pVs_Vect_Dlt 12116
#define gVs_RefVel 8288
#define gVs_PfmPeriod 8289
#define gVs_PfmDuty 8290
#define gVs_EquEna 8291
#define gVs_EquCnt 8292
#define gVs_EquSta_Cur 8293
#define gVs_EquSta_Old 8294
#define gSc_PosX_Cur 8295
#define gSc_PosY_Cur 8296
#define gSta_Idx 8297
#define gCmd_Idx 8298
#define gMt_HomeStart_Cur 8299
#define gMt_HomeStart_Old 8331
#define gMt_HomeAbort_Cur 8363
#define gMt_HomeAbort_Old 8395
#define gMt_ServoOn_Cur 8427
#define gMt_ServoOn_Old 8459
#define gMt_ServoOff_Cur 8491
#define gMt_ServoOff_Old 8523
#define gMt_Jog_Stop_Cur 8555
#define gMt_Jog_Stop_Old 8587
#define gMt_Jog_ContPlus_Cur 8619
#define gMt_Jog_ContPlus_Old 8651
#define gMt_Jog_ContMinus_Cur 8683
#define gMt_Jog_ContMinus_Old 8715
#define gMt_Jog_AbsMove_Cur 8747
#define gMt_Jog_AbsMove_Old 8779
#define gMt_Jog_IncMove_Cur 8811
#define gMt_Jog_IncMove_Old 8843
#define gMc_ServoOn_Cur 8875
#define gMc_ServoOn_Old 8876
#define gMc_ServoOff_Cur 8877
#define gMc_ServoOff_Old 8878
#define gMc_HomeStart_Cur 8879
#define gMc_HomeStart_Old 8880
#define gMc_HomeAbort_Cur 8881
#define gMc_HomeAbort_Old 8882
#define gMc_AlarmReset_Cur 8883
#define gMc_AlarmReset_Old 8884
#define gMc_RunMod_Cur 8885
#define gMc_RunMod_Old 8886
#define gMc_AutoStart_Cur 8887
#define gMc_AutoStart_Old 8888
#define gMc_AutoAbort_Cur 8889
#define gMc_AutoAbort_Old 8890
#define gMc_AutoPause_Cur 8891
#define gMc_AutoPause_Old 8892
#define gMc_CycleStart_Cur 8893
#define gMc_CycleStart_Old 8894
#define gMc_StepStart_Cur 8895
#define gMc_StepStart_Old 8896
#define gMc_Fsave_Cur 8897
#define gMc_Fsave_Old 8898
#define gWs_ServoOn_Cur 8899
#define gWs_ServoOn_Old 8900
#define gWs_ServoOff_Cur 8901
#define gWs_ServoOff_Old 8902
#define gWs_HomeStart_Cur 8903
#define gWs_HomeStart_Old 8904
#define gWs_HomeAbort_Cur 8905
#define gWs_HomeAbort_Old 8906
#define gWs_AlarmReset_Cur 8907
#define gWs_AlarmReset_Old 8908
#define gWs_AlarmRetry_Cur 8909
#define gWs_AlarmRetry_Old 8910
#define gWs_AlarmAbort_Cur 8911
#define gWs_AlarmAbort_Old 8912
#define gWs_PowerCheck_Cur 8913
#define gWs_PowerCheck_Old 8914
#define gWs_TestShot_Cur 8915
#define gWs_TestShot_Old 8916
#define gWs_LaserEnableStart_Cur 8917
#define gWs_LaserEnableStart_Old 8918
#define gWs_LaserDisableStart_Cur 8919
#define gWs_LaserDisableStart_Old 8920
#define gWs_LaserTestCrossStart_Cur 8921
#define gWs_LaserTestCrossStart_Old 8922
#define gWs_LaserTestCrossAbort_Cur 8923
#define gWs_LaserTestCrossAbort_Old 8924
#define gWs_LaserTestLineStart_Cur 8925
#define gWs_LaserTestLineStart_Old 8926
#define gWs_LaserTestLineAbort_Cur 8927
#define gWs_LaserTestLineAbort_Old 8928
#define gWs_PowerCheckStart_Cur 8929
#define gWs_PowerCheckStart_Old 8930
#define gWs_PowerCheckAbort_Cur 8931
#define gWs_PowerCheckAbort_Old 8932
#define gVs_ServoOn_Cur 8933
#define gVs_ServoOn_Old 8934
#define gVs_ServoOff_Cur 8935
#define gVs_ServoOff_Old 8936
#define gVs_HomeStart_Cur 8937
#define gVs_HomeStart_Old 8938
#define gVs_HomeAbort_Cur 8939
#define gVs_HomeAbort_Old 8940
#define gVs_AlarmReset_Cur 8941
#define gVs_AlarmReset_Old 8942
#define gVs_AlarmRetry_Cur 8943
#define gVs_AlarmRetry_Old 8944
#define gVs_AlarmAbort_Cur 8945
#define gVs_AlarmAbort_Old 8946
#define gVs_TestShot_Cur 8947
#define gVs_TestShot_Old 8948
#define gSc_ServoOn_Cur 8949
#define gSc_ServoOn_Old 8950
#define gSc_ServoOff_Cur 8951
#define gSc_ServoOff_Old 8952
#define gSc_HomeStart_Cur 8953
#define gSc_HomeStart_Old 8954
#define gSc_HomeAbort_Cur 8955
#define gSc_HomeAbort_Old 8956
#define gSc_AlarmReset_Cur 8957
#define gSc_AlarmReset_Old 8958
#define gWs_LdStart_Cur 8959
#define gWs_LdAbort_Cur 8960
#define gWs_LdStart_Old 8961
#define gWs_LdAbort_Old 8962
#define gWs_RdStart_Cur 8963
#define gWs_RdAbort_Cur 8964
#define gWs_RdStart_Old 8965
#define gWs_RdAbort_Old 8966
#define gWs_WdStart_Cur 8967
#define gWs_WdAbort_Cur 8968
#define gWs_WdStart_Old 8969
#define gWs_WdAbort_Old 8970
#define gWs_WtStart_Cur 8971
#define gWs_WtAbort_Cur 8972
#define gWs_WtStart_Old 8973
#define gWs_WtAbort_Old 8974
#define gWs_UdStart_Cur 8975
#define gWs_UdAbort_Cur 8976
#define gWs_UdStart_Old 8977
#define gWs_UdAbort_Old 8978
#define gWs_RjStart_Cur 8979
#define gWs_RjAbort_Cur 8980
#define gWs_RjStart_Old 8981
#define gWs_RjAbort_Old 8982
#define gVs_LdStart_Cur 8983
#define gVs_LdAbort_Cur 8984
#define gVs_LdStart_Old 8985
#define gVs_LdAbort_Old 8986
#define gVs_RdStart_Cur 8987
#define gVs_RdAbort_Cur 8988
#define gVs_RdStart_Old 8989
#define gVs_RdAbort_Old 8990
#define gVs_VnStart_Cur 8991
#define gVs_VnAbort_Cur 8992
#define gVs_VnStart_Old 8993
#define gVs_VnAbort_Old 8994
#define gVs_WtStart_Cur 8995
#define gVs_WtAbort_Cur 8996
#define gVs_WtStart_Old 8997
#define gVs_WtAbort_Old 8998
#define gVs_UdStart_Cur 8999
#define gVs_UdAbort_Cur 9000
#define gVs_UdStart_Old 9001
#define gVs_UdAbort_Old 9002
#define gVs_RjStart_Cur 9003
#define gVs_RjAbort_Cur 9004
#define gVs_RjStart_Old 9005
#define gVs_RjAbort_Old 9006
#define gWs_PdtStaChange_Cur 9007
#define gVs_PdtStaChange_Cur 9008
#define gTr_PdtStaChange_Cur 9009
#define gWs_PdtStaChange_Old 9010
#define gVs_PdtStaChange_Old 9011
#define gTr_PdtStaChange_Old 9012
#define gWs_Error 9013
#define gVs_Error 9014
#define gWs_ErrCode 9015
#define gVs_ErrCode 9016
#define gWs_Error_Cur 9017
#define gWs_Error_Old 9018
#define gVs_Error_Cur 9019
#define gVs_Error_Old 9020
#define gSc_Com_Sta 9021
#define gEc_WdTimer 9022
#define gMc_DistX_Cur 9023
#define gMc_DistX_Err 9024
#define gWs_Safety_Sta 9025
#define gVs_Safety_Sta 9026
#define gWs_Safety_Err 9027
#define gVs_Safety_Err 9028
#define gMc_AlarmReset_Ena 9029
#define gWs_AlarmReset_Ena 9030
#define gVs_AlarmReset_Ena 9031
#define gSc_AlarmReset_Ena 9032
#define gWs_AlarmRetry_Ena 9033
#define gVs_AlarmRetry_Ena 9034
#define gWs_AlarmAbort_Ena 9035
#define gVs_AlarmAbort_Ena 9036
#define gEc_Com_Sta 9037
#define gEc_Con_Start 9069
#define gEc_Con_Abort 9070
#define gEc_Con_Ena 9071
#define gEc_Con_Sta 9072
#define gEc_Con_Seq 9073
#define gEc_Con_Buf 9074
#define gEc_Con_Tmr 9075
#define gMt_Home_Idx 9076
#define gMt_Home_Start 9077
#define gMt_Home_Abort 9109
#define gMt_Home_Ena 9141
#define gMt_Home_Sta 9173
#define gMt_Home_Seq 9205
#define gMt_Home_Buf 9237
#define gMt_Home_Tmr 9269
#define gMt_Home_Err 9301
#define gMt_Home_Pos 9333
#define gMc_Home_Start 9365
#define gMc_Home_Abort 9366
#define gMc_Home_Ena 9367
#define gMc_Home_Sta 9368
#define gMc_Home_Seq 9369
#define gMc_Home_Buf 9370
#define gMc_Home_Tmr 9371
#define gMc_Home_Err 9372
#define gWs_Home_Start 9373
#define gWs_Home_Abort 9374
#define gWs_Home_Ena 9375
#define gWs_Home_Sta 9376
#define gWs_Home_Seq 9377
#define gWs_Home_Buf 9378
#define gWs_Home_Tmr 9379
#define gWs_Home_Err 9380
#define gVs_Home_Start 9381
#define gVs_Home_Abort 9382
#define gVs_Home_Ena 9383
#define gVs_Home_Sta 9384
#define gVs_Home_Seq 9385
#define gVs_Home_Buf 9386
#define gVs_Home_Tmr 9387
#define gVs_Home_Err 9388
#define gSc_Home_Start 9389
#define gSc_Home_Abort 9390
#define gSc_Home_Ena 9391
#define gSc_Home_Sta 9392
#define gSc_Home_Seq 9393
#define gSc_Home_Buf 9394
#define gSc_Home_Tmr 9395
#define gSc_Home_Err 9396
#define gSc_InitSta 9397
#define gJog_Idx 9398
#define gMt_ServoOn_Ena 9399
#define gMt_ServoOff_Ena 9431
#define gMc_ServoOn_Ena 9463
#define gMc_ServoOff_Ena 9464
#define gWs_ServoOn_Ena 9465
#define gWs_ServoOff_Ena 9466
#define gVs_ServoOn_Ena 9467
#define gVs_ServoOff_Ena 9468
#define gSc_ServoOn_Ena 9469
#define gSc_ServoOff_Ena 9470
#define gJog_Stop_Ena 9471
#define gJog_ContPlus_Ena 9503
#define gJog_ContMinus_Ena 9535
#define gJog_AbsMove_Ena 9567
#define gJog_IncMove_Ena 9599
#define gWd_Mdi_Start 9631
#define gWd_Mdi_Abort 9632
#define gWd_Mdi_Ena 9633
#define gWd_Mdi_Sta 9634
#define gWd_Mdi_Seq 9635
#define gWd_Mdi_Buf 9636
#define gWd_Mdi_Tmr 9637
#define gWd_Mdi_Stp 9638
#define gWd_Mdi_PosX 9639
#define gWd_Mdi_PosY 9640
#define gWd_Mdi_PosC 9641
#define cMachineID 111
#define gWs_PdtNo 9642
#define gVs_PdtNo 9643
#define gTr_PdtNo 9644
#define gWs_LdDir 9645
#define gMc_AutoRun_Start 9646
#define gMc_AutoRun_Abort 9647
#define gMc_AutoRun_Pause 9648
#define gMc_Cycle_Start 9649
#define gMc_Step_Start 9650
#define gMc_AutoRun_Ena 9651
#define gMc_AutoRun_Sta 9652
#define gMc_AutoRun_Seq 9653
#define gMc_AutoRun_Buf 9654
#define gMc_AutoRun_Tmr 9655
#define gMc_AutoRun_Err 9656
#define gWs_Loop_Start 9657
#define gWs_Loop_Abort 9658
#define gWs_Loop_Pause 9659
#define gWs_Loop_Ena 9660
#define gWs_Loop_Sta 9661
#define gWs_Loop_Seq 9662
#define gWs_Loop_Buf 9663
#define gWs_Loop_Tmr 9664
#define gWs_Loop_Err 9665
#define gWs_Loop_Time 9666
#define gWs_Loop_TimeBuf 9667
#define gWs_Seq_Cur 9668
#define gWs_Seq_Old 9669
#define gWs_Seq_Err 9670
#define gVs_Loop_Start 9671
#define gVs_Loop_Abort 9672
#define gVs_Loop_Pause 9673
#define gVs_Loop_Ena 9674
#define gVs_Loop_Sta 9675
#define gVs_Loop_Seq 9676
#define gVs_Loop_Buf 9677
#define gVs_Loop_Tmr 9678
#define gVs_Loop_Err 9679
#define gVs_Loop_Time 9680
#define gVs_Loop_TimeBuf 9681
#define gVs_Seq_Cur 9682
#define gVs_Seq_Old 9683
#define gVs_Seq_Err 9684
#define gWs_Sta_Pdt 9685
#define gVs_Sta_Pdt 9686
#define gTr_Sta_Pdt 9687
#define gWs_Sta_PdtBuf 9688
#define gVs_Sta_PdtBuf 9689
#define gTr_Sta_PdtBuf 9690
#define gWs_Sta_Stg 9691
#define gVs_Sta_Stg 9692
#define gWs_Pos_Pdt 9693
#define gVs_Pos_Pdt 9694
#define gWs_Pos_Stg 9695
#define gVs_Pos_Stg 9696
#define gWs_PdtStaChange_Ena 9697
#define gVs_PdtStaChange_Ena 9698
#define gTr_PdtStaChange_Ena 9699
#define gWs_Load_Start 9700
#define gWs_Load_Abort 9701
#define gWs_Load_Ena 9702
#define gWs_Load_Sta 9703
#define gWs_Load_Seq 9704
#define gWs_Load_Buf 9705
#define gWs_Load_Tmr 9706
#define gWs_Load_Err 9707
#define gWs_Load_VelX 9708
#define gWs_Load_VelY 9709
#define gWs_Load_VelC 9710
#define gWs_Load_PosX 9711
#define gWs_Load_PosY 9712
#define gWs_Load_PosC 9713
#define gWs_Load_Time 9714
#define gWs_Load_TimeBuf 9715
#define gWs_Ready_Start 9716
#define gWs_Ready_Abort 9717
#define gWs_Ready_Ena 9718
#define gWs_Ready_Sta 9719
#define gWs_Ready_Seq 9720
#define gWs_Ready_Buf 9721
#define gWs_Ready_Tmr 9722
#define gWs_Ready_Err 9723
#define gWs_Ready_VelX 9724
#define gWs_Ready_VelY 9725
#define gWs_Ready_VelC 9726
#define gWs_Ready_PosX 9727
#define gWs_Ready_PosY 9728
#define gWs_Ready_PosC 9729
#define gWs_Ready_Time 9730
#define gWs_Ready_TimeBuf 9731
#define gWs_Ready_VsnJudge 9732
#define gWs_Welding_Start 9733
#define gWs_Welding_Abort 9734
#define gWs_Welding_Ena 9735
#define gWs_Welding_Sta 9736
#define gWs_Welding_Seq 9737
#define gWs_Welding_Buf 9738
#define gWs_Welding_Tmr 9739
#define gWs_Welding_Err 9740
#define gWs_Welding_VelX 9741
#define gWs_Welding_VelY 9742
#define gWs_Welding_VelC 9743
#define gWs_Welding_PosX 9744
#define gWs_Welding_PosY 9745
#define gWs_Welding_PosC 9746
#define gWs_Welding_Time 9747
#define gWs_Welding_TimeBuf 9748
#define gWs_Prog_Dist 9749
#define gWs_Prog_Time 9750
#define gWs_Prog_TimeBuf 9751
#define gWs_File_Prog_Time 9752
#define gWs_File_Prog_TimeBuf 9753
#define gWs_Wait_Start 9754
#define gWs_Wait_Abort 9755
#define gWs_Wait_Ena 9756
#define gWs_Wait_Sta 9757
#define gWs_Wait_Seq 9758
#define gWs_Wait_Buf 9759
#define gWs_Wait_Tmr 9760
#define gWs_Wait_Err 9761
#define gWs_Wait_VelX 9762
#define gWs_Wait_VelY 9763
#define gWs_Wait_VelC 9764
#define gWs_Wait_PosX 9765
#define gWs_Wait_PosY 9766
#define gWs_Wait_PosC 9767
#define gWs_Wait_Time 9768
#define gWs_Wait_TimeBuf 9769
#define gWs_Unload_Start 9770
#define gWs_Unload_Abort 9771
#define gWs_Unload_Ena 9772
#define gWs_Unload_Sta 9773
#define gWs_Unload_Seq 9774
#define gWs_Unload_Buf 9775
#define gWs_Unload_Tmr 9776
#define gWs_Unload_Err 9777
#define gWs_Unload_VelX 9778
#define gWs_Unload_VelY 9779
#define gWs_Unload_VelC 9780
#define gWs_Unload_PosX 9781
#define gWs_Unload_PosY 9782
#define gWs_Unload_PosC 9783
#define gWs_Unload_Time 9784
#define gWs_Unload_TimeBuf 9785
#define gWs_Reject_Start 9786
#define gWs_Reject_Abort 9787
#define gWs_Reject_Ena 9788
#define gWs_Reject_Sta 9789
#define gWs_Reject_Seq 9790
#define gWs_Reject_Buf 9791
#define gWs_Reject_Tmr 9792
#define gWs_Reject_Err 9793
#define gWs_Reject_VelX 9794
#define gWs_Reject_VelY 9795
#define gWs_Reject_VelC 9796
#define gWs_Reject_PosX 9797
#define gWs_Reject_PosY 9798
#define gWs_Reject_PosC 9799
#define gWs_Reject_Time 9800
#define gWs_Reject_TimeBuf 9801
#define gVs_Load_Start 9802
#define gVs_Load_Abort 9803
#define gVs_Load_Ena 9804
#define gVs_Load_Sta 9805
#define gVs_Load_Seq 9806
#define gVs_Load_Buf 9807
#define gVs_Load_Tmr 9808
#define gVs_Load_Err 9809
#define gVs_Load_VelX 9810
#define gVs_Load_VelY 9811
#define gVs_Load_VelC 9812
#define gVs_Load_PosX 9813
#define gVs_Load_PosY 9814
#define gVs_Load_PosC 9815
#define gVs_Load_Time 9816
#define gVs_Load_TimeBuf 9817
#define gVs_Ready_Start 9818
#define gVs_Ready_Abort 9819
#define gVs_Ready_Ena 9820
#define gVs_Ready_Sta 9821
#define gVs_Ready_Seq 9822
#define gVs_Ready_Buf 9823
#define gVs_Ready_Tmr 9824
#define gVs_Ready_Err 9825
#define gVs_Ready_VelX 9826
#define gVs_Ready_VelY 9827
#define gVs_Ready_VelC 9828
#define gVs_Ready_PosX 9829
#define gVs_Ready_PosY 9830
#define gVs_Ready_PosC 9831
#define gVs_Ready_Time 9832
#define gVs_Ready_TimeBuf 9833
#define gVs_Ready_VsnJudge 9834
#define gVs_Vision_Start 9835
#define gVs_Vision_Abort 9836
#define gVs_Vision_Ena 9837
#define gVs_Vision_Sta 9838
#define gVs_Vision_Seq 9839
#define gVs_Vision_Buf 9840
#define gVs_Vision_Tmr 9841
#define gVs_Vision_Err 9842
#define gVs_Vision_VelX 9843
#define gVs_Vision_VelY 9844
#define gVs_Vision_VelC 9845
#define gVs_Vision_PosX 9846
#define gVs_Vision_PosY 9847
#define gVs_Vision_PosC 9848
#define gVs_Vision_Time 9849
#define gVs_Vision_TimeBuf 9850
#define gVs_Prog_Dist 9851
#define gVs_Prog_Time 9852
#define gVs_Prog_TimeBuf 9853
#define gVs_Vision_VsnJudge 9854
#define gVs_Wait_Start 9855
#define gVs_Wait_Abort 9856
#define gVs_Wait_Ena 9857
#define gVs_Wait_Sta 9858
#define gVs_Wait_Seq 9859
#define gVs_Wait_Buf 9860
#define gVs_Wait_Tmr 9861
#define gVs_Wait_Err 9862
#define gVs_Wait_VelX 9863
#define gVs_Wait_VelY 9864
#define gVs_Wait_VelC 9865
#define gVs_Wait_PosX 9866
#define gVs_Wait_PosY 9867
#define gVs_Wait_PosC 9868
#define gVs_Wait_Time 9869
#define gVs_Wait_TimeBuf 9870
#define gVs_Unload_Start 9871
#define gVs_Unload_Abort 9872
#define gVs_Unload_Ena 9873
#define gVs_Unload_Sta 9874
#define gVs_Unload_Seq 9875
#define gVs_Unload_Buf 9876
#define gVs_Unload_Tmr 9877
#define gVs_Unload_Err 9878
#define gVs_Unload_VelX 9879
#define gVs_Unload_VelY 9880
#define gVs_Unload_VelC 9881
#define gVs_Unload_PosX 9882
#define gVs_Unload_PosY 9883
#define gVs_Unload_PosC 9884
#define gVs_Unload_Time 9885
#define gVs_Unload_TimeBuf 9886
#define gVs_Reject_Start 9887
#define gVs_Reject_Abort 9888
#define gVs_Reject_Ena 9889
#define gVs_Reject_Sta 9890
#define gVs_Reject_Seq 9891
#define gVs_Reject_Buf 9892
#define gVs_Reject_Tmr 9893
#define gVs_Reject_Err 9894
#define gVs_Reject_VelX 9895
#define gVs_Reject_VelY 9896
#define gVs_Reject_VelC 9897
#define gVs_Reject_PosX 9898
#define gVs_Reject_PosY 9899
#define gVs_Reject_PosC 9900
#define gVs_Reject_Time 9901
#define gVs_Reject_TimeBuf 9902
#define gWs_CldInpos_Delay 9903
#define gVs_CldInpos_Delay 9904
#define gWs_CldIn_CoverUD 9905
#define gWs_CldIn_CoverFB 9906
#define gWs_CldIn_TempFB 9907
#define gWs_CldIn_ShtrOC 9908
#define gVs_CldIn_CoverUD 9909
#define gVs_CldIn_CoverFB 9910
#define gTr_CldIn_PickerUD 9911
#define gTr_CldIn_PickerOC 9912
#define gWs_Epr_OutVdc 9913
#define pWs_Epr_OutVdc 12117
#define gWs_EcldHome_Start 9914
#define gWs_EcldHome_Abort 9915
#define gWs_EcldHome_Ena 9916
#define gWs_EcldHome_Sta 9917
#define gWs_EcldHome_Seq 9918
#define gWs_EcldHome_Buf 9919
#define gWs_EcldHome_Tmr 9920
#define gWs_EcldHome_Err 9921
#define gWs_EcldHome_Try 9922
#define gWs_EcldHome_Fin 9923
#define gWs_EcldFwd_Start 9924
#define gWs_EcldFwd_Abort 9925
#define gWs_EcldFwd_Ena 9926
#define gWs_EcldFwd_Sta 9927
#define gWs_EcldFwd_Seq 9928
#define gWs_EcldFwd_Buf 9929
#define gWs_EcldFwd_Tmr 9930
#define gWs_EcldFwd_Err 9931
#define gWs_EcldFwd_Try 9932
#define gWs_EcldBwd_Start 9933
#define gWs_EcldBwd_Abort 9934
#define gWs_EcldBwd_Ena 9935
#define gWs_EcldBwd_Sta 9936
#define gWs_EcldBwd_Seq 9937
#define gWs_EcldBwd_Buf 9938
#define gWs_EcldBwd_Tmr 9939
#define gWs_EcldBwd_Err 9940
#define gWs_EcldBwd_Try 9941
#define gWs_EcldCmdFwd_Cur 9942
#define gWs_EcldCmdFwd_Old 9943
#define gWs_EcldCmdBwd_Cur 9944
#define gWs_EcldCmdBwd_Old 9945
#define gWs_TestShot_Ena 9946
#define gWs_TestShot_Time 9947
#define gVs_TestShot_Ena 9948
#define gVs_TestShot_Time 9949
#define gVs_TestShot_TimeBuf 9950
#define gVs_TestShot_Seq 9951
#define gVs_TestShot_Tmr 9952
#define gWs_LaserSta_Ready 9953
#define gWs_LaserSta_Enable 9954
#define gWs_LaserSta_CorePower 9955
#define gWs_LaserSta_RingPower 9956
#define gWs_LaserEnable_Start 9957
#define gWs_LaserEnable_Abort 9958
#define gWs_LaserEnable_Ena 9959
#define gWs_LaserEnable_Sta 9960
#define gWs_LaserEnable_Seq 9961
#define gWs_LaserEnable_Buf 9962
#define gWs_LaserEnable_Tmr 9963
#define gWs_LaserEnable_Err 9964
#define gWs_LaserDisable_Start 9965
#define gWs_LaserDisable_Abort 9966
#define gWs_LaserDisable_Ena 9967
#define gWs_LaserDisable_Sta 9968
#define gWs_LaserDisable_Seq 9969
#define gWs_LaserDisable_Buf 9970
#define gWs_LaserDisable_Tmr 9971
#define gWs_LaserDisable_Err 9972
#define gWs_LaserTestCross_Start 9973
#define gWs_LaserTestCross_Abort 9974
#define gWs_LaserTestCross_Ena 9975
#define gWs_LaserTestCross_Sta 9976
#define gWs_LaserTestCross_Seq 9977
#define gWs_LaserTestCross_Buf 9978
#define gWs_LaserTestCross_Tmr 9979
#define gWs_LaserTestCross_Err 9980
#define gWs_LaserTestLine_Start 9981
#define gWs_LaserTestLine_Abort 9982
#define gWs_LaserTestLine_Ena 9983
#define gWs_LaserTestLine_Sta 9984
#define gWs_LaserTestLine_Seq 9985
#define gWs_LaserTestLine_Buf 9986
#define gWs_LaserTestLine_Tmr 9987
#define gWs_LaserTestLine_Err 9988
#define gWs_TgtMov_Start 9989
#define gWs_TgtMov_Abort 9990
#define gWs_TgtMov_Ena 9991
#define gWs_TgtMov_Sta 9992
#define gWs_TgtMov_Seq 9993
#define gWs_TgtMov_Buf 9994
#define gWs_TgtMov_Tmr 9995
#define gWs_TgtMov_Err 9996
#define gVs_TgtMov_Start 9997
#define gVs_TgtMov_Abort 9998
#define gVs_TgtMov_Ena 9999
#define gVs_TgtMov_Sta 10000
#define gVs_TgtMov_Seq 10001
#define gVs_TgtMov_Buf 10002
#define gVs_TgtMov_Tmr 10003
#define gVs_TgtMov_Err 10004
#define gWs_TgtMov_VelX 10005
#define gWs_TgtMov_VelY 10006
#define gWs_TgtMov_VelC 10007
#define gWs_TgtMov_PosX 10008
#define gWs_TgtMov_PosY 10009
#define gWs_TgtMov_PosC 10010
#define gVs_TgtMov_VelX 10011
#define gVs_TgtMov_VelY 10012
#define gVs_TgtMov_VelC 10013
#define gVs_TgtMov_PosX 10014
#define gVs_TgtMov_PosY 10015
#define gVs_TgtMov_PosC 10016
#define gWs_CoverOpn_TgtAng 10017
#define gWs_CoverOpn_Start 10018
#define gWs_CoverOpn_Abort 10019
#define gWs_CoverOpn_Ena 10020
#define gWs_CoverOpn_Sta 10021
#define gWs_CoverOpn_Seq 10022
#define gWs_CoverOpn_Buf 10023
#define gWs_CoverOpn_Tmr 10024
#define gWs_CoverOpn_Err 10025
#define gWs_CoverCls_Start 10026
#define gWs_CoverCls_Abort 10027
#define gWs_CoverCls_Ena 10028
#define gWs_CoverCls_Sta 10029
#define gWs_CoverCls_Seq 10030
#define gWs_CoverCls_Buf 10031
#define gWs_CoverCls_Tmr 10032
#define gWs_CoverCls_Err 10033
#define gWsV_CoverOpn_Start 10034
#define gWsV_CoverOpn_Abort 10035
#define gWsV_CoverOpn_Ena 10036
#define gWsV_CoverOpn_Sta 10037
#define gWsV_CoverOpn_Seq 10038
#define gWsV_CoverOpn_Buf 10039
#define gWsV_CoverOpn_Tmr 10040
#define gWsV_CoverOpn_Err 10041
#define gWsV_CoverCls_Start 10042
#define gWsV_CoverCls_Abort 10043
#define gWsV_CoverCls_Ena 10044
#define gWsV_CoverCls_Sta 10045
#define gWsV_CoverCls_Seq 10046
#define gWsV_CoverCls_Buf 10047
#define gWsV_CoverCls_Tmr 10048
#define gWsV_CoverCls_Err 10049
#define gWsV_Cover_Cur 10050
#define gVs_CoverOpn_Start 10051
#define gVs_CoverOpn_Abort 10052
#define gVs_CoverOpn_Ena 10053
#define gVs_CoverOpn_Sta 10054
#define gVs_CoverOpn_Seq 10055
#define gVs_CoverOpn_Buf 10056
#define gVs_CoverOpn_Tmr 10057
#define gVs_CoverOpn_Err 10058
#define gVs_CoverCls_Start 10059
#define gVs_CoverCls_Abort 10060
#define gVs_CoverCls_Ena 10061
#define gVs_CoverCls_Sta 10062
#define gVs_CoverCls_Seq 10063
#define gVs_CoverCls_Buf 10064
#define gVs_CoverCls_Tmr 10065
#define gVs_CoverCls_Err 10066
#define gWs_ThCoverPos_Old 10067
#define gVs_ThCoverPos_Old 10068
#define gWs_ThTargetPos_Old 10069
#define gVs_ThTargetPos_Old 10070
#define gWs_CoverMoving_Sta 10071
#define gVs_CoverMoving_Sta 10072
#define gBlow_Time 10073
#define gWs_PowerCheck_Shot_Start 10074
#define gWs_PowerCheck_Shot_Abort 10075
#define gWs_PowerCheck_Shot_Ena 10076
#define gWs_PowerCheck_Shot_Sta 10077
#define gWs_PowerCheck_Shot_Seq 10078
#define gWs_PowerCheck_Shot_Buf 10079
#define gWs_PowerCheck_Shot_Tmr 10080
#define gWs_PowerCheck_Shot_Err 10081
#define gWs_PowerCheck_Shot_Time 10082
#define gWs_PowerCheck_Shot_TimeBuf 10083
#define gWs_PowerCheck_Stop_Start 10084
#define gWs_PowerCheck_Stop_Abort 10085
#define gWs_PowerCheck_Stop_Ena 10086
#define gWs_PowerCheck_Stop_Sta 10087
#define gWs_PowerCheck_Stop_Seq 10088
#define gWs_PowerCheck_Stop_Buf 10089
#define gWs_PowerCheck_Stop_Tmr 10090
#define gWs_PowerCheck_Stop_Err 10091
#define gVs_PostVisionST_Start 10092
#define gVs_PostVisionST_Abort 10093
#define gVs_PostVisionST_Ena 10094
#define gVs_PostVisionST_Sta 10095
#define gVs_PostVisionST_Seq 10096
#define gVs_PostVisionST_Buf 10097
#define gVs_PostVisionST_Tmr 10098
#define gVs_PostVisionST_Err 10099
#define gVs_PostVisionED_Start 10100
#define gVs_PostVisionED_Abort 10101
#define gVs_PostVisionED_Ena 10102
#define gVs_PostVisionED_Sta 10103
#define gVs_PostVisionED_Seq 10104
#define gVs_PostVisionED_Buf 10105
#define gVs_PostVisionED_Tmr 10106
#define gVs_PostVisionED_Err 10107
#define gWs_Skip_N2 10108
#define gN2BlowState 10109
#define gN2BlowOld 10110
#define gN2BlowTime 10111
#define gIsWsCoverComplete 10112
#define gIsVsCoverComplete 10113
#define gIsWStationReady 10114
#define gIsVStationReady 10115
#define gKin_Sf 10116
#define gKin_RotOffset 10148
#define gKin_Len1 10180
#define gKin_Len2 10181
#define gKin_GalvoSfX 10182
#define gKin_GalvoSfY 10183
#define gMc_SeqBuf_Idx 10184
#define gWs_SeqBuf_Cur 10185
#define gWs_SeqBuf_Old 10186
#define gVs_SeqBuf_Cur 10187
#define gVs_SeqBuf_Old 10188
#define gScMon_GalvoAngX 10189
#define gScMon_GalvoAngY 10190
#define gCoreVoltMin 10191
#define gCoreVoltMax 10192
#define gCorePowerMin 10193
#define gCorePowerMax 10194
#define gRingVoltMin 10195
#define gRingVoltMax 10196
#define gRingPowerMin 10197
#define gRingPowerMax 10198
#define gTempRawMin 10199
#define gTempRawMax 10200
#define gSensorTempMin 10201
#define gSensorTempMax 10202
#define Len_X 10203
#define Len_Y 10204
#define Len_R 10205
#define gWs_Error_Cur2 10206
#define gWs_Error_Old2 10207
#define gVs_Error_Cur2 10208
#define gVs_Error_Old2 10209
#define gMc_TransTest_Start 10210
#define gMc_TransTest_Abort 10211
#define gMc_TransTest_Ena 10212
#define gMc_TransTest_Sta 10213
#define gMc_TransTest_Seq 10214
#define gMc_TransTest_Buf 10215
#define gMc_TransTest_Tmr 10216
#define gMc_TransTest_Err 10217
#define gMc_TransTest_Vel 10218
#define gRspSim_PdtNo 10219
#define gRspSim_LdAlignX 10220
#define gRspSim_LdAlignY 10221
#define gRspSim_LdAlignC 10222
#define gRspSim_LdDirRep 10223
#define gRspSim_2dVsnRsp 10224
#define gRspSim_3dVsnRsp 10225
#define gRspSim_LdDirJug 10226
#define gRspSim_2dVsnJug 10227
#define gRspSim_3dVsnJug 10228
#define gRspSim_LdDirRat 10229
#define gRspSim_2dVsnRat 10230
#define gRspSim_3dVsnRat 10231
#endif
#endif
#endif //_PP_PROJ_H_
