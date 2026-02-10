
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
,pEcat_Ti00_Ws_TempSen1=8362
,pEcat_Ti01_Ws_TempSen2=8363
,pBuf_Ti00_Ws_TempSen1=8364
,pBuf_Ti01_Ws_TempSen2=8365
,pGpio_Di00=8558
,pGpio_Di01_LaserReady=8559
,pGpio_Di02_LaserReqResp=8560
,pGpio_Di03_LaserPowerOn=8561
,pGpio_Di04_LaserProgRun=8562
,pGpio_Di05_LaserWarning=8563
,pGpio_Di06_LaserAbnormal=8564
,pGpio_Di07=8565
,pGpio_Di08=8566
,pGpio_Di09=8567
,pGpio_Di0A=8568
,pGpio_Di0B=8569
,pGpio_Di0C=8570
,pGpio_Di0D=8571
,pGpio_Di0E=8572
,pGpio_Di0F=8573
,pGpio_Do00_LaserEmission=8574
,pGpio_Do01_LaserReset=8575
,pGpio_Do02_LaserRequest=8576
,pGpio_Do03_LaserPowerOn=8577
,pGpio_Do04_LaserAdInEna=8578
,pGpio_Do05_LaserGuideEna=8579
,pGpio_Do06_LaserProgEna=8580
,pGpio_Do07_LaserProgStop=8581
,pGpio_Do08=8582
,pGpio_Do09=8583
,pGpio_Do0A=8584
,pGpio_Do0B=8585
,pGpio_Do0C=8586
,pGpio_Do0D=8587
,pGpio_Do0E=8588
,pGpio_Do0F=8589
,pUmem_Sta_01_CmdPos=8590
,pUmem_Sta_01_ActPos=8591
,pUmem_Sta_01_Velocity=8592
,pUmem_Sta_01_Load=8593
,pUmem_Sta_01_AmpEna=8594
,pUmem_Sta_01_CloseLoop=8595
,pUmem_Sta_01_InPos=8596
,pUmem_Sta_01_HomeFin=8597
,pUmem_Sta_01_HomeIng=8598
,pUmem_Sta_01_LimitMinus=8599
,pUmem_Sta_01_LimitPlus=8600
,pUmem_Sta_01_FollowingErr=8601
,pUmem_Sta_01_AmpFault=8602
,pUmem_Sta_01_EncLoss=8603
,pUmem_Sta_01_I2tErr=8604
,pUmem_Sta_01_ProgPos=8605
,pUmem_Sta_TBD_2750=8606
,pUmem_Sta_TBD_2754=8607
,pUmem_Sta_TBD_2758=8608
,pUmem_Sta_TBD_275C=8609
,pUmem_Sta_02_CmdPos=8610
,pUmem_Sta_02_ActPos=8611
,pUmem_Sta_02_Velocity=8612
,pUmem_Sta_02_Load=8613
,pUmem_Sta_02_AmpEna=8614
,pUmem_Sta_02_CloseLoop=8615
,pUmem_Sta_02_InPos=8616
,pUmem_Sta_02_HomeFin=8617
,pUmem_Sta_02_HomeIng=8618
,pUmem_Sta_02_LimitMinus=8619
,pUmem_Sta_02_LimitPlus=8620
,pUmem_Sta_02_FollowingErr=8621
,pUmem_Sta_02_AmpFault=8622
,pUmem_Sta_02_EncLoss=8623
,pUmem_Sta_02_I2tErr=8624
,pUmem_Sta_02_ProgPos=8625
,pUmem_Sta_TBD_27A0=8626
,pUmem_Sta_TBD_27A4=8627
,pUmem_Sta_TBD_27A8=8628
,pUmem_Sta_TBD_27AC=8629
,pUmem_Sta_03_CmdPos=8630
,pUmem_Sta_03_ActPos=8631
,pUmem_Sta_03_Velocity=8632
,pUmem_Sta_03_Load=8633
,pUmem_Sta_03_AmpEna=8634
,pUmem_Sta_03_CloseLoop=8635
,pUmem_Sta_03_InPos=8636
,pUmem_Sta_03_HomeFin=8637
,pUmem_Sta_03_HomeIng=8638
,pUmem_Sta_03_LimitMinus=8639
,pUmem_Sta_03_LimitPlus=8640
,pUmem_Sta_03_FollowingErr=8641
,pUmem_Sta_03_AmpFault=8642
,pUmem_Sta_03_EncLoss=8643
,pUmem_Sta_03_I2tErr=8644
,pUmem_Sta_03_ProgPos=8645
,pUmem_Sta_TBD_27F0=8646
,pUmem_Sta_TBD_27F4=8647
,pUmem_Sta_TBD_27F8=8648
,pUmem_Sta_TBD_27FC=8649
,pUmem_Sta_04_CmdPos=8650
,pUmem_Sta_04_ActPos=8651
,pUmem_Sta_04_Velocity=8652
,pUmem_Sta_04_Load=8653
,pUmem_Sta_04_AmpEna=8654
,pUmem_Sta_04_CloseLoop=8655
,pUmem_Sta_04_InPos=8656
,pUmem_Sta_04_HomeFin=8657
,pUmem_Sta_04_HomeIng=8658
,pUmem_Sta_04_LimitMinus=8659
,pUmem_Sta_04_LimitPlus=8660
,pUmem_Sta_04_FollowingErr=8661
,pUmem_Sta_04_AmpFault=8662
,pUmem_Sta_04_EncLoss=8663
,pUmem_Sta_04_I2tErr=8664
,pUmem_Sta_04_ProgPos=8665
,pUmem_Sta_TBD_2840=8666
,pUmem_Sta_TBD_2844=8667
,pUmem_Sta_TBD_2848=8668
,pUmem_Sta_TBD_284C=8669
,pUmem_Sta_05_CmdPos=8670
,pUmem_Sta_05_ActPos=8671
,pUmem_Sta_05_Velocity=8672
,pUmem_Sta_05_Load=8673
,pUmem_Sta_05_AmpEna=8674
,pUmem_Sta_05_CloseLoop=8675
,pUmem_Sta_05_InPos=8676
,pUmem_Sta_05_HomeFin=8677
,pUmem_Sta_05_HomeIng=8678
,pUmem_Sta_05_LimitMinus=8679
,pUmem_Sta_05_LimitPlus=8680
,pUmem_Sta_05_FollowingErr=8681
,pUmem_Sta_05_AmpFault=8682
,pUmem_Sta_05_EncLoss=8683
,pUmem_Sta_05_I2tErr=8684
,pUmem_Sta_05_ProgPos=8685
,pUmem_Sta_TBD_2890=8686
,pUmem_Sta_TBD_2894=8687
,pUmem_Sta_TBD_2898=8688
,pUmem_Sta_TBD_289C=8689
,pUmem_Sta_06_CmdPos=8690
,pUmem_Sta_06_ActPos=8691
,pUmem_Sta_06_Velocity=8692
,pUmem_Sta_06_Load=8693
,pUmem_Sta_06_AmpEna=8694
,pUmem_Sta_06_CloseLoop=8695
,pUmem_Sta_06_InPos=8696
,pUmem_Sta_06_HomeFin=8697
,pUmem_Sta_06_HomeIng=8698
,pUmem_Sta_06_LimitMinus=8699
,pUmem_Sta_06_LimitPlus=8700
,pUmem_Sta_06_FollowingErr=8701
,pUmem_Sta_06_AmpFault=8702
,pUmem_Sta_06_EncLoss=8703
,pUmem_Sta_06_I2tErr=8704
,pUmem_Sta_06_ProgPos=8705
,pUmem_Sta_TBD_28E0=8706
,pUmem_Sta_TBD_28E4=8707
,pUmem_Sta_TBD_28E8=8708
,pUmem_Sta_TBD_28EC=8709
,pUmem_Sta_07_CmdPos=8710
,pUmem_Sta_07_ActPos=8711
,pUmem_Sta_07_Velocity=8712
,pUmem_Sta_07_Load=8713
,pUmem_Sta_07_AmpEna=8714
,pUmem_Sta_07_CloseLoop=8715
,pUmem_Sta_07_InPos=8716
,pUmem_Sta_07_HomeFin=8717
,pUmem_Sta_07_HomeIng=8718
,pUmem_Sta_07_LimitMinus=8719
,pUmem_Sta_07_LimitPlus=8720
,pUmem_Sta_07_FollowingErr=8721
,pUmem_Sta_07_AmpFault=8722
,pUmem_Sta_07_EncLoss=8723
,pUmem_Sta_07_I2tErr=8724
,pUmem_Sta_07_ProgPos=8725
,pUmem_Sta_TBD_2930=8726
,pUmem_Sta_TBD_2934=8727
,pUmem_Sta_TBD_2938=8728
,pUmem_Sta_TBD_293C=8729
,pUmem_Sta_08_CmdPos=8730
,pUmem_Sta_08_ActPos=8731
,pUmem_Sta_08_Velocity=8732
,pUmem_Sta_08_Load=8733
,pUmem_Sta_08_AmpEna=8734
,pUmem_Sta_08_CloseLoop=8735
,pUmem_Sta_08_InPos=8736
,pUmem_Sta_08_HomeFin=8737
,pUmem_Sta_08_HomeIng=8738
,pUmem_Sta_08_LimitMinus=8739
,pUmem_Sta_08_LimitPlus=8740
,pUmem_Sta_08_FollowingErr=8741
,pUmem_Sta_08_AmpFault=8742
,pUmem_Sta_08_EncLoss=8743
,pUmem_Sta_08_I2tErr=8744
,pUmem_Sta_08_ProgPos=8745
,pUmem_Sta_TBD_2980=8746
,pUmem_Sta_TBD_2984=8747
,pUmem_Sta_TBD_2988=8748
,pUmem_Sta_TBD_298C=8749
,pUmem_Sta_09_CmdPos=8750
,pUmem_Sta_09_ActPos=8751
,pUmem_Sta_09_Velocity=8752
,pUmem_Sta_09_Load=8753
,pUmem_Sta_09_AmpEna=8754
,pUmem_Sta_09_CloseLoop=8755
,pUmem_Sta_09_InPos=8756
,pUmem_Sta_09_HomeFin=8757
,pUmem_Sta_09_HomeIng=8758
,pUmem_Sta_09_LimitMinus=8759
,pUmem_Sta_09_LimitPlus=8760
,pUmem_Sta_09_FollowingErr=8761
,pUmem_Sta_09_AmpFault=8762
,pUmem_Sta_09_EncLoss=8763
,pUmem_Sta_09_I2tErr=8764
,pUmem_Sta_09_ProgPos=8765
,pUmem_Sta_TBD_29D0=8766
,pUmem_Sta_TBD_29D4=8767
,pUmem_Sta_TBD_29D8=8768
,pUmem_Sta_TBD_29DC=8769
,pUmem_Sta_10_CmdPos=8770
,pUmem_Sta_10_ActPos=8771
,pUmem_Sta_10_Velocity=8772
,pUmem_Sta_10_Load=8773
,pUmem_Sta_10_AmpEna=8774
,pUmem_Sta_10_CloseLoop=8775
,pUmem_Sta_10_InPos=8776
,pUmem_Sta_10_HomeFin=8777
,pUmem_Sta_10_HomeIng=8778
,pUmem_Sta_10_LimitMinus=8779
,pUmem_Sta_10_LimitPlus=8780
,pUmem_Sta_10_FollowingErr=8781
,pUmem_Sta_10_AmpFault=8782
,pUmem_Sta_10_EncLoss=8783
,pUmem_Sta_10_I2tErr=8784
,pUmem_Sta_10_ProgPos=8785
,pUmem_Sta_TBD_2A20=8786
,pUmem_Sta_TBD_2A24=8787
,pUmem_Sta_TBD_2A28=8788
,pUmem_Sta_TBD_2A2C=8789
,pUmem_Sta_11_CmdPos=8790
,pUmem_Sta_11_ActPos=8791
,pUmem_Sta_11_Velocity=8792
,pUmem_Sta_11_Load=8793
,pUmem_Sta_11_AmpEna=8794
,pUmem_Sta_11_CloseLoop=8795
,pUmem_Sta_11_InPos=8796
,pUmem_Sta_11_HomeFin=8797
,pUmem_Sta_11_HomeIng=8798
,pUmem_Sta_11_LimitMinus=8799
,pUmem_Sta_11_LimitPlus=8800
,pUmem_Sta_11_FollowingErr=8801
,pUmem_Sta_11_AmpFault=8802
,pUmem_Sta_11_EncLoss=8803
,pUmem_Sta_11_I2tErr=8804
,pUmem_Sta_11_ProgPos=8805
,pUmem_Sta_TBD_2A70=8806
,pUmem_Sta_TBD_2A74=8807
,pUmem_Sta_TBD_2A78=8808
,pUmem_Sta_TBD_2A7C=8809
,pUmem_Sta_12_CmdPos=8810
,pUmem_Sta_12_ActPos=8811
,pUmem_Sta_12_Velocity=8812
,pUmem_Sta_12_Load=8813
,pUmem_Sta_12_AmpEna=8814
,pUmem_Sta_12_CloseLoop=8815
,pUmem_Sta_12_InPos=8816
,pUmem_Sta_12_HomeFin=8817
,pUmem_Sta_12_HomeIng=8818
,pUmem_Sta_12_LimitMinus=8819
,pUmem_Sta_12_LimitPlus=8820
,pUmem_Sta_12_FollowingErr=8821
,pUmem_Sta_12_AmpFault=8822
,pUmem_Sta_12_EncLoss=8823
,pUmem_Sta_12_I2tErr=8824
,pUmem_Sta_12_ProgPos=8825
,pUmem_Sta_TBD_2AC0=8826
,pUmem_Sta_TBD_2AC4=8827
,pUmem_Sta_TBD_2AC8=8828
,pUmem_Sta_TBD_2ACC=8829
,pUmem_Sta_13_CmdPos=8830
,pUmem_Sta_13_ActPos=8831
,pUmem_Sta_13_Velocity=8832
,pUmem_Sta_13_Load=8833
,pUmem_Sta_13_AmpEna=8834
,pUmem_Sta_13_CloseLoop=8835
,pUmem_Sta_13_InPos=8836
,pUmem_Sta_13_HomeFin=8837
,pUmem_Sta_13_HomeIng=8838
,pUmem_Sta_13_LimitMinus=8839
,pUmem_Sta_13_LimitPlus=8840
,pUmem_Sta_13_FollowingErr=8841
,pUmem_Sta_13_AmpFault=8842
,pUmem_Sta_13_EncLoss=8843
,pUmem_Sta_13_I2tErr=8844
,pUmem_Sta_13_ProgPos=8845
,pUmem_Sta_TBD_2B10=8846
,pUmem_Sta_TBD_2B14=8847
,pUmem_Sta_TBD_2B18=8848
,pUmem_Sta_TBD_2B1C=8849
,pUmem_Sta_14_CmdPos=8850
,pUmem_Sta_14_ActPos=8851
,pUmem_Sta_14_Velocity=8852
,pUmem_Sta_14_Load=8853
,pUmem_Sta_14_AmpEna=8854
,pUmem_Sta_14_CloseLoop=8855
,pUmem_Sta_14_InPos=8856
,pUmem_Sta_14_HomeFin=8857
,pUmem_Sta_14_HomeIng=8858
,pUmem_Sta_14_LimitMinus=8859
,pUmem_Sta_14_LimitPlus=8860
,pUmem_Sta_14_FollowingErr=8861
,pUmem_Sta_14_AmpFault=8862
,pUmem_Sta_14_EncLoss=8863
,pUmem_Sta_14_I2tErr=8864
,pUmem_Sta_14_ProgPos=8865
,pUmem_Sta_TBD_2B60=8866
,pUmem_Sta_TBD_2B64=8867
,pUmem_Sta_TBD_2B68=8868
,pUmem_Sta_TBD_2B6C=8869
,pUmem_Sta_15_CmdPos=8870
,pUmem_Sta_15_ActPos=8871
,pUmem_Sta_15_Velocity=8872
,pUmem_Sta_15_Load=8873
,pUmem_Sta_15_AmpEna=8874
,pUmem_Sta_15_CloseLoop=8875
,pUmem_Sta_15_InPos=8876
,pUmem_Sta_15_HomeFin=8877
,pUmem_Sta_15_HomeIng=8878
,pUmem_Sta_15_LimitMinus=8879
,pUmem_Sta_15_LimitPlus=8880
,pUmem_Sta_15_FollowingErr=8881
,pUmem_Sta_15_AmpFault=8882
,pUmem_Sta_15_EncLoss=8883
,pUmem_Sta_15_I2tErr=8884
,pUmem_Sta_15_ProgPos=8885
,pUmem_Sta_TBD_2BB0=8886
,pUmem_Sta_TBD_2BB4=8887
,pUmem_Sta_TBD_2BB8=8888
,pUmem_Sta_TBD_2BBC=8889
,pUmem_Sta_16_CmdPos=8890
,pUmem_Sta_16_ActPos=8891
,pUmem_Sta_16_Velocity=8892
,pUmem_Sta_16_Load=8893
,pUmem_Sta_16_AmpEna=8894
,pUmem_Sta_16_CloseLoop=8895
,pUmem_Sta_16_InPos=8896
,pUmem_Sta_16_HomeFin=8897
,pUmem_Sta_16_HomeIng=8898
,pUmem_Sta_16_LimitMinus=8899
,pUmem_Sta_16_LimitPlus=8900
,pUmem_Sta_16_FollowingErr=8901
,pUmem_Sta_16_AmpFault=8902
,pUmem_Sta_16_EncLoss=8903
,pUmem_Sta_16_I2tErr=8904
,pUmem_Sta_16_ProgPos=8905
,pUmem_Sta_TBD_2C00=8906
,pUmem_Sta_TBD_2C04=8907
,pUmem_Sta_TBD_2C08=8908
,pUmem_Sta_TBD_2C0C=8909
,pUmem_Sta_17_CmdPos=8910
,pUmem_Sta_17_ActPos=8911
,pUmem_Sta_17_Velocity=8912
,pUmem_Sta_17_Load=8913
,pUmem_Sta_17_AmpEna=8914
,pUmem_Sta_17_CloseLoop=8915
,pUmem_Sta_17_InPos=8916
,pUmem_Sta_17_HomeFin=8917
,pUmem_Sta_17_HomeIng=8918
,pUmem_Sta_17_LimitMinus=8919
,pUmem_Sta_17_LimitPlus=8920
,pUmem_Sta_17_FollowingErr=8921
,pUmem_Sta_17_AmpFault=8922
,pUmem_Sta_17_EncLoss=8923
,pUmem_Sta_17_I2tErr=8924
,pUmem_Sta_17_ProgPos=8925
,pUmem_Sta_TBD_2C50=8926
,pUmem_Sta_TBD_2C54=8927
,pUmem_Sta_TBD_2C58=8928
,pUmem_Sta_TBD_2C5C=8929
,pUmem_Sta_18_CmdPos=8930
,pUmem_Sta_18_ActPos=8931
,pUmem_Sta_18_Velocity=8932
,pUmem_Sta_18_Load=8933
,pUmem_Sta_18_AmpEna=8934
,pUmem_Sta_18_CloseLoop=8935
,pUmem_Sta_18_InPos=8936
,pUmem_Sta_18_HomeFin=8937
,pUmem_Sta_18_HomeIng=8938
,pUmem_Sta_18_LimitMinus=8939
,pUmem_Sta_18_LimitPlus=8940
,pUmem_Sta_18_FollowingErr=8941
,pUmem_Sta_18_AmpFault=8942
,pUmem_Sta_18_EncLoss=8943
,pUmem_Sta_18_I2tErr=8944
,pUmem_Sta_18_ProgPos=8945
,pUmem_Sta_TBD_2CA0=8946
,pUmem_Sta_TBD_2CA4=8947
,pUmem_Sta_TBD_2CA8=8948
,pUmem_Sta_TBD_2CAC=8949
,pUmem_Sta_19_CmdPos=8950
,pUmem_Sta_19_ActPos=8951
,pUmem_Sta_19_Velocity=8952
,pUmem_Sta_19_Load=8953
,pUmem_Sta_19_AmpEna=8954
,pUmem_Sta_19_CloseLoop=8955
,pUmem_Sta_19_InPos=8956
,pUmem_Sta_19_HomeFin=8957
,pUmem_Sta_19_HomeIng=8958
,pUmem_Sta_19_LimitMinus=8959
,pUmem_Sta_19_LimitPlus=8960
,pUmem_Sta_19_FollowingErr=8961
,pUmem_Sta_19_AmpFault=8962
,pUmem_Sta_19_EncLoss=8963
,pUmem_Sta_19_I2tErr=8964
,pUmem_Sta_19_ProgPos=8965
,pUmem_Sta_TBD_2CF0=8966
,pUmem_Sta_TBD_2CF4=8967
,pUmem_Sta_TBD_2CF8=8968
,pUmem_Sta_TBD_2CFC=8969
,pUmem_Sta_20_CmdPos=8970
,pUmem_Sta_20_ActPos=8971
,pUmem_Sta_20_Velocity=8972
,pUmem_Sta_20_Load=8973
,pUmem_Sta_20_AmpEna=8974
,pUmem_Sta_20_CloseLoop=8975
,pUmem_Sta_20_InPos=8976
,pUmem_Sta_20_HomeFin=8977
,pUmem_Sta_20_HomeIng=8978
,pUmem_Sta_20_LimitMinus=8979
,pUmem_Sta_20_LimitPlus=8980
,pUmem_Sta_20_FollowingErr=8981
,pUmem_Sta_20_AmpFault=8982
,pUmem_Sta_20_EncLoss=8983
,pUmem_Sta_20_I2tErr=8984
,pUmem_Sta_20_ProgPos=8985
,pUmem_Sta_TBD_2D40=8986
,pUmem_Sta_TBD_2D44=8987
,pUmem_Sta_TBD_2D48=8988
,pUmem_Sta_TBD_2D4C=8989
,pUmem_Sta_21_CmdPos=8990
,pUmem_Sta_21_ActPos=8991
,pUmem_Sta_21_Velocity=8992
,pUmem_Sta_21_Load=8993
,pUmem_Sta_21_AmpEna=8994
,pUmem_Sta_21_CloseLoop=8995
,pUmem_Sta_21_InPos=8996
,pUmem_Sta_21_HomeFin=8997
,pUmem_Sta_21_HomeIng=8998
,pUmem_Sta_21_LimitMinus=8999
,pUmem_Sta_21_LimitPlus=9000
,pUmem_Sta_21_FollowingErr=9001
,pUmem_Sta_21_AmpFault=9002
,pUmem_Sta_21_EncLoss=9003
,pUmem_Sta_21_I2tErr=9004
,pUmem_Sta_21_ProgPos=9005
,pUmem_Sta_TBD_2D90=9006
,pUmem_Sta_TBD_2D94=9007
,pUmem_Sta_TBD_2D98=9008
,pUmem_Sta_TBD_2D9C=9009
,pUmem_Sta_22_CmdPos=9010
,pUmem_Sta_22_ActPos=9011
,pUmem_Sta_22_Velocity=9012
,pUmem_Sta_22_Load=9013
,pUmem_Sta_22_AmpEna=9014
,pUmem_Sta_22_CloseLoop=9015
,pUmem_Sta_22_InPos=9016
,pUmem_Sta_22_HomeFin=9017
,pUmem_Sta_22_HomeIng=9018
,pUmem_Sta_22_LimitMinus=9019
,pUmem_Sta_22_LimitPlus=9020
,pUmem_Sta_22_FollowingErr=9021
,pUmem_Sta_22_AmpFault=9022
,pUmem_Sta_22_EncLoss=9023
,pUmem_Sta_22_I2tErr=9024
,pUmem_Sta_22_ProgPos=9025
,pUmem_Sta_TBD_2DE0=9026
,pUmem_Sta_TBD_2DE4=9027
,pUmem_Sta_TBD_2DE8=9028
,pUmem_Sta_TBD_2DEC=9029
,pUmem_Sta_23_CmdPos=9030
,pUmem_Sta_23_ActPos=9031
,pUmem_Sta_23_Velocity=9032
,pUmem_Sta_23_Load=9033
,pUmem_Sta_23_AmpEna=9034
,pUmem_Sta_23_CloseLoop=9035
,pUmem_Sta_23_InPos=9036
,pUmem_Sta_23_HomeFin=9037
,pUmem_Sta_23_HomeIng=9038
,pUmem_Sta_23_LimitMinus=9039
,pUmem_Sta_23_LimitPlus=9040
,pUmem_Sta_23_FollowingErr=9041
,pUmem_Sta_23_AmpFault=9042
,pUmem_Sta_23_EncLoss=9043
,pUmem_Sta_23_I2tErr=9044
,pUmem_Sta_23_ProgPos=9045
,pUmem_Sta_TBD_2E30=9046
,pUmem_Sta_TBD_2E34=9047
,pUmem_Sta_TBD_2E38=9048
,pUmem_Sta_TBD_2E3C=9049
,pUmem_Sta_24_CmdPos=9050
,pUmem_Sta_24_ActPos=9051
,pUmem_Sta_24_Velocity=9052
,pUmem_Sta_24_Load=9053
,pUmem_Sta_24_AmpEna=9054
,pUmem_Sta_24_CloseLoop=9055
,pUmem_Sta_24_InPos=9056
,pUmem_Sta_24_HomeFin=9057
,pUmem_Sta_24_HomeIng=9058
,pUmem_Sta_24_LimitMinus=9059
,pUmem_Sta_24_LimitPlus=9060
,pUmem_Sta_24_FollowingErr=9061
,pUmem_Sta_24_AmpFault=9062
,pUmem_Sta_24_EncLoss=9063
,pUmem_Sta_24_I2tErr=9064
,pUmem_Sta_24_ProgPos=9065
,pUmem_Sta_TBD_2E80=9066
,pUmem_Sta_TBD_2E84=9067
,pUmem_Sta_TBD_2E88=9068
,pUmem_Sta_TBD_2E8C=9069
,pUmem_Sta_25_CmdPos=9070
,pUmem_Sta_25_ActPos=9071
,pUmem_Sta_25_Velocity=9072
,pUmem_Sta_25_Load=9073
,pUmem_Sta_25_AmpEna=9074
,pUmem_Sta_25_CloseLoop=9075
,pUmem_Sta_25_InPos=9076
,pUmem_Sta_25_HomeFin=9077
,pUmem_Sta_25_HomeIng=9078
,pUmem_Sta_25_LimitMinus=9079
,pUmem_Sta_25_LimitPlus=9080
,pUmem_Sta_25_FollowingErr=9081
,pUmem_Sta_25_AmpFault=9082
,pUmem_Sta_25_EncLoss=9083
,pUmem_Sta_25_I2tErr=9084
,pUmem_Sta_25_ProgPos=9085
,pUmem_Sta_TBD_2ED0=9086
,pUmem_Sta_TBD_2ED4=9087
,pUmem_Sta_TBD_2ED8=9088
,pUmem_Sta_TBD_2EDC=9089
,pUmem_Sta_26_CmdPos=9090
,pUmem_Sta_26_ActPos=9091
,pUmem_Sta_26_Velocity=9092
,pUmem_Sta_26_Load=9093
,pUmem_Sta_26_AmpEna=9094
,pUmem_Sta_26_CloseLoop=9095
,pUmem_Sta_26_InPos=9096
,pUmem_Sta_26_HomeFin=9097
,pUmem_Sta_26_HomeIng=9098
,pUmem_Sta_26_LimitMinus=9099
,pUmem_Sta_26_LimitPlus=9100
,pUmem_Sta_26_FollowingErr=9101
,pUmem_Sta_26_AmpFault=9102
,pUmem_Sta_26_EncLoss=9103
,pUmem_Sta_26_I2tErr=9104
,pUmem_Sta_26_ProgPos=9105
,pUmem_Sta_TBD_2F20=9106
,pUmem_Sta_TBD_2F24=9107
,pUmem_Sta_TBD_2F28=9108
,pUmem_Sta_TBD_2F2C=9109
,pUmem_Sta_27_CmdPos=9110
,pUmem_Sta_27_ActPos=9111
,pUmem_Sta_27_Velocity=9112
,pUmem_Sta_27_Load=9113
,pUmem_Sta_27_AmpEna=9114
,pUmem_Sta_27_CloseLoop=9115
,pUmem_Sta_27_InPos=9116
,pUmem_Sta_27_HomeFin=9117
,pUmem_Sta_27_HomeIng=9118
,pUmem_Sta_27_LimitMinus=9119
,pUmem_Sta_27_LimitPlus=9120
,pUmem_Sta_27_FollowingErr=9121
,pUmem_Sta_27_AmpFault=9122
,pUmem_Sta_27_EncLoss=9123
,pUmem_Sta_27_I2tErr=9124
,pUmem_Sta_27_ProgPos=9125
,pUmem_Sta_TBD_2F70=9126
,pUmem_Sta_TBD_2F74=9127
,pUmem_Sta_TBD_2F78=9128
,pUmem_Sta_TBD_2F7C=9129
,pUmem_Sta_28_CmdPos=9130
,pUmem_Sta_28_ActPos=9131
,pUmem_Sta_28_Velocity=9132
,pUmem_Sta_28_Load=9133
,pUmem_Sta_28_AmpEna=9134
,pUmem_Sta_28_CloseLoop=9135
,pUmem_Sta_28_InPos=9136
,pUmem_Sta_28_HomeFin=9137
,pUmem_Sta_28_HomeIng=9138
,pUmem_Sta_28_LimitMinus=9139
,pUmem_Sta_28_LimitPlus=9140
,pUmem_Sta_28_FollowingErr=9141
,pUmem_Sta_28_AmpFault=9142
,pUmem_Sta_28_EncLoss=9143
,pUmem_Sta_28_I2tErr=9144
,pUmem_Sta_28_ProgPos=9145
,pUmem_Sta_TBD_2FC0=9146
,pUmem_Sta_TBD_2FC4=9147
,pUmem_Sta_TBD_2FC8=9148
,pUmem_Sta_TBD_2FCC=9149
,pUmem_Sta_29_CmdPos=9150
,pUmem_Sta_29_ActPos=9151
,pUmem_Sta_29_Velocity=9152
,pUmem_Sta_29_Load=9153
,pUmem_Sta_29_AmpEna=9154
,pUmem_Sta_29_CloseLoop=9155
,pUmem_Sta_29_InPos=9156
,pUmem_Sta_29_HomeFin=9157
,pUmem_Sta_29_HomeIng=9158
,pUmem_Sta_29_LimitMinus=9159
,pUmem_Sta_29_LimitPlus=9160
,pUmem_Sta_29_FollowingErr=9161
,pUmem_Sta_29_AmpFault=9162
,pUmem_Sta_29_EncLoss=9163
,pUmem_Sta_29_I2tErr=9164
,pUmem_Sta_29_ProgPos=9165
,pUmem_Sta_TBD_3010=9166
,pUmem_Sta_TBD_3014=9167
,pUmem_Sta_TBD_3018=9168
,pUmem_Sta_TBD_301C=9169
,pUmem_Sta_30_CmdPos=9170
,pUmem_Sta_30_ActPos=9171
,pUmem_Sta_30_Velocity=9172
,pUmem_Sta_30_Load=9173
,pUmem_Sta_30_AmpEna=9174
,pUmem_Sta_30_CloseLoop=9175
,pUmem_Sta_30_InPos=9176
,pUmem_Sta_30_HomeFin=9177
,pUmem_Sta_30_HomeIng=9178
,pUmem_Sta_30_LimitMinus=9179
,pUmem_Sta_30_LimitPlus=9180
,pUmem_Sta_30_FollowingErr=9181
,pUmem_Sta_30_AmpFault=9182
,pUmem_Sta_30_EncLoss=9183
,pUmem_Sta_30_I2tErr=9184
,pUmem_Sta_30_ProgPos=9185
,pUmem_Sta_TBD_3060=9186
,pUmem_Sta_TBD_3064=9187
,pUmem_Sta_TBD_3068=9188
,pUmem_Sta_TBD_306C=9189
,pUmem_Sta_31_CmdPos=9190
,pUmem_Sta_31_ActPos=9191
,pUmem_Sta_31_Velocity=9192
,pUmem_Sta_31_Load=9193
,pUmem_Sta_31_AmpEna=9194
,pUmem_Sta_31_CloseLoop=9195
,pUmem_Sta_31_InPos=9196
,pUmem_Sta_31_HomeFin=9197
,pUmem_Sta_31_HomeIng=9198
,pUmem_Sta_31_LimitMinus=9199
,pUmem_Sta_31_LimitPlus=9200
,pUmem_Sta_31_FollowingErr=9201
,pUmem_Sta_31_AmpFault=9202
,pUmem_Sta_31_EncLoss=9203
,pUmem_Sta_31_I2tErr=9204
,pUmem_Sta_31_ProgPos=9205
,pUmem_Sta_TBD_30B0=9206
,pUmem_Sta_TBD_30B4=9207
,pUmem_Sta_TBD_30B8=9208
,pUmem_Sta_TBD_30BC=9209
,pUmem_Sta_32_CmdPos=9210
,pUmem_Sta_32_ActPos=9211
,pUmem_Sta_32_Velocity=9212
,pUmem_Sta_32_Load=9213
,pUmem_Sta_32_AmpEna=9214
,pUmem_Sta_32_CloseLoop=9215
,pUmem_Sta_32_InPos=9216
,pUmem_Sta_32_HomeFin=9217
,pUmem_Sta_32_HomeIng=9218
,pUmem_Sta_32_LimitMinus=9219
,pUmem_Sta_32_LimitPlus=9220
,pUmem_Sta_32_FollowingErr=9221
,pUmem_Sta_32_AmpFault=9222
,pUmem_Sta_32_EncLoss=9223
,pUmem_Sta_32_I2tErr=9224
,pUmem_Sta_32_ProgPos=9225
,pUmem_Sta_TBD_3100=9226
,pUmem_Sta_TBD_3104=9227
,pUmem_Sta_TBD_3108=9228
,pUmem_Sta_TBD_310C=9229
,pUmem_Sta_Mc_AmpEna=9230
,pUmem_Sta_Mc_InPos=9231
,pUmem_Sta_Mc_Home=9232
,pUmem_Sta_Mc_HomeErr=9233
,pUmem_Sta_Mc_RunMode=9234
,pUmem_Sta_Mc_AutoRun=9235
,pUmem_Sta_Mc_EcatCon=9236
,pUmem_Sta_Mc_Error=9237
,pUmem_Sta_TBD_3AB8=9238
,pUmem_Sta_TBD_3ABC=9239
,pUmem_Sta_Mc_ID=9240
,pUmem_Sta_Mc_ErasePdtFlgWs=9241
,pUmem_Sta_Mc_ErasePdtFlgVs=9242
,pUmem_Sta_Mc_ErasePdtFlgTr=9243
,pUmem_Sta_Mc_ErasePdtNoWs=9244
,pUmem_Sta_Mc_ErasePdtNoVs=9245
,pUmem_Sta_Mc_ErasePdtNoTr=9246
,pUmem_Sta_Ws_AmpEna=9247
,pUmem_Sta_Ws_InPos=9248
,pUmem_Sta_Ws_Home=9249
,pUmem_Sta_Ws_HomeErr=9250
,pUmem_Sta_Ws_EcatCon=9251
,pUmem_Sta_Ws_Error=9252
,pUmem_Sta_Ws_ErrCode=9253
,pUmem_Sta_TBD_3E9C=9254
,pUmem_Sta_TBD_3EA0=9255
,pUmem_Sta_Ws_ProgRun=9256
,pUmem_Sta_Ws_VectorVel=9257
,pUmem_Sta_Ws_ProgTime=9258
,pUmem_Sta_Ws_PosStage=9259
,pUmem_Sta_Ws_PosProduct=9260
,pUmem_Sta_Ws_Cover=9261
,pUmem_Sta_Ws_PdtSta=9262
,pUmem_Sta_Tr_PdtSta=9263
,pUmem_Sta_Ws_LaserReady=9264
,pUmem_Sta_Ws_LaserEnable=9265
,pUmem_Sta_Ws_LaserCorePower=9266
,pUmem_Sta_Ws_LaserRingPower=9267
,pUmem_Sta_Ws_PdtNo=9268
,pUmem_Sta_TBD_3ED8=9269
,pUmem_Sta_TBD_3EDC=9270
,pUmem_Sta_TBD_3EE0=9271
,pUmem_Sta_TBD_3EE4=9272
,pUmem_Sta_TBD_3EE8=9273
,pUmem_Sta_TBD_3EEC=9274
,pUmem_Sta_TBD_3EF0=9275
,pUmem_Sta_TBD_3EF4=9276
,pUmem_Sta_Ws_LdSeq=9277
,pUmem_Sta_Ws_LdErr=9278
,pUmem_Sta_Ws_LdTime=9279
,pUmem_Sta_Ws_RdSeq=9280
,pUmem_Sta_Ws_RdErr=9281
,pUmem_Sta_Ws_RdTime=9282
,pUmem_Sta_Ws_WdSeq=9283
,pUmem_Sta_Ws_WdErr=9284
,pUmem_Sta_Ws_WdTime=9285
,pUmem_Sta_Ws_WtSeq=9286
,pUmem_Sta_Ws_WtErr=9287
,pUmem_Sta_Ws_WtTime=9288
,pUmem_Sta_Ws_UdSeq=9289
,pUmem_Sta_Ws_UdErr=9290
,pUmem_Sta_Ws_UdTime=9291
,pUmem_Sta_Ws_RjSeq=9292
,pUmem_Sta_Ws_RjErr=9293
,pUmem_Sta_Ws_RjTime=9294
,pUmem_Sta_TBD_3F40=9295
,pUmem_Sta_TBD_3F44=9296
,pUmem_Sta_TBD_3F48=9297
,pUmem_Sta_TBD_3F4C=9298
,pUmem_Sta_TBD_3F50=9299
,pUmem_Sta_TBD_3F54=9300
,pUmem_Sta_TBD_3F58=9301
,pUmem_Sta_TBD_3F5C=9302
,pUmem_Sta_TBD_3F60=9303
,pUmem_Sta_TBD_3F64=9304
,pUmem_Sta_TBD_3F68=9305
,pUmem_Sta_TBD_3F6C=9306
,pUmem_Sta_Ws_1stTransRjReq=9307
,pUmem_Sta_Ws_2ndTransLdReq=9308
,pUmem_Sta_Ws_2dVisionCkReq=9309
,pUmem_Sta_Ws_LwmStartReq=9310
,pUmem_Sta_TBD_3F80=9311
,pUmem_Sta_TBD_3F84=9312
,pUmem_Sta_TBD_3F88=9313
,pUmem_Sta_TBD_3F8C=9314
,pUmem_Sta_TBD_3F90=9315
,pUmem_Sta_TBD_3F94=9316
,pUmem_Sta_Ws_1stTransPdtNo=9317
,pUmem_Sta_Ws_TempResult1=9318
,pUmem_Sta_Ws_TempResult2=9319
,pUmem_Sta_TBD_3FA4=9320
,pUmem_Sta_TBD_3FA8=9321
,pUmem_Sta_TBD_3FAC=9322
,pUmem_Sta_TBD_3FB0=9323
,pUmem_Sta_TBD_3FB4=9324
,pUmem_Sta_TBD_3FB8=9325
,pUmem_Sta_TBD_3FBC=9326
,pUmem_Sta_TBD_3FC0=9327
,pUmem_Sta_TBD_3FC4=9328
,pUmem_Sta_TBD_3FC8=9329
,pUmem_Sta_TBD_3FCC=9330
,pUmem_Sta_TBD_3FD0=9331
,pUmem_Sta_TBD_3FD4=9332
,pUmem_Sta_TBD_3FD8=9333
,pUmem_Sta_TBD_3FDC=9334
,pUmem_Sta_TBD_3FE0=9335
,pUmem_Sta_TBD_3FE4=9336
,pUmem_Sta_Vs_AmpEna=9337
,pUmem_Sta_Vs_InPos=9338
,pUmem_Sta_Vs_Home=9339
,pUmem_Sta_Vs_HomeErr=9340
,pUmem_Sta_Vs_EcatCon=9341
,pUmem_Sta_Vs_Error=9342
,pUmem_Sta_Vs_ErrCode=9343
,pUmem_Sta_TBD_4284=9344
,pUmem_Sta_TBD_4288=9345
,pUmem_Sta_Vs_ProgRun=9346
,pUmem_Sta_Vs_VectorVel=9347
,pUmem_Sta_Vs_ProgTime=9348
,pUmem_Sta_Vs_PosStage=9349
,pUmem_Sta_Vs_PosProduct=9350
,pUmem_Sta_Vs_Cover=9351
,pUmem_Sta_Vs_PdtSta=9352
,pUmem_Sta_Vs_PdtNo=9353
,pUmem_Sta_TBD_42AC=9354
,pUmem_Sta_TBD_42B0=9355
,pUmem_Sta_TBD_42B4=9356
,pUmem_Sta_TBD_42B8=9357
,pUmem_Sta_TBD_42BC=9358
,pUmem_Sta_TBD_42C0=9359
,pUmem_Sta_TBD_42C4=9360
,pUmem_Sta_TBD_42C8=9361
,pUmem_Sta_TBD_42CC=9362
,pUmem_Sta_TBD_42D0=9363
,pUmem_Sta_TBD_42D4=9364
,pUmem_Sta_TBD_42D8=9365
,pUmem_Sta_TBD_42DC=9366
,pUmem_Sta_Vs_LdSeq=9367
,pUmem_Sta_Vs_LdErr=9368
,pUmem_Sta_Vs_LdTime=9369
,pUmem_Sta_Vs_RdSeq=9370
,pUmem_Sta_Vs_RdErr=9371
,pUmem_Sta_Vs_RdTime=9372
,pUmem_Sta_Vs_VnSeq=9373
,pUmem_Sta_Vs_VnErr=9374
,pUmem_Sta_Vs_VnTime=9375
,pUmem_Sta_Vs_WtSeq=9376
,pUmem_Sta_Vs_WtErr=9377
,pUmem_Sta_Vs_WtTime=9378
,pUmem_Sta_Vs_UdSeq=9379
,pUmem_Sta_Vs_UdErr=9380
,pUmem_Sta_Vs_UdTime=9381
,pUmem_Sta_Vs_RjSeq=9382
,pUmem_Sta_Vs_RjErr=9383
,pUmem_Sta_Vs_RjTime=9384
,pUmem_Sta_TBD_4328=9385
,pUmem_Sta_TBD_432C=9386
,pUmem_Sta_TBD_4330=9387
,pUmem_Sta_TBD_4334=9388
,pUmem_Sta_TBD_4338=9389
,pUmem_Sta_TBD_433C=9390
,pUmem_Sta_TBD_4340=9391
,pUmem_Sta_TBD_4344=9392
,pUmem_Sta_TBD_4348=9393
,pUmem_Sta_TBD_434C=9394
,pUmem_Sta_TBD_4350=9395
,pUmem_Sta_TBD_4354=9396
,pUmem_Sta_Vs_3rdTransUdReq=9397
,pUmem_Sta_Vs_3rdTransRjReq=9398
,pUmem_Sta_Vs_3DVisionStReq=9399
,pUmem_Sta_Vs_3DVisionEdReq=9400
,pUmem_Sta_TBD_4368=9401
,pUmem_Sta_TBD_436C=9402
,pUmem_Sta_TBD_4370=9403
,pUmem_Sta_TBD_4374=9404
,pUmem_Sta_TBD_4378=9405
,pUmem_Sta_TBD_437C=9406
,pUmem_Sta_Vs_3rdTransPtdNo=9407
,pUmem_Sta_TBD_4384=9408
,pUmem_Sta_TBD_4388=9409
,pUmem_Sta_TBD_438C=9410
,pUmem_Sta_TBD_4390=9411
,pUmem_Sta_TBD_4394=9412
,pUmem_Sta_TBD_4398=9413
,pUmem_Sta_TBD_439C=9414
,pUmem_Sta_TBD_43A0=9415
,pUmem_Sta_TBD_43A4=9416
,pUmem_Sta_TBD_43A8=9417
,pUmem_Sta_TBD_43AC=9418
,pUmem_Sta_TBD_43B0=9419
,pUmem_Sta_TBD_43B4=9420
,pUmem_Sta_TBD_43B8=9421
,pUmem_Sta_TBD_43BC=9422
,pUmem_Sta_TBD_43C0=9423
,pUmem_Sta_TBD_43C4=9424
,pUmem_Sta_TBD_43C8=9425
,pUmem_Sta_TBD_43CC=9426
,pUmem_Sta_Sc_AmpEna=9427
,pUmem_Sta_Sc_InPos=9428
,pUmem_Sta_Sc_Home=9429
,pUmem_Sta_Sc_HomeErr=9430
,pUmem_Sta_Sc_Con=9431
,pUmem_Sta_Sc_Error=9432
,pUmem_Sta_Sc_ErrCode=9433
,pUmem_Cmd_01_ServoOn=9434
,pUmem_Cmd_01_ServoOff=9435
,pUmem_Cmd_01_HomeStart=9436
,pUmem_Cmd_01_HomeAbort=9437
,pUmem_Cmd_01_HomeOffset=9438
,pUmem_Cmd_01_JogStop=9439
,pUmem_Cmd_01_JogContPlus=9440
,pUmem_Cmd_01_JogContMinus=9441
,pUmem_Cmd_01_JogAbsMove=9442
,pUmem_Cmd_01_JogIncMove=9443
,pUmem_Cmd_01_JogAbsPos=9444
,pUmem_Cmd_01_JogIncDist=9445
,pUmem_Cmd_01_JogSpeed=9446
,pUmem_Cmd_01_JogTa=9447
,pUmem_Cmd_01_JogTs=9448
,pUmem_Cmd_TBD_4E5C=9449
,pUmem_Cmd_TBD_4E60=9450
,pUmem_Cmd_TBD_4E64=9451
,pUmem_Cmd_TBD_4E68=9452
,pUmem_Cmd_TBD_4E6C=9453
,pUmem_Cmd_02_ServoOn=9454
,pUmem_Cmd_02_ServoOff=9455
,pUmem_Cmd_02_HomeStart=9456
,pUmem_Cmd_02_HomeAbort=9457
,pUmem_Cmd_02_HomeOffset=9458
,pUmem_Cmd_02_JogStop=9459
,pUmem_Cmd_02_JogContPlus=9460
,pUmem_Cmd_02_JogContMinus=9461
,pUmem_Cmd_02_JogAbsMove=9462
,pUmem_Cmd_02_JogIncMove=9463
,pUmem_Cmd_02_JogAbsPos=9464
,pUmem_Cmd_02_JogIncDist=9465
,pUmem_Cmd_02_JogSpeed=9466
,pUmem_Cmd_02_JogTa=9467
,pUmem_Cmd_02_JogTs=9468
,pUmem_Cmd_TBD_4EAC=9469
,pUmem_Cmd_TBD_4EB0=9470
,pUmem_Cmd_TBD_4EB4=9471
,pUmem_Cmd_TBD_4EB8=9472
,pUmem_Cmd_TBD_4EBC=9473
,pUmem_Cmd_03_ServoOn=9474
,pUmem_Cmd_03_ServoOff=9475
,pUmem_Cmd_03_HomeStart=9476
,pUmem_Cmd_03_HomeAbort=9477
,pUmem_Cmd_03_HomeOffset=9478
,pUmem_Cmd_03_JogStop=9479
,pUmem_Cmd_03_JogContPlus=9480
,pUmem_Cmd_03_JogContMinus=9481
,pUmem_Cmd_03_JogAbsMove=9482
,pUmem_Cmd_03_JogIncMove=9483
,pUmem_Cmd_03_JogAbsPos=9484
,pUmem_Cmd_03_JogIncDist=9485
,pUmem_Cmd_03_JogSpeed=9486
,pUmem_Cmd_03_JogTa=9487
,pUmem_Cmd_03_JogTs=9488
,pUmem_Cmd_TBD_4EFC=9489
,pUmem_Cmd_TBD_4F00=9490
,pUmem_Cmd_TBD_4F04=9491
,pUmem_Cmd_TBD_4F08=9492
,pUmem_Cmd_TBD_4F0C=9493
,pUmem_Cmd_04_ServoOn=9494
,pUmem_Cmd_04_ServoOff=9495
,pUmem_Cmd_04_HomeStart=9496
,pUmem_Cmd_04_HomeAbort=9497
,pUmem_Cmd_04_HomeOffset=9498
,pUmem_Cmd_04_JogStop=9499
,pUmem_Cmd_04_JogContPlus=9500
,pUmem_Cmd_04_JogContMinus=9501
,pUmem_Cmd_04_JogAbsMove=9502
,pUmem_Cmd_04_JogIncMove=9503
,pUmem_Cmd_04_JogAbsPos=9504
,pUmem_Cmd_04_JogIncDist=9505
,pUmem_Cmd_04_JogSpeed=9506
,pUmem_Cmd_04_JogTa=9507
,pUmem_Cmd_04_JogTs=9508
,pUmem_Cmd_TBD_4F4C=9509
,pUmem_Cmd_TBD_4F50=9510
,pUmem_Cmd_TBD_4F54=9511
,pUmem_Cmd_TBD_4F58=9512
,pUmem_Cmd_TBD_4F5C=9513
,pUmem_Cmd_05_ServoOn=9514
,pUmem_Cmd_05_ServoOff=9515
,pUmem_Cmd_05_HomeStart=9516
,pUmem_Cmd_05_HomeAbort=9517
,pUmem_Cmd_05_HomeOffset=9518
,pUmem_Cmd_05_JogStop=9519
,pUmem_Cmd_05_JogContPlus=9520
,pUmem_Cmd_05_JogContMinus=9521
,pUmem_Cmd_05_JogAbsMove=9522
,pUmem_Cmd_05_JogIncMove=9523
,pUmem_Cmd_05_JogAbsPos=9524
,pUmem_Cmd_05_JogIncDist=9525
,pUmem_Cmd_05_JogSpeed=9526
,pUmem_Cmd_05_JogTa=9527
,pUmem_Cmd_05_JogTs=9528
,pUmem_Cmd_TBD_4F9C=9529
,pUmem_Cmd_TBD_4FA0=9530
,pUmem_Cmd_TBD_4FA4=9531
,pUmem_Cmd_TBD_4FA8=9532
,pUmem_Cmd_TBD_4FAC=9533
,pUmem_Cmd_06_ServoOn=9534
,pUmem_Cmd_06_ServoOff=9535
,pUmem_Cmd_06_HomeStart=9536
,pUmem_Cmd_06_HomeAbort=9537
,pUmem_Cmd_06_HomeOffset=9538
,pUmem_Cmd_06_JogStop=9539
,pUmem_Cmd_06_JogContPlus=9540
,pUmem_Cmd_06_JogContMinus=9541
,pUmem_Cmd_06_JogAbsMove=9542
,pUmem_Cmd_06_JogIncMove=9543
,pUmem_Cmd_06_JogAbsPos=9544
,pUmem_Cmd_06_JogIncDist=9545
,pUmem_Cmd_06_JogSpeed=9546
,pUmem_Cmd_06_JogTa=9547
,pUmem_Cmd_06_JogTs=9548
,pUmem_Cmd_TBD_4FEC=9549
,pUmem_Cmd_TBD_4FF0=9550
,pUmem_Cmd_TBD_4FF4=9551
,pUmem_Cmd_TBD_4FF8=9552
,pUmem_Cmd_TBD_4FFC=9553
,pUmem_Cmd_07_ServoOn=9554
,pUmem_Cmd_07_ServoOff=9555
,pUmem_Cmd_07_HomeStart=9556
,pUmem_Cmd_07_HomeAbort=9557
,pUmem_Cmd_07_HomeOffset=9558
,pUmem_Cmd_07_JogStop=9559
,pUmem_Cmd_07_JogContPlus=9560
,pUmem_Cmd_07_JogContMinus=9561
,pUmem_Cmd_07_JogAbsMove=9562
,pUmem_Cmd_07_JogIncMove=9563
,pUmem_Cmd_07_JogAbsPos=9564
,pUmem_Cmd_07_JogIncDist=9565
,pUmem_Cmd_07_JogSpeed=9566
,pUmem_Cmd_07_JogTa=9567
,pUmem_Cmd_07_JogTs=9568
,pUmem_Cmd_TBD_503C=9569
,pUmem_Cmd_TBD_5040=9570
,pUmem_Cmd_TBD_5044=9571
,pUmem_Cmd_TBD_5048=9572
,pUmem_Cmd_TBD_504C=9573
,pUmem_Cmd_08_ServoOn=9574
,pUmem_Cmd_08_ServoOff=9575
,pUmem_Cmd_08_HomeStart=9576
,pUmem_Cmd_08_HomeAbort=9577
,pUmem_Cmd_08_HomeOffset=9578
,pUmem_Cmd_08_JogStop=9579
,pUmem_Cmd_08_JogContPlus=9580
,pUmem_Cmd_08_JogContMinus=9581
,pUmem_Cmd_08_JogAbsMove=9582
,pUmem_Cmd_08_JogIncMove=9583
,pUmem_Cmd_08_JogAbsPos=9584
,pUmem_Cmd_08_JogIncDist=9585
,pUmem_Cmd_08_JogSpeed=9586
,pUmem_Cmd_08_JogTa=9587
,pUmem_Cmd_08_JogTs=9588
,pUmem_Cmd_TBD_508C=9589
,pUmem_Cmd_TBD_5090=9590
,pUmem_Cmd_TBD_5094=9591
,pUmem_Cmd_TBD_5098=9592
,pUmem_Cmd_TBD_509C=9593
,pUmem_Cmd_09_ServoOn=9594
,pUmem_Cmd_09_ServoOff=9595
,pUmem_Cmd_09_HomeStart=9596
,pUmem_Cmd_09_HomeAbort=9597
,pUmem_Cmd_09_HomeOffset=9598
,pUmem_Cmd_09_JogStop=9599
,pUmem_Cmd_09_JogContPlus=9600
,pUmem_Cmd_09_JogContMinus=9601
,pUmem_Cmd_09_JogAbsMove=9602
,pUmem_Cmd_09_JogIncMove=9603
,pUmem_Cmd_09_JogAbsPos=9604
,pUmem_Cmd_09_JogIncDist=9605
,pUmem_Cmd_09_JogSpeed=9606
,pUmem_Cmd_09_JogTa=9607
,pUmem_Cmd_09_JogTs=9608
,pUmem_Cmd_TBD_50DC=9609
,pUmem_Cmd_TBD_50E0=9610
,pUmem_Cmd_TBD_50E4=9611
,pUmem_Cmd_TBD_50E8=9612
,pUmem_Cmd_TBD_50EC=9613
,pUmem_Cmd_10_ServoOn=9614
,pUmem_Cmd_10_ServoOff=9615
,pUmem_Cmd_10_HomeStart=9616
,pUmem_Cmd_10_HomeAbort=9617
,pUmem_Cmd_10_HomeOffset=9618
,pUmem_Cmd_10_JogStop=9619
,pUmem_Cmd_10_JogContPlus=9620
,pUmem_Cmd_10_JogContMinus=9621
,pUmem_Cmd_10_JogAbsMove=9622
,pUmem_Cmd_10_JogIncMove=9623
,pUmem_Cmd_10_JogAbsPos=9624
,pUmem_Cmd_10_JogIncDist=9625
,pUmem_Cmd_10_JogSpeed=9626
,pUmem_Cmd_10_JogTa=9627
,pUmem_Cmd_10_JogTs=9628
,pUmem_Cmd_TBD_512C=9629
,pUmem_Cmd_TBD_5130=9630
,pUmem_Cmd_TBD_5134=9631
,pUmem_Cmd_TBD_5138=9632
,pUmem_Cmd_TBD_513C=9633
,pUmem_Cmd_11_ServoOn=9634
,pUmem_Cmd_11_ServoOff=9635
,pUmem_Cmd_11_HomeStart=9636
,pUmem_Cmd_11_HomeAbort=9637
,pUmem_Cmd_11_HomeOffset=9638
,pUmem_Cmd_11_JogStop=9639
,pUmem_Cmd_11_JogContPlus=9640
,pUmem_Cmd_11_JogContMinus=9641
,pUmem_Cmd_11_JogAbsMove=9642
,pUmem_Cmd_11_JogIncMove=9643
,pUmem_Cmd_11_JogAbsPos=9644
,pUmem_Cmd_11_JogIncDist=9645
,pUmem_Cmd_11_JogSpeed=9646
,pUmem_Cmd_11_JogTa=9647
,pUmem_Cmd_11_JogTs=9648
,pUmem_Cmd_TBD_517C=9649
,pUmem_Cmd_TBD_5180=9650
,pUmem_Cmd_TBD_5184=9651
,pUmem_Cmd_TBD_5188=9652
,pUmem_Cmd_TBD_518C=9653
,pUmem_Cmd_12_ServoOn=9654
,pUmem_Cmd_12_ServoOff=9655
,pUmem_Cmd_12_HomeStart=9656
,pUmem_Cmd_12_HomeAbort=9657
,pUmem_Cmd_12_HomeOffset=9658
,pUmem_Cmd_12_JogStop=9659
,pUmem_Cmd_12_JogContPlus=9660
,pUmem_Cmd_12_JogContMinus=9661
,pUmem_Cmd_12_JogAbsMove=9662
,pUmem_Cmd_12_JogIncMove=9663
,pUmem_Cmd_12_JogAbsPos=9664
,pUmem_Cmd_12_JogIncDist=9665
,pUmem_Cmd_12_JogSpeed=9666
,pUmem_Cmd_12_JogTa=9667
,pUmem_Cmd_12_JogTs=9668
,pUmem_Cmd_TBD_51CC=9669
,pUmem_Cmd_TBD_51D0=9670
,pUmem_Cmd_TBD_51D4=9671
,pUmem_Cmd_TBD_51D8=9672
,pUmem_Cmd_TBD_51DC=9673
,pUmem_Cmd_13_ServoOn=9674
,pUmem_Cmd_13_ServoOff=9675
,pUmem_Cmd_13_HomeStart=9676
,pUmem_Cmd_13_HomeAbort=9677
,pUmem_Cmd_13_HomeOffset=9678
,pUmem_Cmd_13_JogStop=9679
,pUmem_Cmd_13_JogContPlus=9680
,pUmem_Cmd_13_JogContMinus=9681
,pUmem_Cmd_13_JogAbsMove=9682
,pUmem_Cmd_13_JogIncMove=9683
,pUmem_Cmd_13_JogAbsPos=9684
,pUmem_Cmd_13_JogIncDist=9685
,pUmem_Cmd_13_JogSpeed=9686
,pUmem_Cmd_13_JogTa=9687
,pUmem_Cmd_13_JogTs=9688
,pUmem_Cmd_TBD_521C=9689
,pUmem_Cmd_TBD_5220=9690
,pUmem_Cmd_TBD_5224=9691
,pUmem_Cmd_TBD_5228=9692
,pUmem_Cmd_TBD_522C=9693
,pUmem_Cmd_14_ServoOn=9694
,pUmem_Cmd_14_ServoOff=9695
,pUmem_Cmd_14_HomeStart=9696
,pUmem_Cmd_14_HomeAbort=9697
,pUmem_Cmd_14_HomeOffset=9698
,pUmem_Cmd_14_JogStop=9699
,pUmem_Cmd_14_JogContPlus=9700
,pUmem_Cmd_14_JogContMinus=9701
,pUmem_Cmd_14_JogAbsMove=9702
,pUmem_Cmd_14_JogIncMove=9703
,pUmem_Cmd_14_JogAbsPos=9704
,pUmem_Cmd_14_JogIncDist=9705
,pUmem_Cmd_14_JogSpeed=9706
,pUmem_Cmd_14_JogTa=9707
,pUmem_Cmd_14_JogTs=9708
,pUmem_Cmd_TBD_526C=9709
,pUmem_Cmd_TBD_5270=9710
,pUmem_Cmd_TBD_5274=9711
,pUmem_Cmd_TBD_5278=9712
,pUmem_Cmd_TBD_527C=9713
,pUmem_Cmd_15_ServoOn=9714
,pUmem_Cmd_15_ServoOff=9715
,pUmem_Cmd_15_HomeStart=9716
,pUmem_Cmd_15_HomeAbort=9717
,pUmem_Cmd_15_HomeOffset=9718
,pUmem_Cmd_15_JogStop=9719
,pUmem_Cmd_15_JogContPlus=9720
,pUmem_Cmd_15_JogContMinus=9721
,pUmem_Cmd_15_JogAbsMove=9722
,pUmem_Cmd_15_JogIncMove=9723
,pUmem_Cmd_15_JogAbsPos=9724
,pUmem_Cmd_15_JogIncDist=9725
,pUmem_Cmd_15_JogSpeed=9726
,pUmem_Cmd_15_JogTa=9727
,pUmem_Cmd_15_JogTs=9728
,pUmem_Cmd_TBD_52BC=9729
,pUmem_Cmd_TBD_52C0=9730
,pUmem_Cmd_TBD_52C4=9731
,pUmem_Cmd_TBD_52C8=9732
,pUmem_Cmd_TBD_52CC=9733
,pUmem_Cmd_16_ServoOn=9734
,pUmem_Cmd_16_ServoOff=9735
,pUmem_Cmd_16_HomeStart=9736
,pUmem_Cmd_16_HomeAbort=9737
,pUmem_Cmd_16_HomeOffset=9738
,pUmem_Cmd_16_JogStop=9739
,pUmem_Cmd_16_JogContPlus=9740
,pUmem_Cmd_16_JogContMinus=9741
,pUmem_Cmd_16_JogAbsMove=9742
,pUmem_Cmd_16_JogIncMove=9743
,pUmem_Cmd_16_JogAbsPos=9744
,pUmem_Cmd_16_JogIncDist=9745
,pUmem_Cmd_16_JogSpeed=9746
,pUmem_Cmd_16_JogTa=9747
,pUmem_Cmd_16_JogTs=9748
,pUmem_Cmd_TBD_530C=9749
,pUmem_Cmd_TBD_5310=9750
,pUmem_Cmd_TBD_5314=9751
,pUmem_Cmd_TBD_5318=9752
,pUmem_Cmd_TBD_531C=9753
,pUmem_Cmd_17_ServoOn=9754
,pUmem_Cmd_17_ServoOff=9755
,pUmem_Cmd_17_HomeStart=9756
,pUmem_Cmd_17_HomeAbort=9757
,pUmem_Cmd_17_HomeOffset=9758
,pUmem_Cmd_17_JogStop=9759
,pUmem_Cmd_17_JogContPlus=9760
,pUmem_Cmd_17_JogContMinus=9761
,pUmem_Cmd_17_JogAbsMove=9762
,pUmem_Cmd_17_JogIncMove=9763
,pUmem_Cmd_17_JogAbsPos=9764
,pUmem_Cmd_17_JogIncDist=9765
,pUmem_Cmd_17_JogSpeed=9766
,pUmem_Cmd_17_JogTa=9767
,pUmem_Cmd_17_JogTs=9768
,pUmem_Cmd_TBD_535C=9769
,pUmem_Cmd_TBD_5360=9770
,pUmem_Cmd_TBD_5364=9771
,pUmem_Cmd_TBD_5368=9772
,pUmem_Cmd_TBD_536C=9773
,pUmem_Cmd_18_ServoOn=9774
,pUmem_Cmd_18_ServoOff=9775
,pUmem_Cmd_18_HomeStart=9776
,pUmem_Cmd_18_HomeAbort=9777
,pUmem_Cmd_18_HomeOffset=9778
,pUmem_Cmd_18_JogStop=9779
,pUmem_Cmd_18_JogContPlus=9780
,pUmem_Cmd_18_JogContMinus=9781
,pUmem_Cmd_18_JogAbsMove=9782
,pUmem_Cmd_18_JogIncMove=9783
,pUmem_Cmd_18_JogAbsPos=9784
,pUmem_Cmd_18_JogIncDist=9785
,pUmem_Cmd_18_JogSpeed=9786
,pUmem_Cmd_18_JogTa=9787
,pUmem_Cmd_18_JogTs=9788
,pUmem_Cmd_TBD_53AC=9789
,pUmem_Cmd_TBD_53B0=9790
,pUmem_Cmd_TBD_53B4=9791
,pUmem_Cmd_TBD_53B8=9792
,pUmem_Cmd_TBD_53BC=9793
,pUmem_Cmd_19_ServoOn=9794
,pUmem_Cmd_19_ServoOff=9795
,pUmem_Cmd_19_HomeStart=9796
,pUmem_Cmd_19_HomeAbort=9797
,pUmem_Cmd_19_HomeOffset=9798
,pUmem_Cmd_19_JogStop=9799
,pUmem_Cmd_19_JogContPlus=9800
,pUmem_Cmd_19_JogContMinus=9801
,pUmem_Cmd_19_JogAbsMove=9802
,pUmem_Cmd_19_JogIncMove=9803
,pUmem_Cmd_19_JogAbsPos=9804
,pUmem_Cmd_19_JogIncDist=9805
,pUmem_Cmd_19_JogSpeed=9806
,pUmem_Cmd_19_JogTa=9807
,pUmem_Cmd_19_JogTs=9808
,pUmem_Cmd_TBD_53FC=9809
,pUmem_Cmd_TBD_5400=9810
,pUmem_Cmd_TBD_5404=9811
,pUmem_Cmd_TBD_5408=9812
,pUmem_Cmd_TBD_540C=9813
,pUmem_Cmd_20_ServoOn=9814
,pUmem_Cmd_20_ServoOff=9815
,pUmem_Cmd_20_HomeStart=9816
,pUmem_Cmd_20_HomeAbort=9817
,pUmem_Cmd_20_HomeOffset=9818
,pUmem_Cmd_20_JogStop=9819
,pUmem_Cmd_20_JogContPlus=9820
,pUmem_Cmd_20_JogContMinus=9821
,pUmem_Cmd_20_JogAbsMove=9822
,pUmem_Cmd_20_JogIncMove=9823
,pUmem_Cmd_20_JogAbsPos=9824
,pUmem_Cmd_20_JogIncDist=9825
,pUmem_Cmd_20_JogSpeed=9826
,pUmem_Cmd_20_JogTa=9827
,pUmem_Cmd_20_JogTs=9828
,pUmem_Cmd_TBD_544C=9829
,pUmem_Cmd_TBD_5450=9830
,pUmem_Cmd_TBD_5454=9831
,pUmem_Cmd_TBD_5458=9832
,pUmem_Cmd_TBD_545C=9833
,pUmem_Cmd_21_ServoOn=9834
,pUmem_Cmd_21_ServoOff=9835
,pUmem_Cmd_21_HomeStart=9836
,pUmem_Cmd_21_HomeAbort=9837
,pUmem_Cmd_21_HomeOffset=9838
,pUmem_Cmd_21_JogStop=9839
,pUmem_Cmd_21_JogContPlus=9840
,pUmem_Cmd_21_JogContMinus=9841
,pUmem_Cmd_21_JogAbsMove=9842
,pUmem_Cmd_21_JogIncMove=9843
,pUmem_Cmd_21_JogAbsPos=9844
,pUmem_Cmd_21_JogIncDist=9845
,pUmem_Cmd_21_JogSpeed=9846
,pUmem_Cmd_21_JogTa=9847
,pUmem_Cmd_21_JogTs=9848
,pUmem_Cmd_TBD_549C=9849
,pUmem_Cmd_TBD_54A0=9850
,pUmem_Cmd_TBD_54A4=9851
,pUmem_Cmd_TBD_54A8=9852
,pUmem_Cmd_TBD_54AC=9853
,pUmem_Cmd_22_ServoOn=9854
,pUmem_Cmd_22_ServoOff=9855
,pUmem_Cmd_22_HomeStart=9856
,pUmem_Cmd_22_HomeAbort=9857
,pUmem_Cmd_22_HomeOffset=9858
,pUmem_Cmd_22_JogStop=9859
,pUmem_Cmd_22_JogContPlus=9860
,pUmem_Cmd_22_JogContMinus=9861
,pUmem_Cmd_22_JogAbsMove=9862
,pUmem_Cmd_22_JogIncMove=9863
,pUmem_Cmd_22_JogAbsPos=9864
,pUmem_Cmd_22_JogIncDist=9865
,pUmem_Cmd_22_JogSpeed=9866
,pUmem_Cmd_22_JogTa=9867
,pUmem_Cmd_22_JogTs=9868
,pUmem_Cmd_TBD_54EC=9869
,pUmem_Cmd_TBD_54F0=9870
,pUmem_Cmd_TBD_54F4=9871
,pUmem_Cmd_TBD_54F8=9872
,pUmem_Cmd_TBD_54FC=9873
,pUmem_Cmd_23_ServoOn=9874
,pUmem_Cmd_23_ServoOff=9875
,pUmem_Cmd_23_HomeStart=9876
,pUmem_Cmd_23_HomeAbort=9877
,pUmem_Cmd_23_HomeOffset=9878
,pUmem_Cmd_23_JogStop=9879
,pUmem_Cmd_23_JogContPlus=9880
,pUmem_Cmd_23_JogContMinus=9881
,pUmem_Cmd_23_JogAbsMove=9882
,pUmem_Cmd_23_JogIncMove=9883
,pUmem_Cmd_23_JogAbsPos=9884
,pUmem_Cmd_23_JogIncDist=9885
,pUmem_Cmd_23_JogSpeed=9886
,pUmem_Cmd_23_JogTa=9887
,pUmem_Cmd_23_JogTs=9888
,pUmem_Cmd_TBD_553C=9889
,pUmem_Cmd_TBD_5540=9890
,pUmem_Cmd_TBD_5544=9891
,pUmem_Cmd_TBD_5548=9892
,pUmem_Cmd_TBD_554C=9893
,pUmem_Cmd_24_ServoOn=9894
,pUmem_Cmd_24_ServoOff=9895
,pUmem_Cmd_24_HomeStart=9896
,pUmem_Cmd_24_HomeAbort=9897
,pUmem_Cmd_24_HomeOffset=9898
,pUmem_Cmd_24_JogStop=9899
,pUmem_Cmd_24_JogContPlus=9900
,pUmem_Cmd_24_JogContMinus=9901
,pUmem_Cmd_24_JogAbsMove=9902
,pUmem_Cmd_24_JogIncMove=9903
,pUmem_Cmd_24_JogAbsPos=9904
,pUmem_Cmd_24_JogIncDist=9905
,pUmem_Cmd_24_JogSpeed=9906
,pUmem_Cmd_24_JogTa=9907
,pUmem_Cmd_24_JogTs=9908
,pUmem_Cmd_TBD_558C=9909
,pUmem_Cmd_TBD_5590=9910
,pUmem_Cmd_TBD_5594=9911
,pUmem_Cmd_TBD_5598=9912
,pUmem_Cmd_TBD_559C=9913
,pUmem_Cmd_25_ServoOn=9914
,pUmem_Cmd_25_ServoOff=9915
,pUmem_Cmd_25_HomeStart=9916
,pUmem_Cmd_25_HomeAbort=9917
,pUmem_Cmd_25_HomeOffset=9918
,pUmem_Cmd_25_JogStop=9919
,pUmem_Cmd_25_JogContPlus=9920
,pUmem_Cmd_25_JogContMinus=9921
,pUmem_Cmd_25_JogAbsMove=9922
,pUmem_Cmd_25_JogIncMove=9923
,pUmem_Cmd_25_JogAbsPos=9924
,pUmem_Cmd_25_JogIncDist=9925
,pUmem_Cmd_25_JogSpeed=9926
,pUmem_Cmd_25_JogTa=9927
,pUmem_Cmd_25_JogTs=9928
,pUmem_Cmd_TBD_55DC=9929
,pUmem_Cmd_TBD_55E0=9930
,pUmem_Cmd_TBD_55E4=9931
,pUmem_Cmd_TBD_55E8=9932
,pUmem_Cmd_TBD_55EC=9933
,pUmem_Cmd_26_ServoOn=9934
,pUmem_Cmd_26_ServoOff=9935
,pUmem_Cmd_26_HomeStart=9936
,pUmem_Cmd_26_HomeAbort=9937
,pUmem_Cmd_26_HomeOffset=9938
,pUmem_Cmd_26_JogStop=9939
,pUmem_Cmd_26_JogContPlus=9940
,pUmem_Cmd_26_JogContMinus=9941
,pUmem_Cmd_26_JogAbsMove=9942
,pUmem_Cmd_26_JogIncMove=9943
,pUmem_Cmd_26_JogAbsPos=9944
,pUmem_Cmd_26_JogIncDist=9945
,pUmem_Cmd_26_JogSpeed=9946
,pUmem_Cmd_26_JogTa=9947
,pUmem_Cmd_26_JogTs=9948
,pUmem_Cmd_TBD_562C=9949
,pUmem_Cmd_TBD_5630=9950
,pUmem_Cmd_TBD_5634=9951
,pUmem_Cmd_TBD_5638=9952
,pUmem_Cmd_TBD_563C=9953
,pUmem_Cmd_27_ServoOn=9954
,pUmem_Cmd_27_ServoOff=9955
,pUmem_Cmd_27_HomeStart=9956
,pUmem_Cmd_27_HomeAbort=9957
,pUmem_Cmd_27_HomeOffset=9958
,pUmem_Cmd_27_JogStop=9959
,pUmem_Cmd_27_JogContPlus=9960
,pUmem_Cmd_27_JogContMinus=9961
,pUmem_Cmd_27_JogAbsMove=9962
,pUmem_Cmd_27_JogIncMove=9963
,pUmem_Cmd_27_JogAbsPos=9964
,pUmem_Cmd_27_JogIncDist=9965
,pUmem_Cmd_27_JogSpeed=9966
,pUmem_Cmd_27_JogTa=9967
,pUmem_Cmd_27_JogTs=9968
,pUmem_Cmd_TBD_567C=9969
,pUmem_Cmd_TBD_5680=9970
,pUmem_Cmd_TBD_5684=9971
,pUmem_Cmd_TBD_5688=9972
,pUmem_Cmd_TBD_568C=9973
,pUmem_Cmd_28_ServoOn=9974
,pUmem_Cmd_28_ServoOff=9975
,pUmem_Cmd_28_HomeStart=9976
,pUmem_Cmd_28_HomeAbort=9977
,pUmem_Cmd_28_HomeOffset=9978
,pUmem_Cmd_28_JogStop=9979
,pUmem_Cmd_28_JogContPlus=9980
,pUmem_Cmd_28_JogContMinus=9981
,pUmem_Cmd_28_JogAbsMove=9982
,pUmem_Cmd_28_JogIncMove=9983
,pUmem_Cmd_28_JogAbsPos=9984
,pUmem_Cmd_28_JogIncDist=9985
,pUmem_Cmd_28_JogSpeed=9986
,pUmem_Cmd_28_JogTa=9987
,pUmem_Cmd_28_JogTs=9988
,pUmem_Cmd_TBD_56CC=9989
,pUmem_Cmd_TBD_56D0=9990
,pUmem_Cmd_TBD_56D4=9991
,pUmem_Cmd_TBD_56D8=9992
,pUmem_Cmd_TBD_56DC=9993
,pUmem_Cmd_29_ServoOn=9994
,pUmem_Cmd_29_ServoOff=9995
,pUmem_Cmd_29_HomeStart=9996
,pUmem_Cmd_29_HomeAbort=9997
,pUmem_Cmd_29_HomeOffset=9998
,pUmem_Cmd_29_JogStop=9999
,pUmem_Cmd_29_JogContPlus=10000
,pUmem_Cmd_29_JogContMinus=10001
,pUmem_Cmd_29_JogAbsMove=10002
,pUmem_Cmd_29_JogIncMove=10003
,pUmem_Cmd_29_JogAbsPos=10004
,pUmem_Cmd_29_JogIncDist=10005
,pUmem_Cmd_29_JogSpeed=10006
,pUmem_Cmd_29_JogTa=10007
,pUmem_Cmd_29_JogTs=10008
,pUmem_Cmd_TBD_571C=10009
,pUmem_Cmd_TBD_5720=10010
,pUmem_Cmd_TBD_5724=10011
,pUmem_Cmd_TBD_5728=10012
,pUmem_Cmd_TBD_572C=10013
,pUmem_Cmd_30_ServoOn=10014
,pUmem_Cmd_30_ServoOff=10015
,pUmem_Cmd_30_HomeStart=10016
,pUmem_Cmd_30_HomeAbort=10017
,pUmem_Cmd_30_HomeOffset=10018
,pUmem_Cmd_30_JogStop=10019
,pUmem_Cmd_30_JogContPlus=10020
,pUmem_Cmd_30_JogContMinus=10021
,pUmem_Cmd_30_JogAbsMove=10022
,pUmem_Cmd_30_JogIncMove=10023
,pUmem_Cmd_30_JogAbsPos=10024
,pUmem_Cmd_30_JogIncDist=10025
,pUmem_Cmd_30_JogSpeed=10026
,pUmem_Cmd_30_JogTa=10027
,pUmem_Cmd_30_JogTs=10028
,pUmem_Cmd_TBD_576C=10029
,pUmem_Cmd_TBD_5770=10030
,pUmem_Cmd_TBD_5774=10031
,pUmem_Cmd_TBD_5778=10032
,pUmem_Cmd_TBD_577C=10033
,pUmem_Cmd_31_ServoOn=10034
,pUmem_Cmd_31_ServoOff=10035
,pUmem_Cmd_31_HomeStart=10036
,pUmem_Cmd_31_HomeAbort=10037
,pUmem_Cmd_31_HomeOffset=10038
,pUmem_Cmd_31_JogStop=10039
,pUmem_Cmd_31_JogContPlus=10040
,pUmem_Cmd_31_JogContMinus=10041
,pUmem_Cmd_31_JogAbsMove=10042
,pUmem_Cmd_31_JogIncMove=10043
,pUmem_Cmd_31_JogAbsPos=10044
,pUmem_Cmd_31_JogIncDist=10045
,pUmem_Cmd_31_JogSpeed=10046
,pUmem_Cmd_31_JogTa=10047
,pUmem_Cmd_31_JogTs=10048
,pUmem_Cmd_TBD_57BC=10049
,pUmem_Cmd_TBD_57C0=10050
,pUmem_Cmd_TBD_57C4=10051
,pUmem_Cmd_TBD_57C8=10052
,pUmem_Cmd_TBD_57CC=10053
,pUmem_Cmd_32_ServoOn=10054
,pUmem_Cmd_32_ServoOff=10055
,pUmem_Cmd_32_HomeStart=10056
,pUmem_Cmd_32_HomeAbort=10057
,pUmem_Cmd_32_HomeOffset=10058
,pUmem_Cmd_32_JogStop=10059
,pUmem_Cmd_32_JogContPlus=10060
,pUmem_Cmd_32_JogContMinus=10061
,pUmem_Cmd_32_JogAbsMove=10062
,pUmem_Cmd_32_JogIncMove=10063
,pUmem_Cmd_32_JogAbsPos=10064
,pUmem_Cmd_32_JogIncDist=10065
,pUmem_Cmd_32_JogSpeed=10066
,pUmem_Cmd_32_JogTa=10067
,pUmem_Cmd_32_JogTs=10068
,pUmem_Cmd_TBD_580C=10069
,pUmem_Cmd_TBD_5810=10070
,pUmem_Cmd_TBD_5814=10071
,pUmem_Cmd_TBD_5818=10072
,pUmem_Cmd_TBD_581C=10073
,pUmem_Cmd_Mc_ServoOn=10074
,pUmem_Cmd_Mc_ServoOff=10075
,pUmem_Cmd_Mc_HomeStart=10076
,pUmem_Cmd_Mc_HomeAbort=10077
,pUmem_Cmd_Mc_AlarmReset=10078
,pUmem_Cmd_Mc_RunMode=10079
,pUmem_Cmd_Mc_AutoStart=10080
,pUmem_Cmd_Mc_AutoAbort=10081
,pUmem_Cmd_Mc_CycleStart=10082
,pUmem_Cmd_Mc_Fsave=10083
,pUmem_Cmd_Mc_StepStart=10084
,pUmem_Cmd_Mc_AutoPause=10085
,pUmem_Cmd_TBD_61D8=10086
,pUmem_Cmd_TBD_61DC=10087
,pUmem_Cmd_TBD_61E0=10088
,pUmem_Cmd_TBD_61E4=10089
,pUmem_Cmd_TBD_61E8=10090
,pUmem_Cmd_TBD_61EC=10091
,pUmem_Cmd_TBD_61F0=10092
,pUmem_Cmd_TBD_61F4=10093
,pUmem_Cmd_TBD_61F8=10094
,pUmem_Cmd_TBD_61FC=10095
,pUmem_Cmd_TBD_6200=10096
,pUmem_Cmd_TBD_6204=10097
,pUmem_Cmd_TBD_6208=10098
,pUmem_Cmd_TBD_620C=10099
,pUmem_Cmd_TBD_6210=10100
,pUmem_Cmd_TBD_6214=10101
,pUmem_Cmd_TBD_6218=10102
,pUmem_Cmd_TBD_621C=10103
,pUmem_Cmd_TBD_6220=10104
,pUmem_Cmd_TBD_6224=10105
,pUmem_Cmd_TBD_6228=10106
,pUmem_Cmd_TBD_622C=10107
,pUmem_Cmd_TBD_6230=10108
,pUmem_Cmd_TBD_6234=10109
,pUmem_Cmd_TBD_6238=10110
,pUmem_Cmd_TBD_623C=10111
,pUmem_Cmd_TBD_6240=10112
,pUmem_Cmd_TBD_6244=10113
,pUmem_Cmd_Ws_ServoOn=10114
,pUmem_Cmd_Ws_ServoOff=10115
,pUmem_Cmd_Ws_HomeStart=10116
,pUmem_Cmd_Ws_HomeAbort=10117
,pUmem_Cmd_Ws_AlarmReset=10118
,pUmem_Cmd_Ws_AlarmRetry=10119
,pUmem_Cmd_Ws_AlarmAbort=10120
,pUmem_Cmd_TBD_65AC=10121
,pUmem_Cmd_TBD_65B0=10122
,pUmem_Cmd_TBD_65B4=10123
,pUmem_Cmd_Ws_TestShot=10124
,pUmem_Cmd_Ws_PdtStaChange=10125
,pUmem_Cmd_Tr_PdtStaChange=10126
,pUmem_Cmd_Ws_LaserEnableStart=10127
,pUmem_Cmd_Ws_LaserDisableStart=10128
,pUmem_Cmd_Ws_LaserTestCrossStart=10129
,pUmem_Cmd_Ws_LaserTestCrossAbort=10130
,pUmem_Cmd_Ws_LaserTestLineStart=10131
,pUmem_Cmd_Ws_LaserTestLineAbort=10132
,pUmem_Cmd_TBD_65DC=10133
,pUmem_Cmd_TBD_65E0=10134
,pUmem_Cmd_TBD_65E4=10135
,pUmem_Cmd_TBD_65E8=10136
,pUmem_Cmd_TBD_65EC=10137
,pUmem_Cmd_TBD_65F0=10138
,pUmem_Cmd_TBD_65F4=10139
,pUmem_Cmd_TBD_65F8=10140
,pUmem_Cmd_TBD_65FC=10141
,pUmem_Cmd_TBD_6600=10142
,pUmem_Cmd_TBD_6604=10143
,pUmem_Cmd_Ws_LdStart=10144
,pUmem_Cmd_Ws_LdAbort=10145
,pUmem_Cmd_Ws_LdHold=10146
,pUmem_Cmd_Ws_RdStart=10147
,pUmem_Cmd_Ws_RdAbort=10148
,pUmem_Cmd_Ws_RdHold=10149
,pUmem_Cmd_Ws_WdStart=10150
,pUmem_Cmd_Ws_WdAbort=10151
,pUmem_Cmd_Ws_WdHold=10152
,pUmem_Cmd_Ws_WtStart=10153
,pUmem_Cmd_Ws_WtAbort=10154
,pUmem_Cmd_Ws_WtHold=10155
,pUmem_Cmd_Ws_UdStart=10156
,pUmem_Cmd_Ws_UdAbort=10157
,pUmem_Cmd_Ws_UdHold=10158
,pUmem_Cmd_Ws_RjStart=10159
,pUmem_Cmd_Ws_RjAbort=10160
,pUmem_Cmd_Ws_RjHold=10161
,pUmem_Cmd_TBD_6650=10162
,pUmem_Cmd_TBD_6654=10163
,pUmem_Cmd_TBD_6658=10164
,pUmem_Cmd_TBD_665C=10165
,pUmem_Cmd_TBD_6660=10166
,pUmem_Cmd_TBD_6664=10167
,pUmem_Cmd_TBD_6668=10168
,pUmem_Cmd_TBD_666C=10169
,pUmem_Cmd_TBD_6670=10170
,pUmem_Cmd_TBD_6674=10171
,pUmem_Cmd_TBD_6678=10172
,pUmem_Cmd_TBD_667C=10173
,pUmem_Cmd_Ws_1stTransRjRsp=10174
,pUmem_Cmd_Ws_2ndTransLdRsp=10175
,pUmem_Cmd_Ws_2dVisionCkRsp=10176
,pUmem_Cmd_Ws_LwmStartRsp=10177
,pUmem_Cmd_TBD_6690=10178
,pUmem_Cmd_TBD_6694=10179
,pUmem_Cmd_TBD_6698=10180
,pUmem_Cmd_TBD_669C=10181
,pUmem_Cmd_TBD_66A0=10182
,pUmem_Cmd_Ws_RspSkipOpt=10183
,pUmem_Cmd_Ws_2ndTransLdAlignX=10184
,pUmem_Cmd_Ws_2ndTransLdAlignY=10185
,pUmem_Cmd_Ws_2ndTransLdAlignC=10186
,pUmem_Cmd_TBD_66B4=10187
,pUmem_Cmd_TBD_66B8=10188
,pUmem_Cmd_TBD_66BC=10189
,pUmem_Cmd_TBD_66C0=10190
,pUmem_Cmd_TBD_66C4=10191
,pUmem_Cmd_TBD_66C8=10192
,pUmem_Cmd_TBD_66CC=10193
,pUmem_Cmd_Ws_2ndTransPdtDir=10194
,pUmem_Cmd_Ws_2ndTransPdtNo=10195
,pUmem_Cmd_Ws_2ndTransTempOpt=10196
,pUmem_Cmd_TBD_66DC=10197
,pUmem_Cmd_TBD_66E0=10198
,pUmem_Cmd_TBD_66E4=10199
,pUmem_Cmd_TBD_66E8=10200
,pUmem_Cmd_TBD_66EC=10201
,pUmem_Cmd_TBD_66F0=10202
,pUmem_Cmd_TBD_66F4=10203
,pUmem_Cmd_Ws_AccLimitX=10204
,pUmem_Cmd_Ws_AccLimitY=10205
,pUmem_Cmd_Ws_AccLimitC=10206
,pUmem_Cmd_Ws_VelLimitC=10207
,pUmem_Cmd_Ws_RefVel=10208
,pUmem_Cmd_Ws_RotOffsetX=10209
,pUmem_Cmd_Ws_RotOffsetY=10210
,pUmem_Cmd_Ws_TbVacBlow=10211
,pUmem_Cmd_TBD_6718=10212
,pUmem_Cmd_TBD_671C=10213
,pUmem_Cmd_Ws_OutMode=10214
,pUmem_Cmd_Ws_PfmPeriod=10215
,pUmem_Cmd_Ws_PfmOnTime=10216
,pUmem_Cmd_Ws_CorePfmEna=10217
,pUmem_Cmd_Ws_RingPfmEna=10218
,pUmem_Cmd_Ws_CorePowerSf=10219
,pUmem_Cmd_Ws_CoreRefPower=10220
,pUmem_Cmd_Ws_CoreMinPower=10221
,pUmem_Cmd_Ws_CoreMaxPower=10222
,pUmem_Cmd_Ws_RingPowerSf=10223
,pUmem_Cmd_Ws_RingRefPower=10224
,pUmem_Cmd_Ws_RingMinPower=10225
,pUmem_Cmd_Ws_RingMaxPower=10226
,pUmem_Cmd_TBD_6754=10227
,pUmem_Cmd_TBD_6758=10228
,pUmem_Cmd_TBD_675C=10229
,pUmem_Cmd_TBD_6760=10230
,pUmem_Cmd_TBD_6764=10231
,pUmem_Cmd_TBD_6768=10232
,pUmem_Cmd_TBD_676C=10233
,pUmem_Cmd_Ws_ShotTime=10234
,pUmem_Cmd_Ws_EprOut=10235
,pUmem_Cmd_Ws_TempCkTime=10236
,pUmem_Cmd_Ws_TempOffset1=10237
,pUmem_Cmd_Ws_CldInposDelay=10238
,pUmem_Cmd_Ws_CoverFwdPos=10239
,pUmem_Cmd_Ws_CoverBwdPos=10240
,pUmem_Cmd_Ws_TempOffset2=10241
,pUmem_Cmd_TBD_6790=10242
,pUmem_Cmd_TBD_6794=10243
,pUmem_Cmd_TBD_6798=10244
,pUmem_Cmd_TBD_679C=10245
,pUmem_Cmd_TBD_67A0=10246
,pUmem_Cmd_TBD_67A4=10247
,pUmem_Cmd_TBD_67A8=10248
,pUmem_Cmd_TBD_67AC=10249
,pUmem_Cmd_TBD_67B0=10250
,pUmem_Cmd_TBD_67B4=10251
,pUmem_Cmd_TBD_67B8=10252
,pUmem_Cmd_TBD_67BC=10253
,pUmem_Cmd_Ws_LdVelX=10254
,pUmem_Cmd_Ws_LdVelY=10255
,pUmem_Cmd_Ws_LdVelC=10256
,pUmem_Cmd_Ws_LdPosX=10257
,pUmem_Cmd_Ws_LdPosY=10258
,pUmem_Cmd_Ws_LdPosC=10259
,pUmem_Cmd_Ws_RdVelX=10260
,pUmem_Cmd_Ws_RdVelY=10261
,pUmem_Cmd_Ws_RdVelC=10262
,pUmem_Cmd_Ws_RdPosX=10263
,pUmem_Cmd_Ws_RdPosY=10264
,pUmem_Cmd_Ws_RdPosC=10265
,pUmem_Cmd_Ws_WdVelX=10266
,pUmem_Cmd_Ws_WdVelY=10267
,pUmem_Cmd_Ws_WdVelC=10268
,pUmem_Cmd_Ws_WdPosX=10269
,pUmem_Cmd_Ws_WdPosY=10270
,pUmem_Cmd_Ws_WdPosC=10271
,pUmem_Cmd_Ws_WtVelX=10272
,pUmem_Cmd_Ws_WtVelY=10273
,pUmem_Cmd_Ws_WtVelC=10274
,pUmem_Cmd_Ws_WtPosX=10275
,pUmem_Cmd_Ws_WtPosY=10276
,pUmem_Cmd_Ws_WtPosC=10277
,pUmem_Cmd_Ws_UdVelX=10278
,pUmem_Cmd_Ws_UdVelY=10279
,pUmem_Cmd_Ws_UdVelC=10280
,pUmem_Cmd_Ws_UdPosX=10281
,pUmem_Cmd_Ws_UdPosY=10282
,pUmem_Cmd_Ws_UdPosC=10283
,pUmem_Cmd_Ws_RjVelX=10284
,pUmem_Cmd_Ws_RjVelY=10285
,pUmem_Cmd_Ws_RjVelC=10286
,pUmem_Cmd_Ws_RjPosX=10287
,pUmem_Cmd_Ws_RjPosY=10288
,pUmem_Cmd_Ws_RjPosC=10289
,pUmem_Cmd_TBD_6850=10290
,pUmem_Cmd_TBD_6854=10291
,pUmem_Cmd_TBD_6858=10292
,pUmem_Cmd_TBD_685C=10293
,pUmem_Cmd_TBD_6860=10294
,pUmem_Cmd_TBD_6864=10295
,pUmem_Cmd_TBD_6868=10296
,pUmem_Cmd_TBD_686C=10297
,pUmem_Cmd_TBD_6870=10298
,pUmem_Cmd_TBD_6874=10299
,pUmem_Cmd_TBD_6878=10300
,pUmem_Cmd_TBD_687C=10301
,pUmem_Cmd_TBD_6880=10302
,pUmem_Cmd_TBD_6884=10303
,pUmem_Cmd_Vs_ServoOn=10304
,pUmem_Cmd_Vs_ServoOff=10305
,pUmem_Cmd_Vs_HomeStart=10306
,pUmem_Cmd_Vs_HomeAbort=10307
,pUmem_Cmd_Vs_AlarmReset=10308
,pUmem_Cmd_Vs_AlarmRetry=10309
,pUmem_Cmd_Vs_AlarmAbort=10310
,pUmem_Cmd_TBD_6994=10311
,pUmem_Cmd_TBD_6998=10312
,pUmem_Cmd_TBD_699C=10313
,pUmem_Cmd_Vs_TestShot=10314
,pUmem_Cmd_Vs_PdtStaChange=10315
,pUmem_Cmd_TBD_69A8=10316
,pUmem_Cmd_TBD_69AC=10317
,pUmem_Cmd_TBD_69B0=10318
,pUmem_Cmd_TBD_69B4=10319
,pUmem_Cmd_TBD_69B8=10320
,pUmem_Cmd_TBD_69BC=10321
,pUmem_Cmd_TBD_69C0=10322
,pUmem_Cmd_TBD_69C4=10323
,pUmem_Cmd_TBD_69C8=10324
,pUmem_Cmd_TBD_69CC=10325
,pUmem_Cmd_TBD_69D0=10326
,pUmem_Cmd_TBD_69D4=10327
,pUmem_Cmd_TBD_69D8=10328
,pUmem_Cmd_TBD_69DC=10329
,pUmem_Cmd_TBD_69E0=10330
,pUmem_Cmd_TBD_69E4=10331
,pUmem_Cmd_TBD_69E8=10332
,pUmem_Cmd_TBD_69EC=10333
,pUmem_Cmd_Vs_LdStart=10334
,pUmem_Cmd_Vs_LdAbort=10335
,pUmem_Cmd_Vs_LdHold=10336
,pUmem_Cmd_Vs_RdStart=10337
,pUmem_Cmd_Vs_RdAbort=10338
,pUmem_Cmd_Vs_RdHold=10339
,pUmem_Cmd_Vs_VnStart=10340
,pUmem_Cmd_Vs_VnAbort=10341
,pUmem_Cmd_Vs_VnHold=10342
,pUmem_Cmd_Vs_WtStart=10343
,pUmem_Cmd_Vs_WtAbort=10344
,pUmem_Cmd_Vs_WtHold=10345
,pUmem_Cmd_Vs_UdStart=10346
,pUmem_Cmd_Vs_UdAbort=10347
,pUmem_Cmd_Vs_UdHold=10348
,pUmem_Cmd_Vs_RjStart=10349
,pUmem_Cmd_Vs_RjAbort=10350
,pUmem_Cmd_Vs_RjHold=10351
,pUmem_Cmd_TBD_6A38=10352
,pUmem_Cmd_TBD_6A3C=10353
,pUmem_Cmd_TBD_6A40=10354
,pUmem_Cmd_TBD_6A44=10355
,pUmem_Cmd_TBD_6A48=10356
,pUmem_Cmd_TBD_6A4C=10357
,pUmem_Cmd_TBD_6A50=10358
,pUmem_Cmd_TBD_6A54=10359
,pUmem_Cmd_TBD_6A58=10360
,pUmem_Cmd_TBD_6A5C=10361
,pUmem_Cmd_TBD_6A60=10362
,pUmem_Cmd_TBD_6A64=10363
,pUmem_Cmd_Vs_3rdTransUdRsp=10364
,pUmem_Cmd_Vs_3rdTransRjRsp=10365
,pUmem_Cmd_Vs_3DVisionStRsp=10366
,pUmem_Cmd_Vs_3DVisionEdRsp=10367
,pUmem_Cmd_TBD_6A78=10368
,pUmem_Cmd_TBD_6A7C=10369
,pUmem_Cmd_TBD_6A80=10370
,pUmem_Cmd_TBD_6A84=10371
,pUmem_Cmd_TBD_6A88=10372
,pUmem_Cmd_Vs_RspSkipOpt=10373
,pUmem_Cmd_TBD_6A90=10374
,pUmem_Cmd_TBD_6A94=10375
,pUmem_Cmd_TBD_6A98=10376
,pUmem_Cmd_TBD_6A9C=10377
,pUmem_Cmd_TBD_6AA0=10378
,pUmem_Cmd_TBD_6AA4=10379
,pUmem_Cmd_TBD_6AA8=10380
,pUmem_Cmd_TBD_6AAC=10381
,pUmem_Cmd_TBD_6AB0=10382
,pUmem_Cmd_TBD_6AB4=10383
,pUmem_Cmd_TBD_6AB8=10384
,pUmem_Cmd_TBD_6ABC=10385
,pUmem_Cmd_TBD_6AC0=10386
,pUmem_Cmd_TBD_6AC4=10387
,pUmem_Cmd_TBD_6AC8=10388
,pUmem_Cmd_TBD_6ACC=10389
,pUmem_Cmd_TBD_6AD0=10390
,pUmem_Cmd_TBD_6AD4=10391
,pUmem_Cmd_TBD_6AD8=10392
,pUmem_Cmd_TBD_6ADC=10393
,pUmem_Cmd_Vs_AccLimitX=10394
,pUmem_Cmd_Vs_AccLimitY=10395
,pUmem_Cmd_Vs_AccLimitC=10396
,pUmem_Cmd_Vs_VelLimitC=10397
,pUmem_Cmd_Vs_RefVel=10398
,pUmem_Cmd_Vs_RotOffsetX=10399
,pUmem_Cmd_Vs_RotOffsetY=10400
,pUmem_Cmd_TBD_6AFC=10401
,pUmem_Cmd_TBD_6B00=10402
,pUmem_Cmd_TBD_6B04=10403
,pUmem_Cmd_Vs_PfmPeriod=10404
,pUmem_Cmd_Vs_PfmDuty=10405
,pUmem_Cmd_TBD_6B10=10406
,pUmem_Cmd_TBD_6B14=10407
,pUmem_Cmd_TBD_6B18=10408
,pUmem_Cmd_TBD_6B1C=10409
,pUmem_Cmd_TBD_6B20=10410
,pUmem_Cmd_TBD_6B24=10411
,pUmem_Cmd_TBD_6B28=10412
,pUmem_Cmd_TBD_6B2C=10413
,pUmem_Cmd_TBD_6B30=10414
,pUmem_Cmd_TBD_6B34=10415
,pUmem_Cmd_TBD_6B38=10416
,pUmem_Cmd_TBD_6B3C=10417
,pUmem_Cmd_TBD_6B40=10418
,pUmem_Cmd_TBD_6B44=10419
,pUmem_Cmd_TBD_6B48=10420
,pUmem_Cmd_TBD_6B4C=10421
,pUmem_Cmd_TBD_6B50=10422
,pUmem_Cmd_TBD_6B54=10423
,pUmem_Cmd_Vs_ShotTime=10424
,pUmem_Cmd_Vs_CldInposDelay=10425
,pUmem_Cmd_TBD_6B60=10426
,pUmem_Cmd_TBD_6B64=10427
,pUmem_Cmd_TBD_6B68=10428
,pUmem_Cmd_TBD_6B6C=10429
,pUmem_Cmd_TBD_6B70=10430
,pUmem_Cmd_TBD_6B74=10431
,pUmem_Cmd_TBD_6B78=10432
,pUmem_Cmd_TBD_6B7C=10433
,pUmem_Cmd_TBD_6B80=10434
,pUmem_Cmd_TBD_6B84=10435
,pUmem_Cmd_TBD_6B88=10436
,pUmem_Cmd_TBD_6B8C=10437
,pUmem_Cmd_TBD_6B90=10438
,pUmem_Cmd_TBD_6B94=10439
,pUmem_Cmd_TBD_6B98=10440
,pUmem_Cmd_TBD_6B9C=10441
,pUmem_Cmd_TBD_6BA0=10442
,pUmem_Cmd_TBD_6BA4=10443
,pUmem_Cmd_Vs_LdVelX=10444
,pUmem_Cmd_Vs_LdVelY=10445
,pUmem_Cmd_Vs_LdVelC=10446
,pUmem_Cmd_Vs_LdPosX=10447
,pUmem_Cmd_Vs_LdPosY=10448
,pUmem_Cmd_Vs_LdPosC=10449
,pUmem_Cmd_Vs_RdVelX=10450
,pUmem_Cmd_Vs_RdVelY=10451
,pUmem_Cmd_Vs_RdVelC=10452
,pUmem_Cmd_Vs_RdPosX=10453
,pUmem_Cmd_Vs_RdPosY=10454
,pUmem_Cmd_Vs_RdPosC=10455
,pUmem_Cmd_Vs_VnVelX=10456
,pUmem_Cmd_Vs_VnVelY=10457
,pUmem_Cmd_Vs_VnVelC=10458
,pUmem_Cmd_Vs_VnPosX=10459
,pUmem_Cmd_Vs_VnPosY=10460
,pUmem_Cmd_Vs_VnPosC=10461
,pUmem_Cmd_Vs_WtVelX=10462
,pUmem_Cmd_Vs_WtVelY=10463
,pUmem_Cmd_Vs_WtVelC=10464
,pUmem_Cmd_Vs_WtPosX=10465
,pUmem_Cmd_Vs_WtPosY=10466
,pUmem_Cmd_Vs_WtPosC=10467
,pUmem_Cmd_Vs_UdVelX=10468
,pUmem_Cmd_Vs_UdVelY=10469
,pUmem_Cmd_Vs_UdVelC=10470
,pUmem_Cmd_Vs_UdPosX=10471
,pUmem_Cmd_Vs_UdPosY=10472
,pUmem_Cmd_Vs_UdPosC=10473
,pUmem_Cmd_Vs_RjVelX=10474
,pUmem_Cmd_Vs_RjVelY=10475
,pUmem_Cmd_Vs_RjVelC=10476
,pUmem_Cmd_Vs_RjPosX=10477
,pUmem_Cmd_Vs_RjPosY=10478
,pUmem_Cmd_Vs_RjPosC=10479
,pUmem_Cmd_TBD_6C38=10480
,pUmem_Cmd_TBD_6C3C=10481
,pUmem_Cmd_TBD_6C40=10482
,pUmem_Cmd_TBD_6C44=10483
,pUmem_Cmd_TBD_6C48=10484
,pUmem_Cmd_TBD_6C4C=10485
,pUmem_Cmd_TBD_6C50=10486
,pUmem_Cmd_TBD_6C54=10487
,pUmem_Cmd_TBD_6C58=10488
,pUmem_Cmd_TBD_6C5C=10489
,pUmem_Cmd_TBD_6C60=10490
,pUmem_Cmd_TBD_6C64=10491
,pUmem_Cmd_TBD_6C68=10492
,pUmem_Cmd_TBD_6C6C=10493
,pUmem_Cmd_Sc_ServoOn=10494
,pUmem_Cmd_Sc_ServoOff=10495
,pUmem_Cmd_Sc_HomeStart=10496
,pUmem_Cmd_Sc_HomeAbort=10497
,pUmem_Cmd_Sc_AlarmReset=10498
,pUmem_Cmd_Sc_Fsave=10499
,pUmem_Cmd_Sc_WblEna=10500
,pUmem_Cmd_Sc_WblLen=10501
,pUmem_Cmd_Sc_WblDist=10502
,pUmem_Cmd_Sc_WblType=10503
,pUmem_Cmd_Sc_WblRatioW=10504
,pUmem_Cmd_Sc_WblRatioL=10505
,pUmem_Cmd_Sc_WblOffsetX=10506
,pUmem_Cmd_Sc_WblOffsetY=10507
,pUmem_Di00=10604
,pUmem_Di01_LaserReady=10605
,pUmem_Di02_LaserReqResp=10606
,pUmem_Di03_LaserPowerOn=10607
,pUmem_Di04_LaserAdMode=10608
,pUmem_Di05_LaserProgRun=10609
,pUmem_Di06_LaserWarning=10610
,pUmem_Di07_LaserAbnormal=10611
,pUmem_Di08=10612
,pUmem_Di09=10613
,pUmem_Di0A=10614
,pUmem_Di0B=10615
,pUmem_Di0C=10616
,pUmem_Di0D=10617
,pUmem_Di0E=10618
,pUmem_Di0F=10619
,pUmem_Di10_WsLtFixUp=10620
,pUmem_Di11_WsVsLtStrCls=10621
,pUmem_Di12_WsLtFixDn=10622
,pUmem_Di13_WsVsLtStrOpn=10623
,pUmem_Di14_WsRtFixUp=10624
,pUmem_Di15_WsVsRtStrCls=10625
,pUmem_Di16_WsRtFixDn=10626
,pUmem_Di17_WsVsRtStrOpn=10627
,pUmem_Di18_WsTempBwd=10628
,pUmem_Di19_TrPickUp=10629
,pUmem_Di1A_WsTempFwd=10630
,pUmem_Di1B_TrPickDn=10631
,pUmem_Di1C_WsTbDet=10632
,pUmem_Di1D_TrGripCls=10633
,pUmem_Di1E=10634
,pUmem_Di1F_TrGripOpn=10635
,pUmem_Di20_VsTbFixBwd=10636
,pUmem_Di21_WsAirCurtain=10637
,pUmem_Di22_VsTbFixFwd=10638
,pUmem_Di23_WsN2Blow=10639
,pUmem_Di24_VsTbFixUp=10640
,pUmem_Di25=10641
,pUmem_Di26_VsTbFixDn=10642
,pUmem_Di27=10643
,pUmem_Di28=10644
,pUmem_Di29=10645
,pUmem_Di2A=10646
,pUmem_Di2B=10647
,pUmem_Di2C_VsTbDet=10648
,pUmem_Di2D=10649
,pUmem_Di2E=10650
,pUmem_Di2F=10651
,pUmem_Di30_EcldFwd=10652
,pUmem_Di31_EcldBwd=10653
,pUmem_Do00_LaserEmission=10654
,pUmem_Do01_LaserReset=10655
,pUmem_Do02_LaserRequest=10656
,pUmem_Do03_LaserPowerOn=10657
,pUmem_Do04_LaserAdInEna=10658
,pUmem_Do05_LaserGuideEna=10659
,pUmem_Do06_LaserProgEna=10660
,pUmem_Do07_LaserProgStop=10661
,pUmem_Do08=10662
,pUmem_Do09=10663
,pUmem_Do0A=10664
,pUmem_Do0B=10665
,pUmem_Do0C=10666
,pUmem_Do0D=10667
,pUmem_Do0E=10668
,pUmem_Do0F=10669
,pUmem_Do10_WsTbFixUp=10670
,pUmem_Do11_WsTempBwd=10671
,pUmem_Do12_WsTbFixDn=10672
,pUmem_Do13_WsTempFwd=10673
,pUmem_Do14_TrGripCls=10674
,pUmem_Do15_VsTbFixBwd=10675
,pUmem_Do16_TrGripOpn=10676
,pUmem_Do17_VsTbFixFwd=10677
,pUmem_Do18_TrPickUp=10678
,pUmem_Do19_VsTbFixUp=10679
,pUmem_Do1A_TrPickDn=10680
,pUmem_Do1B_VsTbFixDn=10681
,pUmem_Do1C_WsVsStrCls=10682
,pUmem_Do1D_WsCoolAir=10683
,pUmem_Do1E_WsVsStrOpn=10684
,pUmem_Do1F=10685
,pUmem_Do20_WsTbVacm=10686
,pUmem_Do21_WsAirCurtain=10687
,pUmem_Do22_WsTbBlow=10688
,pUmem_Do23_WsN2Blow=10689
,pUmem_Do24=10690
,pUmem_Do25_WsTbVacmValve=10691
,pUmem_Do26=10692
,pUmem_Do27=10693
,pUmem_Do28=10694
,pUmem_Do29=10695
,pUmem_Do2A=10696
,pUmem_Do2B=10697
,pUmem_Do2C=10698
,pUmem_Do2D=10699
,pUmem_Do2E=10700
,pUmem_Do2F=10701
,pUmem_Do30_EcldFwd=10702
,pUmem_Do31_EcldBwd=10703
,pUmem_Ai00_WsLoadCell=10704
,pUmem_Ai01=10705
,pUmem_Ti00_WsTempSen1=10706
,pUmem_Ti01_WsTempSen2=10707
,pUmem_Sta_Mc_BufIdx=10708
,pWs_Vect_Dlt=12101
,pVs_Vect_Dlt=12102
,pWs_Epr_OutVdc=12103};
enum ptrMarray {_ptrMarray_=-1
,pEcat_Di_Md01=8231
,pEcat_Di_Md02=8247
,pEcat_Do_Md01=8263
,pEcat_Do_Md02=8279
,pEcat_CmdPos=8366
,pEcat_ActErr=8398
,pEcat_ActTrq=8430
,pBuf_ActTrq=8462
,pEcat_AlarmReset=8494
,pGpio_Di_Md00=8526
,pGpio_Do_Md00=8542
,pUmem_Di_Md00=10508
,pUmem_Di_Md01=10524
,pUmem_Di_Md02=10540
,pUmem_Do_Md00=10556
,pUmem_Do_Md01=10572
,pUmem_Do_Md02=10588
,pUmem_Sta_Mc_SeqCur=10709
,pUmem_Sta_Mc_SeqOld=10759
,pUmem_Sta_Mc_Pdt=10809
,pUmem_Sta_Mc_Time_L=10859
,pUmem_Sta_Mc_Time_H=10909
,pUmem_Sta_Mc_Time_BufD=10959
,pUmem_Sta_Mc_Time_BufL=11009
,pUmem_Sta_Mc_Time_BufH=11059
,pUmem_Sta_CmdPos=11109
,pUmem_Sta_ActPos=11141
,pUmem_Sta_Velocity=11173
,pUmem_Sta_Load=11205
,pUmem_Sta_AmpEna=11237
,pUmem_Sta_CloseLoop=11269
,pUmem_Sta_InPos=11301
,pUmem_Sta_HomeFin=11333
,pUmem_Sta_HomeIng=11365
,pUmem_Sta_LimitMinus=11397
,pUmem_Sta_LimitPlus=11429
,pUmem_Sta_FollowingErr=11461
,pUmem_Sta_AmpFault=11493
,pUmem_Sta_EncLoss=11525
,pUmem_Sta_I2tErr=11557
,pUmem_Sta_ProgPos=11589
,pUmem_Cmd_ServoOn=11621
,pUmem_Cmd_ServoOff=11653
,pUmem_Cmd_HomeStart=11685
,pUmem_Cmd_HomeAbort=11717
,pUmem_Cmd_HomeOffset=11749
,pUmem_Cmd_JogStop=11781
,pUmem_Cmd_JogContPlus=11813
,pUmem_Cmd_JogContMinus=11845
,pUmem_Cmd_JogAbsMove=11877
,pUmem_Cmd_JogIncMove=11909
,pUmem_Cmd_JogAbsPos=11941
,pUmem_Cmd_JogIncDist=11973
,pUmem_Cmd_JogSpeed=12005
,pUmem_Cmd_JogTa=12037
,pUmem_Cmd_JogTs=12069};
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
#define	gWs_CorePowSf	pshm->P[8227]
#define	gWs_CoreRefPow	pshm->P[8228]
#define	gWs_CoreMinPow	pshm->P[8229]
#define	gWs_CoreMaxPow	pshm->P[8230]
#define	gWs_CoreOutPow	pshm->P[8231]
#define	gWs_CoreOutVdc	pshm->P[8232]
#define	gWs_CorePfmEna	pshm->P[8233]
#define	gWs_RingPowSf	pshm->P[8234]
#define	gWs_RingRefPow	pshm->P[8235]
#define	gWs_RingMinPow	pshm->P[8236]
#define	gWs_RingMaxPow	pshm->P[8237]
#define	gWs_RingOutPow	pshm->P[8238]
#define	gWs_RingOutVdc	pshm->P[8239]
#define	gWs_RingPfmEna	pshm->P[8240]
#define	gWs_PfmRtiCnt	pshm->P[8241]
#define	gWs_PfmPeriod	pshm->P[8242]
#define	gWs_PfmOnTime	pshm->P[8243]
#define	gWs_PfmOnCnt	pshm->P[8244]
#define	gWs_PfmOut	pshm->P[8245]
#define	gWs_PfmBuf	pshm->P[8246]
#define	gWs_PfmCnt	pshm->P[8247]
#define	gWs_WblEna	pshm->P[8248]
#define	gWs_WblLen	pshm->P[8249]
#define	gWs_WblDst	pshm->P[8250]
#define	gWs_WblCnt	pshm->P[8251]
#define	gWs_WblType	pshm->P[8252]
#define	gWs_WblRatW	pshm->P[8253]
#define	gWs_WblRatL	pshm->P[8254]
#define	gWs_WblOfsX	pshm->P[8255]
#define	gWs_WblOfsY	pshm->P[8256]
#define	gVs_AccLimitX	pshm->P[8257]
#define	gVs_AccLimitY	pshm->P[8258]
#define	gVs_AccLimitC	pshm->P[8259]
#define	gVs_VelLimitC	pshm->P[8260]
#define	gVs_PosX_Cur	pshm->P[8261]
#define	gVs_PosY_Cur	pshm->P[8262]
#define	gVs_PosX_Old	pshm->P[8263]
#define	gVs_PosY_Old	pshm->P[8264]
#define	gVs_PosX_Dlt	pshm->P[8265]
#define	gVs_PosY_Dlt	pshm->P[8266]
#define	gVs_PosV_Dlt	pshm->P[8267]
#define	gVs_Vect_Vel	pshm->P[8268]
#define	gVs_Vect_Sum	pshm->P[8269]
#define	gVs_RefVel	pshm->P[8270]
#define	gVs_PfmPeriod	pshm->P[8271]
#define	gVs_PfmDuty	pshm->P[8272]
#define	gVs_EquEna	pshm->P[8273]
#define	gVs_EquCnt	pshm->P[8274]
#define	gVs_EquSta_Cur	pshm->P[8275]
#define	gVs_EquSta_Old	pshm->P[8276]
#define	gSc_PosX_Cur	pshm->P[8277]
#define	gSc_PosY_Cur	pshm->P[8278]
#define	gSta_Idx	pshm->P[8279]
#define	gCmd_Idx	pshm->P[8280]
#define	gMt_HomeStart_Cur(i)	pshm->P[(8281+i)%MAX_P]
#define	gMt_HomeStart_Old(i)	pshm->P[(8313+i)%MAX_P]
#define	gMt_HomeAbort_Cur(i)	pshm->P[(8345+i)%MAX_P]
#define	gMt_HomeAbort_Old(i)	pshm->P[(8377+i)%MAX_P]
#define	gMt_ServoOn_Cur(i)	pshm->P[(8409+i)%MAX_P]
#define	gMt_ServoOn_Old(i)	pshm->P[(8441+i)%MAX_P]
#define	gMt_ServoOff_Cur(i)	pshm->P[(8473+i)%MAX_P]
#define	gMt_ServoOff_Old(i)	pshm->P[(8505+i)%MAX_P]
#define	gMt_Jog_Stop_Cur(i)	pshm->P[(8537+i)%MAX_P]
#define	gMt_Jog_Stop_Old(i)	pshm->P[(8569+i)%MAX_P]
#define	gMt_Jog_ContPlus_Cur(i)	pshm->P[(8601+i)%MAX_P]
#define	gMt_Jog_ContPlus_Old(i)	pshm->P[(8633+i)%MAX_P]
#define	gMt_Jog_ContMinus_Cur(i)	pshm->P[(8665+i)%MAX_P]
#define	gMt_Jog_ContMinus_Old(i)	pshm->P[(8697+i)%MAX_P]
#define	gMt_Jog_AbsMove_Cur(i)	pshm->P[(8729+i)%MAX_P]
#define	gMt_Jog_AbsMove_Old(i)	pshm->P[(8761+i)%MAX_P]
#define	gMt_Jog_IncMove_Cur(i)	pshm->P[(8793+i)%MAX_P]
#define	gMt_Jog_IncMove_Old(i)	pshm->P[(8825+i)%MAX_P]
#define	gMc_ServoOn_Cur	pshm->P[8857]
#define	gMc_ServoOn_Old	pshm->P[8858]
#define	gMc_ServoOff_Cur	pshm->P[8859]
#define	gMc_ServoOff_Old	pshm->P[8860]
#define	gMc_HomeStart_Cur	pshm->P[8861]
#define	gMc_HomeStart_Old	pshm->P[8862]
#define	gMc_HomeAbort_Cur	pshm->P[8863]
#define	gMc_HomeAbort_Old	pshm->P[8864]
#define	gMc_AlarmReset_Cur	pshm->P[8865]
#define	gMc_AlarmReset_Old	pshm->P[8866]
#define	gMc_RunMod_Cur	pshm->P[8867]
#define	gMc_RunMod_Old	pshm->P[8868]
#define	gMc_AutoStart_Cur	pshm->P[8869]
#define	gMc_AutoStart_Old	pshm->P[8870]
#define	gMc_AutoAbort_Cur	pshm->P[8871]
#define	gMc_AutoAbort_Old	pshm->P[8872]
#define	gMc_AutoPause_Cur	pshm->P[8873]
#define	gMc_AutoPause_Old	pshm->P[8874]
#define	gMc_CycleStart_Cur	pshm->P[8875]
#define	gMc_CycleStart_Old	pshm->P[8876]
#define	gMc_StepStart_Cur	pshm->P[8877]
#define	gMc_StepStart_Old	pshm->P[8878]
#define	gMc_Fsave_Cur	pshm->P[8879]
#define	gMc_Fsave_Old	pshm->P[8880]
#define	gWs_ServoOn_Cur	pshm->P[8881]
#define	gWs_ServoOn_Old	pshm->P[8882]
#define	gWs_ServoOff_Cur	pshm->P[8883]
#define	gWs_ServoOff_Old	pshm->P[8884]
#define	gWs_HomeStart_Cur	pshm->P[8885]
#define	gWs_HomeStart_Old	pshm->P[8886]
#define	gWs_HomeAbort_Cur	pshm->P[8887]
#define	gWs_HomeAbort_Old	pshm->P[8888]
#define	gWs_AlarmReset_Cur	pshm->P[8889]
#define	gWs_AlarmReset_Old	pshm->P[8890]
#define	gWs_AlarmRetry_Cur	pshm->P[8891]
#define	gWs_AlarmRetry_Old	pshm->P[8892]
#define	gWs_AlarmAbort_Cur	pshm->P[8893]
#define	gWs_AlarmAbort_Old	pshm->P[8894]
#define	gWs_PowerCheck_Cur	pshm->P[8895]
#define	gWs_PowerCheck_Old	pshm->P[8896]
#define	gWs_TestShot_Cur	pshm->P[8897]
#define	gWs_TestShot_Old	pshm->P[8898]
#define	gWs_LaserEnableStart_Cur	pshm->P[8899]
#define	gWs_LaserEnableStart_Old	pshm->P[8900]
#define	gWs_LaserDisableStart_Cur	pshm->P[8901]
#define	gWs_LaserDisableStart_Old	pshm->P[8902]
#define	gWs_LaserTestCrossStart_Cur	pshm->P[8903]
#define	gWs_LaserTestCrossStart_Old	pshm->P[8904]
#define	gWs_LaserTestCrossAbort_Cur	pshm->P[8905]
#define	gWs_LaserTestCrossAbort_Old	pshm->P[8906]
#define	gWs_LaserTestLineStart_Cur	pshm->P[8907]
#define	gWs_LaserTestLineStart_Old	pshm->P[8908]
#define	gWs_LaserTestLineAbort_Cur	pshm->P[8909]
#define	gWs_LaserTestLineAbort_Old	pshm->P[8910]
#define	gVs_ServoOn_Cur	pshm->P[8911]
#define	gVs_ServoOn_Old	pshm->P[8912]
#define	gVs_ServoOff_Cur	pshm->P[8913]
#define	gVs_ServoOff_Old	pshm->P[8914]
#define	gVs_HomeStart_Cur	pshm->P[8915]
#define	gVs_HomeStart_Old	pshm->P[8916]
#define	gVs_HomeAbort_Cur	pshm->P[8917]
#define	gVs_HomeAbort_Old	pshm->P[8918]
#define	gVs_AlarmReset_Cur	pshm->P[8919]
#define	gVs_AlarmReset_Old	pshm->P[8920]
#define	gVs_AlarmRetry_Cur	pshm->P[8921]
#define	gVs_AlarmRetry_Old	pshm->P[8922]
#define	gVs_AlarmAbort_Cur	pshm->P[8923]
#define	gVs_AlarmAbort_Old	pshm->P[8924]
#define	gVs_TestShot_Cur	pshm->P[8925]
#define	gVs_TestShot_Old	pshm->P[8926]
#define	gSc_ServoOn_Cur	pshm->P[8927]
#define	gSc_ServoOn_Old	pshm->P[8928]
#define	gSc_ServoOff_Cur	pshm->P[8929]
#define	gSc_ServoOff_Old	pshm->P[8930]
#define	gSc_HomeStart_Cur	pshm->P[8931]
#define	gSc_HomeStart_Old	pshm->P[8932]
#define	gSc_HomeAbort_Cur	pshm->P[8933]
#define	gSc_HomeAbort_Old	pshm->P[8934]
#define	gSc_AlarmReset_Cur	pshm->P[8935]
#define	gSc_AlarmReset_Old	pshm->P[8936]
#define	gWs_LdStart_Cur	pshm->P[8937]
#define	gWs_LdAbort_Cur	pshm->P[8938]
#define	gWs_LdStart_Old	pshm->P[8939]
#define	gWs_LdAbort_Old	pshm->P[8940]
#define	gWs_RdStart_Cur	pshm->P[8941]
#define	gWs_RdAbort_Cur	pshm->P[8942]
#define	gWs_RdStart_Old	pshm->P[8943]
#define	gWs_RdAbort_Old	pshm->P[8944]
#define	gWs_WdStart_Cur	pshm->P[8945]
#define	gWs_WdAbort_Cur	pshm->P[8946]
#define	gWs_WdStart_Old	pshm->P[8947]
#define	gWs_WdAbort_Old	pshm->P[8948]
#define	gWs_WtStart_Cur	pshm->P[8949]
#define	gWs_WtAbort_Cur	pshm->P[8950]
#define	gWs_WtStart_Old	pshm->P[8951]
#define	gWs_WtAbort_Old	pshm->P[8952]
#define	gWs_UdStart_Cur	pshm->P[8953]
#define	gWs_UdAbort_Cur	pshm->P[8954]
#define	gWs_UdStart_Old	pshm->P[8955]
#define	gWs_UdAbort_Old	pshm->P[8956]
#define	gWs_RjStart_Cur	pshm->P[8957]
#define	gWs_RjAbort_Cur	pshm->P[8958]
#define	gWs_RjStart_Old	pshm->P[8959]
#define	gWs_RjAbort_Old	pshm->P[8960]
#define	gVs_LdStart_Cur	pshm->P[8961]
#define	gVs_LdAbort_Cur	pshm->P[8962]
#define	gVs_LdStart_Old	pshm->P[8963]
#define	gVs_LdAbort_Old	pshm->P[8964]
#define	gVs_RdStart_Cur	pshm->P[8965]
#define	gVs_RdAbort_Cur	pshm->P[8966]
#define	gVs_RdStart_Old	pshm->P[8967]
#define	gVs_RdAbort_Old	pshm->P[8968]
#define	gVs_VnStart_Cur	pshm->P[8969]
#define	gVs_VnAbort_Cur	pshm->P[8970]
#define	gVs_VnStart_Old	pshm->P[8971]
#define	gVs_VnAbort_Old	pshm->P[8972]
#define	gVs_WtStart_Cur	pshm->P[8973]
#define	gVs_WtAbort_Cur	pshm->P[8974]
#define	gVs_WtStart_Old	pshm->P[8975]
#define	gVs_WtAbort_Old	pshm->P[8976]
#define	gVs_UdStart_Cur	pshm->P[8977]
#define	gVs_UdAbort_Cur	pshm->P[8978]
#define	gVs_UdStart_Old	pshm->P[8979]
#define	gVs_UdAbort_Old	pshm->P[8980]
#define	gVs_RjStart_Cur	pshm->P[8981]
#define	gVs_RjAbort_Cur	pshm->P[8982]
#define	gVs_RjStart_Old	pshm->P[8983]
#define	gVs_RjAbort_Old	pshm->P[8984]
#define	gWs_PdtStaChange_Cur	pshm->P[8985]
#define	gVs_PdtStaChange_Cur	pshm->P[8986]
#define	gTr_PdtStaChange_Cur	pshm->P[8987]
#define	gWs_PdtStaChange_Old	pshm->P[8988]
#define	gVs_PdtStaChange_Old	pshm->P[8989]
#define	gTr_PdtStaChange_Old	pshm->P[8990]
#define	gWs_Error	pshm->P[8991]
#define	gVs_Error	pshm->P[8992]
#define	gWs_ErrCode	pshm->P[8993]
#define	gVs_ErrCode	pshm->P[8994]
#define	gWs_Error_Cur	pshm->P[8995]
#define	gWs_Error_Old	pshm->P[8996]
#define	gVs_Error_Cur	pshm->P[8997]
#define	gVs_Error_Old	pshm->P[8998]
#define	gSc_Com_Sta	pshm->P[8999]
#define	gEc_WdTimer	pshm->P[9000]
#define	gMc_DistX_Cur	pshm->P[9001]
#define	gMc_DistX_Err	pshm->P[9002]
#define	gWs_Safety_Sta	pshm->P[9003]
#define	gVs_Safety_Sta	pshm->P[9004]
#define	gWs_Safety_Err	pshm->P[9005]
#define	gVs_Safety_Err	pshm->P[9006]
#define	gMc_AlarmReset_Ena	pshm->P[9007]
#define	gWs_AlarmReset_Ena	pshm->P[9008]
#define	gVs_AlarmReset_Ena	pshm->P[9009]
#define	gSc_AlarmReset_Ena	pshm->P[9010]
#define	gWs_AlarmRetry_Ena	pshm->P[9011]
#define	gVs_AlarmRetry_Ena	pshm->P[9012]
#define	gWs_AlarmAbort_Ena	pshm->P[9013]
#define	gVs_AlarmAbort_Ena	pshm->P[9014]
#define	gEc_Com_Sta(i)	pshm->P[(9015+i)%MAX_P]
#define	gEc_Con_Start	pshm->P[9047]
#define	gEc_Con_Abort	pshm->P[9048]
#define	gEc_Con_Ena	pshm->P[9049]
#define	gEc_Con_Sta	pshm->P[9050]
#define	gEc_Con_Seq	pshm->P[9051]
#define	gEc_Con_Buf	pshm->P[9052]
#define	gEc_Con_Tmr	pshm->P[9053]
#define	gMt_Home_Idx	pshm->P[9054]
#define	gMt_Home_Start(i)	pshm->P[(9055+i)%MAX_P]
#define	gMt_Home_Abort(i)	pshm->P[(9087+i)%MAX_P]
#define	gMt_Home_Ena(i)	pshm->P[(9119+i)%MAX_P]
#define	gMt_Home_Sta(i)	pshm->P[(9151+i)%MAX_P]
#define	gMt_Home_Seq(i)	pshm->P[(9183+i)%MAX_P]
#define	gMt_Home_Buf(i)	pshm->P[(9215+i)%MAX_P]
#define	gMt_Home_Tmr(i)	pshm->P[(9247+i)%MAX_P]
#define	gMt_Home_Err(i)	pshm->P[(9279+i)%MAX_P]
#define	gMt_Home_Pos(i)	pshm->P[(9311+i)%MAX_P]
#define	gMc_Home_Start	pshm->P[9343]
#define	gMc_Home_Abort	pshm->P[9344]
#define	gMc_Home_Ena	pshm->P[9345]
#define	gMc_Home_Sta	pshm->P[9346]
#define	gMc_Home_Seq	pshm->P[9347]
#define	gMc_Home_Buf	pshm->P[9348]
#define	gMc_Home_Tmr	pshm->P[9349]
#define	gMc_Home_Err	pshm->P[9350]
#define	gWs_Home_Start	pshm->P[9351]
#define	gWs_Home_Abort	pshm->P[9352]
#define	gWs_Home_Ena	pshm->P[9353]
#define	gWs_Home_Sta	pshm->P[9354]
#define	gWs_Home_Seq	pshm->P[9355]
#define	gWs_Home_Buf	pshm->P[9356]
#define	gWs_Home_Tmr	pshm->P[9357]
#define	gWs_Home_Err	pshm->P[9358]
#define	gVs_Home_Start	pshm->P[9359]
#define	gVs_Home_Abort	pshm->P[9360]
#define	gVs_Home_Ena	pshm->P[9361]
#define	gVs_Home_Sta	pshm->P[9362]
#define	gVs_Home_Seq	pshm->P[9363]
#define	gVs_Home_Buf	pshm->P[9364]
#define	gVs_Home_Tmr	pshm->P[9365]
#define	gVs_Home_Err	pshm->P[9366]
#define	gSc_Home_Start	pshm->P[9367]
#define	gSc_Home_Abort	pshm->P[9368]
#define	gSc_Home_Ena	pshm->P[9369]
#define	gSc_Home_Sta	pshm->P[9370]
#define	gSc_Home_Seq	pshm->P[9371]
#define	gSc_Home_Buf	pshm->P[9372]
#define	gSc_Home_Tmr	pshm->P[9373]
#define	gSc_Home_Err	pshm->P[9374]
#define	gSc_InitSta	pshm->P[9375]
#define	gJog_Idx	pshm->P[9376]
#define	gMt_ServoOn_Ena(i)	pshm->P[(9377+i)%MAX_P]
#define	gMt_ServoOff_Ena(i)	pshm->P[(9409+i)%MAX_P]
#define	gMc_ServoOn_Ena	pshm->P[9441]
#define	gMc_ServoOff_Ena	pshm->P[9442]
#define	gWs_ServoOn_Ena	pshm->P[9443]
#define	gWs_ServoOff_Ena	pshm->P[9444]
#define	gVs_ServoOn_Ena	pshm->P[9445]
#define	gVs_ServoOff_Ena	pshm->P[9446]
#define	gSc_ServoOn_Ena	pshm->P[9447]
#define	gSc_ServoOff_Ena	pshm->P[9448]
#define	gJog_Stop_Ena(i)	pshm->P[(9449+i)%MAX_P]
#define	gJog_ContPlus_Ena(i)	pshm->P[(9481+i)%MAX_P]
#define	gJog_ContMinus_Ena(i)	pshm->P[(9513+i)%MAX_P]
#define	gJog_AbsMove_Ena(i)	pshm->P[(9545+i)%MAX_P]
#define	gJog_IncMove_Ena(i)	pshm->P[(9577+i)%MAX_P]
#define	gWs_PdtNo	pshm->P[9609]
#define	gVs_PdtNo	pshm->P[9610]
#define	gTr_PdtNo	pshm->P[9611]
#define	gWs_LdDir	pshm->P[9612]
#define	gMc_AutoRun_Start	pshm->P[9613]
#define	gMc_AutoRun_Abort	pshm->P[9614]
#define	gMc_AutoRun_Pause	pshm->P[9615]
#define	gMc_Cycle_Start	pshm->P[9616]
#define	gMc_Step_Start	pshm->P[9617]
#define	gMc_AutoRun_Ena	pshm->P[9618]
#define	gMc_AutoRun_Sta	pshm->P[9619]
#define	gMc_AutoRun_Seq	pshm->P[9620]
#define	gMc_AutoRun_Buf	pshm->P[9621]
#define	gMc_AutoRun_Tmr	pshm->P[9622]
#define	gMc_AutoRun_Err	pshm->P[9623]
#define	gWs_Loop_Start	pshm->P[9624]
#define	gWs_Loop_Abort	pshm->P[9625]
#define	gWs_Loop_Pause	pshm->P[9626]
#define	gWs_Loop_Ena	pshm->P[9627]
#define	gWs_Loop_Sta	pshm->P[9628]
#define	gWs_Loop_Seq	pshm->P[9629]
#define	gWs_Loop_Buf	pshm->P[9630]
#define	gWs_Loop_Tmr	pshm->P[9631]
#define	gWs_Loop_Err	pshm->P[9632]
#define	gWs_Loop_Time	pshm->P[9633]
#define	gWs_Loop_TimeBuf	pshm->P[9634]
#define	gWs_Seq_Cur	pshm->P[9635]
#define	gWs_Seq_Old	pshm->P[9636]
#define	gWs_Seq_Err	pshm->P[9637]
#define	gVs_Loop_Start	pshm->P[9638]
#define	gVs_Loop_Abort	pshm->P[9639]
#define	gVs_Loop_Pause	pshm->P[9640]
#define	gVs_Loop_Ena	pshm->P[9641]
#define	gVs_Loop_Sta	pshm->P[9642]
#define	gVs_Loop_Seq	pshm->P[9643]
#define	gVs_Loop_Buf	pshm->P[9644]
#define	gVs_Loop_Tmr	pshm->P[9645]
#define	gVs_Loop_Err	pshm->P[9646]
#define	gVs_Loop_Time	pshm->P[9647]
#define	gVs_Loop_TimeBuf	pshm->P[9648]
#define	gVs_Seq_Cur	pshm->P[9649]
#define	gVs_Seq_Old	pshm->P[9650]
#define	gVs_Seq_Err	pshm->P[9651]
#define	gWs_Sta_Pdt	pshm->P[9652]
#define	gVs_Sta_Pdt	pshm->P[9653]
#define	gTr_Sta_Pdt	pshm->P[9654]
#define	gWs_Sta_PdtBuf	pshm->P[9655]
#define	gVs_Sta_PdtBuf	pshm->P[9656]
#define	gTr_Sta_PdtBuf	pshm->P[9657]
#define	gWs_Sta_Stg	pshm->P[9658]
#define	gVs_Sta_Stg	pshm->P[9659]
#define	gWs_Pos_Pdt	pshm->P[9660]
#define	gVs_Pos_Pdt	pshm->P[9661]
#define	gWs_Pos_Stg	pshm->P[9662]
#define	gVs_Pos_Stg	pshm->P[9663]
#define	gWs_PdtStaChange_Ena	pshm->P[9664]
#define	gVs_PdtStaChange_Ena	pshm->P[9665]
#define	gTr_PdtStaChange_Ena	pshm->P[9666]
#define	gWs_Load_Start	pshm->P[9667]
#define	gWs_Load_Abort	pshm->P[9668]
#define	gWs_Load_Ena	pshm->P[9669]
#define	gWs_Load_Sta	pshm->P[9670]
#define	gWs_Load_Seq	pshm->P[9671]
#define	gWs_Load_Buf	pshm->P[9672]
#define	gWs_Load_Tmr	pshm->P[9673]
#define	gWs_Load_Err	pshm->P[9674]
#define	gWs_Load_VelX	pshm->P[9675]
#define	gWs_Load_VelY	pshm->P[9676]
#define	gWs_Load_VelC	pshm->P[9677]
#define	gWs_Load_PosX	pshm->P[9678]
#define	gWs_Load_PosY	pshm->P[9679]
#define	gWs_Load_PosC	pshm->P[9680]
#define	gWs_Load_Time	pshm->P[9681]
#define	gWs_Load_TimeBuf	pshm->P[9682]
#define	gWs_Ready_Start	pshm->P[9683]
#define	gWs_Ready_Abort	pshm->P[9684]
#define	gWs_Ready_Ena	pshm->P[9685]
#define	gWs_Ready_Sta	pshm->P[9686]
#define	gWs_Ready_Seq	pshm->P[9687]
#define	gWs_Ready_Buf	pshm->P[9688]
#define	gWs_Ready_Tmr	pshm->P[9689]
#define	gWs_Ready_Err	pshm->P[9690]
#define	gWs_Ready_VelX	pshm->P[9691]
#define	gWs_Ready_VelY	pshm->P[9692]
#define	gWs_Ready_VelC	pshm->P[9693]
#define	gWs_Ready_PosX	pshm->P[9694]
#define	gWs_Ready_PosY	pshm->P[9695]
#define	gWs_Ready_PosC	pshm->P[9696]
#define	gWs_Ready_Time	pshm->P[9697]
#define	gWs_Ready_TimeBuf	pshm->P[9698]
#define	gWs_Ready_VsnJudge	pshm->P[9699]
#define	gWs_Welding_Start	pshm->P[9700]
#define	gWs_Welding_Abort	pshm->P[9701]
#define	gWs_Welding_Ena	pshm->P[9702]
#define	gWs_Welding_Sta	pshm->P[9703]
#define	gWs_Welding_Seq	pshm->P[9704]
#define	gWs_Welding_Buf	pshm->P[9705]
#define	gWs_Welding_Tmr	pshm->P[9706]
#define	gWs_Welding_Err	pshm->P[9707]
#define	gWs_Welding_VelX	pshm->P[9708]
#define	gWs_Welding_VelY	pshm->P[9709]
#define	gWs_Welding_VelC	pshm->P[9710]
#define	gWs_Welding_PosX	pshm->P[9711]
#define	gWs_Welding_PosY	pshm->P[9712]
#define	gWs_Welding_PosC	pshm->P[9713]
#define	gWs_Welding_Time	pshm->P[9714]
#define	gWs_Welding_TimeBuf	pshm->P[9715]
#define	gWs_Prog_Dist	pshm->P[9716]
#define	gWs_Prog_Time	pshm->P[9717]
#define	gWs_Prog_TimeBuf	pshm->P[9718]
#define	gWs_File_Prog_Time	pshm->P[9719]
#define	gWs_File_Prog_TimeBuf	pshm->P[9720]
#define	gWs_Wait_Start	pshm->P[9721]
#define	gWs_Wait_Abort	pshm->P[9722]
#define	gWs_Wait_Ena	pshm->P[9723]
#define	gWs_Wait_Sta	pshm->P[9724]
#define	gWs_Wait_Seq	pshm->P[9725]
#define	gWs_Wait_Buf	pshm->P[9726]
#define	gWs_Wait_Tmr	pshm->P[9727]
#define	gWs_Wait_Err	pshm->P[9728]
#define	gWs_Wait_VelX	pshm->P[9729]
#define	gWs_Wait_VelY	pshm->P[9730]
#define	gWs_Wait_VelC	pshm->P[9731]
#define	gWs_Wait_PosX	pshm->P[9732]
#define	gWs_Wait_PosY	pshm->P[9733]
#define	gWs_Wait_PosC	pshm->P[9734]
#define	gWs_Wait_Time	pshm->P[9735]
#define	gWs_Wait_TimeBuf	pshm->P[9736]
#define	gWs_Unload_Start	pshm->P[9737]
#define	gWs_Unload_Abort	pshm->P[9738]
#define	gWs_Unload_Ena	pshm->P[9739]
#define	gWs_Unload_Sta	pshm->P[9740]
#define	gWs_Unload_Seq	pshm->P[9741]
#define	gWs_Unload_Buf	pshm->P[9742]
#define	gWs_Unload_Tmr	pshm->P[9743]
#define	gWs_Unload_Err	pshm->P[9744]
#define	gWs_Unload_VelX	pshm->P[9745]
#define	gWs_Unload_VelY	pshm->P[9746]
#define	gWs_Unload_VelC	pshm->P[9747]
#define	gWs_Unload_PosX	pshm->P[9748]
#define	gWs_Unload_PosY	pshm->P[9749]
#define	gWs_Unload_PosC	pshm->P[9750]
#define	gWs_Unload_Time	pshm->P[9751]
#define	gWs_Unload_TimeBuf	pshm->P[9752]
#define	gWs_Reject_Start	pshm->P[9753]
#define	gWs_Reject_Abort	pshm->P[9754]
#define	gWs_Reject_Ena	pshm->P[9755]
#define	gWs_Reject_Sta	pshm->P[9756]
#define	gWs_Reject_Seq	pshm->P[9757]
#define	gWs_Reject_Buf	pshm->P[9758]
#define	gWs_Reject_Tmr	pshm->P[9759]
#define	gWs_Reject_Err	pshm->P[9760]
#define	gWs_Reject_VelX	pshm->P[9761]
#define	gWs_Reject_VelY	pshm->P[9762]
#define	gWs_Reject_VelC	pshm->P[9763]
#define	gWs_Reject_PosX	pshm->P[9764]
#define	gWs_Reject_PosY	pshm->P[9765]
#define	gWs_Reject_PosC	pshm->P[9766]
#define	gWs_Reject_Time	pshm->P[9767]
#define	gWs_Reject_TimeBuf	pshm->P[9768]
#define	gVs_Load_Start	pshm->P[9769]
#define	gVs_Load_Abort	pshm->P[9770]
#define	gVs_Load_Ena	pshm->P[9771]
#define	gVs_Load_Sta	pshm->P[9772]
#define	gVs_Load_Seq	pshm->P[9773]
#define	gVs_Load_Buf	pshm->P[9774]
#define	gVs_Load_Tmr	pshm->P[9775]
#define	gVs_Load_Err	pshm->P[9776]
#define	gVs_Load_VelX	pshm->P[9777]
#define	gVs_Load_VelY	pshm->P[9778]
#define	gVs_Load_VelC	pshm->P[9779]
#define	gVs_Load_PosX	pshm->P[9780]
#define	gVs_Load_PosY	pshm->P[9781]
#define	gVs_Load_PosC	pshm->P[9782]
#define	gVs_Load_Time	pshm->P[9783]
#define	gVs_Load_TimeBuf	pshm->P[9784]
#define	gVs_Ready_Start	pshm->P[9785]
#define	gVs_Ready_Abort	pshm->P[9786]
#define	gVs_Ready_Ena	pshm->P[9787]
#define	gVs_Ready_Sta	pshm->P[9788]
#define	gVs_Ready_Seq	pshm->P[9789]
#define	gVs_Ready_Buf	pshm->P[9790]
#define	gVs_Ready_Tmr	pshm->P[9791]
#define	gVs_Ready_Err	pshm->P[9792]
#define	gVs_Ready_VelX	pshm->P[9793]
#define	gVs_Ready_VelY	pshm->P[9794]
#define	gVs_Ready_VelC	pshm->P[9795]
#define	gVs_Ready_PosX	pshm->P[9796]
#define	gVs_Ready_PosY	pshm->P[9797]
#define	gVs_Ready_PosC	pshm->P[9798]
#define	gVs_Ready_Time	pshm->P[9799]
#define	gVs_Ready_TimeBuf	pshm->P[9800]
#define	gVs_Ready_VsnJudge	pshm->P[9801]
#define	gVs_Vision_Start	pshm->P[9802]
#define	gVs_Vision_Abort	pshm->P[9803]
#define	gVs_Vision_Ena	pshm->P[9804]
#define	gVs_Vision_Sta	pshm->P[9805]
#define	gVs_Vision_Seq	pshm->P[9806]
#define	gVs_Vision_Buf	pshm->P[9807]
#define	gVs_Vision_Tmr	pshm->P[9808]
#define	gVs_Vision_Err	pshm->P[9809]
#define	gVs_Vision_VelX	pshm->P[9810]
#define	gVs_Vision_VelY	pshm->P[9811]
#define	gVs_Vision_VelC	pshm->P[9812]
#define	gVs_Vision_PosX	pshm->P[9813]
#define	gVs_Vision_PosY	pshm->P[9814]
#define	gVs_Vision_PosC	pshm->P[9815]
#define	gVs_Vision_Time	pshm->P[9816]
#define	gVs_Vision_TimeBuf	pshm->P[9817]
#define	gVs_Prog_Dist	pshm->P[9818]
#define	gVs_Prog_Time	pshm->P[9819]
#define	gVs_Prog_TimeBuf	pshm->P[9820]
#define	gVs_Vision_VsnJudge	pshm->P[9821]
#define	gVs_Wait_Start	pshm->P[9822]
#define	gVs_Wait_Abort	pshm->P[9823]
#define	gVs_Wait_Ena	pshm->P[9824]
#define	gVs_Wait_Sta	pshm->P[9825]
#define	gVs_Wait_Seq	pshm->P[9826]
#define	gVs_Wait_Buf	pshm->P[9827]
#define	gVs_Wait_Tmr	pshm->P[9828]
#define	gVs_Wait_Err	pshm->P[9829]
#define	gVs_Wait_VelX	pshm->P[9830]
#define	gVs_Wait_VelY	pshm->P[9831]
#define	gVs_Wait_VelC	pshm->P[9832]
#define	gVs_Wait_PosX	pshm->P[9833]
#define	gVs_Wait_PosY	pshm->P[9834]
#define	gVs_Wait_PosC	pshm->P[9835]
#define	gVs_Wait_Time	pshm->P[9836]
#define	gVs_Wait_TimeBuf	pshm->P[9837]
#define	gVs_Unload_Start	pshm->P[9838]
#define	gVs_Unload_Abort	pshm->P[9839]
#define	gVs_Unload_Ena	pshm->P[9840]
#define	gVs_Unload_Sta	pshm->P[9841]
#define	gVs_Unload_Seq	pshm->P[9842]
#define	gVs_Unload_Buf	pshm->P[9843]
#define	gVs_Unload_Tmr	pshm->P[9844]
#define	gVs_Unload_Err	pshm->P[9845]
#define	gVs_Unload_VelX	pshm->P[9846]
#define	gVs_Unload_VelY	pshm->P[9847]
#define	gVs_Unload_VelC	pshm->P[9848]
#define	gVs_Unload_PosX	pshm->P[9849]
#define	gVs_Unload_PosY	pshm->P[9850]
#define	gVs_Unload_PosC	pshm->P[9851]
#define	gVs_Unload_Time	pshm->P[9852]
#define	gVs_Unload_TimeBuf	pshm->P[9853]
#define	gVs_Reject_Start	pshm->P[9854]
#define	gVs_Reject_Abort	pshm->P[9855]
#define	gVs_Reject_Ena	pshm->P[9856]
#define	gVs_Reject_Sta	pshm->P[9857]
#define	gVs_Reject_Seq	pshm->P[9858]
#define	gVs_Reject_Buf	pshm->P[9859]
#define	gVs_Reject_Tmr	pshm->P[9860]
#define	gVs_Reject_Err	pshm->P[9861]
#define	gVs_Reject_VelX	pshm->P[9862]
#define	gVs_Reject_VelY	pshm->P[9863]
#define	gVs_Reject_VelC	pshm->P[9864]
#define	gVs_Reject_PosX	pshm->P[9865]
#define	gVs_Reject_PosY	pshm->P[9866]
#define	gVs_Reject_PosC	pshm->P[9867]
#define	gVs_Reject_Time	pshm->P[9868]
#define	gVs_Reject_TimeBuf	pshm->P[9869]
#define	gWs_CldInpos_Delay	pshm->P[9870]
#define	gVs_CldInpos_Delay	pshm->P[9871]
#define	gWs_CldIn_CoverUD	pshm->P[9872]
#define	gWs_CldIn_CoverFB	pshm->P[9873]
#define	gWs_CldIn_TempFB	pshm->P[9874]
#define	gWs_CldIn_ShtrOC	pshm->P[9875]
#define	gVs_CldIn_CoverUD	pshm->P[9876]
#define	gVs_CldIn_CoverFB	pshm->P[9877]
#define	gTr_CldIn_PickerUD	pshm->P[9878]
#define	gTr_CldIn_PickerOC	pshm->P[9879]
#define	gWs_Epr_OutVdc	pshm->P[9880]
#define	gWs_EcldHome_Start	pshm->P[9881]
#define	gWs_EcldHome_Abort	pshm->P[9882]
#define	gWs_EcldHome_Ena	pshm->P[9883]
#define	gWs_EcldHome_Sta	pshm->P[9884]
#define	gWs_EcldHome_Seq	pshm->P[9885]
#define	gWs_EcldHome_Buf	pshm->P[9886]
#define	gWs_EcldHome_Tmr	pshm->P[9887]
#define	gWs_EcldHome_Err	pshm->P[9888]
#define	gWs_EcldHome_Try	pshm->P[9889]
#define	gWs_EcldHome_Fin	pshm->P[9890]
#define	gWs_EcldFwd_Start	pshm->P[9891]
#define	gWs_EcldFwd_Abort	pshm->P[9892]
#define	gWs_EcldFwd_Ena	pshm->P[9893]
#define	gWs_EcldFwd_Sta	pshm->P[9894]
#define	gWs_EcldFwd_Seq	pshm->P[9895]
#define	gWs_EcldFwd_Buf	pshm->P[9896]
#define	gWs_EcldFwd_Tmr	pshm->P[9897]
#define	gWs_EcldFwd_Err	pshm->P[9898]
#define	gWs_EcldFwd_Try	pshm->P[9899]
#define	gWs_EcldBwd_Start	pshm->P[9900]
#define	gWs_EcldBwd_Abort	pshm->P[9901]
#define	gWs_EcldBwd_Ena	pshm->P[9902]
#define	gWs_EcldBwd_Sta	pshm->P[9903]
#define	gWs_EcldBwd_Seq	pshm->P[9904]
#define	gWs_EcldBwd_Buf	pshm->P[9905]
#define	gWs_EcldBwd_Tmr	pshm->P[9906]
#define	gWs_EcldBwd_Err	pshm->P[9907]
#define	gWs_EcldBwd_Try	pshm->P[9908]
#define	gWs_EcldCmdFwd_Cur	pshm->P[9909]
#define	gWs_EcldCmdFwd_Old	pshm->P[9910]
#define	gWs_EcldCmdBwd_Cur	pshm->P[9911]
#define	gWs_EcldCmdBwd_Old	pshm->P[9912]
#define	gWs_TestShot_Ena	pshm->P[9913]
#define	gWs_TestShot_Time	pshm->P[9914]
#define	gVs_TestShot_Ena	pshm->P[9915]
#define	gVs_TestShot_Time	pshm->P[9916]
#define	gVs_TestShot_TimeBuf	pshm->P[9917]
#define	gVs_TestShot_Seq	pshm->P[9918]
#define	gVs_TestShot_Tmr	pshm->P[9919]
#define	gWs_LaserSta_Ready	pshm->P[9920]
#define	gWs_LaserSta_Enable	pshm->P[9921]
#define	gWs_LaserSta_CorePower	pshm->P[9922]
#define	gWs_LaserSta_RingPower	pshm->P[9923]
#define	gWs_LaserEnable_Start	pshm->P[9924]
#define	gWs_LaserEnable_Abort	pshm->P[9925]
#define	gWs_LaserEnable_Ena	pshm->P[9926]
#define	gWs_LaserEnable_Sta	pshm->P[9927]
#define	gWs_LaserEnable_Seq	pshm->P[9928]
#define	gWs_LaserEnable_Buf	pshm->P[9929]
#define	gWs_LaserEnable_Tmr	pshm->P[9930]
#define	gWs_LaserEnable_Err	pshm->P[9931]
#define	gWs_LaserDisable_Start	pshm->P[9932]
#define	gWs_LaserDisable_Abort	pshm->P[9933]
#define	gWs_LaserDisable_Ena	pshm->P[9934]
#define	gWs_LaserDisable_Sta	pshm->P[9935]
#define	gWs_LaserDisable_Seq	pshm->P[9936]
#define	gWs_LaserDisable_Buf	pshm->P[9937]
#define	gWs_LaserDisable_Tmr	pshm->P[9938]
#define	gWs_LaserDisable_Err	pshm->P[9939]
#define	gWs_LaserTestCross_Start	pshm->P[9940]
#define	gWs_LaserTestCross_Abort	pshm->P[9941]
#define	gWs_LaserTestCross_Ena	pshm->P[9942]
#define	gWs_LaserTestCross_Sta	pshm->P[9943]
#define	gWs_LaserTestCross_Seq	pshm->P[9944]
#define	gWs_LaserTestCross_Buf	pshm->P[9945]
#define	gWs_LaserTestCross_Tmr	pshm->P[9946]
#define	gWs_LaserTestCross_Err	pshm->P[9947]
#define	gWs_LaserTestLine_Start	pshm->P[9948]
#define	gWs_LaserTestLine_Abort	pshm->P[9949]
#define	gWs_LaserTestLine_Ena	pshm->P[9950]
#define	gWs_LaserTestLine_Sta	pshm->P[9951]
#define	gWs_LaserTestLine_Seq	pshm->P[9952]
#define	gWs_LaserTestLine_Buf	pshm->P[9953]
#define	gWs_LaserTestLine_Tmr	pshm->P[9954]
#define	gWs_LaserTestLine_Err	pshm->P[9955]
#define	gWs_TgtMov_Start	pshm->P[9956]
#define	gWs_TgtMov_Abort	pshm->P[9957]
#define	gWs_TgtMov_Ena	pshm->P[9958]
#define	gWs_TgtMov_Sta	pshm->P[9959]
#define	gWs_TgtMov_Seq	pshm->P[9960]
#define	gWs_TgtMov_Buf	pshm->P[9961]
#define	gWs_TgtMov_Tmr	pshm->P[9962]
#define	gWs_TgtMov_Err	pshm->P[9963]
#define	gVs_TgtMov_Start	pshm->P[9964]
#define	gVs_TgtMov_Abort	pshm->P[9965]
#define	gVs_TgtMov_Ena	pshm->P[9966]
#define	gVs_TgtMov_Sta	pshm->P[9967]
#define	gVs_TgtMov_Seq	pshm->P[9968]
#define	gVs_TgtMov_Buf	pshm->P[9969]
#define	gVs_TgtMov_Tmr	pshm->P[9970]
#define	gVs_TgtMov_Err	pshm->P[9971]
#define	gWs_TgtMov_VelX	pshm->P[9972]
#define	gWs_TgtMov_VelY	pshm->P[9973]
#define	gWs_TgtMov_VelC	pshm->P[9974]
#define	gWs_TgtMov_PosX	pshm->P[9975]
#define	gWs_TgtMov_PosY	pshm->P[9976]
#define	gWs_TgtMov_PosC	pshm->P[9977]
#define	gVs_TgtMov_VelX	pshm->P[9978]
#define	gVs_TgtMov_VelY	pshm->P[9979]
#define	gVs_TgtMov_VelC	pshm->P[9980]
#define	gVs_TgtMov_PosX	pshm->P[9981]
#define	gVs_TgtMov_PosY	pshm->P[9982]
#define	gVs_TgtMov_PosC	pshm->P[9983]
#define	gWs_CoverOpn_TgtAng	pshm->P[9984]
#define	gWs_CoverOpn_Start	pshm->P[9985]
#define	gWs_CoverOpn_Abort	pshm->P[9986]
#define	gWs_CoverOpn_Ena	pshm->P[9987]
#define	gWs_CoverOpn_Sta	pshm->P[9988]
#define	gWs_CoverOpn_Seq	pshm->P[9989]
#define	gWs_CoverOpn_Buf	pshm->P[9990]
#define	gWs_CoverOpn_Tmr	pshm->P[9991]
#define	gWs_CoverOpn_Err	pshm->P[9992]
#define	gWs_CoverCls_Start	pshm->P[9993]
#define	gWs_CoverCls_Abort	pshm->P[9994]
#define	gWs_CoverCls_Ena	pshm->P[9995]
#define	gWs_CoverCls_Sta	pshm->P[9996]
#define	gWs_CoverCls_Seq	pshm->P[9997]
#define	gWs_CoverCls_Buf	pshm->P[9998]
#define	gWs_CoverCls_Tmr	pshm->P[9999]
#define	gWs_CoverCls_Err	pshm->P[10000]
#define	gWsV_CoverOpn_Start	pshm->P[10001]
#define	gWsV_CoverOpn_Abort	pshm->P[10002]
#define	gWsV_CoverOpn_Ena	pshm->P[10003]
#define	gWsV_CoverOpn_Sta	pshm->P[10004]
#define	gWsV_CoverOpn_Seq	pshm->P[10005]
#define	gWsV_CoverOpn_Buf	pshm->P[10006]
#define	gWsV_CoverOpn_Tmr	pshm->P[10007]
#define	gWsV_CoverOpn_Err	pshm->P[10008]
#define	gWsV_CoverCls_Start	pshm->P[10009]
#define	gWsV_CoverCls_Abort	pshm->P[10010]
#define	gWsV_CoverCls_Ena	pshm->P[10011]
#define	gWsV_CoverCls_Sta	pshm->P[10012]
#define	gWsV_CoverCls_Seq	pshm->P[10013]
#define	gWsV_CoverCls_Buf	pshm->P[10014]
#define	gWsV_CoverCls_Tmr	pshm->P[10015]
#define	gWsV_CoverCls_Err	pshm->P[10016]
#define	gWsV_Cover_Cur	pshm->P[10017]
#define	gVs_CoverOpn_Start	pshm->P[10018]
#define	gVs_CoverOpn_Abort	pshm->P[10019]
#define	gVs_CoverOpn_Ena	pshm->P[10020]
#define	gVs_CoverOpn_Sta	pshm->P[10021]
#define	gVs_CoverOpn_Seq	pshm->P[10022]
#define	gVs_CoverOpn_Buf	pshm->P[10023]
#define	gVs_CoverOpn_Tmr	pshm->P[10024]
#define	gVs_CoverOpn_Err	pshm->P[10025]
#define	gVs_CoverCls_Start	pshm->P[10026]
#define	gVs_CoverCls_Abort	pshm->P[10027]
#define	gVs_CoverCls_Ena	pshm->P[10028]
#define	gVs_CoverCls_Sta	pshm->P[10029]
#define	gVs_CoverCls_Seq	pshm->P[10030]
#define	gVs_CoverCls_Buf	pshm->P[10031]
#define	gVs_CoverCls_Tmr	pshm->P[10032]
#define	gVs_CoverCls_Err	pshm->P[10033]
#define	gWs_ThCoverPos_Old	pshm->P[10034]
#define	gVs_ThCoverPos_Old	pshm->P[10035]
#define	gWs_ThTargetPos_Old	pshm->P[10036]
#define	gVs_ThTargetPos_Old	pshm->P[10037]
#define	gWs_CoverMoving_Sta	pshm->P[10038]
#define	gVs_CoverMoving_Sta	pshm->P[10039]
#define	gBlow_Time	pshm->P[10040]
#define	gWs_PowerCheck_Start	pshm->P[10041]
#define	gWs_PowerCheck_Abort	pshm->P[10042]
#define	gWs_PowerCheck_Ena	pshm->P[10043]
#define	gWs_PowerCheck_Time	pshm->P[10044]
#define	gWs_PowerCheck_TimeBuf	pshm->P[10045]
#define	gWs_PowerCheck_Seq	pshm->P[10046]
#define	gWs_PowerCheck_Tmr	pshm->P[10047]
#define	gVs_PostVisionST_Start	pshm->P[10048]
#define	gVs_PostVisionST_Abort	pshm->P[10049]
#define	gVs_PostVisionST_Ena	pshm->P[10050]
#define	gVs_PostVisionST_Sta	pshm->P[10051]
#define	gVs_PostVisionST_Seq	pshm->P[10052]
#define	gVs_PostVisionST_Buf	pshm->P[10053]
#define	gVs_PostVisionST_Tmr	pshm->P[10054]
#define	gVs_PostVisionST_Err	pshm->P[10055]
#define	gVs_PostVisionED_Start	pshm->P[10056]
#define	gVs_PostVisionED_Abort	pshm->P[10057]
#define	gVs_PostVisionED_Ena	pshm->P[10058]
#define	gVs_PostVisionED_Sta	pshm->P[10059]
#define	gVs_PostVisionED_Seq	pshm->P[10060]
#define	gVs_PostVisionED_Buf	pshm->P[10061]
#define	gVs_PostVisionED_Tmr	pshm->P[10062]
#define	gVs_PostVisionED_Err	pshm->P[10063]
#define	gWs_Skip_N2	pshm->P[10064]
#define	gN2BlowState	pshm->P[10065]
#define	gN2BlowOld	pshm->P[10066]
#define	gN2BlowTime	pshm->P[10067]
#define	gIsWsCoverComplete	pshm->P[10068]
#define	gIsVsCoverComplete	pshm->P[10069]
#define	gIsWStationReady	pshm->P[10070]
#define	gIsVStationReady	pshm->P[10071]
#define	gKin_Sf(i)	pshm->P[(10072+i)%MAX_P]
#define	gKin_RotOffset(i)	pshm->P[(10104+i)%MAX_P]
#define	gKin_Len1	pshm->P[10136]
#define	gKin_Len2	pshm->P[10137]
#define	gKin_GalvoSfX	pshm->P[10138]
#define	gKin_GalvoSfY	pshm->P[10139]
#define	gMc_SeqBuf_Idx	pshm->P[10140]
#define	gWs_SeqBuf_Cur	pshm->P[10141]
#define	gWs_SeqBuf_Old	pshm->P[10142]
#define	gVs_SeqBuf_Cur	pshm->P[10143]
#define	gVs_SeqBuf_Old	pshm->P[10144]
#define	gScMon_GalvoAngX	pshm->P[10145]
#define	gScMon_GalvoAngY	pshm->P[10146]
#define	Len_X	pshm->P[10147]
#define	Len_Y	pshm->P[10148]
#define	Len_R	pshm->P[10149]
#define	gMc_TransTest_Start	pshm->P[10150]
#define	gMc_TransTest_Abort	pshm->P[10151]
#define	gMc_TransTest_Ena	pshm->P[10152]
#define	gMc_TransTest_Sta	pshm->P[10153]
#define	gMc_TransTest_Seq	pshm->P[10154]
#define	gMc_TransTest_Buf	pshm->P[10155]
#define	gMc_TransTest_Tmr	pshm->P[10156]
#define	gMc_TransTest_Err	pshm->P[10157]
#define	gMc_TransTest_Vel	pshm->P[10158]
#define	gRspSim_PdtNo	pshm->P[10159]
#define	gRspSim_LdAlignX	pshm->P[10160]
#define	gRspSim_LdAlignY	pshm->P[10161]
#define	gRspSim_LdAlignC	pshm->P[10162]
#define	gRspSim_LdDirRep	pshm->P[10163]
#define	gRspSim_2dVsnRsp	pshm->P[10164]
#define	gRspSim_3dVsnRsp	pshm->P[10165]
#define	gRspSim_LdDirJug	pshm->P[10166]
#define	gRspSim_2dVsnJug	pshm->P[10167]
#define	gRspSim_3dVsnJug	pshm->P[10168]
#define	gRspSim_LdDirRat	pshm->P[10169]
#define	gRspSim_2dVsnRat	pshm->P[10170]
#define	gRspSim_3dVsnRat	pshm->P[10171]
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
,gWs_CorePowSf=8227
,gWs_CoreRefPow=8228
,gWs_CoreMinPow=8229
,gWs_CoreMaxPow=8230
,gWs_CoreOutPow=8231
,gWs_CoreOutVdc=8232
,gWs_CorePfmEna=8233
,gWs_RingPowSf=8234
,gWs_RingRefPow=8235
,gWs_RingMinPow=8236
,gWs_RingMaxPow=8237
,gWs_RingOutPow=8238
,gWs_RingOutVdc=8239
,gWs_RingPfmEna=8240
,gWs_PfmRtiCnt=8241
,gWs_PfmPeriod=8242
,gWs_PfmOnTime=8243
,gWs_PfmOnCnt=8244
,gWs_PfmOut=8245
,gWs_PfmBuf=8246
,gWs_PfmCnt=8247
,gWs_WblEna=8248
,gWs_WblLen=8249
,gWs_WblDst=8250
,gWs_WblCnt=8251
,gWs_WblType=8252
,gWs_WblRatW=8253
,gWs_WblRatL=8254
,gWs_WblOfsX=8255
,gWs_WblOfsY=8256
,gVs_AccLimitX=8257
,gVs_AccLimitY=8258
,gVs_AccLimitC=8259
,gVs_VelLimitC=8260
,gVs_PosX_Cur=8261
,gVs_PosY_Cur=8262
,gVs_PosX_Old=8263
,gVs_PosY_Old=8264
,gVs_PosX_Dlt=8265
,gVs_PosY_Dlt=8266
,gVs_PosV_Dlt=8267
,gVs_Vect_Vel=8268
,gVs_Vect_Sum=8269
,gVs_RefVel=8270
,gVs_PfmPeriod=8271
,gVs_PfmDuty=8272
,gVs_EquEna=8273
,gVs_EquCnt=8274
,gVs_EquSta_Cur=8275
,gVs_EquSta_Old=8276
,gSc_PosX_Cur=8277
,gSc_PosY_Cur=8278
,gSta_Idx=8279
,gCmd_Idx=8280
,gMc_ServoOn_Cur=8857
,gMc_ServoOn_Old=8858
,gMc_ServoOff_Cur=8859
,gMc_ServoOff_Old=8860
,gMc_HomeStart_Cur=8861
,gMc_HomeStart_Old=8862
,gMc_HomeAbort_Cur=8863
,gMc_HomeAbort_Old=8864
,gMc_AlarmReset_Cur=8865
,gMc_AlarmReset_Old=8866
,gMc_RunMod_Cur=8867
,gMc_RunMod_Old=8868
,gMc_AutoStart_Cur=8869
,gMc_AutoStart_Old=8870
,gMc_AutoAbort_Cur=8871
,gMc_AutoAbort_Old=8872
,gMc_AutoPause_Cur=8873
,gMc_AutoPause_Old=8874
,gMc_CycleStart_Cur=8875
,gMc_CycleStart_Old=8876
,gMc_StepStart_Cur=8877
,gMc_StepStart_Old=8878
,gMc_Fsave_Cur=8879
,gMc_Fsave_Old=8880
,gWs_ServoOn_Cur=8881
,gWs_ServoOn_Old=8882
,gWs_ServoOff_Cur=8883
,gWs_ServoOff_Old=8884
,gWs_HomeStart_Cur=8885
,gWs_HomeStart_Old=8886
,gWs_HomeAbort_Cur=8887
,gWs_HomeAbort_Old=8888
,gWs_AlarmReset_Cur=8889
,gWs_AlarmReset_Old=8890
,gWs_AlarmRetry_Cur=8891
,gWs_AlarmRetry_Old=8892
,gWs_AlarmAbort_Cur=8893
,gWs_AlarmAbort_Old=8894
,gWs_PowerCheck_Cur=8895
,gWs_PowerCheck_Old=8896
,gWs_TestShot_Cur=8897
,gWs_TestShot_Old=8898
,gWs_LaserEnableStart_Cur=8899
,gWs_LaserEnableStart_Old=8900
,gWs_LaserDisableStart_Cur=8901
,gWs_LaserDisableStart_Old=8902
,gWs_LaserTestCrossStart_Cur=8903
,gWs_LaserTestCrossStart_Old=8904
,gWs_LaserTestCrossAbort_Cur=8905
,gWs_LaserTestCrossAbort_Old=8906
,gWs_LaserTestLineStart_Cur=8907
,gWs_LaserTestLineStart_Old=8908
,gWs_LaserTestLineAbort_Cur=8909
,gWs_LaserTestLineAbort_Old=8910
,gVs_ServoOn_Cur=8911
,gVs_ServoOn_Old=8912
,gVs_ServoOff_Cur=8913
,gVs_ServoOff_Old=8914
,gVs_HomeStart_Cur=8915
,gVs_HomeStart_Old=8916
,gVs_HomeAbort_Cur=8917
,gVs_HomeAbort_Old=8918
,gVs_AlarmReset_Cur=8919
,gVs_AlarmReset_Old=8920
,gVs_AlarmRetry_Cur=8921
,gVs_AlarmRetry_Old=8922
,gVs_AlarmAbort_Cur=8923
,gVs_AlarmAbort_Old=8924
,gVs_TestShot_Cur=8925
,gVs_TestShot_Old=8926
,gSc_ServoOn_Cur=8927
,gSc_ServoOn_Old=8928
,gSc_ServoOff_Cur=8929
,gSc_ServoOff_Old=8930
,gSc_HomeStart_Cur=8931
,gSc_HomeStart_Old=8932
,gSc_HomeAbort_Cur=8933
,gSc_HomeAbort_Old=8934
,gSc_AlarmReset_Cur=8935
,gSc_AlarmReset_Old=8936
,gWs_LdStart_Cur=8937
,gWs_LdAbort_Cur=8938
,gWs_LdStart_Old=8939
,gWs_LdAbort_Old=8940
,gWs_RdStart_Cur=8941
,gWs_RdAbort_Cur=8942
,gWs_RdStart_Old=8943
,gWs_RdAbort_Old=8944
,gWs_WdStart_Cur=8945
,gWs_WdAbort_Cur=8946
,gWs_WdStart_Old=8947
,gWs_WdAbort_Old=8948
,gWs_WtStart_Cur=8949
,gWs_WtAbort_Cur=8950
,gWs_WtStart_Old=8951
,gWs_WtAbort_Old=8952
,gWs_UdStart_Cur=8953
,gWs_UdAbort_Cur=8954
,gWs_UdStart_Old=8955
,gWs_UdAbort_Old=8956
,gWs_RjStart_Cur=8957
,gWs_RjAbort_Cur=8958
,gWs_RjStart_Old=8959
,gWs_RjAbort_Old=8960
,gVs_LdStart_Cur=8961
,gVs_LdAbort_Cur=8962
,gVs_LdStart_Old=8963
,gVs_LdAbort_Old=8964
,gVs_RdStart_Cur=8965
,gVs_RdAbort_Cur=8966
,gVs_RdStart_Old=8967
,gVs_RdAbort_Old=8968
,gVs_VnStart_Cur=8969
,gVs_VnAbort_Cur=8970
,gVs_VnStart_Old=8971
,gVs_VnAbort_Old=8972
,gVs_WtStart_Cur=8973
,gVs_WtAbort_Cur=8974
,gVs_WtStart_Old=8975
,gVs_WtAbort_Old=8976
,gVs_UdStart_Cur=8977
,gVs_UdAbort_Cur=8978
,gVs_UdStart_Old=8979
,gVs_UdAbort_Old=8980
,gVs_RjStart_Cur=8981
,gVs_RjAbort_Cur=8982
,gVs_RjStart_Old=8983
,gVs_RjAbort_Old=8984
,gWs_PdtStaChange_Cur=8985
,gVs_PdtStaChange_Cur=8986
,gTr_PdtStaChange_Cur=8987
,gWs_PdtStaChange_Old=8988
,gVs_PdtStaChange_Old=8989
,gTr_PdtStaChange_Old=8990
,gWs_Error=8991
,gVs_Error=8992
,gWs_ErrCode=8993
,gVs_ErrCode=8994
,gWs_Error_Cur=8995
,gWs_Error_Old=8996
,gVs_Error_Cur=8997
,gVs_Error_Old=8998
,gSc_Com_Sta=8999
,gEc_WdTimer=9000
,gMc_DistX_Cur=9001
,gMc_DistX_Err=9002
,gWs_Safety_Sta=9003
,gVs_Safety_Sta=9004
,gWs_Safety_Err=9005
,gVs_Safety_Err=9006
,gMc_AlarmReset_Ena=9007
,gWs_AlarmReset_Ena=9008
,gVs_AlarmReset_Ena=9009
,gSc_AlarmReset_Ena=9010
,gWs_AlarmRetry_Ena=9011
,gVs_AlarmRetry_Ena=9012
,gWs_AlarmAbort_Ena=9013
,gVs_AlarmAbort_Ena=9014
,gEc_Con_Start=9047
,gEc_Con_Abort=9048
,gEc_Con_Ena=9049
,gEc_Con_Sta=9050
,gEc_Con_Seq=9051
,gEc_Con_Buf=9052
,gEc_Con_Tmr=9053
,gMt_Home_Idx=9054
,gMc_Home_Start=9343
,gMc_Home_Abort=9344
,gMc_Home_Ena=9345
,gMc_Home_Sta=9346
,gMc_Home_Seq=9347
,gMc_Home_Buf=9348
,gMc_Home_Tmr=9349
,gMc_Home_Err=9350
,gWs_Home_Start=9351
,gWs_Home_Abort=9352
,gWs_Home_Ena=9353
,gWs_Home_Sta=9354
,gWs_Home_Seq=9355
,gWs_Home_Buf=9356
,gWs_Home_Tmr=9357
,gWs_Home_Err=9358
,gVs_Home_Start=9359
,gVs_Home_Abort=9360
,gVs_Home_Ena=9361
,gVs_Home_Sta=9362
,gVs_Home_Seq=9363
,gVs_Home_Buf=9364
,gVs_Home_Tmr=9365
,gVs_Home_Err=9366
,gSc_Home_Start=9367
,gSc_Home_Abort=9368
,gSc_Home_Ena=9369
,gSc_Home_Sta=9370
,gSc_Home_Seq=9371
,gSc_Home_Buf=9372
,gSc_Home_Tmr=9373
,gSc_Home_Err=9374
,gSc_InitSta=9375
,gJog_Idx=9376
,gMc_ServoOn_Ena=9441
,gMc_ServoOff_Ena=9442
,gWs_ServoOn_Ena=9443
,gWs_ServoOff_Ena=9444
,gVs_ServoOn_Ena=9445
,gVs_ServoOff_Ena=9446
,gSc_ServoOn_Ena=9447
,gSc_ServoOff_Ena=9448
,gWs_PdtNo=9609
,gVs_PdtNo=9610
,gTr_PdtNo=9611
,gWs_LdDir=9612
,gMc_AutoRun_Start=9613
,gMc_AutoRun_Abort=9614
,gMc_AutoRun_Pause=9615
,gMc_Cycle_Start=9616
,gMc_Step_Start=9617
,gMc_AutoRun_Ena=9618
,gMc_AutoRun_Sta=9619
,gMc_AutoRun_Seq=9620
,gMc_AutoRun_Buf=9621
,gMc_AutoRun_Tmr=9622
,gMc_AutoRun_Err=9623
,gWs_Loop_Start=9624
,gWs_Loop_Abort=9625
,gWs_Loop_Pause=9626
,gWs_Loop_Ena=9627
,gWs_Loop_Sta=9628
,gWs_Loop_Seq=9629
,gWs_Loop_Buf=9630
,gWs_Loop_Tmr=9631
,gWs_Loop_Err=9632
,gWs_Loop_Time=9633
,gWs_Loop_TimeBuf=9634
,gWs_Seq_Cur=9635
,gWs_Seq_Old=9636
,gWs_Seq_Err=9637
,gVs_Loop_Start=9638
,gVs_Loop_Abort=9639
,gVs_Loop_Pause=9640
,gVs_Loop_Ena=9641
,gVs_Loop_Sta=9642
,gVs_Loop_Seq=9643
,gVs_Loop_Buf=9644
,gVs_Loop_Tmr=9645
,gVs_Loop_Err=9646
,gVs_Loop_Time=9647
,gVs_Loop_TimeBuf=9648
,gVs_Seq_Cur=9649
,gVs_Seq_Old=9650
,gVs_Seq_Err=9651
,gWs_Sta_Pdt=9652
,gVs_Sta_Pdt=9653
,gTr_Sta_Pdt=9654
,gWs_Sta_PdtBuf=9655
,gVs_Sta_PdtBuf=9656
,gTr_Sta_PdtBuf=9657
,gWs_Sta_Stg=9658
,gVs_Sta_Stg=9659
,gWs_Pos_Pdt=9660
,gVs_Pos_Pdt=9661
,gWs_Pos_Stg=9662
,gVs_Pos_Stg=9663
,gWs_PdtStaChange_Ena=9664
,gVs_PdtStaChange_Ena=9665
,gTr_PdtStaChange_Ena=9666
,gWs_Load_Start=9667
,gWs_Load_Abort=9668
,gWs_Load_Ena=9669
,gWs_Load_Sta=9670
,gWs_Load_Seq=9671
,gWs_Load_Buf=9672
,gWs_Load_Tmr=9673
,gWs_Load_Err=9674
,gWs_Load_VelX=9675
,gWs_Load_VelY=9676
,gWs_Load_VelC=9677
,gWs_Load_PosX=9678
,gWs_Load_PosY=9679
,gWs_Load_PosC=9680
,gWs_Load_Time=9681
,gWs_Load_TimeBuf=9682
,gWs_Ready_Start=9683
,gWs_Ready_Abort=9684
,gWs_Ready_Ena=9685
,gWs_Ready_Sta=9686
,gWs_Ready_Seq=9687
,gWs_Ready_Buf=9688
,gWs_Ready_Tmr=9689
,gWs_Ready_Err=9690
,gWs_Ready_VelX=9691
,gWs_Ready_VelY=9692
,gWs_Ready_VelC=9693
,gWs_Ready_PosX=9694
,gWs_Ready_PosY=9695
,gWs_Ready_PosC=9696
,gWs_Ready_Time=9697
,gWs_Ready_TimeBuf=9698
,gWs_Ready_VsnJudge=9699
,gWs_Welding_Start=9700
,gWs_Welding_Abort=9701
,gWs_Welding_Ena=9702
,gWs_Welding_Sta=9703
,gWs_Welding_Seq=9704
,gWs_Welding_Buf=9705
,gWs_Welding_Tmr=9706
,gWs_Welding_Err=9707
,gWs_Welding_VelX=9708
,gWs_Welding_VelY=9709
,gWs_Welding_VelC=9710
,gWs_Welding_PosX=9711
,gWs_Welding_PosY=9712
,gWs_Welding_PosC=9713
,gWs_Welding_Time=9714
,gWs_Welding_TimeBuf=9715
,gWs_Prog_Dist=9716
,gWs_Prog_Time=9717
,gWs_Prog_TimeBuf=9718
,gWs_File_Prog_Time=9719
,gWs_File_Prog_TimeBuf=9720
,gWs_Wait_Start=9721
,gWs_Wait_Abort=9722
,gWs_Wait_Ena=9723
,gWs_Wait_Sta=9724
,gWs_Wait_Seq=9725
,gWs_Wait_Buf=9726
,gWs_Wait_Tmr=9727
,gWs_Wait_Err=9728
,gWs_Wait_VelX=9729
,gWs_Wait_VelY=9730
,gWs_Wait_VelC=9731
,gWs_Wait_PosX=9732
,gWs_Wait_PosY=9733
,gWs_Wait_PosC=9734
,gWs_Wait_Time=9735
,gWs_Wait_TimeBuf=9736
,gWs_Unload_Start=9737
,gWs_Unload_Abort=9738
,gWs_Unload_Ena=9739
,gWs_Unload_Sta=9740
,gWs_Unload_Seq=9741
,gWs_Unload_Buf=9742
,gWs_Unload_Tmr=9743
,gWs_Unload_Err=9744
,gWs_Unload_VelX=9745
,gWs_Unload_VelY=9746
,gWs_Unload_VelC=9747
,gWs_Unload_PosX=9748
,gWs_Unload_PosY=9749
,gWs_Unload_PosC=9750
,gWs_Unload_Time=9751
,gWs_Unload_TimeBuf=9752
,gWs_Reject_Start=9753
,gWs_Reject_Abort=9754
,gWs_Reject_Ena=9755
,gWs_Reject_Sta=9756
,gWs_Reject_Seq=9757
,gWs_Reject_Buf=9758
,gWs_Reject_Tmr=9759
,gWs_Reject_Err=9760
,gWs_Reject_VelX=9761
,gWs_Reject_VelY=9762
,gWs_Reject_VelC=9763
,gWs_Reject_PosX=9764
,gWs_Reject_PosY=9765
,gWs_Reject_PosC=9766
,gWs_Reject_Time=9767
,gWs_Reject_TimeBuf=9768
,gVs_Load_Start=9769
,gVs_Load_Abort=9770
,gVs_Load_Ena=9771
,gVs_Load_Sta=9772
,gVs_Load_Seq=9773
,gVs_Load_Buf=9774
,gVs_Load_Tmr=9775
,gVs_Load_Err=9776
,gVs_Load_VelX=9777
,gVs_Load_VelY=9778
,gVs_Load_VelC=9779
,gVs_Load_PosX=9780
,gVs_Load_PosY=9781
,gVs_Load_PosC=9782
,gVs_Load_Time=9783
,gVs_Load_TimeBuf=9784
,gVs_Ready_Start=9785
,gVs_Ready_Abort=9786
,gVs_Ready_Ena=9787
,gVs_Ready_Sta=9788
,gVs_Ready_Seq=9789
,gVs_Ready_Buf=9790
,gVs_Ready_Tmr=9791
,gVs_Ready_Err=9792
,gVs_Ready_VelX=9793
,gVs_Ready_VelY=9794
,gVs_Ready_VelC=9795
,gVs_Ready_PosX=9796
,gVs_Ready_PosY=9797
,gVs_Ready_PosC=9798
,gVs_Ready_Time=9799
,gVs_Ready_TimeBuf=9800
,gVs_Ready_VsnJudge=9801
,gVs_Vision_Start=9802
,gVs_Vision_Abort=9803
,gVs_Vision_Ena=9804
,gVs_Vision_Sta=9805
,gVs_Vision_Seq=9806
,gVs_Vision_Buf=9807
,gVs_Vision_Tmr=9808
,gVs_Vision_Err=9809
,gVs_Vision_VelX=9810
,gVs_Vision_VelY=9811
,gVs_Vision_VelC=9812
,gVs_Vision_PosX=9813
,gVs_Vision_PosY=9814
,gVs_Vision_PosC=9815
,gVs_Vision_Time=9816
,gVs_Vision_TimeBuf=9817
,gVs_Prog_Dist=9818
,gVs_Prog_Time=9819
,gVs_Prog_TimeBuf=9820
,gVs_Vision_VsnJudge=9821
,gVs_Wait_Start=9822
,gVs_Wait_Abort=9823
,gVs_Wait_Ena=9824
,gVs_Wait_Sta=9825
,gVs_Wait_Seq=9826
,gVs_Wait_Buf=9827
,gVs_Wait_Tmr=9828
,gVs_Wait_Err=9829
,gVs_Wait_VelX=9830
,gVs_Wait_VelY=9831
,gVs_Wait_VelC=9832
,gVs_Wait_PosX=9833
,gVs_Wait_PosY=9834
,gVs_Wait_PosC=9835
,gVs_Wait_Time=9836
,gVs_Wait_TimeBuf=9837
,gVs_Unload_Start=9838
,gVs_Unload_Abort=9839
,gVs_Unload_Ena=9840
,gVs_Unload_Sta=9841
,gVs_Unload_Seq=9842
,gVs_Unload_Buf=9843
,gVs_Unload_Tmr=9844
,gVs_Unload_Err=9845
,gVs_Unload_VelX=9846
,gVs_Unload_VelY=9847
,gVs_Unload_VelC=9848
,gVs_Unload_PosX=9849
,gVs_Unload_PosY=9850
,gVs_Unload_PosC=9851
,gVs_Unload_Time=9852
,gVs_Unload_TimeBuf=9853
,gVs_Reject_Start=9854
,gVs_Reject_Abort=9855
,gVs_Reject_Ena=9856
,gVs_Reject_Sta=9857
,gVs_Reject_Seq=9858
,gVs_Reject_Buf=9859
,gVs_Reject_Tmr=9860
,gVs_Reject_Err=9861
,gVs_Reject_VelX=9862
,gVs_Reject_VelY=9863
,gVs_Reject_VelC=9864
,gVs_Reject_PosX=9865
,gVs_Reject_PosY=9866
,gVs_Reject_PosC=9867
,gVs_Reject_Time=9868
,gVs_Reject_TimeBuf=9869
,gWs_CldInpos_Delay=9870
,gVs_CldInpos_Delay=9871
,gWs_CldIn_CoverUD=9872
,gWs_CldIn_CoverFB=9873
,gWs_CldIn_TempFB=9874
,gWs_CldIn_ShtrOC=9875
,gVs_CldIn_CoverUD=9876
,gVs_CldIn_CoverFB=9877
,gTr_CldIn_PickerUD=9878
,gTr_CldIn_PickerOC=9879
,gWs_Epr_OutVdc=9880
,gWs_EcldHome_Start=9881
,gWs_EcldHome_Abort=9882
,gWs_EcldHome_Ena=9883
,gWs_EcldHome_Sta=9884
,gWs_EcldHome_Seq=9885
,gWs_EcldHome_Buf=9886
,gWs_EcldHome_Tmr=9887
,gWs_EcldHome_Err=9888
,gWs_EcldHome_Try=9889
,gWs_EcldHome_Fin=9890
,gWs_EcldFwd_Start=9891
,gWs_EcldFwd_Abort=9892
,gWs_EcldFwd_Ena=9893
,gWs_EcldFwd_Sta=9894
,gWs_EcldFwd_Seq=9895
,gWs_EcldFwd_Buf=9896
,gWs_EcldFwd_Tmr=9897
,gWs_EcldFwd_Err=9898
,gWs_EcldFwd_Try=9899
,gWs_EcldBwd_Start=9900
,gWs_EcldBwd_Abort=9901
,gWs_EcldBwd_Ena=9902
,gWs_EcldBwd_Sta=9903
,gWs_EcldBwd_Seq=9904
,gWs_EcldBwd_Buf=9905
,gWs_EcldBwd_Tmr=9906
,gWs_EcldBwd_Err=9907
,gWs_EcldBwd_Try=9908
,gWs_EcldCmdFwd_Cur=9909
,gWs_EcldCmdFwd_Old=9910
,gWs_EcldCmdBwd_Cur=9911
,gWs_EcldCmdBwd_Old=9912
,gWs_TestShot_Ena=9913
,gWs_TestShot_Time=9914
,gVs_TestShot_Ena=9915
,gVs_TestShot_Time=9916
,gVs_TestShot_TimeBuf=9917
,gVs_TestShot_Seq=9918
,gVs_TestShot_Tmr=9919
,gWs_LaserSta_Ready=9920
,gWs_LaserSta_Enable=9921
,gWs_LaserSta_CorePower=9922
,gWs_LaserSta_RingPower=9923
,gWs_LaserEnable_Start=9924
,gWs_LaserEnable_Abort=9925
,gWs_LaserEnable_Ena=9926
,gWs_LaserEnable_Sta=9927
,gWs_LaserEnable_Seq=9928
,gWs_LaserEnable_Buf=9929
,gWs_LaserEnable_Tmr=9930
,gWs_LaserEnable_Err=9931
,gWs_LaserDisable_Start=9932
,gWs_LaserDisable_Abort=9933
,gWs_LaserDisable_Ena=9934
,gWs_LaserDisable_Sta=9935
,gWs_LaserDisable_Seq=9936
,gWs_LaserDisable_Buf=9937
,gWs_LaserDisable_Tmr=9938
,gWs_LaserDisable_Err=9939
,gWs_LaserTestCross_Start=9940
,gWs_LaserTestCross_Abort=9941
,gWs_LaserTestCross_Ena=9942
,gWs_LaserTestCross_Sta=9943
,gWs_LaserTestCross_Seq=9944
,gWs_LaserTestCross_Buf=9945
,gWs_LaserTestCross_Tmr=9946
,gWs_LaserTestCross_Err=9947
,gWs_LaserTestLine_Start=9948
,gWs_LaserTestLine_Abort=9949
,gWs_LaserTestLine_Ena=9950
,gWs_LaserTestLine_Sta=9951
,gWs_LaserTestLine_Seq=9952
,gWs_LaserTestLine_Buf=9953
,gWs_LaserTestLine_Tmr=9954
,gWs_LaserTestLine_Err=9955
,gWs_TgtMov_Start=9956
,gWs_TgtMov_Abort=9957
,gWs_TgtMov_Ena=9958
,gWs_TgtMov_Sta=9959
,gWs_TgtMov_Seq=9960
,gWs_TgtMov_Buf=9961
,gWs_TgtMov_Tmr=9962
,gWs_TgtMov_Err=9963
,gVs_TgtMov_Start=9964
,gVs_TgtMov_Abort=9965
,gVs_TgtMov_Ena=9966
,gVs_TgtMov_Sta=9967
,gVs_TgtMov_Seq=9968
,gVs_TgtMov_Buf=9969
,gVs_TgtMov_Tmr=9970
,gVs_TgtMov_Err=9971
,gWs_TgtMov_VelX=9972
,gWs_TgtMov_VelY=9973
,gWs_TgtMov_VelC=9974
,gWs_TgtMov_PosX=9975
,gWs_TgtMov_PosY=9976
,gWs_TgtMov_PosC=9977
,gVs_TgtMov_VelX=9978
,gVs_TgtMov_VelY=9979
,gVs_TgtMov_VelC=9980
,gVs_TgtMov_PosX=9981
,gVs_TgtMov_PosY=9982
,gVs_TgtMov_PosC=9983
,gWs_CoverOpn_TgtAng=9984
,gWs_CoverOpn_Start=9985
,gWs_CoverOpn_Abort=9986
,gWs_CoverOpn_Ena=9987
,gWs_CoverOpn_Sta=9988
,gWs_CoverOpn_Seq=9989
,gWs_CoverOpn_Buf=9990
,gWs_CoverOpn_Tmr=9991
,gWs_CoverOpn_Err=9992
,gWs_CoverCls_Start=9993
,gWs_CoverCls_Abort=9994
,gWs_CoverCls_Ena=9995
,gWs_CoverCls_Sta=9996
,gWs_CoverCls_Seq=9997
,gWs_CoverCls_Buf=9998
,gWs_CoverCls_Tmr=9999
,gWs_CoverCls_Err=10000
,gWsV_CoverOpn_Start=10001
,gWsV_CoverOpn_Abort=10002
,gWsV_CoverOpn_Ena=10003
,gWsV_CoverOpn_Sta=10004
,gWsV_CoverOpn_Seq=10005
,gWsV_CoverOpn_Buf=10006
,gWsV_CoverOpn_Tmr=10007
,gWsV_CoverOpn_Err=10008
,gWsV_CoverCls_Start=10009
,gWsV_CoverCls_Abort=10010
,gWsV_CoverCls_Ena=10011
,gWsV_CoverCls_Sta=10012
,gWsV_CoverCls_Seq=10013
,gWsV_CoverCls_Buf=10014
,gWsV_CoverCls_Tmr=10015
,gWsV_CoverCls_Err=10016
,gWsV_Cover_Cur=10017
,gVs_CoverOpn_Start=10018
,gVs_CoverOpn_Abort=10019
,gVs_CoverOpn_Ena=10020
,gVs_CoverOpn_Sta=10021
,gVs_CoverOpn_Seq=10022
,gVs_CoverOpn_Buf=10023
,gVs_CoverOpn_Tmr=10024
,gVs_CoverOpn_Err=10025
,gVs_CoverCls_Start=10026
,gVs_CoverCls_Abort=10027
,gVs_CoverCls_Ena=10028
,gVs_CoverCls_Sta=10029
,gVs_CoverCls_Seq=10030
,gVs_CoverCls_Buf=10031
,gVs_CoverCls_Tmr=10032
,gVs_CoverCls_Err=10033
,gWs_ThCoverPos_Old=10034
,gVs_ThCoverPos_Old=10035
,gWs_ThTargetPos_Old=10036
,gVs_ThTargetPos_Old=10037
,gWs_CoverMoving_Sta=10038
,gVs_CoverMoving_Sta=10039
,gBlow_Time=10040
,gWs_PowerCheck_Start=10041
,gWs_PowerCheck_Abort=10042
,gWs_PowerCheck_Ena=10043
,gWs_PowerCheck_Time=10044
,gWs_PowerCheck_TimeBuf=10045
,gWs_PowerCheck_Seq=10046
,gWs_PowerCheck_Tmr=10047
,gVs_PostVisionST_Start=10048
,gVs_PostVisionST_Abort=10049
,gVs_PostVisionST_Ena=10050
,gVs_PostVisionST_Sta=10051
,gVs_PostVisionST_Seq=10052
,gVs_PostVisionST_Buf=10053
,gVs_PostVisionST_Tmr=10054
,gVs_PostVisionST_Err=10055
,gVs_PostVisionED_Start=10056
,gVs_PostVisionED_Abort=10057
,gVs_PostVisionED_Ena=10058
,gVs_PostVisionED_Sta=10059
,gVs_PostVisionED_Seq=10060
,gVs_PostVisionED_Buf=10061
,gVs_PostVisionED_Tmr=10062
,gVs_PostVisionED_Err=10063
,gWs_Skip_N2=10064
,gN2BlowState=10065
,gN2BlowOld=10066
,gN2BlowTime=10067
,gIsWsCoverComplete=10068
,gIsVsCoverComplete=10069
,gIsWStationReady=10070
,gIsVStationReady=10071
,gKin_Len1=10136
,gKin_Len2=10137
,gKin_GalvoSfX=10138
,gKin_GalvoSfY=10139
,gMc_SeqBuf_Idx=10140
,gWs_SeqBuf_Cur=10141
,gWs_SeqBuf_Old=10142
,gVs_SeqBuf_Cur=10143
,gVs_SeqBuf_Old=10144
,gScMon_GalvoAngX=10145
,gScMon_GalvoAngY=10146
,Len_X=10147
,Len_Y=10148
,Len_R=10149
,gMc_TransTest_Start=10150
,gMc_TransTest_Abort=10151
,gMc_TransTest_Ena=10152
,gMc_TransTest_Sta=10153
,gMc_TransTest_Seq=10154
,gMc_TransTest_Buf=10155
,gMc_TransTest_Tmr=10156
,gMc_TransTest_Err=10157
,gMc_TransTest_Vel=10158
,gRspSim_PdtNo=10159
,gRspSim_LdAlignX=10160
,gRspSim_LdAlignY=10161
,gRspSim_LdAlignC=10162
,gRspSim_LdDirRep=10163
,gRspSim_2dVsnRsp=10164
,gRspSim_3dVsnRsp=10165
,gRspSim_LdDirJug=10166
,gRspSim_2dVsnJug=10167
,gRspSim_3dVsnJug=10168
,gRspSim_LdDirRat=10169
,gRspSim_2dVsnRat=10170
,gRspSim_3dVsnRat=10171};
enum globalParray {_globalParray_=-1
,gMt_HomeStart_Cur=8281
,gMt_HomeStart_Old=8313
,gMt_HomeAbort_Cur=8345
,gMt_HomeAbort_Old=8377
,gMt_ServoOn_Cur=8409
,gMt_ServoOn_Old=8441
,gMt_ServoOff_Cur=8473
,gMt_ServoOff_Old=8505
,gMt_Jog_Stop_Cur=8537
,gMt_Jog_Stop_Old=8569
,gMt_Jog_ContPlus_Cur=8601
,gMt_Jog_ContPlus_Old=8633
,gMt_Jog_ContMinus_Cur=8665
,gMt_Jog_ContMinus_Old=8697
,gMt_Jog_AbsMove_Cur=8729
,gMt_Jog_AbsMove_Old=8761
,gMt_Jog_IncMove_Cur=8793
,gMt_Jog_IncMove_Old=8825
,gEc_Com_Sta=9015
,gMt_Home_Start=9055
,gMt_Home_Abort=9087
,gMt_Home_Ena=9119
,gMt_Home_Sta=9151
,gMt_Home_Seq=9183
,gMt_Home_Buf=9215
,gMt_Home_Tmr=9247
,gMt_Home_Err=9279
,gMt_Home_Pos=9311
,gMt_ServoOn_Ena=9377
,gMt_ServoOff_Ena=9409
,gJog_Stop_Ena=9449
,gJog_ContPlus_Ena=9481
,gJog_ContMinus_Ena=9513
,gJog_AbsMove_Ena=9545
,gJog_IncMove_Ena=9577
,gKin_Sf=10072
,gKin_RotOffset=10104};
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
,pEcat_Ti00_Ws_TempSen1=8362
,pEcat_Ti01_Ws_TempSen2=8363
,pBuf_Ti00_Ws_TempSen1=8364
,pBuf_Ti01_Ws_TempSen2=8365
,pGpio_Di00=8558
,pGpio_Di01_LaserReady=8559
,pGpio_Di02_LaserReqResp=8560
,pGpio_Di03_LaserPowerOn=8561
,pGpio_Di04_LaserProgRun=8562
,pGpio_Di05_LaserWarning=8563
,pGpio_Di06_LaserAbnormal=8564
,pGpio_Di07=8565
,pGpio_Di08=8566
,pGpio_Di09=8567
,pGpio_Di0A=8568
,pGpio_Di0B=8569
,pGpio_Di0C=8570
,pGpio_Di0D=8571
,pGpio_Di0E=8572
,pGpio_Di0F=8573
,pGpio_Do00_LaserEmission=8574
,pGpio_Do01_LaserReset=8575
,pGpio_Do02_LaserRequest=8576
,pGpio_Do03_LaserPowerOn=8577
,pGpio_Do04_LaserAdInEna=8578
,pGpio_Do05_LaserGuideEna=8579
,pGpio_Do06_LaserProgEna=8580
,pGpio_Do07_LaserProgStop=8581
,pGpio_Do08=8582
,pGpio_Do09=8583
,pGpio_Do0A=8584
,pGpio_Do0B=8585
,pGpio_Do0C=8586
,pGpio_Do0D=8587
,pGpio_Do0E=8588
,pGpio_Do0F=8589
,pUmem_Sta_01_CmdPos=8590
,pUmem_Sta_01_ActPos=8591
,pUmem_Sta_01_Velocity=8592
,pUmem_Sta_01_Load=8593
,pUmem_Sta_01_AmpEna=8594
,pUmem_Sta_01_CloseLoop=8595
,pUmem_Sta_01_InPos=8596
,pUmem_Sta_01_HomeFin=8597
,pUmem_Sta_01_HomeIng=8598
,pUmem_Sta_01_LimitMinus=8599
,pUmem_Sta_01_LimitPlus=8600
,pUmem_Sta_01_FollowingErr=8601
,pUmem_Sta_01_AmpFault=8602
,pUmem_Sta_01_EncLoss=8603
,pUmem_Sta_01_I2tErr=8604
,pUmem_Sta_01_ProgPos=8605
,pUmem_Sta_TBD_2750=8606
,pUmem_Sta_TBD_2754=8607
,pUmem_Sta_TBD_2758=8608
,pUmem_Sta_TBD_275C=8609
,pUmem_Sta_02_CmdPos=8610
,pUmem_Sta_02_ActPos=8611
,pUmem_Sta_02_Velocity=8612
,pUmem_Sta_02_Load=8613
,pUmem_Sta_02_AmpEna=8614
,pUmem_Sta_02_CloseLoop=8615
,pUmem_Sta_02_InPos=8616
,pUmem_Sta_02_HomeFin=8617
,pUmem_Sta_02_HomeIng=8618
,pUmem_Sta_02_LimitMinus=8619
,pUmem_Sta_02_LimitPlus=8620
,pUmem_Sta_02_FollowingErr=8621
,pUmem_Sta_02_AmpFault=8622
,pUmem_Sta_02_EncLoss=8623
,pUmem_Sta_02_I2tErr=8624
,pUmem_Sta_02_ProgPos=8625
,pUmem_Sta_TBD_27A0=8626
,pUmem_Sta_TBD_27A4=8627
,pUmem_Sta_TBD_27A8=8628
,pUmem_Sta_TBD_27AC=8629
,pUmem_Sta_03_CmdPos=8630
,pUmem_Sta_03_ActPos=8631
,pUmem_Sta_03_Velocity=8632
,pUmem_Sta_03_Load=8633
,pUmem_Sta_03_AmpEna=8634
,pUmem_Sta_03_CloseLoop=8635
,pUmem_Sta_03_InPos=8636
,pUmem_Sta_03_HomeFin=8637
,pUmem_Sta_03_HomeIng=8638
,pUmem_Sta_03_LimitMinus=8639
,pUmem_Sta_03_LimitPlus=8640
,pUmem_Sta_03_FollowingErr=8641
,pUmem_Sta_03_AmpFault=8642
,pUmem_Sta_03_EncLoss=8643
,pUmem_Sta_03_I2tErr=8644
,pUmem_Sta_03_ProgPos=8645
,pUmem_Sta_TBD_27F0=8646
,pUmem_Sta_TBD_27F4=8647
,pUmem_Sta_TBD_27F8=8648
,pUmem_Sta_TBD_27FC=8649
,pUmem_Sta_04_CmdPos=8650
,pUmem_Sta_04_ActPos=8651
,pUmem_Sta_04_Velocity=8652
,pUmem_Sta_04_Load=8653
,pUmem_Sta_04_AmpEna=8654
,pUmem_Sta_04_CloseLoop=8655
,pUmem_Sta_04_InPos=8656
,pUmem_Sta_04_HomeFin=8657
,pUmem_Sta_04_HomeIng=8658
,pUmem_Sta_04_LimitMinus=8659
,pUmem_Sta_04_LimitPlus=8660
,pUmem_Sta_04_FollowingErr=8661
,pUmem_Sta_04_AmpFault=8662
,pUmem_Sta_04_EncLoss=8663
,pUmem_Sta_04_I2tErr=8664
,pUmem_Sta_04_ProgPos=8665
,pUmem_Sta_TBD_2840=8666
,pUmem_Sta_TBD_2844=8667
,pUmem_Sta_TBD_2848=8668
,pUmem_Sta_TBD_284C=8669
,pUmem_Sta_05_CmdPos=8670
,pUmem_Sta_05_ActPos=8671
,pUmem_Sta_05_Velocity=8672
,pUmem_Sta_05_Load=8673
,pUmem_Sta_05_AmpEna=8674
,pUmem_Sta_05_CloseLoop=8675
,pUmem_Sta_05_InPos=8676
,pUmem_Sta_05_HomeFin=8677
,pUmem_Sta_05_HomeIng=8678
,pUmem_Sta_05_LimitMinus=8679
,pUmem_Sta_05_LimitPlus=8680
,pUmem_Sta_05_FollowingErr=8681
,pUmem_Sta_05_AmpFault=8682
,pUmem_Sta_05_EncLoss=8683
,pUmem_Sta_05_I2tErr=8684
,pUmem_Sta_05_ProgPos=8685
,pUmem_Sta_TBD_2890=8686
,pUmem_Sta_TBD_2894=8687
,pUmem_Sta_TBD_2898=8688
,pUmem_Sta_TBD_289C=8689
,pUmem_Sta_06_CmdPos=8690
,pUmem_Sta_06_ActPos=8691
,pUmem_Sta_06_Velocity=8692
,pUmem_Sta_06_Load=8693
,pUmem_Sta_06_AmpEna=8694
,pUmem_Sta_06_CloseLoop=8695
,pUmem_Sta_06_InPos=8696
,pUmem_Sta_06_HomeFin=8697
,pUmem_Sta_06_HomeIng=8698
,pUmem_Sta_06_LimitMinus=8699
,pUmem_Sta_06_LimitPlus=8700
,pUmem_Sta_06_FollowingErr=8701
,pUmem_Sta_06_AmpFault=8702
,pUmem_Sta_06_EncLoss=8703
,pUmem_Sta_06_I2tErr=8704
,pUmem_Sta_06_ProgPos=8705
,pUmem_Sta_TBD_28E0=8706
,pUmem_Sta_TBD_28E4=8707
,pUmem_Sta_TBD_28E8=8708
,pUmem_Sta_TBD_28EC=8709
,pUmem_Sta_07_CmdPos=8710
,pUmem_Sta_07_ActPos=8711
,pUmem_Sta_07_Velocity=8712
,pUmem_Sta_07_Load=8713
,pUmem_Sta_07_AmpEna=8714
,pUmem_Sta_07_CloseLoop=8715
,pUmem_Sta_07_InPos=8716
,pUmem_Sta_07_HomeFin=8717
,pUmem_Sta_07_HomeIng=8718
,pUmem_Sta_07_LimitMinus=8719
,pUmem_Sta_07_LimitPlus=8720
,pUmem_Sta_07_FollowingErr=8721
,pUmem_Sta_07_AmpFault=8722
,pUmem_Sta_07_EncLoss=8723
,pUmem_Sta_07_I2tErr=8724
,pUmem_Sta_07_ProgPos=8725
,pUmem_Sta_TBD_2930=8726
,pUmem_Sta_TBD_2934=8727
,pUmem_Sta_TBD_2938=8728
,pUmem_Sta_TBD_293C=8729
,pUmem_Sta_08_CmdPos=8730
,pUmem_Sta_08_ActPos=8731
,pUmem_Sta_08_Velocity=8732
,pUmem_Sta_08_Load=8733
,pUmem_Sta_08_AmpEna=8734
,pUmem_Sta_08_CloseLoop=8735
,pUmem_Sta_08_InPos=8736
,pUmem_Sta_08_HomeFin=8737
,pUmem_Sta_08_HomeIng=8738
,pUmem_Sta_08_LimitMinus=8739
,pUmem_Sta_08_LimitPlus=8740
,pUmem_Sta_08_FollowingErr=8741
,pUmem_Sta_08_AmpFault=8742
,pUmem_Sta_08_EncLoss=8743
,pUmem_Sta_08_I2tErr=8744
,pUmem_Sta_08_ProgPos=8745
,pUmem_Sta_TBD_2980=8746
,pUmem_Sta_TBD_2984=8747
,pUmem_Sta_TBD_2988=8748
,pUmem_Sta_TBD_298C=8749
,pUmem_Sta_09_CmdPos=8750
,pUmem_Sta_09_ActPos=8751
,pUmem_Sta_09_Velocity=8752
,pUmem_Sta_09_Load=8753
,pUmem_Sta_09_AmpEna=8754
,pUmem_Sta_09_CloseLoop=8755
,pUmem_Sta_09_InPos=8756
,pUmem_Sta_09_HomeFin=8757
,pUmem_Sta_09_HomeIng=8758
,pUmem_Sta_09_LimitMinus=8759
,pUmem_Sta_09_LimitPlus=8760
,pUmem_Sta_09_FollowingErr=8761
,pUmem_Sta_09_AmpFault=8762
,pUmem_Sta_09_EncLoss=8763
,pUmem_Sta_09_I2tErr=8764
,pUmem_Sta_09_ProgPos=8765
,pUmem_Sta_TBD_29D0=8766
,pUmem_Sta_TBD_29D4=8767
,pUmem_Sta_TBD_29D8=8768
,pUmem_Sta_TBD_29DC=8769
,pUmem_Sta_10_CmdPos=8770
,pUmem_Sta_10_ActPos=8771
,pUmem_Sta_10_Velocity=8772
,pUmem_Sta_10_Load=8773
,pUmem_Sta_10_AmpEna=8774
,pUmem_Sta_10_CloseLoop=8775
,pUmem_Sta_10_InPos=8776
,pUmem_Sta_10_HomeFin=8777
,pUmem_Sta_10_HomeIng=8778
,pUmem_Sta_10_LimitMinus=8779
,pUmem_Sta_10_LimitPlus=8780
,pUmem_Sta_10_FollowingErr=8781
,pUmem_Sta_10_AmpFault=8782
,pUmem_Sta_10_EncLoss=8783
,pUmem_Sta_10_I2tErr=8784
,pUmem_Sta_10_ProgPos=8785
,pUmem_Sta_TBD_2A20=8786
,pUmem_Sta_TBD_2A24=8787
,pUmem_Sta_TBD_2A28=8788
,pUmem_Sta_TBD_2A2C=8789
,pUmem_Sta_11_CmdPos=8790
,pUmem_Sta_11_ActPos=8791
,pUmem_Sta_11_Velocity=8792
,pUmem_Sta_11_Load=8793
,pUmem_Sta_11_AmpEna=8794
,pUmem_Sta_11_CloseLoop=8795
,pUmem_Sta_11_InPos=8796
,pUmem_Sta_11_HomeFin=8797
,pUmem_Sta_11_HomeIng=8798
,pUmem_Sta_11_LimitMinus=8799
,pUmem_Sta_11_LimitPlus=8800
,pUmem_Sta_11_FollowingErr=8801
,pUmem_Sta_11_AmpFault=8802
,pUmem_Sta_11_EncLoss=8803
,pUmem_Sta_11_I2tErr=8804
,pUmem_Sta_11_ProgPos=8805
,pUmem_Sta_TBD_2A70=8806
,pUmem_Sta_TBD_2A74=8807
,pUmem_Sta_TBD_2A78=8808
,pUmem_Sta_TBD_2A7C=8809
,pUmem_Sta_12_CmdPos=8810
,pUmem_Sta_12_ActPos=8811
,pUmem_Sta_12_Velocity=8812
,pUmem_Sta_12_Load=8813
,pUmem_Sta_12_AmpEna=8814
,pUmem_Sta_12_CloseLoop=8815
,pUmem_Sta_12_InPos=8816
,pUmem_Sta_12_HomeFin=8817
,pUmem_Sta_12_HomeIng=8818
,pUmem_Sta_12_LimitMinus=8819
,pUmem_Sta_12_LimitPlus=8820
,pUmem_Sta_12_FollowingErr=8821
,pUmem_Sta_12_AmpFault=8822
,pUmem_Sta_12_EncLoss=8823
,pUmem_Sta_12_I2tErr=8824
,pUmem_Sta_12_ProgPos=8825
,pUmem_Sta_TBD_2AC0=8826
,pUmem_Sta_TBD_2AC4=8827
,pUmem_Sta_TBD_2AC8=8828
,pUmem_Sta_TBD_2ACC=8829
,pUmem_Sta_13_CmdPos=8830
,pUmem_Sta_13_ActPos=8831
,pUmem_Sta_13_Velocity=8832
,pUmem_Sta_13_Load=8833
,pUmem_Sta_13_AmpEna=8834
,pUmem_Sta_13_CloseLoop=8835
,pUmem_Sta_13_InPos=8836
,pUmem_Sta_13_HomeFin=8837
,pUmem_Sta_13_HomeIng=8838
,pUmem_Sta_13_LimitMinus=8839
,pUmem_Sta_13_LimitPlus=8840
,pUmem_Sta_13_FollowingErr=8841
,pUmem_Sta_13_AmpFault=8842
,pUmem_Sta_13_EncLoss=8843
,pUmem_Sta_13_I2tErr=8844
,pUmem_Sta_13_ProgPos=8845
,pUmem_Sta_TBD_2B10=8846
,pUmem_Sta_TBD_2B14=8847
,pUmem_Sta_TBD_2B18=8848
,pUmem_Sta_TBD_2B1C=8849
,pUmem_Sta_14_CmdPos=8850
,pUmem_Sta_14_ActPos=8851
,pUmem_Sta_14_Velocity=8852
,pUmem_Sta_14_Load=8853
,pUmem_Sta_14_AmpEna=8854
,pUmem_Sta_14_CloseLoop=8855
,pUmem_Sta_14_InPos=8856
,pUmem_Sta_14_HomeFin=8857
,pUmem_Sta_14_HomeIng=8858
,pUmem_Sta_14_LimitMinus=8859
,pUmem_Sta_14_LimitPlus=8860
,pUmem_Sta_14_FollowingErr=8861
,pUmem_Sta_14_AmpFault=8862
,pUmem_Sta_14_EncLoss=8863
,pUmem_Sta_14_I2tErr=8864
,pUmem_Sta_14_ProgPos=8865
,pUmem_Sta_TBD_2B60=8866
,pUmem_Sta_TBD_2B64=8867
,pUmem_Sta_TBD_2B68=8868
,pUmem_Sta_TBD_2B6C=8869
,pUmem_Sta_15_CmdPos=8870
,pUmem_Sta_15_ActPos=8871
,pUmem_Sta_15_Velocity=8872
,pUmem_Sta_15_Load=8873
,pUmem_Sta_15_AmpEna=8874
,pUmem_Sta_15_CloseLoop=8875
,pUmem_Sta_15_InPos=8876
,pUmem_Sta_15_HomeFin=8877
,pUmem_Sta_15_HomeIng=8878
,pUmem_Sta_15_LimitMinus=8879
,pUmem_Sta_15_LimitPlus=8880
,pUmem_Sta_15_FollowingErr=8881
,pUmem_Sta_15_AmpFault=8882
,pUmem_Sta_15_EncLoss=8883
,pUmem_Sta_15_I2tErr=8884
,pUmem_Sta_15_ProgPos=8885
,pUmem_Sta_TBD_2BB0=8886
,pUmem_Sta_TBD_2BB4=8887
,pUmem_Sta_TBD_2BB8=8888
,pUmem_Sta_TBD_2BBC=8889
,pUmem_Sta_16_CmdPos=8890
,pUmem_Sta_16_ActPos=8891
,pUmem_Sta_16_Velocity=8892
,pUmem_Sta_16_Load=8893
,pUmem_Sta_16_AmpEna=8894
,pUmem_Sta_16_CloseLoop=8895
,pUmem_Sta_16_InPos=8896
,pUmem_Sta_16_HomeFin=8897
,pUmem_Sta_16_HomeIng=8898
,pUmem_Sta_16_LimitMinus=8899
,pUmem_Sta_16_LimitPlus=8900
,pUmem_Sta_16_FollowingErr=8901
,pUmem_Sta_16_AmpFault=8902
,pUmem_Sta_16_EncLoss=8903
,pUmem_Sta_16_I2tErr=8904
,pUmem_Sta_16_ProgPos=8905
,pUmem_Sta_TBD_2C00=8906
,pUmem_Sta_TBD_2C04=8907
,pUmem_Sta_TBD_2C08=8908
,pUmem_Sta_TBD_2C0C=8909
,pUmem_Sta_17_CmdPos=8910
,pUmem_Sta_17_ActPos=8911
,pUmem_Sta_17_Velocity=8912
,pUmem_Sta_17_Load=8913
,pUmem_Sta_17_AmpEna=8914
,pUmem_Sta_17_CloseLoop=8915
,pUmem_Sta_17_InPos=8916
,pUmem_Sta_17_HomeFin=8917
,pUmem_Sta_17_HomeIng=8918
,pUmem_Sta_17_LimitMinus=8919
,pUmem_Sta_17_LimitPlus=8920
,pUmem_Sta_17_FollowingErr=8921
,pUmem_Sta_17_AmpFault=8922
,pUmem_Sta_17_EncLoss=8923
,pUmem_Sta_17_I2tErr=8924
,pUmem_Sta_17_ProgPos=8925
,pUmem_Sta_TBD_2C50=8926
,pUmem_Sta_TBD_2C54=8927
,pUmem_Sta_TBD_2C58=8928
,pUmem_Sta_TBD_2C5C=8929
,pUmem_Sta_18_CmdPos=8930
,pUmem_Sta_18_ActPos=8931
,pUmem_Sta_18_Velocity=8932
,pUmem_Sta_18_Load=8933
,pUmem_Sta_18_AmpEna=8934
,pUmem_Sta_18_CloseLoop=8935
,pUmem_Sta_18_InPos=8936
,pUmem_Sta_18_HomeFin=8937
,pUmem_Sta_18_HomeIng=8938
,pUmem_Sta_18_LimitMinus=8939
,pUmem_Sta_18_LimitPlus=8940
,pUmem_Sta_18_FollowingErr=8941
,pUmem_Sta_18_AmpFault=8942
,pUmem_Sta_18_EncLoss=8943
,pUmem_Sta_18_I2tErr=8944
,pUmem_Sta_18_ProgPos=8945
,pUmem_Sta_TBD_2CA0=8946
,pUmem_Sta_TBD_2CA4=8947
,pUmem_Sta_TBD_2CA8=8948
,pUmem_Sta_TBD_2CAC=8949
,pUmem_Sta_19_CmdPos=8950
,pUmem_Sta_19_ActPos=8951
,pUmem_Sta_19_Velocity=8952
,pUmem_Sta_19_Load=8953
,pUmem_Sta_19_AmpEna=8954
,pUmem_Sta_19_CloseLoop=8955
,pUmem_Sta_19_InPos=8956
,pUmem_Sta_19_HomeFin=8957
,pUmem_Sta_19_HomeIng=8958
,pUmem_Sta_19_LimitMinus=8959
,pUmem_Sta_19_LimitPlus=8960
,pUmem_Sta_19_FollowingErr=8961
,pUmem_Sta_19_AmpFault=8962
,pUmem_Sta_19_EncLoss=8963
,pUmem_Sta_19_I2tErr=8964
,pUmem_Sta_19_ProgPos=8965
,pUmem_Sta_TBD_2CF0=8966
,pUmem_Sta_TBD_2CF4=8967
,pUmem_Sta_TBD_2CF8=8968
,pUmem_Sta_TBD_2CFC=8969
,pUmem_Sta_20_CmdPos=8970
,pUmem_Sta_20_ActPos=8971
,pUmem_Sta_20_Velocity=8972
,pUmem_Sta_20_Load=8973
,pUmem_Sta_20_AmpEna=8974
,pUmem_Sta_20_CloseLoop=8975
,pUmem_Sta_20_InPos=8976
,pUmem_Sta_20_HomeFin=8977
,pUmem_Sta_20_HomeIng=8978
,pUmem_Sta_20_LimitMinus=8979
,pUmem_Sta_20_LimitPlus=8980
,pUmem_Sta_20_FollowingErr=8981
,pUmem_Sta_20_AmpFault=8982
,pUmem_Sta_20_EncLoss=8983
,pUmem_Sta_20_I2tErr=8984
,pUmem_Sta_20_ProgPos=8985
,pUmem_Sta_TBD_2D40=8986
,pUmem_Sta_TBD_2D44=8987
,pUmem_Sta_TBD_2D48=8988
,pUmem_Sta_TBD_2D4C=8989
,pUmem_Sta_21_CmdPos=8990
,pUmem_Sta_21_ActPos=8991
,pUmem_Sta_21_Velocity=8992
,pUmem_Sta_21_Load=8993
,pUmem_Sta_21_AmpEna=8994
,pUmem_Sta_21_CloseLoop=8995
,pUmem_Sta_21_InPos=8996
,pUmem_Sta_21_HomeFin=8997
,pUmem_Sta_21_HomeIng=8998
,pUmem_Sta_21_LimitMinus=8999
,pUmem_Sta_21_LimitPlus=9000
,pUmem_Sta_21_FollowingErr=9001
,pUmem_Sta_21_AmpFault=9002
,pUmem_Sta_21_EncLoss=9003
,pUmem_Sta_21_I2tErr=9004
,pUmem_Sta_21_ProgPos=9005
,pUmem_Sta_TBD_2D90=9006
,pUmem_Sta_TBD_2D94=9007
,pUmem_Sta_TBD_2D98=9008
,pUmem_Sta_TBD_2D9C=9009
,pUmem_Sta_22_CmdPos=9010
,pUmem_Sta_22_ActPos=9011
,pUmem_Sta_22_Velocity=9012
,pUmem_Sta_22_Load=9013
,pUmem_Sta_22_AmpEna=9014
,pUmem_Sta_22_CloseLoop=9015
,pUmem_Sta_22_InPos=9016
,pUmem_Sta_22_HomeFin=9017
,pUmem_Sta_22_HomeIng=9018
,pUmem_Sta_22_LimitMinus=9019
,pUmem_Sta_22_LimitPlus=9020
,pUmem_Sta_22_FollowingErr=9021
,pUmem_Sta_22_AmpFault=9022
,pUmem_Sta_22_EncLoss=9023
,pUmem_Sta_22_I2tErr=9024
,pUmem_Sta_22_ProgPos=9025
,pUmem_Sta_TBD_2DE0=9026
,pUmem_Sta_TBD_2DE4=9027
,pUmem_Sta_TBD_2DE8=9028
,pUmem_Sta_TBD_2DEC=9029
,pUmem_Sta_23_CmdPos=9030
,pUmem_Sta_23_ActPos=9031
,pUmem_Sta_23_Velocity=9032
,pUmem_Sta_23_Load=9033
,pUmem_Sta_23_AmpEna=9034
,pUmem_Sta_23_CloseLoop=9035
,pUmem_Sta_23_InPos=9036
,pUmem_Sta_23_HomeFin=9037
,pUmem_Sta_23_HomeIng=9038
,pUmem_Sta_23_LimitMinus=9039
,pUmem_Sta_23_LimitPlus=9040
,pUmem_Sta_23_FollowingErr=9041
,pUmem_Sta_23_AmpFault=9042
,pUmem_Sta_23_EncLoss=9043
,pUmem_Sta_23_I2tErr=9044
,pUmem_Sta_23_ProgPos=9045
,pUmem_Sta_TBD_2E30=9046
,pUmem_Sta_TBD_2E34=9047
,pUmem_Sta_TBD_2E38=9048
,pUmem_Sta_TBD_2E3C=9049
,pUmem_Sta_24_CmdPos=9050
,pUmem_Sta_24_ActPos=9051
,pUmem_Sta_24_Velocity=9052
,pUmem_Sta_24_Load=9053
,pUmem_Sta_24_AmpEna=9054
,pUmem_Sta_24_CloseLoop=9055
,pUmem_Sta_24_InPos=9056
,pUmem_Sta_24_HomeFin=9057
,pUmem_Sta_24_HomeIng=9058
,pUmem_Sta_24_LimitMinus=9059
,pUmem_Sta_24_LimitPlus=9060
,pUmem_Sta_24_FollowingErr=9061
,pUmem_Sta_24_AmpFault=9062
,pUmem_Sta_24_EncLoss=9063
,pUmem_Sta_24_I2tErr=9064
,pUmem_Sta_24_ProgPos=9065
,pUmem_Sta_TBD_2E80=9066
,pUmem_Sta_TBD_2E84=9067
,pUmem_Sta_TBD_2E88=9068
,pUmem_Sta_TBD_2E8C=9069
,pUmem_Sta_25_CmdPos=9070
,pUmem_Sta_25_ActPos=9071
,pUmem_Sta_25_Velocity=9072
,pUmem_Sta_25_Load=9073
,pUmem_Sta_25_AmpEna=9074
,pUmem_Sta_25_CloseLoop=9075
,pUmem_Sta_25_InPos=9076
,pUmem_Sta_25_HomeFin=9077
,pUmem_Sta_25_HomeIng=9078
,pUmem_Sta_25_LimitMinus=9079
,pUmem_Sta_25_LimitPlus=9080
,pUmem_Sta_25_FollowingErr=9081
,pUmem_Sta_25_AmpFault=9082
,pUmem_Sta_25_EncLoss=9083
,pUmem_Sta_25_I2tErr=9084
,pUmem_Sta_25_ProgPos=9085
,pUmem_Sta_TBD_2ED0=9086
,pUmem_Sta_TBD_2ED4=9087
,pUmem_Sta_TBD_2ED8=9088
,pUmem_Sta_TBD_2EDC=9089
,pUmem_Sta_26_CmdPos=9090
,pUmem_Sta_26_ActPos=9091
,pUmem_Sta_26_Velocity=9092
,pUmem_Sta_26_Load=9093
,pUmem_Sta_26_AmpEna=9094
,pUmem_Sta_26_CloseLoop=9095
,pUmem_Sta_26_InPos=9096
,pUmem_Sta_26_HomeFin=9097
,pUmem_Sta_26_HomeIng=9098
,pUmem_Sta_26_LimitMinus=9099
,pUmem_Sta_26_LimitPlus=9100
,pUmem_Sta_26_FollowingErr=9101
,pUmem_Sta_26_AmpFault=9102
,pUmem_Sta_26_EncLoss=9103
,pUmem_Sta_26_I2tErr=9104
,pUmem_Sta_26_ProgPos=9105
,pUmem_Sta_TBD_2F20=9106
,pUmem_Sta_TBD_2F24=9107
,pUmem_Sta_TBD_2F28=9108
,pUmem_Sta_TBD_2F2C=9109
,pUmem_Sta_27_CmdPos=9110
,pUmem_Sta_27_ActPos=9111
,pUmem_Sta_27_Velocity=9112
,pUmem_Sta_27_Load=9113
,pUmem_Sta_27_AmpEna=9114
,pUmem_Sta_27_CloseLoop=9115
,pUmem_Sta_27_InPos=9116
,pUmem_Sta_27_HomeFin=9117
,pUmem_Sta_27_HomeIng=9118
,pUmem_Sta_27_LimitMinus=9119
,pUmem_Sta_27_LimitPlus=9120
,pUmem_Sta_27_FollowingErr=9121
,pUmem_Sta_27_AmpFault=9122
,pUmem_Sta_27_EncLoss=9123
,pUmem_Sta_27_I2tErr=9124
,pUmem_Sta_27_ProgPos=9125
,pUmem_Sta_TBD_2F70=9126
,pUmem_Sta_TBD_2F74=9127
,pUmem_Sta_TBD_2F78=9128
,pUmem_Sta_TBD_2F7C=9129
,pUmem_Sta_28_CmdPos=9130
,pUmem_Sta_28_ActPos=9131
,pUmem_Sta_28_Velocity=9132
,pUmem_Sta_28_Load=9133
,pUmem_Sta_28_AmpEna=9134
,pUmem_Sta_28_CloseLoop=9135
,pUmem_Sta_28_InPos=9136
,pUmem_Sta_28_HomeFin=9137
,pUmem_Sta_28_HomeIng=9138
,pUmem_Sta_28_LimitMinus=9139
,pUmem_Sta_28_LimitPlus=9140
,pUmem_Sta_28_FollowingErr=9141
,pUmem_Sta_28_AmpFault=9142
,pUmem_Sta_28_EncLoss=9143
,pUmem_Sta_28_I2tErr=9144
,pUmem_Sta_28_ProgPos=9145
,pUmem_Sta_TBD_2FC0=9146
,pUmem_Sta_TBD_2FC4=9147
,pUmem_Sta_TBD_2FC8=9148
,pUmem_Sta_TBD_2FCC=9149
,pUmem_Sta_29_CmdPos=9150
,pUmem_Sta_29_ActPos=9151
,pUmem_Sta_29_Velocity=9152
,pUmem_Sta_29_Load=9153
,pUmem_Sta_29_AmpEna=9154
,pUmem_Sta_29_CloseLoop=9155
,pUmem_Sta_29_InPos=9156
,pUmem_Sta_29_HomeFin=9157
,pUmem_Sta_29_HomeIng=9158
,pUmem_Sta_29_LimitMinus=9159
,pUmem_Sta_29_LimitPlus=9160
,pUmem_Sta_29_FollowingErr=9161
,pUmem_Sta_29_AmpFault=9162
,pUmem_Sta_29_EncLoss=9163
,pUmem_Sta_29_I2tErr=9164
,pUmem_Sta_29_ProgPos=9165
,pUmem_Sta_TBD_3010=9166
,pUmem_Sta_TBD_3014=9167
,pUmem_Sta_TBD_3018=9168
,pUmem_Sta_TBD_301C=9169
,pUmem_Sta_30_CmdPos=9170
,pUmem_Sta_30_ActPos=9171
,pUmem_Sta_30_Velocity=9172
,pUmem_Sta_30_Load=9173
,pUmem_Sta_30_AmpEna=9174
,pUmem_Sta_30_CloseLoop=9175
,pUmem_Sta_30_InPos=9176
,pUmem_Sta_30_HomeFin=9177
,pUmem_Sta_30_HomeIng=9178
,pUmem_Sta_30_LimitMinus=9179
,pUmem_Sta_30_LimitPlus=9180
,pUmem_Sta_30_FollowingErr=9181
,pUmem_Sta_30_AmpFault=9182
,pUmem_Sta_30_EncLoss=9183
,pUmem_Sta_30_I2tErr=9184
,pUmem_Sta_30_ProgPos=9185
,pUmem_Sta_TBD_3060=9186
,pUmem_Sta_TBD_3064=9187
,pUmem_Sta_TBD_3068=9188
,pUmem_Sta_TBD_306C=9189
,pUmem_Sta_31_CmdPos=9190
,pUmem_Sta_31_ActPos=9191
,pUmem_Sta_31_Velocity=9192
,pUmem_Sta_31_Load=9193
,pUmem_Sta_31_AmpEna=9194
,pUmem_Sta_31_CloseLoop=9195
,pUmem_Sta_31_InPos=9196
,pUmem_Sta_31_HomeFin=9197
,pUmem_Sta_31_HomeIng=9198
,pUmem_Sta_31_LimitMinus=9199
,pUmem_Sta_31_LimitPlus=9200
,pUmem_Sta_31_FollowingErr=9201
,pUmem_Sta_31_AmpFault=9202
,pUmem_Sta_31_EncLoss=9203
,pUmem_Sta_31_I2tErr=9204
,pUmem_Sta_31_ProgPos=9205
,pUmem_Sta_TBD_30B0=9206
,pUmem_Sta_TBD_30B4=9207
,pUmem_Sta_TBD_30B8=9208
,pUmem_Sta_TBD_30BC=9209
,pUmem_Sta_32_CmdPos=9210
,pUmem_Sta_32_ActPos=9211
,pUmem_Sta_32_Velocity=9212
,pUmem_Sta_32_Load=9213
,pUmem_Sta_32_AmpEna=9214
,pUmem_Sta_32_CloseLoop=9215
,pUmem_Sta_32_InPos=9216
,pUmem_Sta_32_HomeFin=9217
,pUmem_Sta_32_HomeIng=9218
,pUmem_Sta_32_LimitMinus=9219
,pUmem_Sta_32_LimitPlus=9220
,pUmem_Sta_32_FollowingErr=9221
,pUmem_Sta_32_AmpFault=9222
,pUmem_Sta_32_EncLoss=9223
,pUmem_Sta_32_I2tErr=9224
,pUmem_Sta_32_ProgPos=9225
,pUmem_Sta_TBD_3100=9226
,pUmem_Sta_TBD_3104=9227
,pUmem_Sta_TBD_3108=9228
,pUmem_Sta_TBD_310C=9229
,pUmem_Sta_Mc_AmpEna=9230
,pUmem_Sta_Mc_InPos=9231
,pUmem_Sta_Mc_Home=9232
,pUmem_Sta_Mc_HomeErr=9233
,pUmem_Sta_Mc_RunMode=9234
,pUmem_Sta_Mc_AutoRun=9235
,pUmem_Sta_Mc_EcatCon=9236
,pUmem_Sta_Mc_Error=9237
,pUmem_Sta_TBD_3AB8=9238
,pUmem_Sta_TBD_3ABC=9239
,pUmem_Sta_Mc_ID=9240
,pUmem_Sta_Mc_ErasePdtFlgWs=9241
,pUmem_Sta_Mc_ErasePdtFlgVs=9242
,pUmem_Sta_Mc_ErasePdtFlgTr=9243
,pUmem_Sta_Mc_ErasePdtNoWs=9244
,pUmem_Sta_Mc_ErasePdtNoVs=9245
,pUmem_Sta_Mc_ErasePdtNoTr=9246
,pUmem_Sta_Ws_AmpEna=9247
,pUmem_Sta_Ws_InPos=9248
,pUmem_Sta_Ws_Home=9249
,pUmem_Sta_Ws_HomeErr=9250
,pUmem_Sta_Ws_EcatCon=9251
,pUmem_Sta_Ws_Error=9252
,pUmem_Sta_Ws_ErrCode=9253
,pUmem_Sta_TBD_3E9C=9254
,pUmem_Sta_TBD_3EA0=9255
,pUmem_Sta_Ws_ProgRun=9256
,pUmem_Sta_Ws_VectorVel=9257
,pUmem_Sta_Ws_ProgTime=9258
,pUmem_Sta_Ws_PosStage=9259
,pUmem_Sta_Ws_PosProduct=9260
,pUmem_Sta_Ws_Cover=9261
,pUmem_Sta_Ws_PdtSta=9262
,pUmem_Sta_Tr_PdtSta=9263
,pUmem_Sta_Ws_LaserReady=9264
,pUmem_Sta_Ws_LaserEnable=9265
,pUmem_Sta_Ws_LaserCorePower=9266
,pUmem_Sta_Ws_LaserRingPower=9267
,pUmem_Sta_Ws_PdtNo=9268
,pUmem_Sta_TBD_3ED8=9269
,pUmem_Sta_TBD_3EDC=9270
,pUmem_Sta_TBD_3EE0=9271
,pUmem_Sta_TBD_3EE4=9272
,pUmem_Sta_TBD_3EE8=9273
,pUmem_Sta_TBD_3EEC=9274
,pUmem_Sta_TBD_3EF0=9275
,pUmem_Sta_TBD_3EF4=9276
,pUmem_Sta_Ws_LdSeq=9277
,pUmem_Sta_Ws_LdErr=9278
,pUmem_Sta_Ws_LdTime=9279
,pUmem_Sta_Ws_RdSeq=9280
,pUmem_Sta_Ws_RdErr=9281
,pUmem_Sta_Ws_RdTime=9282
,pUmem_Sta_Ws_WdSeq=9283
,pUmem_Sta_Ws_WdErr=9284
,pUmem_Sta_Ws_WdTime=9285
,pUmem_Sta_Ws_WtSeq=9286
,pUmem_Sta_Ws_WtErr=9287
,pUmem_Sta_Ws_WtTime=9288
,pUmem_Sta_Ws_UdSeq=9289
,pUmem_Sta_Ws_UdErr=9290
,pUmem_Sta_Ws_UdTime=9291
,pUmem_Sta_Ws_RjSeq=9292
,pUmem_Sta_Ws_RjErr=9293
,pUmem_Sta_Ws_RjTime=9294
,pUmem_Sta_TBD_3F40=9295
,pUmem_Sta_TBD_3F44=9296
,pUmem_Sta_TBD_3F48=9297
,pUmem_Sta_TBD_3F4C=9298
,pUmem_Sta_TBD_3F50=9299
,pUmem_Sta_TBD_3F54=9300
,pUmem_Sta_TBD_3F58=9301
,pUmem_Sta_TBD_3F5C=9302
,pUmem_Sta_TBD_3F60=9303
,pUmem_Sta_TBD_3F64=9304
,pUmem_Sta_TBD_3F68=9305
,pUmem_Sta_TBD_3F6C=9306
,pUmem_Sta_Ws_1stTransRjReq=9307
,pUmem_Sta_Ws_2ndTransLdReq=9308
,pUmem_Sta_Ws_2dVisionCkReq=9309
,pUmem_Sta_Ws_LwmStartReq=9310
,pUmem_Sta_TBD_3F80=9311
,pUmem_Sta_TBD_3F84=9312
,pUmem_Sta_TBD_3F88=9313
,pUmem_Sta_TBD_3F8C=9314
,pUmem_Sta_TBD_3F90=9315
,pUmem_Sta_TBD_3F94=9316
,pUmem_Sta_Ws_1stTransPdtNo=9317
,pUmem_Sta_Ws_TempResult1=9318
,pUmem_Sta_Ws_TempResult2=9319
,pUmem_Sta_TBD_3FA4=9320
,pUmem_Sta_TBD_3FA8=9321
,pUmem_Sta_TBD_3FAC=9322
,pUmem_Sta_TBD_3FB0=9323
,pUmem_Sta_TBD_3FB4=9324
,pUmem_Sta_TBD_3FB8=9325
,pUmem_Sta_TBD_3FBC=9326
,pUmem_Sta_TBD_3FC0=9327
,pUmem_Sta_TBD_3FC4=9328
,pUmem_Sta_TBD_3FC8=9329
,pUmem_Sta_TBD_3FCC=9330
,pUmem_Sta_TBD_3FD0=9331
,pUmem_Sta_TBD_3FD4=9332
,pUmem_Sta_TBD_3FD8=9333
,pUmem_Sta_TBD_3FDC=9334
,pUmem_Sta_TBD_3FE0=9335
,pUmem_Sta_TBD_3FE4=9336
,pUmem_Sta_Vs_AmpEna=9337
,pUmem_Sta_Vs_InPos=9338
,pUmem_Sta_Vs_Home=9339
,pUmem_Sta_Vs_HomeErr=9340
,pUmem_Sta_Vs_EcatCon=9341
,pUmem_Sta_Vs_Error=9342
,pUmem_Sta_Vs_ErrCode=9343
,pUmem_Sta_TBD_4284=9344
,pUmem_Sta_TBD_4288=9345
,pUmem_Sta_Vs_ProgRun=9346
,pUmem_Sta_Vs_VectorVel=9347
,pUmem_Sta_Vs_ProgTime=9348
,pUmem_Sta_Vs_PosStage=9349
,pUmem_Sta_Vs_PosProduct=9350
,pUmem_Sta_Vs_Cover=9351
,pUmem_Sta_Vs_PdtSta=9352
,pUmem_Sta_Vs_PdtNo=9353
,pUmem_Sta_TBD_42AC=9354
,pUmem_Sta_TBD_42B0=9355
,pUmem_Sta_TBD_42B4=9356
,pUmem_Sta_TBD_42B8=9357
,pUmem_Sta_TBD_42BC=9358
,pUmem_Sta_TBD_42C0=9359
,pUmem_Sta_TBD_42C4=9360
,pUmem_Sta_TBD_42C8=9361
,pUmem_Sta_TBD_42CC=9362
,pUmem_Sta_TBD_42D0=9363
,pUmem_Sta_TBD_42D4=9364
,pUmem_Sta_TBD_42D8=9365
,pUmem_Sta_TBD_42DC=9366
,pUmem_Sta_Vs_LdSeq=9367
,pUmem_Sta_Vs_LdErr=9368
,pUmem_Sta_Vs_LdTime=9369
,pUmem_Sta_Vs_RdSeq=9370
,pUmem_Sta_Vs_RdErr=9371
,pUmem_Sta_Vs_RdTime=9372
,pUmem_Sta_Vs_VnSeq=9373
,pUmem_Sta_Vs_VnErr=9374
,pUmem_Sta_Vs_VnTime=9375
,pUmem_Sta_Vs_WtSeq=9376
,pUmem_Sta_Vs_WtErr=9377
,pUmem_Sta_Vs_WtTime=9378
,pUmem_Sta_Vs_UdSeq=9379
,pUmem_Sta_Vs_UdErr=9380
,pUmem_Sta_Vs_UdTime=9381
,pUmem_Sta_Vs_RjSeq=9382
,pUmem_Sta_Vs_RjErr=9383
,pUmem_Sta_Vs_RjTime=9384
,pUmem_Sta_TBD_4328=9385
,pUmem_Sta_TBD_432C=9386
,pUmem_Sta_TBD_4330=9387
,pUmem_Sta_TBD_4334=9388
,pUmem_Sta_TBD_4338=9389
,pUmem_Sta_TBD_433C=9390
,pUmem_Sta_TBD_4340=9391
,pUmem_Sta_TBD_4344=9392
,pUmem_Sta_TBD_4348=9393
,pUmem_Sta_TBD_434C=9394
,pUmem_Sta_TBD_4350=9395
,pUmem_Sta_TBD_4354=9396
,pUmem_Sta_Vs_3rdTransUdReq=9397
,pUmem_Sta_Vs_3rdTransRjReq=9398
,pUmem_Sta_Vs_3DVisionStReq=9399
,pUmem_Sta_Vs_3DVisionEdReq=9400
,pUmem_Sta_TBD_4368=9401
,pUmem_Sta_TBD_436C=9402
,pUmem_Sta_TBD_4370=9403
,pUmem_Sta_TBD_4374=9404
,pUmem_Sta_TBD_4378=9405
,pUmem_Sta_TBD_437C=9406
,pUmem_Sta_Vs_3rdTransPtdNo=9407
,pUmem_Sta_TBD_4384=9408
,pUmem_Sta_TBD_4388=9409
,pUmem_Sta_TBD_438C=9410
,pUmem_Sta_TBD_4390=9411
,pUmem_Sta_TBD_4394=9412
,pUmem_Sta_TBD_4398=9413
,pUmem_Sta_TBD_439C=9414
,pUmem_Sta_TBD_43A0=9415
,pUmem_Sta_TBD_43A4=9416
,pUmem_Sta_TBD_43A8=9417
,pUmem_Sta_TBD_43AC=9418
,pUmem_Sta_TBD_43B0=9419
,pUmem_Sta_TBD_43B4=9420
,pUmem_Sta_TBD_43B8=9421
,pUmem_Sta_TBD_43BC=9422
,pUmem_Sta_TBD_43C0=9423
,pUmem_Sta_TBD_43C4=9424
,pUmem_Sta_TBD_43C8=9425
,pUmem_Sta_TBD_43CC=9426
,pUmem_Sta_Sc_AmpEna=9427
,pUmem_Sta_Sc_InPos=9428
,pUmem_Sta_Sc_Home=9429
,pUmem_Sta_Sc_HomeErr=9430
,pUmem_Sta_Sc_Con=9431
,pUmem_Sta_Sc_Error=9432
,pUmem_Sta_Sc_ErrCode=9433
,pUmem_Cmd_01_ServoOn=9434
,pUmem_Cmd_01_ServoOff=9435
,pUmem_Cmd_01_HomeStart=9436
,pUmem_Cmd_01_HomeAbort=9437
,pUmem_Cmd_01_HomeOffset=9438
,pUmem_Cmd_01_JogStop=9439
,pUmem_Cmd_01_JogContPlus=9440
,pUmem_Cmd_01_JogContMinus=9441
,pUmem_Cmd_01_JogAbsMove=9442
,pUmem_Cmd_01_JogIncMove=9443
,pUmem_Cmd_01_JogAbsPos=9444
,pUmem_Cmd_01_JogIncDist=9445
,pUmem_Cmd_01_JogSpeed=9446
,pUmem_Cmd_01_JogTa=9447
,pUmem_Cmd_01_JogTs=9448
,pUmem_Cmd_TBD_4E5C=9449
,pUmem_Cmd_TBD_4E60=9450
,pUmem_Cmd_TBD_4E64=9451
,pUmem_Cmd_TBD_4E68=9452
,pUmem_Cmd_TBD_4E6C=9453
,pUmem_Cmd_02_ServoOn=9454
,pUmem_Cmd_02_ServoOff=9455
,pUmem_Cmd_02_HomeStart=9456
,pUmem_Cmd_02_HomeAbort=9457
,pUmem_Cmd_02_HomeOffset=9458
,pUmem_Cmd_02_JogStop=9459
,pUmem_Cmd_02_JogContPlus=9460
,pUmem_Cmd_02_JogContMinus=9461
,pUmem_Cmd_02_JogAbsMove=9462
,pUmem_Cmd_02_JogIncMove=9463
,pUmem_Cmd_02_JogAbsPos=9464
,pUmem_Cmd_02_JogIncDist=9465
,pUmem_Cmd_02_JogSpeed=9466
,pUmem_Cmd_02_JogTa=9467
,pUmem_Cmd_02_JogTs=9468
,pUmem_Cmd_TBD_4EAC=9469
,pUmem_Cmd_TBD_4EB0=9470
,pUmem_Cmd_TBD_4EB4=9471
,pUmem_Cmd_TBD_4EB8=9472
,pUmem_Cmd_TBD_4EBC=9473
,pUmem_Cmd_03_ServoOn=9474
,pUmem_Cmd_03_ServoOff=9475
,pUmem_Cmd_03_HomeStart=9476
,pUmem_Cmd_03_HomeAbort=9477
,pUmem_Cmd_03_HomeOffset=9478
,pUmem_Cmd_03_JogStop=9479
,pUmem_Cmd_03_JogContPlus=9480
,pUmem_Cmd_03_JogContMinus=9481
,pUmem_Cmd_03_JogAbsMove=9482
,pUmem_Cmd_03_JogIncMove=9483
,pUmem_Cmd_03_JogAbsPos=9484
,pUmem_Cmd_03_JogIncDist=9485
,pUmem_Cmd_03_JogSpeed=9486
,pUmem_Cmd_03_JogTa=9487
,pUmem_Cmd_03_JogTs=9488
,pUmem_Cmd_TBD_4EFC=9489
,pUmem_Cmd_TBD_4F00=9490
,pUmem_Cmd_TBD_4F04=9491
,pUmem_Cmd_TBD_4F08=9492
,pUmem_Cmd_TBD_4F0C=9493
,pUmem_Cmd_04_ServoOn=9494
,pUmem_Cmd_04_ServoOff=9495
,pUmem_Cmd_04_HomeStart=9496
,pUmem_Cmd_04_HomeAbort=9497
,pUmem_Cmd_04_HomeOffset=9498
,pUmem_Cmd_04_JogStop=9499
,pUmem_Cmd_04_JogContPlus=9500
,pUmem_Cmd_04_JogContMinus=9501
,pUmem_Cmd_04_JogAbsMove=9502
,pUmem_Cmd_04_JogIncMove=9503
,pUmem_Cmd_04_JogAbsPos=9504
,pUmem_Cmd_04_JogIncDist=9505
,pUmem_Cmd_04_JogSpeed=9506
,pUmem_Cmd_04_JogTa=9507
,pUmem_Cmd_04_JogTs=9508
,pUmem_Cmd_TBD_4F4C=9509
,pUmem_Cmd_TBD_4F50=9510
,pUmem_Cmd_TBD_4F54=9511
,pUmem_Cmd_TBD_4F58=9512
,pUmem_Cmd_TBD_4F5C=9513
,pUmem_Cmd_05_ServoOn=9514
,pUmem_Cmd_05_ServoOff=9515
,pUmem_Cmd_05_HomeStart=9516
,pUmem_Cmd_05_HomeAbort=9517
,pUmem_Cmd_05_HomeOffset=9518
,pUmem_Cmd_05_JogStop=9519
,pUmem_Cmd_05_JogContPlus=9520
,pUmem_Cmd_05_JogContMinus=9521
,pUmem_Cmd_05_JogAbsMove=9522
,pUmem_Cmd_05_JogIncMove=9523
,pUmem_Cmd_05_JogAbsPos=9524
,pUmem_Cmd_05_JogIncDist=9525
,pUmem_Cmd_05_JogSpeed=9526
,pUmem_Cmd_05_JogTa=9527
,pUmem_Cmd_05_JogTs=9528
,pUmem_Cmd_TBD_4F9C=9529
,pUmem_Cmd_TBD_4FA0=9530
,pUmem_Cmd_TBD_4FA4=9531
,pUmem_Cmd_TBD_4FA8=9532
,pUmem_Cmd_TBD_4FAC=9533
,pUmem_Cmd_06_ServoOn=9534
,pUmem_Cmd_06_ServoOff=9535
,pUmem_Cmd_06_HomeStart=9536
,pUmem_Cmd_06_HomeAbort=9537
,pUmem_Cmd_06_HomeOffset=9538
,pUmem_Cmd_06_JogStop=9539
,pUmem_Cmd_06_JogContPlus=9540
,pUmem_Cmd_06_JogContMinus=9541
,pUmem_Cmd_06_JogAbsMove=9542
,pUmem_Cmd_06_JogIncMove=9543
,pUmem_Cmd_06_JogAbsPos=9544
,pUmem_Cmd_06_JogIncDist=9545
,pUmem_Cmd_06_JogSpeed=9546
,pUmem_Cmd_06_JogTa=9547
,pUmem_Cmd_06_JogTs=9548
,pUmem_Cmd_TBD_4FEC=9549
,pUmem_Cmd_TBD_4FF0=9550
,pUmem_Cmd_TBD_4FF4=9551
,pUmem_Cmd_TBD_4FF8=9552
,pUmem_Cmd_TBD_4FFC=9553
,pUmem_Cmd_07_ServoOn=9554
,pUmem_Cmd_07_ServoOff=9555
,pUmem_Cmd_07_HomeStart=9556
,pUmem_Cmd_07_HomeAbort=9557
,pUmem_Cmd_07_HomeOffset=9558
,pUmem_Cmd_07_JogStop=9559
,pUmem_Cmd_07_JogContPlus=9560
,pUmem_Cmd_07_JogContMinus=9561
,pUmem_Cmd_07_JogAbsMove=9562
,pUmem_Cmd_07_JogIncMove=9563
,pUmem_Cmd_07_JogAbsPos=9564
,pUmem_Cmd_07_JogIncDist=9565
,pUmem_Cmd_07_JogSpeed=9566
,pUmem_Cmd_07_JogTa=9567
,pUmem_Cmd_07_JogTs=9568
,pUmem_Cmd_TBD_503C=9569
,pUmem_Cmd_TBD_5040=9570
,pUmem_Cmd_TBD_5044=9571
,pUmem_Cmd_TBD_5048=9572
,pUmem_Cmd_TBD_504C=9573
,pUmem_Cmd_08_ServoOn=9574
,pUmem_Cmd_08_ServoOff=9575
,pUmem_Cmd_08_HomeStart=9576
,pUmem_Cmd_08_HomeAbort=9577
,pUmem_Cmd_08_HomeOffset=9578
,pUmem_Cmd_08_JogStop=9579
,pUmem_Cmd_08_JogContPlus=9580
,pUmem_Cmd_08_JogContMinus=9581
,pUmem_Cmd_08_JogAbsMove=9582
,pUmem_Cmd_08_JogIncMove=9583
,pUmem_Cmd_08_JogAbsPos=9584
,pUmem_Cmd_08_JogIncDist=9585
,pUmem_Cmd_08_JogSpeed=9586
,pUmem_Cmd_08_JogTa=9587
,pUmem_Cmd_08_JogTs=9588
,pUmem_Cmd_TBD_508C=9589
,pUmem_Cmd_TBD_5090=9590
,pUmem_Cmd_TBD_5094=9591
,pUmem_Cmd_TBD_5098=9592
,pUmem_Cmd_TBD_509C=9593
,pUmem_Cmd_09_ServoOn=9594
,pUmem_Cmd_09_ServoOff=9595
,pUmem_Cmd_09_HomeStart=9596
,pUmem_Cmd_09_HomeAbort=9597
,pUmem_Cmd_09_HomeOffset=9598
,pUmem_Cmd_09_JogStop=9599
,pUmem_Cmd_09_JogContPlus=9600
,pUmem_Cmd_09_JogContMinus=9601
,pUmem_Cmd_09_JogAbsMove=9602
,pUmem_Cmd_09_JogIncMove=9603
,pUmem_Cmd_09_JogAbsPos=9604
,pUmem_Cmd_09_JogIncDist=9605
,pUmem_Cmd_09_JogSpeed=9606
,pUmem_Cmd_09_JogTa=9607
,pUmem_Cmd_09_JogTs=9608
,pUmem_Cmd_TBD_50DC=9609
,pUmem_Cmd_TBD_50E0=9610
,pUmem_Cmd_TBD_50E4=9611
,pUmem_Cmd_TBD_50E8=9612
,pUmem_Cmd_TBD_50EC=9613
,pUmem_Cmd_10_ServoOn=9614
,pUmem_Cmd_10_ServoOff=9615
,pUmem_Cmd_10_HomeStart=9616
,pUmem_Cmd_10_HomeAbort=9617
,pUmem_Cmd_10_HomeOffset=9618
,pUmem_Cmd_10_JogStop=9619
,pUmem_Cmd_10_JogContPlus=9620
,pUmem_Cmd_10_JogContMinus=9621
,pUmem_Cmd_10_JogAbsMove=9622
,pUmem_Cmd_10_JogIncMove=9623
,pUmem_Cmd_10_JogAbsPos=9624
,pUmem_Cmd_10_JogIncDist=9625
,pUmem_Cmd_10_JogSpeed=9626
,pUmem_Cmd_10_JogTa=9627
,pUmem_Cmd_10_JogTs=9628
,pUmem_Cmd_TBD_512C=9629
,pUmem_Cmd_TBD_5130=9630
,pUmem_Cmd_TBD_5134=9631
,pUmem_Cmd_TBD_5138=9632
,pUmem_Cmd_TBD_513C=9633
,pUmem_Cmd_11_ServoOn=9634
,pUmem_Cmd_11_ServoOff=9635
,pUmem_Cmd_11_HomeStart=9636
,pUmem_Cmd_11_HomeAbort=9637
,pUmem_Cmd_11_HomeOffset=9638
,pUmem_Cmd_11_JogStop=9639
,pUmem_Cmd_11_JogContPlus=9640
,pUmem_Cmd_11_JogContMinus=9641
,pUmem_Cmd_11_JogAbsMove=9642
,pUmem_Cmd_11_JogIncMove=9643
,pUmem_Cmd_11_JogAbsPos=9644
,pUmem_Cmd_11_JogIncDist=9645
,pUmem_Cmd_11_JogSpeed=9646
,pUmem_Cmd_11_JogTa=9647
,pUmem_Cmd_11_JogTs=9648
,pUmem_Cmd_TBD_517C=9649
,pUmem_Cmd_TBD_5180=9650
,pUmem_Cmd_TBD_5184=9651
,pUmem_Cmd_TBD_5188=9652
,pUmem_Cmd_TBD_518C=9653
,pUmem_Cmd_12_ServoOn=9654
,pUmem_Cmd_12_ServoOff=9655
,pUmem_Cmd_12_HomeStart=9656
,pUmem_Cmd_12_HomeAbort=9657
,pUmem_Cmd_12_HomeOffset=9658
,pUmem_Cmd_12_JogStop=9659
,pUmem_Cmd_12_JogContPlus=9660
,pUmem_Cmd_12_JogContMinus=9661
,pUmem_Cmd_12_JogAbsMove=9662
,pUmem_Cmd_12_JogIncMove=9663
,pUmem_Cmd_12_JogAbsPos=9664
,pUmem_Cmd_12_JogIncDist=9665
,pUmem_Cmd_12_JogSpeed=9666
,pUmem_Cmd_12_JogTa=9667
,pUmem_Cmd_12_JogTs=9668
,pUmem_Cmd_TBD_51CC=9669
,pUmem_Cmd_TBD_51D0=9670
,pUmem_Cmd_TBD_51D4=9671
,pUmem_Cmd_TBD_51D8=9672
,pUmem_Cmd_TBD_51DC=9673
,pUmem_Cmd_13_ServoOn=9674
,pUmem_Cmd_13_ServoOff=9675
,pUmem_Cmd_13_HomeStart=9676
,pUmem_Cmd_13_HomeAbort=9677
,pUmem_Cmd_13_HomeOffset=9678
,pUmem_Cmd_13_JogStop=9679
,pUmem_Cmd_13_JogContPlus=9680
,pUmem_Cmd_13_JogContMinus=9681
,pUmem_Cmd_13_JogAbsMove=9682
,pUmem_Cmd_13_JogIncMove=9683
,pUmem_Cmd_13_JogAbsPos=9684
,pUmem_Cmd_13_JogIncDist=9685
,pUmem_Cmd_13_JogSpeed=9686
,pUmem_Cmd_13_JogTa=9687
,pUmem_Cmd_13_JogTs=9688
,pUmem_Cmd_TBD_521C=9689
,pUmem_Cmd_TBD_5220=9690
,pUmem_Cmd_TBD_5224=9691
,pUmem_Cmd_TBD_5228=9692
,pUmem_Cmd_TBD_522C=9693
,pUmem_Cmd_14_ServoOn=9694
,pUmem_Cmd_14_ServoOff=9695
,pUmem_Cmd_14_HomeStart=9696
,pUmem_Cmd_14_HomeAbort=9697
,pUmem_Cmd_14_HomeOffset=9698
,pUmem_Cmd_14_JogStop=9699
,pUmem_Cmd_14_JogContPlus=9700
,pUmem_Cmd_14_JogContMinus=9701
,pUmem_Cmd_14_JogAbsMove=9702
,pUmem_Cmd_14_JogIncMove=9703
,pUmem_Cmd_14_JogAbsPos=9704
,pUmem_Cmd_14_JogIncDist=9705
,pUmem_Cmd_14_JogSpeed=9706
,pUmem_Cmd_14_JogTa=9707
,pUmem_Cmd_14_JogTs=9708
,pUmem_Cmd_TBD_526C=9709
,pUmem_Cmd_TBD_5270=9710
,pUmem_Cmd_TBD_5274=9711
,pUmem_Cmd_TBD_5278=9712
,pUmem_Cmd_TBD_527C=9713
,pUmem_Cmd_15_ServoOn=9714
,pUmem_Cmd_15_ServoOff=9715
,pUmem_Cmd_15_HomeStart=9716
,pUmem_Cmd_15_HomeAbort=9717
,pUmem_Cmd_15_HomeOffset=9718
,pUmem_Cmd_15_JogStop=9719
,pUmem_Cmd_15_JogContPlus=9720
,pUmem_Cmd_15_JogContMinus=9721
,pUmem_Cmd_15_JogAbsMove=9722
,pUmem_Cmd_15_JogIncMove=9723
,pUmem_Cmd_15_JogAbsPos=9724
,pUmem_Cmd_15_JogIncDist=9725
,pUmem_Cmd_15_JogSpeed=9726
,pUmem_Cmd_15_JogTa=9727
,pUmem_Cmd_15_JogTs=9728
,pUmem_Cmd_TBD_52BC=9729
,pUmem_Cmd_TBD_52C0=9730
,pUmem_Cmd_TBD_52C4=9731
,pUmem_Cmd_TBD_52C8=9732
,pUmem_Cmd_TBD_52CC=9733
,pUmem_Cmd_16_ServoOn=9734
,pUmem_Cmd_16_ServoOff=9735
,pUmem_Cmd_16_HomeStart=9736
,pUmem_Cmd_16_HomeAbort=9737
,pUmem_Cmd_16_HomeOffset=9738
,pUmem_Cmd_16_JogStop=9739
,pUmem_Cmd_16_JogContPlus=9740
,pUmem_Cmd_16_JogContMinus=9741
,pUmem_Cmd_16_JogAbsMove=9742
,pUmem_Cmd_16_JogIncMove=9743
,pUmem_Cmd_16_JogAbsPos=9744
,pUmem_Cmd_16_JogIncDist=9745
,pUmem_Cmd_16_JogSpeed=9746
,pUmem_Cmd_16_JogTa=9747
,pUmem_Cmd_16_JogTs=9748
,pUmem_Cmd_TBD_530C=9749
,pUmem_Cmd_TBD_5310=9750
,pUmem_Cmd_TBD_5314=9751
,pUmem_Cmd_TBD_5318=9752
,pUmem_Cmd_TBD_531C=9753
,pUmem_Cmd_17_ServoOn=9754
,pUmem_Cmd_17_ServoOff=9755
,pUmem_Cmd_17_HomeStart=9756
,pUmem_Cmd_17_HomeAbort=9757
,pUmem_Cmd_17_HomeOffset=9758
,pUmem_Cmd_17_JogStop=9759
,pUmem_Cmd_17_JogContPlus=9760
,pUmem_Cmd_17_JogContMinus=9761
,pUmem_Cmd_17_JogAbsMove=9762
,pUmem_Cmd_17_JogIncMove=9763
,pUmem_Cmd_17_JogAbsPos=9764
,pUmem_Cmd_17_JogIncDist=9765
,pUmem_Cmd_17_JogSpeed=9766
,pUmem_Cmd_17_JogTa=9767
,pUmem_Cmd_17_JogTs=9768
,pUmem_Cmd_TBD_535C=9769
,pUmem_Cmd_TBD_5360=9770
,pUmem_Cmd_TBD_5364=9771
,pUmem_Cmd_TBD_5368=9772
,pUmem_Cmd_TBD_536C=9773
,pUmem_Cmd_18_ServoOn=9774
,pUmem_Cmd_18_ServoOff=9775
,pUmem_Cmd_18_HomeStart=9776
,pUmem_Cmd_18_HomeAbort=9777
,pUmem_Cmd_18_HomeOffset=9778
,pUmem_Cmd_18_JogStop=9779
,pUmem_Cmd_18_JogContPlus=9780
,pUmem_Cmd_18_JogContMinus=9781
,pUmem_Cmd_18_JogAbsMove=9782
,pUmem_Cmd_18_JogIncMove=9783
,pUmem_Cmd_18_JogAbsPos=9784
,pUmem_Cmd_18_JogIncDist=9785
,pUmem_Cmd_18_JogSpeed=9786
,pUmem_Cmd_18_JogTa=9787
,pUmem_Cmd_18_JogTs=9788
,pUmem_Cmd_TBD_53AC=9789
,pUmem_Cmd_TBD_53B0=9790
,pUmem_Cmd_TBD_53B4=9791
,pUmem_Cmd_TBD_53B8=9792
,pUmem_Cmd_TBD_53BC=9793
,pUmem_Cmd_19_ServoOn=9794
,pUmem_Cmd_19_ServoOff=9795
,pUmem_Cmd_19_HomeStart=9796
,pUmem_Cmd_19_HomeAbort=9797
,pUmem_Cmd_19_HomeOffset=9798
,pUmem_Cmd_19_JogStop=9799
,pUmem_Cmd_19_JogContPlus=9800
,pUmem_Cmd_19_JogContMinus=9801
,pUmem_Cmd_19_JogAbsMove=9802
,pUmem_Cmd_19_JogIncMove=9803
,pUmem_Cmd_19_JogAbsPos=9804
,pUmem_Cmd_19_JogIncDist=9805
,pUmem_Cmd_19_JogSpeed=9806
,pUmem_Cmd_19_JogTa=9807
,pUmem_Cmd_19_JogTs=9808
,pUmem_Cmd_TBD_53FC=9809
,pUmem_Cmd_TBD_5400=9810
,pUmem_Cmd_TBD_5404=9811
,pUmem_Cmd_TBD_5408=9812
,pUmem_Cmd_TBD_540C=9813
,pUmem_Cmd_20_ServoOn=9814
,pUmem_Cmd_20_ServoOff=9815
,pUmem_Cmd_20_HomeStart=9816
,pUmem_Cmd_20_HomeAbort=9817
,pUmem_Cmd_20_HomeOffset=9818
,pUmem_Cmd_20_JogStop=9819
,pUmem_Cmd_20_JogContPlus=9820
,pUmem_Cmd_20_JogContMinus=9821
,pUmem_Cmd_20_JogAbsMove=9822
,pUmem_Cmd_20_JogIncMove=9823
,pUmem_Cmd_20_JogAbsPos=9824
,pUmem_Cmd_20_JogIncDist=9825
,pUmem_Cmd_20_JogSpeed=9826
,pUmem_Cmd_20_JogTa=9827
,pUmem_Cmd_20_JogTs=9828
,pUmem_Cmd_TBD_544C=9829
,pUmem_Cmd_TBD_5450=9830
,pUmem_Cmd_TBD_5454=9831
,pUmem_Cmd_TBD_5458=9832
,pUmem_Cmd_TBD_545C=9833
,pUmem_Cmd_21_ServoOn=9834
,pUmem_Cmd_21_ServoOff=9835
,pUmem_Cmd_21_HomeStart=9836
,pUmem_Cmd_21_HomeAbort=9837
,pUmem_Cmd_21_HomeOffset=9838
,pUmem_Cmd_21_JogStop=9839
,pUmem_Cmd_21_JogContPlus=9840
,pUmem_Cmd_21_JogContMinus=9841
,pUmem_Cmd_21_JogAbsMove=9842
,pUmem_Cmd_21_JogIncMove=9843
,pUmem_Cmd_21_JogAbsPos=9844
,pUmem_Cmd_21_JogIncDist=9845
,pUmem_Cmd_21_JogSpeed=9846
,pUmem_Cmd_21_JogTa=9847
,pUmem_Cmd_21_JogTs=9848
,pUmem_Cmd_TBD_549C=9849
,pUmem_Cmd_TBD_54A0=9850
,pUmem_Cmd_TBD_54A4=9851
,pUmem_Cmd_TBD_54A8=9852
,pUmem_Cmd_TBD_54AC=9853
,pUmem_Cmd_22_ServoOn=9854
,pUmem_Cmd_22_ServoOff=9855
,pUmem_Cmd_22_HomeStart=9856
,pUmem_Cmd_22_HomeAbort=9857
,pUmem_Cmd_22_HomeOffset=9858
,pUmem_Cmd_22_JogStop=9859
,pUmem_Cmd_22_JogContPlus=9860
,pUmem_Cmd_22_JogContMinus=9861
,pUmem_Cmd_22_JogAbsMove=9862
,pUmem_Cmd_22_JogIncMove=9863
,pUmem_Cmd_22_JogAbsPos=9864
,pUmem_Cmd_22_JogIncDist=9865
,pUmem_Cmd_22_JogSpeed=9866
,pUmem_Cmd_22_JogTa=9867
,pUmem_Cmd_22_JogTs=9868
,pUmem_Cmd_TBD_54EC=9869
,pUmem_Cmd_TBD_54F0=9870
,pUmem_Cmd_TBD_54F4=9871
,pUmem_Cmd_TBD_54F8=9872
,pUmem_Cmd_TBD_54FC=9873
,pUmem_Cmd_23_ServoOn=9874
,pUmem_Cmd_23_ServoOff=9875
,pUmem_Cmd_23_HomeStart=9876
,pUmem_Cmd_23_HomeAbort=9877
,pUmem_Cmd_23_HomeOffset=9878
,pUmem_Cmd_23_JogStop=9879
,pUmem_Cmd_23_JogContPlus=9880
,pUmem_Cmd_23_JogContMinus=9881
,pUmem_Cmd_23_JogAbsMove=9882
,pUmem_Cmd_23_JogIncMove=9883
,pUmem_Cmd_23_JogAbsPos=9884
,pUmem_Cmd_23_JogIncDist=9885
,pUmem_Cmd_23_JogSpeed=9886
,pUmem_Cmd_23_JogTa=9887
,pUmem_Cmd_23_JogTs=9888
,pUmem_Cmd_TBD_553C=9889
,pUmem_Cmd_TBD_5540=9890
,pUmem_Cmd_TBD_5544=9891
,pUmem_Cmd_TBD_5548=9892
,pUmem_Cmd_TBD_554C=9893
,pUmem_Cmd_24_ServoOn=9894
,pUmem_Cmd_24_ServoOff=9895
,pUmem_Cmd_24_HomeStart=9896
,pUmem_Cmd_24_HomeAbort=9897
,pUmem_Cmd_24_HomeOffset=9898
,pUmem_Cmd_24_JogStop=9899
,pUmem_Cmd_24_JogContPlus=9900
,pUmem_Cmd_24_JogContMinus=9901
,pUmem_Cmd_24_JogAbsMove=9902
,pUmem_Cmd_24_JogIncMove=9903
,pUmem_Cmd_24_JogAbsPos=9904
,pUmem_Cmd_24_JogIncDist=9905
,pUmem_Cmd_24_JogSpeed=9906
,pUmem_Cmd_24_JogTa=9907
,pUmem_Cmd_24_JogTs=9908
,pUmem_Cmd_TBD_558C=9909
,pUmem_Cmd_TBD_5590=9910
,pUmem_Cmd_TBD_5594=9911
,pUmem_Cmd_TBD_5598=9912
,pUmem_Cmd_TBD_559C=9913
,pUmem_Cmd_25_ServoOn=9914
,pUmem_Cmd_25_ServoOff=9915
,pUmem_Cmd_25_HomeStart=9916
,pUmem_Cmd_25_HomeAbort=9917
,pUmem_Cmd_25_HomeOffset=9918
,pUmem_Cmd_25_JogStop=9919
,pUmem_Cmd_25_JogContPlus=9920
,pUmem_Cmd_25_JogContMinus=9921
,pUmem_Cmd_25_JogAbsMove=9922
,pUmem_Cmd_25_JogIncMove=9923
,pUmem_Cmd_25_JogAbsPos=9924
,pUmem_Cmd_25_JogIncDist=9925
,pUmem_Cmd_25_JogSpeed=9926
,pUmem_Cmd_25_JogTa=9927
,pUmem_Cmd_25_JogTs=9928
,pUmem_Cmd_TBD_55DC=9929
,pUmem_Cmd_TBD_55E0=9930
,pUmem_Cmd_TBD_55E4=9931
,pUmem_Cmd_TBD_55E8=9932
,pUmem_Cmd_TBD_55EC=9933
,pUmem_Cmd_26_ServoOn=9934
,pUmem_Cmd_26_ServoOff=9935
,pUmem_Cmd_26_HomeStart=9936
,pUmem_Cmd_26_HomeAbort=9937
,pUmem_Cmd_26_HomeOffset=9938
,pUmem_Cmd_26_JogStop=9939
,pUmem_Cmd_26_JogContPlus=9940
,pUmem_Cmd_26_JogContMinus=9941
,pUmem_Cmd_26_JogAbsMove=9942
,pUmem_Cmd_26_JogIncMove=9943
,pUmem_Cmd_26_JogAbsPos=9944
,pUmem_Cmd_26_JogIncDist=9945
,pUmem_Cmd_26_JogSpeed=9946
,pUmem_Cmd_26_JogTa=9947
,pUmem_Cmd_26_JogTs=9948
,pUmem_Cmd_TBD_562C=9949
,pUmem_Cmd_TBD_5630=9950
,pUmem_Cmd_TBD_5634=9951
,pUmem_Cmd_TBD_5638=9952
,pUmem_Cmd_TBD_563C=9953
,pUmem_Cmd_27_ServoOn=9954
,pUmem_Cmd_27_ServoOff=9955
,pUmem_Cmd_27_HomeStart=9956
,pUmem_Cmd_27_HomeAbort=9957
,pUmem_Cmd_27_HomeOffset=9958
,pUmem_Cmd_27_JogStop=9959
,pUmem_Cmd_27_JogContPlus=9960
,pUmem_Cmd_27_JogContMinus=9961
,pUmem_Cmd_27_JogAbsMove=9962
,pUmem_Cmd_27_JogIncMove=9963
,pUmem_Cmd_27_JogAbsPos=9964
,pUmem_Cmd_27_JogIncDist=9965
,pUmem_Cmd_27_JogSpeed=9966
,pUmem_Cmd_27_JogTa=9967
,pUmem_Cmd_27_JogTs=9968
,pUmem_Cmd_TBD_567C=9969
,pUmem_Cmd_TBD_5680=9970
,pUmem_Cmd_TBD_5684=9971
,pUmem_Cmd_TBD_5688=9972
,pUmem_Cmd_TBD_568C=9973
,pUmem_Cmd_28_ServoOn=9974
,pUmem_Cmd_28_ServoOff=9975
,pUmem_Cmd_28_HomeStart=9976
,pUmem_Cmd_28_HomeAbort=9977
,pUmem_Cmd_28_HomeOffset=9978
,pUmem_Cmd_28_JogStop=9979
,pUmem_Cmd_28_JogContPlus=9980
,pUmem_Cmd_28_JogContMinus=9981
,pUmem_Cmd_28_JogAbsMove=9982
,pUmem_Cmd_28_JogIncMove=9983
,pUmem_Cmd_28_JogAbsPos=9984
,pUmem_Cmd_28_JogIncDist=9985
,pUmem_Cmd_28_JogSpeed=9986
,pUmem_Cmd_28_JogTa=9987
,pUmem_Cmd_28_JogTs=9988
,pUmem_Cmd_TBD_56CC=9989
,pUmem_Cmd_TBD_56D0=9990
,pUmem_Cmd_TBD_56D4=9991
,pUmem_Cmd_TBD_56D8=9992
,pUmem_Cmd_TBD_56DC=9993
,pUmem_Cmd_29_ServoOn=9994
,pUmem_Cmd_29_ServoOff=9995
,pUmem_Cmd_29_HomeStart=9996
,pUmem_Cmd_29_HomeAbort=9997
,pUmem_Cmd_29_HomeOffset=9998
,pUmem_Cmd_29_JogStop=9999
,pUmem_Cmd_29_JogContPlus=10000
,pUmem_Cmd_29_JogContMinus=10001
,pUmem_Cmd_29_JogAbsMove=10002
,pUmem_Cmd_29_JogIncMove=10003
,pUmem_Cmd_29_JogAbsPos=10004
,pUmem_Cmd_29_JogIncDist=10005
,pUmem_Cmd_29_JogSpeed=10006
,pUmem_Cmd_29_JogTa=10007
,pUmem_Cmd_29_JogTs=10008
,pUmem_Cmd_TBD_571C=10009
,pUmem_Cmd_TBD_5720=10010
,pUmem_Cmd_TBD_5724=10011
,pUmem_Cmd_TBD_5728=10012
,pUmem_Cmd_TBD_572C=10013
,pUmem_Cmd_30_ServoOn=10014
,pUmem_Cmd_30_ServoOff=10015
,pUmem_Cmd_30_HomeStart=10016
,pUmem_Cmd_30_HomeAbort=10017
,pUmem_Cmd_30_HomeOffset=10018
,pUmem_Cmd_30_JogStop=10019
,pUmem_Cmd_30_JogContPlus=10020
,pUmem_Cmd_30_JogContMinus=10021
,pUmem_Cmd_30_JogAbsMove=10022
,pUmem_Cmd_30_JogIncMove=10023
,pUmem_Cmd_30_JogAbsPos=10024
,pUmem_Cmd_30_JogIncDist=10025
,pUmem_Cmd_30_JogSpeed=10026
,pUmem_Cmd_30_JogTa=10027
,pUmem_Cmd_30_JogTs=10028
,pUmem_Cmd_TBD_576C=10029
,pUmem_Cmd_TBD_5770=10030
,pUmem_Cmd_TBD_5774=10031
,pUmem_Cmd_TBD_5778=10032
,pUmem_Cmd_TBD_577C=10033
,pUmem_Cmd_31_ServoOn=10034
,pUmem_Cmd_31_ServoOff=10035
,pUmem_Cmd_31_HomeStart=10036
,pUmem_Cmd_31_HomeAbort=10037
,pUmem_Cmd_31_HomeOffset=10038
,pUmem_Cmd_31_JogStop=10039
,pUmem_Cmd_31_JogContPlus=10040
,pUmem_Cmd_31_JogContMinus=10041
,pUmem_Cmd_31_JogAbsMove=10042
,pUmem_Cmd_31_JogIncMove=10043
,pUmem_Cmd_31_JogAbsPos=10044
,pUmem_Cmd_31_JogIncDist=10045
,pUmem_Cmd_31_JogSpeed=10046
,pUmem_Cmd_31_JogTa=10047
,pUmem_Cmd_31_JogTs=10048
,pUmem_Cmd_TBD_57BC=10049
,pUmem_Cmd_TBD_57C0=10050
,pUmem_Cmd_TBD_57C4=10051
,pUmem_Cmd_TBD_57C8=10052
,pUmem_Cmd_TBD_57CC=10053
,pUmem_Cmd_32_ServoOn=10054
,pUmem_Cmd_32_ServoOff=10055
,pUmem_Cmd_32_HomeStart=10056
,pUmem_Cmd_32_HomeAbort=10057
,pUmem_Cmd_32_HomeOffset=10058
,pUmem_Cmd_32_JogStop=10059
,pUmem_Cmd_32_JogContPlus=10060
,pUmem_Cmd_32_JogContMinus=10061
,pUmem_Cmd_32_JogAbsMove=10062
,pUmem_Cmd_32_JogIncMove=10063
,pUmem_Cmd_32_JogAbsPos=10064
,pUmem_Cmd_32_JogIncDist=10065
,pUmem_Cmd_32_JogSpeed=10066
,pUmem_Cmd_32_JogTa=10067
,pUmem_Cmd_32_JogTs=10068
,pUmem_Cmd_TBD_580C=10069
,pUmem_Cmd_TBD_5810=10070
,pUmem_Cmd_TBD_5814=10071
,pUmem_Cmd_TBD_5818=10072
,pUmem_Cmd_TBD_581C=10073
,pUmem_Cmd_Mc_ServoOn=10074
,pUmem_Cmd_Mc_ServoOff=10075
,pUmem_Cmd_Mc_HomeStart=10076
,pUmem_Cmd_Mc_HomeAbort=10077
,pUmem_Cmd_Mc_AlarmReset=10078
,pUmem_Cmd_Mc_RunMode=10079
,pUmem_Cmd_Mc_AutoStart=10080
,pUmem_Cmd_Mc_AutoAbort=10081
,pUmem_Cmd_Mc_CycleStart=10082
,pUmem_Cmd_Mc_Fsave=10083
,pUmem_Cmd_Mc_StepStart=10084
,pUmem_Cmd_Mc_AutoPause=10085
,pUmem_Cmd_TBD_61D8=10086
,pUmem_Cmd_TBD_61DC=10087
,pUmem_Cmd_TBD_61E0=10088
,pUmem_Cmd_TBD_61E4=10089
,pUmem_Cmd_TBD_61E8=10090
,pUmem_Cmd_TBD_61EC=10091
,pUmem_Cmd_TBD_61F0=10092
,pUmem_Cmd_TBD_61F4=10093
,pUmem_Cmd_TBD_61F8=10094
,pUmem_Cmd_TBD_61FC=10095
,pUmem_Cmd_TBD_6200=10096
,pUmem_Cmd_TBD_6204=10097
,pUmem_Cmd_TBD_6208=10098
,pUmem_Cmd_TBD_620C=10099
,pUmem_Cmd_TBD_6210=10100
,pUmem_Cmd_TBD_6214=10101
,pUmem_Cmd_TBD_6218=10102
,pUmem_Cmd_TBD_621C=10103
,pUmem_Cmd_TBD_6220=10104
,pUmem_Cmd_TBD_6224=10105
,pUmem_Cmd_TBD_6228=10106
,pUmem_Cmd_TBD_622C=10107
,pUmem_Cmd_TBD_6230=10108
,pUmem_Cmd_TBD_6234=10109
,pUmem_Cmd_TBD_6238=10110
,pUmem_Cmd_TBD_623C=10111
,pUmem_Cmd_TBD_6240=10112
,pUmem_Cmd_TBD_6244=10113
,pUmem_Cmd_Ws_ServoOn=10114
,pUmem_Cmd_Ws_ServoOff=10115
,pUmem_Cmd_Ws_HomeStart=10116
,pUmem_Cmd_Ws_HomeAbort=10117
,pUmem_Cmd_Ws_AlarmReset=10118
,pUmem_Cmd_Ws_AlarmRetry=10119
,pUmem_Cmd_Ws_AlarmAbort=10120
,pUmem_Cmd_TBD_65AC=10121
,pUmem_Cmd_TBD_65B0=10122
,pUmem_Cmd_TBD_65B4=10123
,pUmem_Cmd_Ws_TestShot=10124
,pUmem_Cmd_Ws_PdtStaChange=10125
,pUmem_Cmd_Tr_PdtStaChange=10126
,pUmem_Cmd_Ws_LaserEnableStart=10127
,pUmem_Cmd_Ws_LaserDisableStart=10128
,pUmem_Cmd_Ws_LaserTestCrossStart=10129
,pUmem_Cmd_Ws_LaserTestCrossAbort=10130
,pUmem_Cmd_Ws_LaserTestLineStart=10131
,pUmem_Cmd_Ws_LaserTestLineAbort=10132
,pUmem_Cmd_TBD_65DC=10133
,pUmem_Cmd_TBD_65E0=10134
,pUmem_Cmd_TBD_65E4=10135
,pUmem_Cmd_TBD_65E8=10136
,pUmem_Cmd_TBD_65EC=10137
,pUmem_Cmd_TBD_65F0=10138
,pUmem_Cmd_TBD_65F4=10139
,pUmem_Cmd_TBD_65F8=10140
,pUmem_Cmd_TBD_65FC=10141
,pUmem_Cmd_TBD_6600=10142
,pUmem_Cmd_TBD_6604=10143
,pUmem_Cmd_Ws_LdStart=10144
,pUmem_Cmd_Ws_LdAbort=10145
,pUmem_Cmd_Ws_LdHold=10146
,pUmem_Cmd_Ws_RdStart=10147
,pUmem_Cmd_Ws_RdAbort=10148
,pUmem_Cmd_Ws_RdHold=10149
,pUmem_Cmd_Ws_WdStart=10150
,pUmem_Cmd_Ws_WdAbort=10151
,pUmem_Cmd_Ws_WdHold=10152
,pUmem_Cmd_Ws_WtStart=10153
,pUmem_Cmd_Ws_WtAbort=10154
,pUmem_Cmd_Ws_WtHold=10155
,pUmem_Cmd_Ws_UdStart=10156
,pUmem_Cmd_Ws_UdAbort=10157
,pUmem_Cmd_Ws_UdHold=10158
,pUmem_Cmd_Ws_RjStart=10159
,pUmem_Cmd_Ws_RjAbort=10160
,pUmem_Cmd_Ws_RjHold=10161
,pUmem_Cmd_TBD_6650=10162
,pUmem_Cmd_TBD_6654=10163
,pUmem_Cmd_TBD_6658=10164
,pUmem_Cmd_TBD_665C=10165
,pUmem_Cmd_TBD_6660=10166
,pUmem_Cmd_TBD_6664=10167
,pUmem_Cmd_TBD_6668=10168
,pUmem_Cmd_TBD_666C=10169
,pUmem_Cmd_TBD_6670=10170
,pUmem_Cmd_TBD_6674=10171
,pUmem_Cmd_TBD_6678=10172
,pUmem_Cmd_TBD_667C=10173
,pUmem_Cmd_Ws_1stTransRjRsp=10174
,pUmem_Cmd_Ws_2ndTransLdRsp=10175
,pUmem_Cmd_Ws_2dVisionCkRsp=10176
,pUmem_Cmd_Ws_LwmStartRsp=10177
,pUmem_Cmd_TBD_6690=10178
,pUmem_Cmd_TBD_6694=10179
,pUmem_Cmd_TBD_6698=10180
,pUmem_Cmd_TBD_669C=10181
,pUmem_Cmd_TBD_66A0=10182
,pUmem_Cmd_Ws_RspSkipOpt=10183
,pUmem_Cmd_Ws_2ndTransLdAlignX=10184
,pUmem_Cmd_Ws_2ndTransLdAlignY=10185
,pUmem_Cmd_Ws_2ndTransLdAlignC=10186
,pUmem_Cmd_TBD_66B4=10187
,pUmem_Cmd_TBD_66B8=10188
,pUmem_Cmd_TBD_66BC=10189
,pUmem_Cmd_TBD_66C0=10190
,pUmem_Cmd_TBD_66C4=10191
,pUmem_Cmd_TBD_66C8=10192
,pUmem_Cmd_TBD_66CC=10193
,pUmem_Cmd_Ws_2ndTransPdtDir=10194
,pUmem_Cmd_Ws_2ndTransPdtNo=10195
,pUmem_Cmd_Ws_2ndTransTempOpt=10196
,pUmem_Cmd_TBD_66DC=10197
,pUmem_Cmd_TBD_66E0=10198
,pUmem_Cmd_TBD_66E4=10199
,pUmem_Cmd_TBD_66E8=10200
,pUmem_Cmd_TBD_66EC=10201
,pUmem_Cmd_TBD_66F0=10202
,pUmem_Cmd_TBD_66F4=10203
,pUmem_Cmd_Ws_AccLimitX=10204
,pUmem_Cmd_Ws_AccLimitY=10205
,pUmem_Cmd_Ws_AccLimitC=10206
,pUmem_Cmd_Ws_VelLimitC=10207
,pUmem_Cmd_Ws_RefVel=10208
,pUmem_Cmd_Ws_RotOffsetX=10209
,pUmem_Cmd_Ws_RotOffsetY=10210
,pUmem_Cmd_Ws_TbVacBlow=10211
,pUmem_Cmd_TBD_6718=10212
,pUmem_Cmd_TBD_671C=10213
,pUmem_Cmd_Ws_OutMode=10214
,pUmem_Cmd_Ws_PfmPeriod=10215
,pUmem_Cmd_Ws_PfmOnTime=10216
,pUmem_Cmd_Ws_CorePfmEna=10217
,pUmem_Cmd_Ws_RingPfmEna=10218
,pUmem_Cmd_Ws_CorePowerSf=10219
,pUmem_Cmd_Ws_CoreRefPower=10220
,pUmem_Cmd_Ws_CoreMinPower=10221
,pUmem_Cmd_Ws_CoreMaxPower=10222
,pUmem_Cmd_Ws_RingPowerSf=10223
,pUmem_Cmd_Ws_RingRefPower=10224
,pUmem_Cmd_Ws_RingMinPower=10225
,pUmem_Cmd_Ws_RingMaxPower=10226
,pUmem_Cmd_TBD_6754=10227
,pUmem_Cmd_TBD_6758=10228
,pUmem_Cmd_TBD_675C=10229
,pUmem_Cmd_TBD_6760=10230
,pUmem_Cmd_TBD_6764=10231
,pUmem_Cmd_TBD_6768=10232
,pUmem_Cmd_TBD_676C=10233
,pUmem_Cmd_Ws_ShotTime=10234
,pUmem_Cmd_Ws_EprOut=10235
,pUmem_Cmd_Ws_TempCkTime=10236
,pUmem_Cmd_Ws_TempOffset1=10237
,pUmem_Cmd_Ws_CldInposDelay=10238
,pUmem_Cmd_Ws_CoverFwdPos=10239
,pUmem_Cmd_Ws_CoverBwdPos=10240
,pUmem_Cmd_Ws_TempOffset2=10241
,pUmem_Cmd_TBD_6790=10242
,pUmem_Cmd_TBD_6794=10243
,pUmem_Cmd_TBD_6798=10244
,pUmem_Cmd_TBD_679C=10245
,pUmem_Cmd_TBD_67A0=10246
,pUmem_Cmd_TBD_67A4=10247
,pUmem_Cmd_TBD_67A8=10248
,pUmem_Cmd_TBD_67AC=10249
,pUmem_Cmd_TBD_67B0=10250
,pUmem_Cmd_TBD_67B4=10251
,pUmem_Cmd_TBD_67B8=10252
,pUmem_Cmd_TBD_67BC=10253
,pUmem_Cmd_Ws_LdVelX=10254
,pUmem_Cmd_Ws_LdVelY=10255
,pUmem_Cmd_Ws_LdVelC=10256
,pUmem_Cmd_Ws_LdPosX=10257
,pUmem_Cmd_Ws_LdPosY=10258
,pUmem_Cmd_Ws_LdPosC=10259
,pUmem_Cmd_Ws_RdVelX=10260
,pUmem_Cmd_Ws_RdVelY=10261
,pUmem_Cmd_Ws_RdVelC=10262
,pUmem_Cmd_Ws_RdPosX=10263
,pUmem_Cmd_Ws_RdPosY=10264
,pUmem_Cmd_Ws_RdPosC=10265
,pUmem_Cmd_Ws_WdVelX=10266
,pUmem_Cmd_Ws_WdVelY=10267
,pUmem_Cmd_Ws_WdVelC=10268
,pUmem_Cmd_Ws_WdPosX=10269
,pUmem_Cmd_Ws_WdPosY=10270
,pUmem_Cmd_Ws_WdPosC=10271
,pUmem_Cmd_Ws_WtVelX=10272
,pUmem_Cmd_Ws_WtVelY=10273
,pUmem_Cmd_Ws_WtVelC=10274
,pUmem_Cmd_Ws_WtPosX=10275
,pUmem_Cmd_Ws_WtPosY=10276
,pUmem_Cmd_Ws_WtPosC=10277
,pUmem_Cmd_Ws_UdVelX=10278
,pUmem_Cmd_Ws_UdVelY=10279
,pUmem_Cmd_Ws_UdVelC=10280
,pUmem_Cmd_Ws_UdPosX=10281
,pUmem_Cmd_Ws_UdPosY=10282
,pUmem_Cmd_Ws_UdPosC=10283
,pUmem_Cmd_Ws_RjVelX=10284
,pUmem_Cmd_Ws_RjVelY=10285
,pUmem_Cmd_Ws_RjVelC=10286
,pUmem_Cmd_Ws_RjPosX=10287
,pUmem_Cmd_Ws_RjPosY=10288
,pUmem_Cmd_Ws_RjPosC=10289
,pUmem_Cmd_TBD_6850=10290
,pUmem_Cmd_TBD_6854=10291
,pUmem_Cmd_TBD_6858=10292
,pUmem_Cmd_TBD_685C=10293
,pUmem_Cmd_TBD_6860=10294
,pUmem_Cmd_TBD_6864=10295
,pUmem_Cmd_TBD_6868=10296
,pUmem_Cmd_TBD_686C=10297
,pUmem_Cmd_TBD_6870=10298
,pUmem_Cmd_TBD_6874=10299
,pUmem_Cmd_TBD_6878=10300
,pUmem_Cmd_TBD_687C=10301
,pUmem_Cmd_TBD_6880=10302
,pUmem_Cmd_TBD_6884=10303
,pUmem_Cmd_Vs_ServoOn=10304
,pUmem_Cmd_Vs_ServoOff=10305
,pUmem_Cmd_Vs_HomeStart=10306
,pUmem_Cmd_Vs_HomeAbort=10307
,pUmem_Cmd_Vs_AlarmReset=10308
,pUmem_Cmd_Vs_AlarmRetry=10309
,pUmem_Cmd_Vs_AlarmAbort=10310
,pUmem_Cmd_TBD_6994=10311
,pUmem_Cmd_TBD_6998=10312
,pUmem_Cmd_TBD_699C=10313
,pUmem_Cmd_Vs_TestShot=10314
,pUmem_Cmd_Vs_PdtStaChange=10315
,pUmem_Cmd_TBD_69A8=10316
,pUmem_Cmd_TBD_69AC=10317
,pUmem_Cmd_TBD_69B0=10318
,pUmem_Cmd_TBD_69B4=10319
,pUmem_Cmd_TBD_69B8=10320
,pUmem_Cmd_TBD_69BC=10321
,pUmem_Cmd_TBD_69C0=10322
,pUmem_Cmd_TBD_69C4=10323
,pUmem_Cmd_TBD_69C8=10324
,pUmem_Cmd_TBD_69CC=10325
,pUmem_Cmd_TBD_69D0=10326
,pUmem_Cmd_TBD_69D4=10327
,pUmem_Cmd_TBD_69D8=10328
,pUmem_Cmd_TBD_69DC=10329
,pUmem_Cmd_TBD_69E0=10330
,pUmem_Cmd_TBD_69E4=10331
,pUmem_Cmd_TBD_69E8=10332
,pUmem_Cmd_TBD_69EC=10333
,pUmem_Cmd_Vs_LdStart=10334
,pUmem_Cmd_Vs_LdAbort=10335
,pUmem_Cmd_Vs_LdHold=10336
,pUmem_Cmd_Vs_RdStart=10337
,pUmem_Cmd_Vs_RdAbort=10338
,pUmem_Cmd_Vs_RdHold=10339
,pUmem_Cmd_Vs_VnStart=10340
,pUmem_Cmd_Vs_VnAbort=10341
,pUmem_Cmd_Vs_VnHold=10342
,pUmem_Cmd_Vs_WtStart=10343
,pUmem_Cmd_Vs_WtAbort=10344
,pUmem_Cmd_Vs_WtHold=10345
,pUmem_Cmd_Vs_UdStart=10346
,pUmem_Cmd_Vs_UdAbort=10347
,pUmem_Cmd_Vs_UdHold=10348
,pUmem_Cmd_Vs_RjStart=10349
,pUmem_Cmd_Vs_RjAbort=10350
,pUmem_Cmd_Vs_RjHold=10351
,pUmem_Cmd_TBD_6A38=10352
,pUmem_Cmd_TBD_6A3C=10353
,pUmem_Cmd_TBD_6A40=10354
,pUmem_Cmd_TBD_6A44=10355
,pUmem_Cmd_TBD_6A48=10356
,pUmem_Cmd_TBD_6A4C=10357
,pUmem_Cmd_TBD_6A50=10358
,pUmem_Cmd_TBD_6A54=10359
,pUmem_Cmd_TBD_6A58=10360
,pUmem_Cmd_TBD_6A5C=10361
,pUmem_Cmd_TBD_6A60=10362
,pUmem_Cmd_TBD_6A64=10363
,pUmem_Cmd_Vs_3rdTransUdRsp=10364
,pUmem_Cmd_Vs_3rdTransRjRsp=10365
,pUmem_Cmd_Vs_3DVisionStRsp=10366
,pUmem_Cmd_Vs_3DVisionEdRsp=10367
,pUmem_Cmd_TBD_6A78=10368
,pUmem_Cmd_TBD_6A7C=10369
,pUmem_Cmd_TBD_6A80=10370
,pUmem_Cmd_TBD_6A84=10371
,pUmem_Cmd_TBD_6A88=10372
,pUmem_Cmd_Vs_RspSkipOpt=10373
,pUmem_Cmd_TBD_6A90=10374
,pUmem_Cmd_TBD_6A94=10375
,pUmem_Cmd_TBD_6A98=10376
,pUmem_Cmd_TBD_6A9C=10377
,pUmem_Cmd_TBD_6AA0=10378
,pUmem_Cmd_TBD_6AA4=10379
,pUmem_Cmd_TBD_6AA8=10380
,pUmem_Cmd_TBD_6AAC=10381
,pUmem_Cmd_TBD_6AB0=10382
,pUmem_Cmd_TBD_6AB4=10383
,pUmem_Cmd_TBD_6AB8=10384
,pUmem_Cmd_TBD_6ABC=10385
,pUmem_Cmd_TBD_6AC0=10386
,pUmem_Cmd_TBD_6AC4=10387
,pUmem_Cmd_TBD_6AC8=10388
,pUmem_Cmd_TBD_6ACC=10389
,pUmem_Cmd_TBD_6AD0=10390
,pUmem_Cmd_TBD_6AD4=10391
,pUmem_Cmd_TBD_6AD8=10392
,pUmem_Cmd_TBD_6ADC=10393
,pUmem_Cmd_Vs_AccLimitX=10394
,pUmem_Cmd_Vs_AccLimitY=10395
,pUmem_Cmd_Vs_AccLimitC=10396
,pUmem_Cmd_Vs_VelLimitC=10397
,pUmem_Cmd_Vs_RefVel=10398
,pUmem_Cmd_Vs_RotOffsetX=10399
,pUmem_Cmd_Vs_RotOffsetY=10400
,pUmem_Cmd_TBD_6AFC=10401
,pUmem_Cmd_TBD_6B00=10402
,pUmem_Cmd_TBD_6B04=10403
,pUmem_Cmd_Vs_PfmPeriod=10404
,pUmem_Cmd_Vs_PfmDuty=10405
,pUmem_Cmd_TBD_6B10=10406
,pUmem_Cmd_TBD_6B14=10407
,pUmem_Cmd_TBD_6B18=10408
,pUmem_Cmd_TBD_6B1C=10409
,pUmem_Cmd_TBD_6B20=10410
,pUmem_Cmd_TBD_6B24=10411
,pUmem_Cmd_TBD_6B28=10412
,pUmem_Cmd_TBD_6B2C=10413
,pUmem_Cmd_TBD_6B30=10414
,pUmem_Cmd_TBD_6B34=10415
,pUmem_Cmd_TBD_6B38=10416
,pUmem_Cmd_TBD_6B3C=10417
,pUmem_Cmd_TBD_6B40=10418
,pUmem_Cmd_TBD_6B44=10419
,pUmem_Cmd_TBD_6B48=10420
,pUmem_Cmd_TBD_6B4C=10421
,pUmem_Cmd_TBD_6B50=10422
,pUmem_Cmd_TBD_6B54=10423
,pUmem_Cmd_Vs_ShotTime=10424
,pUmem_Cmd_Vs_CldInposDelay=10425
,pUmem_Cmd_TBD_6B60=10426
,pUmem_Cmd_TBD_6B64=10427
,pUmem_Cmd_TBD_6B68=10428
,pUmem_Cmd_TBD_6B6C=10429
,pUmem_Cmd_TBD_6B70=10430
,pUmem_Cmd_TBD_6B74=10431
,pUmem_Cmd_TBD_6B78=10432
,pUmem_Cmd_TBD_6B7C=10433
,pUmem_Cmd_TBD_6B80=10434
,pUmem_Cmd_TBD_6B84=10435
,pUmem_Cmd_TBD_6B88=10436
,pUmem_Cmd_TBD_6B8C=10437
,pUmem_Cmd_TBD_6B90=10438
,pUmem_Cmd_TBD_6B94=10439
,pUmem_Cmd_TBD_6B98=10440
,pUmem_Cmd_TBD_6B9C=10441
,pUmem_Cmd_TBD_6BA0=10442
,pUmem_Cmd_TBD_6BA4=10443
,pUmem_Cmd_Vs_LdVelX=10444
,pUmem_Cmd_Vs_LdVelY=10445
,pUmem_Cmd_Vs_LdVelC=10446
,pUmem_Cmd_Vs_LdPosX=10447
,pUmem_Cmd_Vs_LdPosY=10448
,pUmem_Cmd_Vs_LdPosC=10449
,pUmem_Cmd_Vs_RdVelX=10450
,pUmem_Cmd_Vs_RdVelY=10451
,pUmem_Cmd_Vs_RdVelC=10452
,pUmem_Cmd_Vs_RdPosX=10453
,pUmem_Cmd_Vs_RdPosY=10454
,pUmem_Cmd_Vs_RdPosC=10455
,pUmem_Cmd_Vs_VnVelX=10456
,pUmem_Cmd_Vs_VnVelY=10457
,pUmem_Cmd_Vs_VnVelC=10458
,pUmem_Cmd_Vs_VnPosX=10459
,pUmem_Cmd_Vs_VnPosY=10460
,pUmem_Cmd_Vs_VnPosC=10461
,pUmem_Cmd_Vs_WtVelX=10462
,pUmem_Cmd_Vs_WtVelY=10463
,pUmem_Cmd_Vs_WtVelC=10464
,pUmem_Cmd_Vs_WtPosX=10465
,pUmem_Cmd_Vs_WtPosY=10466
,pUmem_Cmd_Vs_WtPosC=10467
,pUmem_Cmd_Vs_UdVelX=10468
,pUmem_Cmd_Vs_UdVelY=10469
,pUmem_Cmd_Vs_UdVelC=10470
,pUmem_Cmd_Vs_UdPosX=10471
,pUmem_Cmd_Vs_UdPosY=10472
,pUmem_Cmd_Vs_UdPosC=10473
,pUmem_Cmd_Vs_RjVelX=10474
,pUmem_Cmd_Vs_RjVelY=10475
,pUmem_Cmd_Vs_RjVelC=10476
,pUmem_Cmd_Vs_RjPosX=10477
,pUmem_Cmd_Vs_RjPosY=10478
,pUmem_Cmd_Vs_RjPosC=10479
,pUmem_Cmd_TBD_6C38=10480
,pUmem_Cmd_TBD_6C3C=10481
,pUmem_Cmd_TBD_6C40=10482
,pUmem_Cmd_TBD_6C44=10483
,pUmem_Cmd_TBD_6C48=10484
,pUmem_Cmd_TBD_6C4C=10485
,pUmem_Cmd_TBD_6C50=10486
,pUmem_Cmd_TBD_6C54=10487
,pUmem_Cmd_TBD_6C58=10488
,pUmem_Cmd_TBD_6C5C=10489
,pUmem_Cmd_TBD_6C60=10490
,pUmem_Cmd_TBD_6C64=10491
,pUmem_Cmd_TBD_6C68=10492
,pUmem_Cmd_TBD_6C6C=10493
,pUmem_Cmd_Sc_ServoOn=10494
,pUmem_Cmd_Sc_ServoOff=10495
,pUmem_Cmd_Sc_HomeStart=10496
,pUmem_Cmd_Sc_HomeAbort=10497
,pUmem_Cmd_Sc_AlarmReset=10498
,pUmem_Cmd_Sc_Fsave=10499
,pUmem_Cmd_Sc_WblEna=10500
,pUmem_Cmd_Sc_WblLen=10501
,pUmem_Cmd_Sc_WblDist=10502
,pUmem_Cmd_Sc_WblType=10503
,pUmem_Cmd_Sc_WblRatioW=10504
,pUmem_Cmd_Sc_WblRatioL=10505
,pUmem_Cmd_Sc_WblOffsetX=10506
,pUmem_Cmd_Sc_WblOffsetY=10507
,pUmem_Di00=10604
,pUmem_Di01_LaserReady=10605
,pUmem_Di02_LaserReqResp=10606
,pUmem_Di03_LaserPowerOn=10607
,pUmem_Di04_LaserAdMode=10608
,pUmem_Di05_LaserProgRun=10609
,pUmem_Di06_LaserWarning=10610
,pUmem_Di07_LaserAbnormal=10611
,pUmem_Di08=10612
,pUmem_Di09=10613
,pUmem_Di0A=10614
,pUmem_Di0B=10615
,pUmem_Di0C=10616
,pUmem_Di0D=10617
,pUmem_Di0E=10618
,pUmem_Di0F=10619
,pUmem_Di10_WsLtFixUp=10620
,pUmem_Di11_WsVsLtStrCls=10621
,pUmem_Di12_WsLtFixDn=10622
,pUmem_Di13_WsVsLtStrOpn=10623
,pUmem_Di14_WsRtFixUp=10624
,pUmem_Di15_WsVsRtStrCls=10625
,pUmem_Di16_WsRtFixDn=10626
,pUmem_Di17_WsVsRtStrOpn=10627
,pUmem_Di18_WsTempBwd=10628
,pUmem_Di19_TrPickUp=10629
,pUmem_Di1A_WsTempFwd=10630
,pUmem_Di1B_TrPickDn=10631
,pUmem_Di1C_WsTbDet=10632
,pUmem_Di1D_TrGripCls=10633
,pUmem_Di1E=10634
,pUmem_Di1F_TrGripOpn=10635
,pUmem_Di20_VsTbFixBwd=10636
,pUmem_Di21_WsAirCurtain=10637
,pUmem_Di22_VsTbFixFwd=10638
,pUmem_Di23_WsN2Blow=10639
,pUmem_Di24_VsTbFixUp=10640
,pUmem_Di25=10641
,pUmem_Di26_VsTbFixDn=10642
,pUmem_Di27=10643
,pUmem_Di28=10644
,pUmem_Di29=10645
,pUmem_Di2A=10646
,pUmem_Di2B=10647
,pUmem_Di2C_VsTbDet=10648
,pUmem_Di2D=10649
,pUmem_Di2E=10650
,pUmem_Di2F=10651
,pUmem_Di30_EcldFwd=10652
,pUmem_Di31_EcldBwd=10653
,pUmem_Do00_LaserEmission=10654
,pUmem_Do01_LaserReset=10655
,pUmem_Do02_LaserRequest=10656
,pUmem_Do03_LaserPowerOn=10657
,pUmem_Do04_LaserAdInEna=10658
,pUmem_Do05_LaserGuideEna=10659
,pUmem_Do06_LaserProgEna=10660
,pUmem_Do07_LaserProgStop=10661
,pUmem_Do08=10662
,pUmem_Do09=10663
,pUmem_Do0A=10664
,pUmem_Do0B=10665
,pUmem_Do0C=10666
,pUmem_Do0D=10667
,pUmem_Do0E=10668
,pUmem_Do0F=10669
,pUmem_Do10_WsTbFixUp=10670
,pUmem_Do11_WsTempBwd=10671
,pUmem_Do12_WsTbFixDn=10672
,pUmem_Do13_WsTempFwd=10673
,pUmem_Do14_TrGripCls=10674
,pUmem_Do15_VsTbFixBwd=10675
,pUmem_Do16_TrGripOpn=10676
,pUmem_Do17_VsTbFixFwd=10677
,pUmem_Do18_TrPickUp=10678
,pUmem_Do19_VsTbFixUp=10679
,pUmem_Do1A_TrPickDn=10680
,pUmem_Do1B_VsTbFixDn=10681
,pUmem_Do1C_WsVsStrCls=10682
,pUmem_Do1D_WsCoolAir=10683
,pUmem_Do1E_WsVsStrOpn=10684
,pUmem_Do1F=10685
,pUmem_Do20_WsTbVacm=10686
,pUmem_Do21_WsAirCurtain=10687
,pUmem_Do22_WsTbBlow=10688
,pUmem_Do23_WsN2Blow=10689
,pUmem_Do24=10690
,pUmem_Do25_WsTbVacmValve=10691
,pUmem_Do26=10692
,pUmem_Do27=10693
,pUmem_Do28=10694
,pUmem_Do29=10695
,pUmem_Do2A=10696
,pUmem_Do2B=10697
,pUmem_Do2C=10698
,pUmem_Do2D=10699
,pUmem_Do2E=10700
,pUmem_Do2F=10701
,pUmem_Do30_EcldFwd=10702
,pUmem_Do31_EcldBwd=10703
,pUmem_Ai00_WsLoadCell=10704
,pUmem_Ai01=10705
,pUmem_Ti00_WsTempSen1=10706
,pUmem_Ti01_WsTempSen2=10707
,pUmem_Sta_Mc_BufIdx=10708
,pWs_Vect_Dlt=12101
,pVs_Vect_Dlt=12102
,pWs_Epr_OutVdc=12103};
enum ptrMarray {_ptrMarray_=-1
,pEcat_Di_Md01=8231
,pEcat_Di_Md02=8247
,pEcat_Do_Md01=8263
,pEcat_Do_Md02=8279
,pEcat_CmdPos=8366
,pEcat_ActErr=8398
,pEcat_ActTrq=8430
,pBuf_ActTrq=8462
,pEcat_AlarmReset=8494
,pGpio_Di_Md00=8526
,pGpio_Do_Md00=8542
,pUmem_Di_Md00=10508
,pUmem_Di_Md01=10524
,pUmem_Di_Md02=10540
,pUmem_Do_Md00=10556
,pUmem_Do_Md01=10572
,pUmem_Do_Md02=10588
,pUmem_Sta_Mc_SeqCur=10709
,pUmem_Sta_Mc_SeqOld=10759
,pUmem_Sta_Mc_Pdt=10809
,pUmem_Sta_Mc_Time_L=10859
,pUmem_Sta_Mc_Time_H=10909
,pUmem_Sta_Mc_Time_BufD=10959
,pUmem_Sta_Mc_Time_BufL=11009
,pUmem_Sta_Mc_Time_BufH=11059
,pUmem_Sta_CmdPos=11109
,pUmem_Sta_ActPos=11141
,pUmem_Sta_Velocity=11173
,pUmem_Sta_Load=11205
,pUmem_Sta_AmpEna=11237
,pUmem_Sta_CloseLoop=11269
,pUmem_Sta_InPos=11301
,pUmem_Sta_HomeFin=11333
,pUmem_Sta_HomeIng=11365
,pUmem_Sta_LimitMinus=11397
,pUmem_Sta_LimitPlus=11429
,pUmem_Sta_FollowingErr=11461
,pUmem_Sta_AmpFault=11493
,pUmem_Sta_EncLoss=11525
,pUmem_Sta_I2tErr=11557
,pUmem_Sta_ProgPos=11589
,pUmem_Cmd_ServoOn=11621
,pUmem_Cmd_ServoOff=11653
,pUmem_Cmd_HomeStart=11685
,pUmem_Cmd_HomeAbort=11717
,pUmem_Cmd_HomeOffset=11749
,pUmem_Cmd_JogStop=11781
,pUmem_Cmd_JogContPlus=11813
,pUmem_Cmd_JogContMinus=11845
,pUmem_Cmd_JogAbsMove=11877
,pUmem_Cmd_JogIncMove=11909
,pUmem_Cmd_JogAbsPos=11941
,pUmem_Cmd_JogIncDist=11973
,pUmem_Cmd_JogSpeed=12005
,pUmem_Cmd_JogTa=12037
,pUmem_Cmd_JogTs=12069};
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
#define pEcat_Ti00_Ws_TempSen1 8362
#define pEcat_Ti01_Ws_TempSen2 8363
#define pBuf_Ti00_Ws_TempSen1 8364
#define pBuf_Ti01_Ws_TempSen2 8365
#define gTi00_Ws_TempSen1 8195
#define gTi01_Ws_TempSen2 8196
#define pEcat_CmdPos 8366
#define pEcat_ActErr 8398
#define pEcat_ActTrq 8430
#define pBuf_ActTrq 8462
#define pEcat_AlarmReset 8494
#define pGpio_Di_Md00 8526
#define pGpio_Do_Md00 8542
#define pGpio_Di00 8558
#define pGpio_Di01_LaserReady 8559
#define pGpio_Di02_LaserReqResp 8560
#define pGpio_Di03_LaserPowerOn 8561
#define pGpio_Di04_LaserProgRun 8562
#define pGpio_Di05_LaserWarning 8563
#define pGpio_Di06_LaserAbnormal 8564
#define pGpio_Di07 8565
#define pGpio_Di08 8566
#define pGpio_Di09 8567
#define pGpio_Di0A 8568
#define pGpio_Di0B 8569
#define pGpio_Di0C 8570
#define pGpio_Di0D 8571
#define pGpio_Di0E 8572
#define pGpio_Di0F 8573
#define pGpio_Do00_LaserEmission 8574
#define pGpio_Do01_LaserReset 8575
#define pGpio_Do02_LaserRequest 8576
#define pGpio_Do03_LaserPowerOn 8577
#define pGpio_Do04_LaserAdInEna 8578
#define pGpio_Do05_LaserGuideEna 8579
#define pGpio_Do06_LaserProgEna 8580
#define pGpio_Do07_LaserProgStop 8581
#define pGpio_Do08 8582
#define pGpio_Do09 8583
#define pGpio_Do0A 8584
#define pGpio_Do0B 8585
#define pGpio_Do0C 8586
#define pGpio_Do0D 8587
#define pGpio_Do0E 8588
#define pGpio_Do0F 8589
#define pUmem_Sta_01_CmdPos 8590
#define pUmem_Sta_01_ActPos 8591
#define pUmem_Sta_01_Velocity 8592
#define pUmem_Sta_01_Load 8593
#define pUmem_Sta_01_AmpEna 8594
#define pUmem_Sta_01_CloseLoop 8595
#define pUmem_Sta_01_InPos 8596
#define pUmem_Sta_01_HomeFin 8597
#define pUmem_Sta_01_HomeIng 8598
#define pUmem_Sta_01_LimitMinus 8599
#define pUmem_Sta_01_LimitPlus 8600
#define pUmem_Sta_01_FollowingErr 8601
#define pUmem_Sta_01_AmpFault 8602
#define pUmem_Sta_01_EncLoss 8603
#define pUmem_Sta_01_I2tErr 8604
#define pUmem_Sta_01_ProgPos 8605
#define pUmem_Sta_TBD_2750 8606
#define pUmem_Sta_TBD_2754 8607
#define pUmem_Sta_TBD_2758 8608
#define pUmem_Sta_TBD_275C 8609
#define pUmem_Sta_02_CmdPos 8610
#define pUmem_Sta_02_ActPos 8611
#define pUmem_Sta_02_Velocity 8612
#define pUmem_Sta_02_Load 8613
#define pUmem_Sta_02_AmpEna 8614
#define pUmem_Sta_02_CloseLoop 8615
#define pUmem_Sta_02_InPos 8616
#define pUmem_Sta_02_HomeFin 8617
#define pUmem_Sta_02_HomeIng 8618
#define pUmem_Sta_02_LimitMinus 8619
#define pUmem_Sta_02_LimitPlus 8620
#define pUmem_Sta_02_FollowingErr 8621
#define pUmem_Sta_02_AmpFault 8622
#define pUmem_Sta_02_EncLoss 8623
#define pUmem_Sta_02_I2tErr 8624
#define pUmem_Sta_02_ProgPos 8625
#define pUmem_Sta_TBD_27A0 8626
#define pUmem_Sta_TBD_27A4 8627
#define pUmem_Sta_TBD_27A8 8628
#define pUmem_Sta_TBD_27AC 8629
#define pUmem_Sta_03_CmdPos 8630
#define pUmem_Sta_03_ActPos 8631
#define pUmem_Sta_03_Velocity 8632
#define pUmem_Sta_03_Load 8633
#define pUmem_Sta_03_AmpEna 8634
#define pUmem_Sta_03_CloseLoop 8635
#define pUmem_Sta_03_InPos 8636
#define pUmem_Sta_03_HomeFin 8637
#define pUmem_Sta_03_HomeIng 8638
#define pUmem_Sta_03_LimitMinus 8639
#define pUmem_Sta_03_LimitPlus 8640
#define pUmem_Sta_03_FollowingErr 8641
#define pUmem_Sta_03_AmpFault 8642
#define pUmem_Sta_03_EncLoss 8643
#define pUmem_Sta_03_I2tErr 8644
#define pUmem_Sta_03_ProgPos 8645
#define pUmem_Sta_TBD_27F0 8646
#define pUmem_Sta_TBD_27F4 8647
#define pUmem_Sta_TBD_27F8 8648
#define pUmem_Sta_TBD_27FC 8649
#define pUmem_Sta_04_CmdPos 8650
#define pUmem_Sta_04_ActPos 8651
#define pUmem_Sta_04_Velocity 8652
#define pUmem_Sta_04_Load 8653
#define pUmem_Sta_04_AmpEna 8654
#define pUmem_Sta_04_CloseLoop 8655
#define pUmem_Sta_04_InPos 8656
#define pUmem_Sta_04_HomeFin 8657
#define pUmem_Sta_04_HomeIng 8658
#define pUmem_Sta_04_LimitMinus 8659
#define pUmem_Sta_04_LimitPlus 8660
#define pUmem_Sta_04_FollowingErr 8661
#define pUmem_Sta_04_AmpFault 8662
#define pUmem_Sta_04_EncLoss 8663
#define pUmem_Sta_04_I2tErr 8664
#define pUmem_Sta_04_ProgPos 8665
#define pUmem_Sta_TBD_2840 8666
#define pUmem_Sta_TBD_2844 8667
#define pUmem_Sta_TBD_2848 8668
#define pUmem_Sta_TBD_284C 8669
#define pUmem_Sta_05_CmdPos 8670
#define pUmem_Sta_05_ActPos 8671
#define pUmem_Sta_05_Velocity 8672
#define pUmem_Sta_05_Load 8673
#define pUmem_Sta_05_AmpEna 8674
#define pUmem_Sta_05_CloseLoop 8675
#define pUmem_Sta_05_InPos 8676
#define pUmem_Sta_05_HomeFin 8677
#define pUmem_Sta_05_HomeIng 8678
#define pUmem_Sta_05_LimitMinus 8679
#define pUmem_Sta_05_LimitPlus 8680
#define pUmem_Sta_05_FollowingErr 8681
#define pUmem_Sta_05_AmpFault 8682
#define pUmem_Sta_05_EncLoss 8683
#define pUmem_Sta_05_I2tErr 8684
#define pUmem_Sta_05_ProgPos 8685
#define pUmem_Sta_TBD_2890 8686
#define pUmem_Sta_TBD_2894 8687
#define pUmem_Sta_TBD_2898 8688
#define pUmem_Sta_TBD_289C 8689
#define pUmem_Sta_06_CmdPos 8690
#define pUmem_Sta_06_ActPos 8691
#define pUmem_Sta_06_Velocity 8692
#define pUmem_Sta_06_Load 8693
#define pUmem_Sta_06_AmpEna 8694
#define pUmem_Sta_06_CloseLoop 8695
#define pUmem_Sta_06_InPos 8696
#define pUmem_Sta_06_HomeFin 8697
#define pUmem_Sta_06_HomeIng 8698
#define pUmem_Sta_06_LimitMinus 8699
#define pUmem_Sta_06_LimitPlus 8700
#define pUmem_Sta_06_FollowingErr 8701
#define pUmem_Sta_06_AmpFault 8702
#define pUmem_Sta_06_EncLoss 8703
#define pUmem_Sta_06_I2tErr 8704
#define pUmem_Sta_06_ProgPos 8705
#define pUmem_Sta_TBD_28E0 8706
#define pUmem_Sta_TBD_28E4 8707
#define pUmem_Sta_TBD_28E8 8708
#define pUmem_Sta_TBD_28EC 8709
#define pUmem_Sta_07_CmdPos 8710
#define pUmem_Sta_07_ActPos 8711
#define pUmem_Sta_07_Velocity 8712
#define pUmem_Sta_07_Load 8713
#define pUmem_Sta_07_AmpEna 8714
#define pUmem_Sta_07_CloseLoop 8715
#define pUmem_Sta_07_InPos 8716
#define pUmem_Sta_07_HomeFin 8717
#define pUmem_Sta_07_HomeIng 8718
#define pUmem_Sta_07_LimitMinus 8719
#define pUmem_Sta_07_LimitPlus 8720
#define pUmem_Sta_07_FollowingErr 8721
#define pUmem_Sta_07_AmpFault 8722
#define pUmem_Sta_07_EncLoss 8723
#define pUmem_Sta_07_I2tErr 8724
#define pUmem_Sta_07_ProgPos 8725
#define pUmem_Sta_TBD_2930 8726
#define pUmem_Sta_TBD_2934 8727
#define pUmem_Sta_TBD_2938 8728
#define pUmem_Sta_TBD_293C 8729
#define pUmem_Sta_08_CmdPos 8730
#define pUmem_Sta_08_ActPos 8731
#define pUmem_Sta_08_Velocity 8732
#define pUmem_Sta_08_Load 8733
#define pUmem_Sta_08_AmpEna 8734
#define pUmem_Sta_08_CloseLoop 8735
#define pUmem_Sta_08_InPos 8736
#define pUmem_Sta_08_HomeFin 8737
#define pUmem_Sta_08_HomeIng 8738
#define pUmem_Sta_08_LimitMinus 8739
#define pUmem_Sta_08_LimitPlus 8740
#define pUmem_Sta_08_FollowingErr 8741
#define pUmem_Sta_08_AmpFault 8742
#define pUmem_Sta_08_EncLoss 8743
#define pUmem_Sta_08_I2tErr 8744
#define pUmem_Sta_08_ProgPos 8745
#define pUmem_Sta_TBD_2980 8746
#define pUmem_Sta_TBD_2984 8747
#define pUmem_Sta_TBD_2988 8748
#define pUmem_Sta_TBD_298C 8749
#define pUmem_Sta_09_CmdPos 8750
#define pUmem_Sta_09_ActPos 8751
#define pUmem_Sta_09_Velocity 8752
#define pUmem_Sta_09_Load 8753
#define pUmem_Sta_09_AmpEna 8754
#define pUmem_Sta_09_CloseLoop 8755
#define pUmem_Sta_09_InPos 8756
#define pUmem_Sta_09_HomeFin 8757
#define pUmem_Sta_09_HomeIng 8758
#define pUmem_Sta_09_LimitMinus 8759
#define pUmem_Sta_09_LimitPlus 8760
#define pUmem_Sta_09_FollowingErr 8761
#define pUmem_Sta_09_AmpFault 8762
#define pUmem_Sta_09_EncLoss 8763
#define pUmem_Sta_09_I2tErr 8764
#define pUmem_Sta_09_ProgPos 8765
#define pUmem_Sta_TBD_29D0 8766
#define pUmem_Sta_TBD_29D4 8767
#define pUmem_Sta_TBD_29D8 8768
#define pUmem_Sta_TBD_29DC 8769
#define pUmem_Sta_10_CmdPos 8770
#define pUmem_Sta_10_ActPos 8771
#define pUmem_Sta_10_Velocity 8772
#define pUmem_Sta_10_Load 8773
#define pUmem_Sta_10_AmpEna 8774
#define pUmem_Sta_10_CloseLoop 8775
#define pUmem_Sta_10_InPos 8776
#define pUmem_Sta_10_HomeFin 8777
#define pUmem_Sta_10_HomeIng 8778
#define pUmem_Sta_10_LimitMinus 8779
#define pUmem_Sta_10_LimitPlus 8780
#define pUmem_Sta_10_FollowingErr 8781
#define pUmem_Sta_10_AmpFault 8782
#define pUmem_Sta_10_EncLoss 8783
#define pUmem_Sta_10_I2tErr 8784
#define pUmem_Sta_10_ProgPos 8785
#define pUmem_Sta_TBD_2A20 8786
#define pUmem_Sta_TBD_2A24 8787
#define pUmem_Sta_TBD_2A28 8788
#define pUmem_Sta_TBD_2A2C 8789
#define pUmem_Sta_11_CmdPos 8790
#define pUmem_Sta_11_ActPos 8791
#define pUmem_Sta_11_Velocity 8792
#define pUmem_Sta_11_Load 8793
#define pUmem_Sta_11_AmpEna 8794
#define pUmem_Sta_11_CloseLoop 8795
#define pUmem_Sta_11_InPos 8796
#define pUmem_Sta_11_HomeFin 8797
#define pUmem_Sta_11_HomeIng 8798
#define pUmem_Sta_11_LimitMinus 8799
#define pUmem_Sta_11_LimitPlus 8800
#define pUmem_Sta_11_FollowingErr 8801
#define pUmem_Sta_11_AmpFault 8802
#define pUmem_Sta_11_EncLoss 8803
#define pUmem_Sta_11_I2tErr 8804
#define pUmem_Sta_11_ProgPos 8805
#define pUmem_Sta_TBD_2A70 8806
#define pUmem_Sta_TBD_2A74 8807
#define pUmem_Sta_TBD_2A78 8808
#define pUmem_Sta_TBD_2A7C 8809
#define pUmem_Sta_12_CmdPos 8810
#define pUmem_Sta_12_ActPos 8811
#define pUmem_Sta_12_Velocity 8812
#define pUmem_Sta_12_Load 8813
#define pUmem_Sta_12_AmpEna 8814
#define pUmem_Sta_12_CloseLoop 8815
#define pUmem_Sta_12_InPos 8816
#define pUmem_Sta_12_HomeFin 8817
#define pUmem_Sta_12_HomeIng 8818
#define pUmem_Sta_12_LimitMinus 8819
#define pUmem_Sta_12_LimitPlus 8820
#define pUmem_Sta_12_FollowingErr 8821
#define pUmem_Sta_12_AmpFault 8822
#define pUmem_Sta_12_EncLoss 8823
#define pUmem_Sta_12_I2tErr 8824
#define pUmem_Sta_12_ProgPos 8825
#define pUmem_Sta_TBD_2AC0 8826
#define pUmem_Sta_TBD_2AC4 8827
#define pUmem_Sta_TBD_2AC8 8828
#define pUmem_Sta_TBD_2ACC 8829
#define pUmem_Sta_13_CmdPos 8830
#define pUmem_Sta_13_ActPos 8831
#define pUmem_Sta_13_Velocity 8832
#define pUmem_Sta_13_Load 8833
#define pUmem_Sta_13_AmpEna 8834
#define pUmem_Sta_13_CloseLoop 8835
#define pUmem_Sta_13_InPos 8836
#define pUmem_Sta_13_HomeFin 8837
#define pUmem_Sta_13_HomeIng 8838
#define pUmem_Sta_13_LimitMinus 8839
#define pUmem_Sta_13_LimitPlus 8840
#define pUmem_Sta_13_FollowingErr 8841
#define pUmem_Sta_13_AmpFault 8842
#define pUmem_Sta_13_EncLoss 8843
#define pUmem_Sta_13_I2tErr 8844
#define pUmem_Sta_13_ProgPos 8845
#define pUmem_Sta_TBD_2B10 8846
#define pUmem_Sta_TBD_2B14 8847
#define pUmem_Sta_TBD_2B18 8848
#define pUmem_Sta_TBD_2B1C 8849
#define pUmem_Sta_14_CmdPos 8850
#define pUmem_Sta_14_ActPos 8851
#define pUmem_Sta_14_Velocity 8852
#define pUmem_Sta_14_Load 8853
#define pUmem_Sta_14_AmpEna 8854
#define pUmem_Sta_14_CloseLoop 8855
#define pUmem_Sta_14_InPos 8856
#define pUmem_Sta_14_HomeFin 8857
#define pUmem_Sta_14_HomeIng 8858
#define pUmem_Sta_14_LimitMinus 8859
#define pUmem_Sta_14_LimitPlus 8860
#define pUmem_Sta_14_FollowingErr 8861
#define pUmem_Sta_14_AmpFault 8862
#define pUmem_Sta_14_EncLoss 8863
#define pUmem_Sta_14_I2tErr 8864
#define pUmem_Sta_14_ProgPos 8865
#define pUmem_Sta_TBD_2B60 8866
#define pUmem_Sta_TBD_2B64 8867
#define pUmem_Sta_TBD_2B68 8868
#define pUmem_Sta_TBD_2B6C 8869
#define pUmem_Sta_15_CmdPos 8870
#define pUmem_Sta_15_ActPos 8871
#define pUmem_Sta_15_Velocity 8872
#define pUmem_Sta_15_Load 8873
#define pUmem_Sta_15_AmpEna 8874
#define pUmem_Sta_15_CloseLoop 8875
#define pUmem_Sta_15_InPos 8876
#define pUmem_Sta_15_HomeFin 8877
#define pUmem_Sta_15_HomeIng 8878
#define pUmem_Sta_15_LimitMinus 8879
#define pUmem_Sta_15_LimitPlus 8880
#define pUmem_Sta_15_FollowingErr 8881
#define pUmem_Sta_15_AmpFault 8882
#define pUmem_Sta_15_EncLoss 8883
#define pUmem_Sta_15_I2tErr 8884
#define pUmem_Sta_15_ProgPos 8885
#define pUmem_Sta_TBD_2BB0 8886
#define pUmem_Sta_TBD_2BB4 8887
#define pUmem_Sta_TBD_2BB8 8888
#define pUmem_Sta_TBD_2BBC 8889
#define pUmem_Sta_16_CmdPos 8890
#define pUmem_Sta_16_ActPos 8891
#define pUmem_Sta_16_Velocity 8892
#define pUmem_Sta_16_Load 8893
#define pUmem_Sta_16_AmpEna 8894
#define pUmem_Sta_16_CloseLoop 8895
#define pUmem_Sta_16_InPos 8896
#define pUmem_Sta_16_HomeFin 8897
#define pUmem_Sta_16_HomeIng 8898
#define pUmem_Sta_16_LimitMinus 8899
#define pUmem_Sta_16_LimitPlus 8900
#define pUmem_Sta_16_FollowingErr 8901
#define pUmem_Sta_16_AmpFault 8902
#define pUmem_Sta_16_EncLoss 8903
#define pUmem_Sta_16_I2tErr 8904
#define pUmem_Sta_16_ProgPos 8905
#define pUmem_Sta_TBD_2C00 8906
#define pUmem_Sta_TBD_2C04 8907
#define pUmem_Sta_TBD_2C08 8908
#define pUmem_Sta_TBD_2C0C 8909
#define pUmem_Sta_17_CmdPos 8910
#define pUmem_Sta_17_ActPos 8911
#define pUmem_Sta_17_Velocity 8912
#define pUmem_Sta_17_Load 8913
#define pUmem_Sta_17_AmpEna 8914
#define pUmem_Sta_17_CloseLoop 8915
#define pUmem_Sta_17_InPos 8916
#define pUmem_Sta_17_HomeFin 8917
#define pUmem_Sta_17_HomeIng 8918
#define pUmem_Sta_17_LimitMinus 8919
#define pUmem_Sta_17_LimitPlus 8920
#define pUmem_Sta_17_FollowingErr 8921
#define pUmem_Sta_17_AmpFault 8922
#define pUmem_Sta_17_EncLoss 8923
#define pUmem_Sta_17_I2tErr 8924
#define pUmem_Sta_17_ProgPos 8925
#define pUmem_Sta_TBD_2C50 8926
#define pUmem_Sta_TBD_2C54 8927
#define pUmem_Sta_TBD_2C58 8928
#define pUmem_Sta_TBD_2C5C 8929
#define pUmem_Sta_18_CmdPos 8930
#define pUmem_Sta_18_ActPos 8931
#define pUmem_Sta_18_Velocity 8932
#define pUmem_Sta_18_Load 8933
#define pUmem_Sta_18_AmpEna 8934
#define pUmem_Sta_18_CloseLoop 8935
#define pUmem_Sta_18_InPos 8936
#define pUmem_Sta_18_HomeFin 8937
#define pUmem_Sta_18_HomeIng 8938
#define pUmem_Sta_18_LimitMinus 8939
#define pUmem_Sta_18_LimitPlus 8940
#define pUmem_Sta_18_FollowingErr 8941
#define pUmem_Sta_18_AmpFault 8942
#define pUmem_Sta_18_EncLoss 8943
#define pUmem_Sta_18_I2tErr 8944
#define pUmem_Sta_18_ProgPos 8945
#define pUmem_Sta_TBD_2CA0 8946
#define pUmem_Sta_TBD_2CA4 8947
#define pUmem_Sta_TBD_2CA8 8948
#define pUmem_Sta_TBD_2CAC 8949
#define pUmem_Sta_19_CmdPos 8950
#define pUmem_Sta_19_ActPos 8951
#define pUmem_Sta_19_Velocity 8952
#define pUmem_Sta_19_Load 8953
#define pUmem_Sta_19_AmpEna 8954
#define pUmem_Sta_19_CloseLoop 8955
#define pUmem_Sta_19_InPos 8956
#define pUmem_Sta_19_HomeFin 8957
#define pUmem_Sta_19_HomeIng 8958
#define pUmem_Sta_19_LimitMinus 8959
#define pUmem_Sta_19_LimitPlus 8960
#define pUmem_Sta_19_FollowingErr 8961
#define pUmem_Sta_19_AmpFault 8962
#define pUmem_Sta_19_EncLoss 8963
#define pUmem_Sta_19_I2tErr 8964
#define pUmem_Sta_19_ProgPos 8965
#define pUmem_Sta_TBD_2CF0 8966
#define pUmem_Sta_TBD_2CF4 8967
#define pUmem_Sta_TBD_2CF8 8968
#define pUmem_Sta_TBD_2CFC 8969
#define pUmem_Sta_20_CmdPos 8970
#define pUmem_Sta_20_ActPos 8971
#define pUmem_Sta_20_Velocity 8972
#define pUmem_Sta_20_Load 8973
#define pUmem_Sta_20_AmpEna 8974
#define pUmem_Sta_20_CloseLoop 8975
#define pUmem_Sta_20_InPos 8976
#define pUmem_Sta_20_HomeFin 8977
#define pUmem_Sta_20_HomeIng 8978
#define pUmem_Sta_20_LimitMinus 8979
#define pUmem_Sta_20_LimitPlus 8980
#define pUmem_Sta_20_FollowingErr 8981
#define pUmem_Sta_20_AmpFault 8982
#define pUmem_Sta_20_EncLoss 8983
#define pUmem_Sta_20_I2tErr 8984
#define pUmem_Sta_20_ProgPos 8985
#define pUmem_Sta_TBD_2D40 8986
#define pUmem_Sta_TBD_2D44 8987
#define pUmem_Sta_TBD_2D48 8988
#define pUmem_Sta_TBD_2D4C 8989
#define pUmem_Sta_21_CmdPos 8990
#define pUmem_Sta_21_ActPos 8991
#define pUmem_Sta_21_Velocity 8992
#define pUmem_Sta_21_Load 8993
#define pUmem_Sta_21_AmpEna 8994
#define pUmem_Sta_21_CloseLoop 8995
#define pUmem_Sta_21_InPos 8996
#define pUmem_Sta_21_HomeFin 8997
#define pUmem_Sta_21_HomeIng 8998
#define pUmem_Sta_21_LimitMinus 8999
#define pUmem_Sta_21_LimitPlus 9000
#define pUmem_Sta_21_FollowingErr 9001
#define pUmem_Sta_21_AmpFault 9002
#define pUmem_Sta_21_EncLoss 9003
#define pUmem_Sta_21_I2tErr 9004
#define pUmem_Sta_21_ProgPos 9005
#define pUmem_Sta_TBD_2D90 9006
#define pUmem_Sta_TBD_2D94 9007
#define pUmem_Sta_TBD_2D98 9008
#define pUmem_Sta_TBD_2D9C 9009
#define pUmem_Sta_22_CmdPos 9010
#define pUmem_Sta_22_ActPos 9011
#define pUmem_Sta_22_Velocity 9012
#define pUmem_Sta_22_Load 9013
#define pUmem_Sta_22_AmpEna 9014
#define pUmem_Sta_22_CloseLoop 9015
#define pUmem_Sta_22_InPos 9016
#define pUmem_Sta_22_HomeFin 9017
#define pUmem_Sta_22_HomeIng 9018
#define pUmem_Sta_22_LimitMinus 9019
#define pUmem_Sta_22_LimitPlus 9020
#define pUmem_Sta_22_FollowingErr 9021
#define pUmem_Sta_22_AmpFault 9022
#define pUmem_Sta_22_EncLoss 9023
#define pUmem_Sta_22_I2tErr 9024
#define pUmem_Sta_22_ProgPos 9025
#define pUmem_Sta_TBD_2DE0 9026
#define pUmem_Sta_TBD_2DE4 9027
#define pUmem_Sta_TBD_2DE8 9028
#define pUmem_Sta_TBD_2DEC 9029
#define pUmem_Sta_23_CmdPos 9030
#define pUmem_Sta_23_ActPos 9031
#define pUmem_Sta_23_Velocity 9032
#define pUmem_Sta_23_Load 9033
#define pUmem_Sta_23_AmpEna 9034
#define pUmem_Sta_23_CloseLoop 9035
#define pUmem_Sta_23_InPos 9036
#define pUmem_Sta_23_HomeFin 9037
#define pUmem_Sta_23_HomeIng 9038
#define pUmem_Sta_23_LimitMinus 9039
#define pUmem_Sta_23_LimitPlus 9040
#define pUmem_Sta_23_FollowingErr 9041
#define pUmem_Sta_23_AmpFault 9042
#define pUmem_Sta_23_EncLoss 9043
#define pUmem_Sta_23_I2tErr 9044
#define pUmem_Sta_23_ProgPos 9045
#define pUmem_Sta_TBD_2E30 9046
#define pUmem_Sta_TBD_2E34 9047
#define pUmem_Sta_TBD_2E38 9048
#define pUmem_Sta_TBD_2E3C 9049
#define pUmem_Sta_24_CmdPos 9050
#define pUmem_Sta_24_ActPos 9051
#define pUmem_Sta_24_Velocity 9052
#define pUmem_Sta_24_Load 9053
#define pUmem_Sta_24_AmpEna 9054
#define pUmem_Sta_24_CloseLoop 9055
#define pUmem_Sta_24_InPos 9056
#define pUmem_Sta_24_HomeFin 9057
#define pUmem_Sta_24_HomeIng 9058
#define pUmem_Sta_24_LimitMinus 9059
#define pUmem_Sta_24_LimitPlus 9060
#define pUmem_Sta_24_FollowingErr 9061
#define pUmem_Sta_24_AmpFault 9062
#define pUmem_Sta_24_EncLoss 9063
#define pUmem_Sta_24_I2tErr 9064
#define pUmem_Sta_24_ProgPos 9065
#define pUmem_Sta_TBD_2E80 9066
#define pUmem_Sta_TBD_2E84 9067
#define pUmem_Sta_TBD_2E88 9068
#define pUmem_Sta_TBD_2E8C 9069
#define pUmem_Sta_25_CmdPos 9070
#define pUmem_Sta_25_ActPos 9071
#define pUmem_Sta_25_Velocity 9072
#define pUmem_Sta_25_Load 9073
#define pUmem_Sta_25_AmpEna 9074
#define pUmem_Sta_25_CloseLoop 9075
#define pUmem_Sta_25_InPos 9076
#define pUmem_Sta_25_HomeFin 9077
#define pUmem_Sta_25_HomeIng 9078
#define pUmem_Sta_25_LimitMinus 9079
#define pUmem_Sta_25_LimitPlus 9080
#define pUmem_Sta_25_FollowingErr 9081
#define pUmem_Sta_25_AmpFault 9082
#define pUmem_Sta_25_EncLoss 9083
#define pUmem_Sta_25_I2tErr 9084
#define pUmem_Sta_25_ProgPos 9085
#define pUmem_Sta_TBD_2ED0 9086
#define pUmem_Sta_TBD_2ED4 9087
#define pUmem_Sta_TBD_2ED8 9088
#define pUmem_Sta_TBD_2EDC 9089
#define pUmem_Sta_26_CmdPos 9090
#define pUmem_Sta_26_ActPos 9091
#define pUmem_Sta_26_Velocity 9092
#define pUmem_Sta_26_Load 9093
#define pUmem_Sta_26_AmpEna 9094
#define pUmem_Sta_26_CloseLoop 9095
#define pUmem_Sta_26_InPos 9096
#define pUmem_Sta_26_HomeFin 9097
#define pUmem_Sta_26_HomeIng 9098
#define pUmem_Sta_26_LimitMinus 9099
#define pUmem_Sta_26_LimitPlus 9100
#define pUmem_Sta_26_FollowingErr 9101
#define pUmem_Sta_26_AmpFault 9102
#define pUmem_Sta_26_EncLoss 9103
#define pUmem_Sta_26_I2tErr 9104
#define pUmem_Sta_26_ProgPos 9105
#define pUmem_Sta_TBD_2F20 9106
#define pUmem_Sta_TBD_2F24 9107
#define pUmem_Sta_TBD_2F28 9108
#define pUmem_Sta_TBD_2F2C 9109
#define pUmem_Sta_27_CmdPos 9110
#define pUmem_Sta_27_ActPos 9111
#define pUmem_Sta_27_Velocity 9112
#define pUmem_Sta_27_Load 9113
#define pUmem_Sta_27_AmpEna 9114
#define pUmem_Sta_27_CloseLoop 9115
#define pUmem_Sta_27_InPos 9116
#define pUmem_Sta_27_HomeFin 9117
#define pUmem_Sta_27_HomeIng 9118
#define pUmem_Sta_27_LimitMinus 9119
#define pUmem_Sta_27_LimitPlus 9120
#define pUmem_Sta_27_FollowingErr 9121
#define pUmem_Sta_27_AmpFault 9122
#define pUmem_Sta_27_EncLoss 9123
#define pUmem_Sta_27_I2tErr 9124
#define pUmem_Sta_27_ProgPos 9125
#define pUmem_Sta_TBD_2F70 9126
#define pUmem_Sta_TBD_2F74 9127
#define pUmem_Sta_TBD_2F78 9128
#define pUmem_Sta_TBD_2F7C 9129
#define pUmem_Sta_28_CmdPos 9130
#define pUmem_Sta_28_ActPos 9131
#define pUmem_Sta_28_Velocity 9132
#define pUmem_Sta_28_Load 9133
#define pUmem_Sta_28_AmpEna 9134
#define pUmem_Sta_28_CloseLoop 9135
#define pUmem_Sta_28_InPos 9136
#define pUmem_Sta_28_HomeFin 9137
#define pUmem_Sta_28_HomeIng 9138
#define pUmem_Sta_28_LimitMinus 9139
#define pUmem_Sta_28_LimitPlus 9140
#define pUmem_Sta_28_FollowingErr 9141
#define pUmem_Sta_28_AmpFault 9142
#define pUmem_Sta_28_EncLoss 9143
#define pUmem_Sta_28_I2tErr 9144
#define pUmem_Sta_28_ProgPos 9145
#define pUmem_Sta_TBD_2FC0 9146
#define pUmem_Sta_TBD_2FC4 9147
#define pUmem_Sta_TBD_2FC8 9148
#define pUmem_Sta_TBD_2FCC 9149
#define pUmem_Sta_29_CmdPos 9150
#define pUmem_Sta_29_ActPos 9151
#define pUmem_Sta_29_Velocity 9152
#define pUmem_Sta_29_Load 9153
#define pUmem_Sta_29_AmpEna 9154
#define pUmem_Sta_29_CloseLoop 9155
#define pUmem_Sta_29_InPos 9156
#define pUmem_Sta_29_HomeFin 9157
#define pUmem_Sta_29_HomeIng 9158
#define pUmem_Sta_29_LimitMinus 9159
#define pUmem_Sta_29_LimitPlus 9160
#define pUmem_Sta_29_FollowingErr 9161
#define pUmem_Sta_29_AmpFault 9162
#define pUmem_Sta_29_EncLoss 9163
#define pUmem_Sta_29_I2tErr 9164
#define pUmem_Sta_29_ProgPos 9165
#define pUmem_Sta_TBD_3010 9166
#define pUmem_Sta_TBD_3014 9167
#define pUmem_Sta_TBD_3018 9168
#define pUmem_Sta_TBD_301C 9169
#define pUmem_Sta_30_CmdPos 9170
#define pUmem_Sta_30_ActPos 9171
#define pUmem_Sta_30_Velocity 9172
#define pUmem_Sta_30_Load 9173
#define pUmem_Sta_30_AmpEna 9174
#define pUmem_Sta_30_CloseLoop 9175
#define pUmem_Sta_30_InPos 9176
#define pUmem_Sta_30_HomeFin 9177
#define pUmem_Sta_30_HomeIng 9178
#define pUmem_Sta_30_LimitMinus 9179
#define pUmem_Sta_30_LimitPlus 9180
#define pUmem_Sta_30_FollowingErr 9181
#define pUmem_Sta_30_AmpFault 9182
#define pUmem_Sta_30_EncLoss 9183
#define pUmem_Sta_30_I2tErr 9184
#define pUmem_Sta_30_ProgPos 9185
#define pUmem_Sta_TBD_3060 9186
#define pUmem_Sta_TBD_3064 9187
#define pUmem_Sta_TBD_3068 9188
#define pUmem_Sta_TBD_306C 9189
#define pUmem_Sta_31_CmdPos 9190
#define pUmem_Sta_31_ActPos 9191
#define pUmem_Sta_31_Velocity 9192
#define pUmem_Sta_31_Load 9193
#define pUmem_Sta_31_AmpEna 9194
#define pUmem_Sta_31_CloseLoop 9195
#define pUmem_Sta_31_InPos 9196
#define pUmem_Sta_31_HomeFin 9197
#define pUmem_Sta_31_HomeIng 9198
#define pUmem_Sta_31_LimitMinus 9199
#define pUmem_Sta_31_LimitPlus 9200
#define pUmem_Sta_31_FollowingErr 9201
#define pUmem_Sta_31_AmpFault 9202
#define pUmem_Sta_31_EncLoss 9203
#define pUmem_Sta_31_I2tErr 9204
#define pUmem_Sta_31_ProgPos 9205
#define pUmem_Sta_TBD_30B0 9206
#define pUmem_Sta_TBD_30B4 9207
#define pUmem_Sta_TBD_30B8 9208
#define pUmem_Sta_TBD_30BC 9209
#define pUmem_Sta_32_CmdPos 9210
#define pUmem_Sta_32_ActPos 9211
#define pUmem_Sta_32_Velocity 9212
#define pUmem_Sta_32_Load 9213
#define pUmem_Sta_32_AmpEna 9214
#define pUmem_Sta_32_CloseLoop 9215
#define pUmem_Sta_32_InPos 9216
#define pUmem_Sta_32_HomeFin 9217
#define pUmem_Sta_32_HomeIng 9218
#define pUmem_Sta_32_LimitMinus 9219
#define pUmem_Sta_32_LimitPlus 9220
#define pUmem_Sta_32_FollowingErr 9221
#define pUmem_Sta_32_AmpFault 9222
#define pUmem_Sta_32_EncLoss 9223
#define pUmem_Sta_32_I2tErr 9224
#define pUmem_Sta_32_ProgPos 9225
#define pUmem_Sta_TBD_3100 9226
#define pUmem_Sta_TBD_3104 9227
#define pUmem_Sta_TBD_3108 9228
#define pUmem_Sta_TBD_310C 9229
#define pUmem_Sta_Mc_AmpEna 9230
#define pUmem_Sta_Mc_InPos 9231
#define pUmem_Sta_Mc_Home 9232
#define pUmem_Sta_Mc_HomeErr 9233
#define pUmem_Sta_Mc_RunMode 9234
#define pUmem_Sta_Mc_AutoRun 9235
#define pUmem_Sta_Mc_EcatCon 9236
#define pUmem_Sta_Mc_Error 9237
#define pUmem_Sta_TBD_3AB8 9238
#define pUmem_Sta_TBD_3ABC 9239
#define pUmem_Sta_Mc_ID 9240
#define pUmem_Sta_Mc_ErasePdtFlgWs 9241
#define pUmem_Sta_Mc_ErasePdtFlgVs 9242
#define pUmem_Sta_Mc_ErasePdtFlgTr 9243
#define pUmem_Sta_Mc_ErasePdtNoWs 9244
#define pUmem_Sta_Mc_ErasePdtNoVs 9245
#define pUmem_Sta_Mc_ErasePdtNoTr 9246
#define pUmem_Sta_Ws_AmpEna 9247
#define pUmem_Sta_Ws_InPos 9248
#define pUmem_Sta_Ws_Home 9249
#define pUmem_Sta_Ws_HomeErr 9250
#define pUmem_Sta_Ws_EcatCon 9251
#define pUmem_Sta_Ws_Error 9252
#define pUmem_Sta_Ws_ErrCode 9253
#define pUmem_Sta_TBD_3E9C 9254
#define pUmem_Sta_TBD_3EA0 9255
#define pUmem_Sta_Ws_ProgRun 9256
#define pUmem_Sta_Ws_VectorVel 9257
#define pUmem_Sta_Ws_ProgTime 9258
#define pUmem_Sta_Ws_PosStage 9259
#define pUmem_Sta_Ws_PosProduct 9260
#define pUmem_Sta_Ws_Cover 9261
#define pUmem_Sta_Ws_PdtSta 9262
#define pUmem_Sta_Tr_PdtSta 9263
#define pUmem_Sta_Ws_LaserReady 9264
#define pUmem_Sta_Ws_LaserEnable 9265
#define pUmem_Sta_Ws_LaserCorePower 9266
#define pUmem_Sta_Ws_LaserRingPower 9267
#define pUmem_Sta_Ws_PdtNo 9268
#define pUmem_Sta_TBD_3ED8 9269
#define pUmem_Sta_TBD_3EDC 9270
#define pUmem_Sta_TBD_3EE0 9271
#define pUmem_Sta_TBD_3EE4 9272
#define pUmem_Sta_TBD_3EE8 9273
#define pUmem_Sta_TBD_3EEC 9274
#define pUmem_Sta_TBD_3EF0 9275
#define pUmem_Sta_TBD_3EF4 9276
#define pUmem_Sta_Ws_LdSeq 9277
#define pUmem_Sta_Ws_LdErr 9278
#define pUmem_Sta_Ws_LdTime 9279
#define pUmem_Sta_Ws_RdSeq 9280
#define pUmem_Sta_Ws_RdErr 9281
#define pUmem_Sta_Ws_RdTime 9282
#define pUmem_Sta_Ws_WdSeq 9283
#define pUmem_Sta_Ws_WdErr 9284
#define pUmem_Sta_Ws_WdTime 9285
#define pUmem_Sta_Ws_WtSeq 9286
#define pUmem_Sta_Ws_WtErr 9287
#define pUmem_Sta_Ws_WtTime 9288
#define pUmem_Sta_Ws_UdSeq 9289
#define pUmem_Sta_Ws_UdErr 9290
#define pUmem_Sta_Ws_UdTime 9291
#define pUmem_Sta_Ws_RjSeq 9292
#define pUmem_Sta_Ws_RjErr 9293
#define pUmem_Sta_Ws_RjTime 9294
#define pUmem_Sta_TBD_3F40 9295
#define pUmem_Sta_TBD_3F44 9296
#define pUmem_Sta_TBD_3F48 9297
#define pUmem_Sta_TBD_3F4C 9298
#define pUmem_Sta_TBD_3F50 9299
#define pUmem_Sta_TBD_3F54 9300
#define pUmem_Sta_TBD_3F58 9301
#define pUmem_Sta_TBD_3F5C 9302
#define pUmem_Sta_TBD_3F60 9303
#define pUmem_Sta_TBD_3F64 9304
#define pUmem_Sta_TBD_3F68 9305
#define pUmem_Sta_TBD_3F6C 9306
#define pUmem_Sta_Ws_1stTransRjReq 9307
#define pUmem_Sta_Ws_2ndTransLdReq 9308
#define pUmem_Sta_Ws_2dVisionCkReq 9309
#define pUmem_Sta_Ws_LwmStartReq 9310
#define pUmem_Sta_TBD_3F80 9311
#define pUmem_Sta_TBD_3F84 9312
#define pUmem_Sta_TBD_3F88 9313
#define pUmem_Sta_TBD_3F8C 9314
#define pUmem_Sta_TBD_3F90 9315
#define pUmem_Sta_TBD_3F94 9316
#define pUmem_Sta_Ws_1stTransPdtNo 9317
#define pUmem_Sta_Ws_TempResult1 9318
#define pUmem_Sta_Ws_TempResult2 9319
#define pUmem_Sta_TBD_3FA4 9320
#define pUmem_Sta_TBD_3FA8 9321
#define pUmem_Sta_TBD_3FAC 9322
#define pUmem_Sta_TBD_3FB0 9323
#define pUmem_Sta_TBD_3FB4 9324
#define pUmem_Sta_TBD_3FB8 9325
#define pUmem_Sta_TBD_3FBC 9326
#define pUmem_Sta_TBD_3FC0 9327
#define pUmem_Sta_TBD_3FC4 9328
#define pUmem_Sta_TBD_3FC8 9329
#define pUmem_Sta_TBD_3FCC 9330
#define pUmem_Sta_TBD_3FD0 9331
#define pUmem_Sta_TBD_3FD4 9332
#define pUmem_Sta_TBD_3FD8 9333
#define pUmem_Sta_TBD_3FDC 9334
#define pUmem_Sta_TBD_3FE0 9335
#define pUmem_Sta_TBD_3FE4 9336
#define pUmem_Sta_Vs_AmpEna 9337
#define pUmem_Sta_Vs_InPos 9338
#define pUmem_Sta_Vs_Home 9339
#define pUmem_Sta_Vs_HomeErr 9340
#define pUmem_Sta_Vs_EcatCon 9341
#define pUmem_Sta_Vs_Error 9342
#define pUmem_Sta_Vs_ErrCode 9343
#define pUmem_Sta_TBD_4284 9344
#define pUmem_Sta_TBD_4288 9345
#define pUmem_Sta_Vs_ProgRun 9346
#define pUmem_Sta_Vs_VectorVel 9347
#define pUmem_Sta_Vs_ProgTime 9348
#define pUmem_Sta_Vs_PosStage 9349
#define pUmem_Sta_Vs_PosProduct 9350
#define pUmem_Sta_Vs_Cover 9351
#define pUmem_Sta_Vs_PdtSta 9352
#define pUmem_Sta_Vs_PdtNo 9353
#define pUmem_Sta_TBD_42AC 9354
#define pUmem_Sta_TBD_42B0 9355
#define pUmem_Sta_TBD_42B4 9356
#define pUmem_Sta_TBD_42B8 9357
#define pUmem_Sta_TBD_42BC 9358
#define pUmem_Sta_TBD_42C0 9359
#define pUmem_Sta_TBD_42C4 9360
#define pUmem_Sta_TBD_42C8 9361
#define pUmem_Sta_TBD_42CC 9362
#define pUmem_Sta_TBD_42D0 9363
#define pUmem_Sta_TBD_42D4 9364
#define pUmem_Sta_TBD_42D8 9365
#define pUmem_Sta_TBD_42DC 9366
#define pUmem_Sta_Vs_LdSeq 9367
#define pUmem_Sta_Vs_LdErr 9368
#define pUmem_Sta_Vs_LdTime 9369
#define pUmem_Sta_Vs_RdSeq 9370
#define pUmem_Sta_Vs_RdErr 9371
#define pUmem_Sta_Vs_RdTime 9372
#define pUmem_Sta_Vs_VnSeq 9373
#define pUmem_Sta_Vs_VnErr 9374
#define pUmem_Sta_Vs_VnTime 9375
#define pUmem_Sta_Vs_WtSeq 9376
#define pUmem_Sta_Vs_WtErr 9377
#define pUmem_Sta_Vs_WtTime 9378
#define pUmem_Sta_Vs_UdSeq 9379
#define pUmem_Sta_Vs_UdErr 9380
#define pUmem_Sta_Vs_UdTime 9381
#define pUmem_Sta_Vs_RjSeq 9382
#define pUmem_Sta_Vs_RjErr 9383
#define pUmem_Sta_Vs_RjTime 9384
#define pUmem_Sta_TBD_4328 9385
#define pUmem_Sta_TBD_432C 9386
#define pUmem_Sta_TBD_4330 9387
#define pUmem_Sta_TBD_4334 9388
#define pUmem_Sta_TBD_4338 9389
#define pUmem_Sta_TBD_433C 9390
#define pUmem_Sta_TBD_4340 9391
#define pUmem_Sta_TBD_4344 9392
#define pUmem_Sta_TBD_4348 9393
#define pUmem_Sta_TBD_434C 9394
#define pUmem_Sta_TBD_4350 9395
#define pUmem_Sta_TBD_4354 9396
#define pUmem_Sta_Vs_3rdTransUdReq 9397
#define pUmem_Sta_Vs_3rdTransRjReq 9398
#define pUmem_Sta_Vs_3DVisionStReq 9399
#define pUmem_Sta_Vs_3DVisionEdReq 9400
#define pUmem_Sta_TBD_4368 9401
#define pUmem_Sta_TBD_436C 9402
#define pUmem_Sta_TBD_4370 9403
#define pUmem_Sta_TBD_4374 9404
#define pUmem_Sta_TBD_4378 9405
#define pUmem_Sta_TBD_437C 9406
#define pUmem_Sta_Vs_3rdTransPtdNo 9407
#define pUmem_Sta_TBD_4384 9408
#define pUmem_Sta_TBD_4388 9409
#define pUmem_Sta_TBD_438C 9410
#define pUmem_Sta_TBD_4390 9411
#define pUmem_Sta_TBD_4394 9412
#define pUmem_Sta_TBD_4398 9413
#define pUmem_Sta_TBD_439C 9414
#define pUmem_Sta_TBD_43A0 9415
#define pUmem_Sta_TBD_43A4 9416
#define pUmem_Sta_TBD_43A8 9417
#define pUmem_Sta_TBD_43AC 9418
#define pUmem_Sta_TBD_43B0 9419
#define pUmem_Sta_TBD_43B4 9420
#define pUmem_Sta_TBD_43B8 9421
#define pUmem_Sta_TBD_43BC 9422
#define pUmem_Sta_TBD_43C0 9423
#define pUmem_Sta_TBD_43C4 9424
#define pUmem_Sta_TBD_43C8 9425
#define pUmem_Sta_TBD_43CC 9426
#define pUmem_Sta_Sc_AmpEna 9427
#define pUmem_Sta_Sc_InPos 9428
#define pUmem_Sta_Sc_Home 9429
#define pUmem_Sta_Sc_HomeErr 9430
#define pUmem_Sta_Sc_Con 9431
#define pUmem_Sta_Sc_Error 9432
#define pUmem_Sta_Sc_ErrCode 9433
#define pUmem_Cmd_01_ServoOn 9434
#define pUmem_Cmd_01_ServoOff 9435
#define pUmem_Cmd_01_HomeStart 9436
#define pUmem_Cmd_01_HomeAbort 9437
#define pUmem_Cmd_01_HomeOffset 9438
#define pUmem_Cmd_01_JogStop 9439
#define pUmem_Cmd_01_JogContPlus 9440
#define pUmem_Cmd_01_JogContMinus 9441
#define pUmem_Cmd_01_JogAbsMove 9442
#define pUmem_Cmd_01_JogIncMove 9443
#define pUmem_Cmd_01_JogAbsPos 9444
#define pUmem_Cmd_01_JogIncDist 9445
#define pUmem_Cmd_01_JogSpeed 9446
#define pUmem_Cmd_01_JogTa 9447
#define pUmem_Cmd_01_JogTs 9448
#define pUmem_Cmd_TBD_4E5C 9449
#define pUmem_Cmd_TBD_4E60 9450
#define pUmem_Cmd_TBD_4E64 9451
#define pUmem_Cmd_TBD_4E68 9452
#define pUmem_Cmd_TBD_4E6C 9453
#define pUmem_Cmd_02_ServoOn 9454
#define pUmem_Cmd_02_ServoOff 9455
#define pUmem_Cmd_02_HomeStart 9456
#define pUmem_Cmd_02_HomeAbort 9457
#define pUmem_Cmd_02_HomeOffset 9458
#define pUmem_Cmd_02_JogStop 9459
#define pUmem_Cmd_02_JogContPlus 9460
#define pUmem_Cmd_02_JogContMinus 9461
#define pUmem_Cmd_02_JogAbsMove 9462
#define pUmem_Cmd_02_JogIncMove 9463
#define pUmem_Cmd_02_JogAbsPos 9464
#define pUmem_Cmd_02_JogIncDist 9465
#define pUmem_Cmd_02_JogSpeed 9466
#define pUmem_Cmd_02_JogTa 9467
#define pUmem_Cmd_02_JogTs 9468
#define pUmem_Cmd_TBD_4EAC 9469
#define pUmem_Cmd_TBD_4EB0 9470
#define pUmem_Cmd_TBD_4EB4 9471
#define pUmem_Cmd_TBD_4EB8 9472
#define pUmem_Cmd_TBD_4EBC 9473
#define pUmem_Cmd_03_ServoOn 9474
#define pUmem_Cmd_03_ServoOff 9475
#define pUmem_Cmd_03_HomeStart 9476
#define pUmem_Cmd_03_HomeAbort 9477
#define pUmem_Cmd_03_HomeOffset 9478
#define pUmem_Cmd_03_JogStop 9479
#define pUmem_Cmd_03_JogContPlus 9480
#define pUmem_Cmd_03_JogContMinus 9481
#define pUmem_Cmd_03_JogAbsMove 9482
#define pUmem_Cmd_03_JogIncMove 9483
#define pUmem_Cmd_03_JogAbsPos 9484
#define pUmem_Cmd_03_JogIncDist 9485
#define pUmem_Cmd_03_JogSpeed 9486
#define pUmem_Cmd_03_JogTa 9487
#define pUmem_Cmd_03_JogTs 9488
#define pUmem_Cmd_TBD_4EFC 9489
#define pUmem_Cmd_TBD_4F00 9490
#define pUmem_Cmd_TBD_4F04 9491
#define pUmem_Cmd_TBD_4F08 9492
#define pUmem_Cmd_TBD_4F0C 9493
#define pUmem_Cmd_04_ServoOn 9494
#define pUmem_Cmd_04_ServoOff 9495
#define pUmem_Cmd_04_HomeStart 9496
#define pUmem_Cmd_04_HomeAbort 9497
#define pUmem_Cmd_04_HomeOffset 9498
#define pUmem_Cmd_04_JogStop 9499
#define pUmem_Cmd_04_JogContPlus 9500
#define pUmem_Cmd_04_JogContMinus 9501
#define pUmem_Cmd_04_JogAbsMove 9502
#define pUmem_Cmd_04_JogIncMove 9503
#define pUmem_Cmd_04_JogAbsPos 9504
#define pUmem_Cmd_04_JogIncDist 9505
#define pUmem_Cmd_04_JogSpeed 9506
#define pUmem_Cmd_04_JogTa 9507
#define pUmem_Cmd_04_JogTs 9508
#define pUmem_Cmd_TBD_4F4C 9509
#define pUmem_Cmd_TBD_4F50 9510
#define pUmem_Cmd_TBD_4F54 9511
#define pUmem_Cmd_TBD_4F58 9512
#define pUmem_Cmd_TBD_4F5C 9513
#define pUmem_Cmd_05_ServoOn 9514
#define pUmem_Cmd_05_ServoOff 9515
#define pUmem_Cmd_05_HomeStart 9516
#define pUmem_Cmd_05_HomeAbort 9517
#define pUmem_Cmd_05_HomeOffset 9518
#define pUmem_Cmd_05_JogStop 9519
#define pUmem_Cmd_05_JogContPlus 9520
#define pUmem_Cmd_05_JogContMinus 9521
#define pUmem_Cmd_05_JogAbsMove 9522
#define pUmem_Cmd_05_JogIncMove 9523
#define pUmem_Cmd_05_JogAbsPos 9524
#define pUmem_Cmd_05_JogIncDist 9525
#define pUmem_Cmd_05_JogSpeed 9526
#define pUmem_Cmd_05_JogTa 9527
#define pUmem_Cmd_05_JogTs 9528
#define pUmem_Cmd_TBD_4F9C 9529
#define pUmem_Cmd_TBD_4FA0 9530
#define pUmem_Cmd_TBD_4FA4 9531
#define pUmem_Cmd_TBD_4FA8 9532
#define pUmem_Cmd_TBD_4FAC 9533
#define pUmem_Cmd_06_ServoOn 9534
#define pUmem_Cmd_06_ServoOff 9535
#define pUmem_Cmd_06_HomeStart 9536
#define pUmem_Cmd_06_HomeAbort 9537
#define pUmem_Cmd_06_HomeOffset 9538
#define pUmem_Cmd_06_JogStop 9539
#define pUmem_Cmd_06_JogContPlus 9540
#define pUmem_Cmd_06_JogContMinus 9541
#define pUmem_Cmd_06_JogAbsMove 9542
#define pUmem_Cmd_06_JogIncMove 9543
#define pUmem_Cmd_06_JogAbsPos 9544
#define pUmem_Cmd_06_JogIncDist 9545
#define pUmem_Cmd_06_JogSpeed 9546
#define pUmem_Cmd_06_JogTa 9547
#define pUmem_Cmd_06_JogTs 9548
#define pUmem_Cmd_TBD_4FEC 9549
#define pUmem_Cmd_TBD_4FF0 9550
#define pUmem_Cmd_TBD_4FF4 9551
#define pUmem_Cmd_TBD_4FF8 9552
#define pUmem_Cmd_TBD_4FFC 9553
#define pUmem_Cmd_07_ServoOn 9554
#define pUmem_Cmd_07_ServoOff 9555
#define pUmem_Cmd_07_HomeStart 9556
#define pUmem_Cmd_07_HomeAbort 9557
#define pUmem_Cmd_07_HomeOffset 9558
#define pUmem_Cmd_07_JogStop 9559
#define pUmem_Cmd_07_JogContPlus 9560
#define pUmem_Cmd_07_JogContMinus 9561
#define pUmem_Cmd_07_JogAbsMove 9562
#define pUmem_Cmd_07_JogIncMove 9563
#define pUmem_Cmd_07_JogAbsPos 9564
#define pUmem_Cmd_07_JogIncDist 9565
#define pUmem_Cmd_07_JogSpeed 9566
#define pUmem_Cmd_07_JogTa 9567
#define pUmem_Cmd_07_JogTs 9568
#define pUmem_Cmd_TBD_503C 9569
#define pUmem_Cmd_TBD_5040 9570
#define pUmem_Cmd_TBD_5044 9571
#define pUmem_Cmd_TBD_5048 9572
#define pUmem_Cmd_TBD_504C 9573
#define pUmem_Cmd_08_ServoOn 9574
#define pUmem_Cmd_08_ServoOff 9575
#define pUmem_Cmd_08_HomeStart 9576
#define pUmem_Cmd_08_HomeAbort 9577
#define pUmem_Cmd_08_HomeOffset 9578
#define pUmem_Cmd_08_JogStop 9579
#define pUmem_Cmd_08_JogContPlus 9580
#define pUmem_Cmd_08_JogContMinus 9581
#define pUmem_Cmd_08_JogAbsMove 9582
#define pUmem_Cmd_08_JogIncMove 9583
#define pUmem_Cmd_08_JogAbsPos 9584
#define pUmem_Cmd_08_JogIncDist 9585
#define pUmem_Cmd_08_JogSpeed 9586
#define pUmem_Cmd_08_JogTa 9587
#define pUmem_Cmd_08_JogTs 9588
#define pUmem_Cmd_TBD_508C 9589
#define pUmem_Cmd_TBD_5090 9590
#define pUmem_Cmd_TBD_5094 9591
#define pUmem_Cmd_TBD_5098 9592
#define pUmem_Cmd_TBD_509C 9593
#define pUmem_Cmd_09_ServoOn 9594
#define pUmem_Cmd_09_ServoOff 9595
#define pUmem_Cmd_09_HomeStart 9596
#define pUmem_Cmd_09_HomeAbort 9597
#define pUmem_Cmd_09_HomeOffset 9598
#define pUmem_Cmd_09_JogStop 9599
#define pUmem_Cmd_09_JogContPlus 9600
#define pUmem_Cmd_09_JogContMinus 9601
#define pUmem_Cmd_09_JogAbsMove 9602
#define pUmem_Cmd_09_JogIncMove 9603
#define pUmem_Cmd_09_JogAbsPos 9604
#define pUmem_Cmd_09_JogIncDist 9605
#define pUmem_Cmd_09_JogSpeed 9606
#define pUmem_Cmd_09_JogTa 9607
#define pUmem_Cmd_09_JogTs 9608
#define pUmem_Cmd_TBD_50DC 9609
#define pUmem_Cmd_TBD_50E0 9610
#define pUmem_Cmd_TBD_50E4 9611
#define pUmem_Cmd_TBD_50E8 9612
#define pUmem_Cmd_TBD_50EC 9613
#define pUmem_Cmd_10_ServoOn 9614
#define pUmem_Cmd_10_ServoOff 9615
#define pUmem_Cmd_10_HomeStart 9616
#define pUmem_Cmd_10_HomeAbort 9617
#define pUmem_Cmd_10_HomeOffset 9618
#define pUmem_Cmd_10_JogStop 9619
#define pUmem_Cmd_10_JogContPlus 9620
#define pUmem_Cmd_10_JogContMinus 9621
#define pUmem_Cmd_10_JogAbsMove 9622
#define pUmem_Cmd_10_JogIncMove 9623
#define pUmem_Cmd_10_JogAbsPos 9624
#define pUmem_Cmd_10_JogIncDist 9625
#define pUmem_Cmd_10_JogSpeed 9626
#define pUmem_Cmd_10_JogTa 9627
#define pUmem_Cmd_10_JogTs 9628
#define pUmem_Cmd_TBD_512C 9629
#define pUmem_Cmd_TBD_5130 9630
#define pUmem_Cmd_TBD_5134 9631
#define pUmem_Cmd_TBD_5138 9632
#define pUmem_Cmd_TBD_513C 9633
#define pUmem_Cmd_11_ServoOn 9634
#define pUmem_Cmd_11_ServoOff 9635
#define pUmem_Cmd_11_HomeStart 9636
#define pUmem_Cmd_11_HomeAbort 9637
#define pUmem_Cmd_11_HomeOffset 9638
#define pUmem_Cmd_11_JogStop 9639
#define pUmem_Cmd_11_JogContPlus 9640
#define pUmem_Cmd_11_JogContMinus 9641
#define pUmem_Cmd_11_JogAbsMove 9642
#define pUmem_Cmd_11_JogIncMove 9643
#define pUmem_Cmd_11_JogAbsPos 9644
#define pUmem_Cmd_11_JogIncDist 9645
#define pUmem_Cmd_11_JogSpeed 9646
#define pUmem_Cmd_11_JogTa 9647
#define pUmem_Cmd_11_JogTs 9648
#define pUmem_Cmd_TBD_517C 9649
#define pUmem_Cmd_TBD_5180 9650
#define pUmem_Cmd_TBD_5184 9651
#define pUmem_Cmd_TBD_5188 9652
#define pUmem_Cmd_TBD_518C 9653
#define pUmem_Cmd_12_ServoOn 9654
#define pUmem_Cmd_12_ServoOff 9655
#define pUmem_Cmd_12_HomeStart 9656
#define pUmem_Cmd_12_HomeAbort 9657
#define pUmem_Cmd_12_HomeOffset 9658
#define pUmem_Cmd_12_JogStop 9659
#define pUmem_Cmd_12_JogContPlus 9660
#define pUmem_Cmd_12_JogContMinus 9661
#define pUmem_Cmd_12_JogAbsMove 9662
#define pUmem_Cmd_12_JogIncMove 9663
#define pUmem_Cmd_12_JogAbsPos 9664
#define pUmem_Cmd_12_JogIncDist 9665
#define pUmem_Cmd_12_JogSpeed 9666
#define pUmem_Cmd_12_JogTa 9667
#define pUmem_Cmd_12_JogTs 9668
#define pUmem_Cmd_TBD_51CC 9669
#define pUmem_Cmd_TBD_51D0 9670
#define pUmem_Cmd_TBD_51D4 9671
#define pUmem_Cmd_TBD_51D8 9672
#define pUmem_Cmd_TBD_51DC 9673
#define pUmem_Cmd_13_ServoOn 9674
#define pUmem_Cmd_13_ServoOff 9675
#define pUmem_Cmd_13_HomeStart 9676
#define pUmem_Cmd_13_HomeAbort 9677
#define pUmem_Cmd_13_HomeOffset 9678
#define pUmem_Cmd_13_JogStop 9679
#define pUmem_Cmd_13_JogContPlus 9680
#define pUmem_Cmd_13_JogContMinus 9681
#define pUmem_Cmd_13_JogAbsMove 9682
#define pUmem_Cmd_13_JogIncMove 9683
#define pUmem_Cmd_13_JogAbsPos 9684
#define pUmem_Cmd_13_JogIncDist 9685
#define pUmem_Cmd_13_JogSpeed 9686
#define pUmem_Cmd_13_JogTa 9687
#define pUmem_Cmd_13_JogTs 9688
#define pUmem_Cmd_TBD_521C 9689
#define pUmem_Cmd_TBD_5220 9690
#define pUmem_Cmd_TBD_5224 9691
#define pUmem_Cmd_TBD_5228 9692
#define pUmem_Cmd_TBD_522C 9693
#define pUmem_Cmd_14_ServoOn 9694
#define pUmem_Cmd_14_ServoOff 9695
#define pUmem_Cmd_14_HomeStart 9696
#define pUmem_Cmd_14_HomeAbort 9697
#define pUmem_Cmd_14_HomeOffset 9698
#define pUmem_Cmd_14_JogStop 9699
#define pUmem_Cmd_14_JogContPlus 9700
#define pUmem_Cmd_14_JogContMinus 9701
#define pUmem_Cmd_14_JogAbsMove 9702
#define pUmem_Cmd_14_JogIncMove 9703
#define pUmem_Cmd_14_JogAbsPos 9704
#define pUmem_Cmd_14_JogIncDist 9705
#define pUmem_Cmd_14_JogSpeed 9706
#define pUmem_Cmd_14_JogTa 9707
#define pUmem_Cmd_14_JogTs 9708
#define pUmem_Cmd_TBD_526C 9709
#define pUmem_Cmd_TBD_5270 9710
#define pUmem_Cmd_TBD_5274 9711
#define pUmem_Cmd_TBD_5278 9712
#define pUmem_Cmd_TBD_527C 9713
#define pUmem_Cmd_15_ServoOn 9714
#define pUmem_Cmd_15_ServoOff 9715
#define pUmem_Cmd_15_HomeStart 9716
#define pUmem_Cmd_15_HomeAbort 9717
#define pUmem_Cmd_15_HomeOffset 9718
#define pUmem_Cmd_15_JogStop 9719
#define pUmem_Cmd_15_JogContPlus 9720
#define pUmem_Cmd_15_JogContMinus 9721
#define pUmem_Cmd_15_JogAbsMove 9722
#define pUmem_Cmd_15_JogIncMove 9723
#define pUmem_Cmd_15_JogAbsPos 9724
#define pUmem_Cmd_15_JogIncDist 9725
#define pUmem_Cmd_15_JogSpeed 9726
#define pUmem_Cmd_15_JogTa 9727
#define pUmem_Cmd_15_JogTs 9728
#define pUmem_Cmd_TBD_52BC 9729
#define pUmem_Cmd_TBD_52C0 9730
#define pUmem_Cmd_TBD_52C4 9731
#define pUmem_Cmd_TBD_52C8 9732
#define pUmem_Cmd_TBD_52CC 9733
#define pUmem_Cmd_16_ServoOn 9734
#define pUmem_Cmd_16_ServoOff 9735
#define pUmem_Cmd_16_HomeStart 9736
#define pUmem_Cmd_16_HomeAbort 9737
#define pUmem_Cmd_16_HomeOffset 9738
#define pUmem_Cmd_16_JogStop 9739
#define pUmem_Cmd_16_JogContPlus 9740
#define pUmem_Cmd_16_JogContMinus 9741
#define pUmem_Cmd_16_JogAbsMove 9742
#define pUmem_Cmd_16_JogIncMove 9743
#define pUmem_Cmd_16_JogAbsPos 9744
#define pUmem_Cmd_16_JogIncDist 9745
#define pUmem_Cmd_16_JogSpeed 9746
#define pUmem_Cmd_16_JogTa 9747
#define pUmem_Cmd_16_JogTs 9748
#define pUmem_Cmd_TBD_530C 9749
#define pUmem_Cmd_TBD_5310 9750
#define pUmem_Cmd_TBD_5314 9751
#define pUmem_Cmd_TBD_5318 9752
#define pUmem_Cmd_TBD_531C 9753
#define pUmem_Cmd_17_ServoOn 9754
#define pUmem_Cmd_17_ServoOff 9755
#define pUmem_Cmd_17_HomeStart 9756
#define pUmem_Cmd_17_HomeAbort 9757
#define pUmem_Cmd_17_HomeOffset 9758
#define pUmem_Cmd_17_JogStop 9759
#define pUmem_Cmd_17_JogContPlus 9760
#define pUmem_Cmd_17_JogContMinus 9761
#define pUmem_Cmd_17_JogAbsMove 9762
#define pUmem_Cmd_17_JogIncMove 9763
#define pUmem_Cmd_17_JogAbsPos 9764
#define pUmem_Cmd_17_JogIncDist 9765
#define pUmem_Cmd_17_JogSpeed 9766
#define pUmem_Cmd_17_JogTa 9767
#define pUmem_Cmd_17_JogTs 9768
#define pUmem_Cmd_TBD_535C 9769
#define pUmem_Cmd_TBD_5360 9770
#define pUmem_Cmd_TBD_5364 9771
#define pUmem_Cmd_TBD_5368 9772
#define pUmem_Cmd_TBD_536C 9773
#define pUmem_Cmd_18_ServoOn 9774
#define pUmem_Cmd_18_ServoOff 9775
#define pUmem_Cmd_18_HomeStart 9776
#define pUmem_Cmd_18_HomeAbort 9777
#define pUmem_Cmd_18_HomeOffset 9778
#define pUmem_Cmd_18_JogStop 9779
#define pUmem_Cmd_18_JogContPlus 9780
#define pUmem_Cmd_18_JogContMinus 9781
#define pUmem_Cmd_18_JogAbsMove 9782
#define pUmem_Cmd_18_JogIncMove 9783
#define pUmem_Cmd_18_JogAbsPos 9784
#define pUmem_Cmd_18_JogIncDist 9785
#define pUmem_Cmd_18_JogSpeed 9786
#define pUmem_Cmd_18_JogTa 9787
#define pUmem_Cmd_18_JogTs 9788
#define pUmem_Cmd_TBD_53AC 9789
#define pUmem_Cmd_TBD_53B0 9790
#define pUmem_Cmd_TBD_53B4 9791
#define pUmem_Cmd_TBD_53B8 9792
#define pUmem_Cmd_TBD_53BC 9793
#define pUmem_Cmd_19_ServoOn 9794
#define pUmem_Cmd_19_ServoOff 9795
#define pUmem_Cmd_19_HomeStart 9796
#define pUmem_Cmd_19_HomeAbort 9797
#define pUmem_Cmd_19_HomeOffset 9798
#define pUmem_Cmd_19_JogStop 9799
#define pUmem_Cmd_19_JogContPlus 9800
#define pUmem_Cmd_19_JogContMinus 9801
#define pUmem_Cmd_19_JogAbsMove 9802
#define pUmem_Cmd_19_JogIncMove 9803
#define pUmem_Cmd_19_JogAbsPos 9804
#define pUmem_Cmd_19_JogIncDist 9805
#define pUmem_Cmd_19_JogSpeed 9806
#define pUmem_Cmd_19_JogTa 9807
#define pUmem_Cmd_19_JogTs 9808
#define pUmem_Cmd_TBD_53FC 9809
#define pUmem_Cmd_TBD_5400 9810
#define pUmem_Cmd_TBD_5404 9811
#define pUmem_Cmd_TBD_5408 9812
#define pUmem_Cmd_TBD_540C 9813
#define pUmem_Cmd_20_ServoOn 9814
#define pUmem_Cmd_20_ServoOff 9815
#define pUmem_Cmd_20_HomeStart 9816
#define pUmem_Cmd_20_HomeAbort 9817
#define pUmem_Cmd_20_HomeOffset 9818
#define pUmem_Cmd_20_JogStop 9819
#define pUmem_Cmd_20_JogContPlus 9820
#define pUmem_Cmd_20_JogContMinus 9821
#define pUmem_Cmd_20_JogAbsMove 9822
#define pUmem_Cmd_20_JogIncMove 9823
#define pUmem_Cmd_20_JogAbsPos 9824
#define pUmem_Cmd_20_JogIncDist 9825
#define pUmem_Cmd_20_JogSpeed 9826
#define pUmem_Cmd_20_JogTa 9827
#define pUmem_Cmd_20_JogTs 9828
#define pUmem_Cmd_TBD_544C 9829
#define pUmem_Cmd_TBD_5450 9830
#define pUmem_Cmd_TBD_5454 9831
#define pUmem_Cmd_TBD_5458 9832
#define pUmem_Cmd_TBD_545C 9833
#define pUmem_Cmd_21_ServoOn 9834
#define pUmem_Cmd_21_ServoOff 9835
#define pUmem_Cmd_21_HomeStart 9836
#define pUmem_Cmd_21_HomeAbort 9837
#define pUmem_Cmd_21_HomeOffset 9838
#define pUmem_Cmd_21_JogStop 9839
#define pUmem_Cmd_21_JogContPlus 9840
#define pUmem_Cmd_21_JogContMinus 9841
#define pUmem_Cmd_21_JogAbsMove 9842
#define pUmem_Cmd_21_JogIncMove 9843
#define pUmem_Cmd_21_JogAbsPos 9844
#define pUmem_Cmd_21_JogIncDist 9845
#define pUmem_Cmd_21_JogSpeed 9846
#define pUmem_Cmd_21_JogTa 9847
#define pUmem_Cmd_21_JogTs 9848
#define pUmem_Cmd_TBD_549C 9849
#define pUmem_Cmd_TBD_54A0 9850
#define pUmem_Cmd_TBD_54A4 9851
#define pUmem_Cmd_TBD_54A8 9852
#define pUmem_Cmd_TBD_54AC 9853
#define pUmem_Cmd_22_ServoOn 9854
#define pUmem_Cmd_22_ServoOff 9855
#define pUmem_Cmd_22_HomeStart 9856
#define pUmem_Cmd_22_HomeAbort 9857
#define pUmem_Cmd_22_HomeOffset 9858
#define pUmem_Cmd_22_JogStop 9859
#define pUmem_Cmd_22_JogContPlus 9860
#define pUmem_Cmd_22_JogContMinus 9861
#define pUmem_Cmd_22_JogAbsMove 9862
#define pUmem_Cmd_22_JogIncMove 9863
#define pUmem_Cmd_22_JogAbsPos 9864
#define pUmem_Cmd_22_JogIncDist 9865
#define pUmem_Cmd_22_JogSpeed 9866
#define pUmem_Cmd_22_JogTa 9867
#define pUmem_Cmd_22_JogTs 9868
#define pUmem_Cmd_TBD_54EC 9869
#define pUmem_Cmd_TBD_54F0 9870
#define pUmem_Cmd_TBD_54F4 9871
#define pUmem_Cmd_TBD_54F8 9872
#define pUmem_Cmd_TBD_54FC 9873
#define pUmem_Cmd_23_ServoOn 9874
#define pUmem_Cmd_23_ServoOff 9875
#define pUmem_Cmd_23_HomeStart 9876
#define pUmem_Cmd_23_HomeAbort 9877
#define pUmem_Cmd_23_HomeOffset 9878
#define pUmem_Cmd_23_JogStop 9879
#define pUmem_Cmd_23_JogContPlus 9880
#define pUmem_Cmd_23_JogContMinus 9881
#define pUmem_Cmd_23_JogAbsMove 9882
#define pUmem_Cmd_23_JogIncMove 9883
#define pUmem_Cmd_23_JogAbsPos 9884
#define pUmem_Cmd_23_JogIncDist 9885
#define pUmem_Cmd_23_JogSpeed 9886
#define pUmem_Cmd_23_JogTa 9887
#define pUmem_Cmd_23_JogTs 9888
#define pUmem_Cmd_TBD_553C 9889
#define pUmem_Cmd_TBD_5540 9890
#define pUmem_Cmd_TBD_5544 9891
#define pUmem_Cmd_TBD_5548 9892
#define pUmem_Cmd_TBD_554C 9893
#define pUmem_Cmd_24_ServoOn 9894
#define pUmem_Cmd_24_ServoOff 9895
#define pUmem_Cmd_24_HomeStart 9896
#define pUmem_Cmd_24_HomeAbort 9897
#define pUmem_Cmd_24_HomeOffset 9898
#define pUmem_Cmd_24_JogStop 9899
#define pUmem_Cmd_24_JogContPlus 9900
#define pUmem_Cmd_24_JogContMinus 9901
#define pUmem_Cmd_24_JogAbsMove 9902
#define pUmem_Cmd_24_JogIncMove 9903
#define pUmem_Cmd_24_JogAbsPos 9904
#define pUmem_Cmd_24_JogIncDist 9905
#define pUmem_Cmd_24_JogSpeed 9906
#define pUmem_Cmd_24_JogTa 9907
#define pUmem_Cmd_24_JogTs 9908
#define pUmem_Cmd_TBD_558C 9909
#define pUmem_Cmd_TBD_5590 9910
#define pUmem_Cmd_TBD_5594 9911
#define pUmem_Cmd_TBD_5598 9912
#define pUmem_Cmd_TBD_559C 9913
#define pUmem_Cmd_25_ServoOn 9914
#define pUmem_Cmd_25_ServoOff 9915
#define pUmem_Cmd_25_HomeStart 9916
#define pUmem_Cmd_25_HomeAbort 9917
#define pUmem_Cmd_25_HomeOffset 9918
#define pUmem_Cmd_25_JogStop 9919
#define pUmem_Cmd_25_JogContPlus 9920
#define pUmem_Cmd_25_JogContMinus 9921
#define pUmem_Cmd_25_JogAbsMove 9922
#define pUmem_Cmd_25_JogIncMove 9923
#define pUmem_Cmd_25_JogAbsPos 9924
#define pUmem_Cmd_25_JogIncDist 9925
#define pUmem_Cmd_25_JogSpeed 9926
#define pUmem_Cmd_25_JogTa 9927
#define pUmem_Cmd_25_JogTs 9928
#define pUmem_Cmd_TBD_55DC 9929
#define pUmem_Cmd_TBD_55E0 9930
#define pUmem_Cmd_TBD_55E4 9931
#define pUmem_Cmd_TBD_55E8 9932
#define pUmem_Cmd_TBD_55EC 9933
#define pUmem_Cmd_26_ServoOn 9934
#define pUmem_Cmd_26_ServoOff 9935
#define pUmem_Cmd_26_HomeStart 9936
#define pUmem_Cmd_26_HomeAbort 9937
#define pUmem_Cmd_26_HomeOffset 9938
#define pUmem_Cmd_26_JogStop 9939
#define pUmem_Cmd_26_JogContPlus 9940
#define pUmem_Cmd_26_JogContMinus 9941
#define pUmem_Cmd_26_JogAbsMove 9942
#define pUmem_Cmd_26_JogIncMove 9943
#define pUmem_Cmd_26_JogAbsPos 9944
#define pUmem_Cmd_26_JogIncDist 9945
#define pUmem_Cmd_26_JogSpeed 9946
#define pUmem_Cmd_26_JogTa 9947
#define pUmem_Cmd_26_JogTs 9948
#define pUmem_Cmd_TBD_562C 9949
#define pUmem_Cmd_TBD_5630 9950
#define pUmem_Cmd_TBD_5634 9951
#define pUmem_Cmd_TBD_5638 9952
#define pUmem_Cmd_TBD_563C 9953
#define pUmem_Cmd_27_ServoOn 9954
#define pUmem_Cmd_27_ServoOff 9955
#define pUmem_Cmd_27_HomeStart 9956
#define pUmem_Cmd_27_HomeAbort 9957
#define pUmem_Cmd_27_HomeOffset 9958
#define pUmem_Cmd_27_JogStop 9959
#define pUmem_Cmd_27_JogContPlus 9960
#define pUmem_Cmd_27_JogContMinus 9961
#define pUmem_Cmd_27_JogAbsMove 9962
#define pUmem_Cmd_27_JogIncMove 9963
#define pUmem_Cmd_27_JogAbsPos 9964
#define pUmem_Cmd_27_JogIncDist 9965
#define pUmem_Cmd_27_JogSpeed 9966
#define pUmem_Cmd_27_JogTa 9967
#define pUmem_Cmd_27_JogTs 9968
#define pUmem_Cmd_TBD_567C 9969
#define pUmem_Cmd_TBD_5680 9970
#define pUmem_Cmd_TBD_5684 9971
#define pUmem_Cmd_TBD_5688 9972
#define pUmem_Cmd_TBD_568C 9973
#define pUmem_Cmd_28_ServoOn 9974
#define pUmem_Cmd_28_ServoOff 9975
#define pUmem_Cmd_28_HomeStart 9976
#define pUmem_Cmd_28_HomeAbort 9977
#define pUmem_Cmd_28_HomeOffset 9978
#define pUmem_Cmd_28_JogStop 9979
#define pUmem_Cmd_28_JogContPlus 9980
#define pUmem_Cmd_28_JogContMinus 9981
#define pUmem_Cmd_28_JogAbsMove 9982
#define pUmem_Cmd_28_JogIncMove 9983
#define pUmem_Cmd_28_JogAbsPos 9984
#define pUmem_Cmd_28_JogIncDist 9985
#define pUmem_Cmd_28_JogSpeed 9986
#define pUmem_Cmd_28_JogTa 9987
#define pUmem_Cmd_28_JogTs 9988
#define pUmem_Cmd_TBD_56CC 9989
#define pUmem_Cmd_TBD_56D0 9990
#define pUmem_Cmd_TBD_56D4 9991
#define pUmem_Cmd_TBD_56D8 9992
#define pUmem_Cmd_TBD_56DC 9993
#define pUmem_Cmd_29_ServoOn 9994
#define pUmem_Cmd_29_ServoOff 9995
#define pUmem_Cmd_29_HomeStart 9996
#define pUmem_Cmd_29_HomeAbort 9997
#define pUmem_Cmd_29_HomeOffset 9998
#define pUmem_Cmd_29_JogStop 9999
#define pUmem_Cmd_29_JogContPlus 10000
#define pUmem_Cmd_29_JogContMinus 10001
#define pUmem_Cmd_29_JogAbsMove 10002
#define pUmem_Cmd_29_JogIncMove 10003
#define pUmem_Cmd_29_JogAbsPos 10004
#define pUmem_Cmd_29_JogIncDist 10005
#define pUmem_Cmd_29_JogSpeed 10006
#define pUmem_Cmd_29_JogTa 10007
#define pUmem_Cmd_29_JogTs 10008
#define pUmem_Cmd_TBD_571C 10009
#define pUmem_Cmd_TBD_5720 10010
#define pUmem_Cmd_TBD_5724 10011
#define pUmem_Cmd_TBD_5728 10012
#define pUmem_Cmd_TBD_572C 10013
#define pUmem_Cmd_30_ServoOn 10014
#define pUmem_Cmd_30_ServoOff 10015
#define pUmem_Cmd_30_HomeStart 10016
#define pUmem_Cmd_30_HomeAbort 10017
#define pUmem_Cmd_30_HomeOffset 10018
#define pUmem_Cmd_30_JogStop 10019
#define pUmem_Cmd_30_JogContPlus 10020
#define pUmem_Cmd_30_JogContMinus 10021
#define pUmem_Cmd_30_JogAbsMove 10022
#define pUmem_Cmd_30_JogIncMove 10023
#define pUmem_Cmd_30_JogAbsPos 10024
#define pUmem_Cmd_30_JogIncDist 10025
#define pUmem_Cmd_30_JogSpeed 10026
#define pUmem_Cmd_30_JogTa 10027
#define pUmem_Cmd_30_JogTs 10028
#define pUmem_Cmd_TBD_576C 10029
#define pUmem_Cmd_TBD_5770 10030
#define pUmem_Cmd_TBD_5774 10031
#define pUmem_Cmd_TBD_5778 10032
#define pUmem_Cmd_TBD_577C 10033
#define pUmem_Cmd_31_ServoOn 10034
#define pUmem_Cmd_31_ServoOff 10035
#define pUmem_Cmd_31_HomeStart 10036
#define pUmem_Cmd_31_HomeAbort 10037
#define pUmem_Cmd_31_HomeOffset 10038
#define pUmem_Cmd_31_JogStop 10039
#define pUmem_Cmd_31_JogContPlus 10040
#define pUmem_Cmd_31_JogContMinus 10041
#define pUmem_Cmd_31_JogAbsMove 10042
#define pUmem_Cmd_31_JogIncMove 10043
#define pUmem_Cmd_31_JogAbsPos 10044
#define pUmem_Cmd_31_JogIncDist 10045
#define pUmem_Cmd_31_JogSpeed 10046
#define pUmem_Cmd_31_JogTa 10047
#define pUmem_Cmd_31_JogTs 10048
#define pUmem_Cmd_TBD_57BC 10049
#define pUmem_Cmd_TBD_57C0 10050
#define pUmem_Cmd_TBD_57C4 10051
#define pUmem_Cmd_TBD_57C8 10052
#define pUmem_Cmd_TBD_57CC 10053
#define pUmem_Cmd_32_ServoOn 10054
#define pUmem_Cmd_32_ServoOff 10055
#define pUmem_Cmd_32_HomeStart 10056
#define pUmem_Cmd_32_HomeAbort 10057
#define pUmem_Cmd_32_HomeOffset 10058
#define pUmem_Cmd_32_JogStop 10059
#define pUmem_Cmd_32_JogContPlus 10060
#define pUmem_Cmd_32_JogContMinus 10061
#define pUmem_Cmd_32_JogAbsMove 10062
#define pUmem_Cmd_32_JogIncMove 10063
#define pUmem_Cmd_32_JogAbsPos 10064
#define pUmem_Cmd_32_JogIncDist 10065
#define pUmem_Cmd_32_JogSpeed 10066
#define pUmem_Cmd_32_JogTa 10067
#define pUmem_Cmd_32_JogTs 10068
#define pUmem_Cmd_TBD_580C 10069
#define pUmem_Cmd_TBD_5810 10070
#define pUmem_Cmd_TBD_5814 10071
#define pUmem_Cmd_TBD_5818 10072
#define pUmem_Cmd_TBD_581C 10073
#define pUmem_Cmd_Mc_ServoOn 10074
#define pUmem_Cmd_Mc_ServoOff 10075
#define pUmem_Cmd_Mc_HomeStart 10076
#define pUmem_Cmd_Mc_HomeAbort 10077
#define pUmem_Cmd_Mc_AlarmReset 10078
#define pUmem_Cmd_Mc_RunMode 10079
#define pUmem_Cmd_Mc_AutoStart 10080
#define pUmem_Cmd_Mc_AutoAbort 10081
#define pUmem_Cmd_Mc_CycleStart 10082
#define pUmem_Cmd_Mc_Fsave 10083
#define pUmem_Cmd_Mc_StepStart 10084
#define pUmem_Cmd_Mc_AutoPause 10085
#define pUmem_Cmd_TBD_61D8 10086
#define pUmem_Cmd_TBD_61DC 10087
#define pUmem_Cmd_TBD_61E0 10088
#define pUmem_Cmd_TBD_61E4 10089
#define pUmem_Cmd_TBD_61E8 10090
#define pUmem_Cmd_TBD_61EC 10091
#define pUmem_Cmd_TBD_61F0 10092
#define pUmem_Cmd_TBD_61F4 10093
#define pUmem_Cmd_TBD_61F8 10094
#define pUmem_Cmd_TBD_61FC 10095
#define pUmem_Cmd_TBD_6200 10096
#define pUmem_Cmd_TBD_6204 10097
#define pUmem_Cmd_TBD_6208 10098
#define pUmem_Cmd_TBD_620C 10099
#define pUmem_Cmd_TBD_6210 10100
#define pUmem_Cmd_TBD_6214 10101
#define pUmem_Cmd_TBD_6218 10102
#define pUmem_Cmd_TBD_621C 10103
#define pUmem_Cmd_TBD_6220 10104
#define pUmem_Cmd_TBD_6224 10105
#define pUmem_Cmd_TBD_6228 10106
#define pUmem_Cmd_TBD_622C 10107
#define pUmem_Cmd_TBD_6230 10108
#define pUmem_Cmd_TBD_6234 10109
#define pUmem_Cmd_TBD_6238 10110
#define pUmem_Cmd_TBD_623C 10111
#define pUmem_Cmd_TBD_6240 10112
#define pUmem_Cmd_TBD_6244 10113
#define pUmem_Cmd_Ws_ServoOn 10114
#define pUmem_Cmd_Ws_ServoOff 10115
#define pUmem_Cmd_Ws_HomeStart 10116
#define pUmem_Cmd_Ws_HomeAbort 10117
#define pUmem_Cmd_Ws_AlarmReset 10118
#define pUmem_Cmd_Ws_AlarmRetry 10119
#define pUmem_Cmd_Ws_AlarmAbort 10120
#define pUmem_Cmd_TBD_65AC 10121
#define pUmem_Cmd_TBD_65B0 10122
#define pUmem_Cmd_TBD_65B4 10123
#define pUmem_Cmd_Ws_TestShot 10124
#define pUmem_Cmd_Ws_PdtStaChange 10125
#define pUmem_Cmd_Tr_PdtStaChange 10126
#define pUmem_Cmd_Ws_LaserEnableStart 10127
#define pUmem_Cmd_Ws_LaserDisableStart 10128
#define pUmem_Cmd_Ws_LaserTestCrossStart 10129
#define pUmem_Cmd_Ws_LaserTestCrossAbort 10130
#define pUmem_Cmd_Ws_LaserTestLineStart 10131
#define pUmem_Cmd_Ws_LaserTestLineAbort 10132
#define pUmem_Cmd_TBD_65DC 10133
#define pUmem_Cmd_TBD_65E0 10134
#define pUmem_Cmd_TBD_65E4 10135
#define pUmem_Cmd_TBD_65E8 10136
#define pUmem_Cmd_TBD_65EC 10137
#define pUmem_Cmd_TBD_65F0 10138
#define pUmem_Cmd_TBD_65F4 10139
#define pUmem_Cmd_TBD_65F8 10140
#define pUmem_Cmd_TBD_65FC 10141
#define pUmem_Cmd_TBD_6600 10142
#define pUmem_Cmd_TBD_6604 10143
#define pUmem_Cmd_Ws_LdStart 10144
#define pUmem_Cmd_Ws_LdAbort 10145
#define pUmem_Cmd_Ws_LdHold 10146
#define pUmem_Cmd_Ws_RdStart 10147
#define pUmem_Cmd_Ws_RdAbort 10148
#define pUmem_Cmd_Ws_RdHold 10149
#define pUmem_Cmd_Ws_WdStart 10150
#define pUmem_Cmd_Ws_WdAbort 10151
#define pUmem_Cmd_Ws_WdHold 10152
#define pUmem_Cmd_Ws_WtStart 10153
#define pUmem_Cmd_Ws_WtAbort 10154
#define pUmem_Cmd_Ws_WtHold 10155
#define pUmem_Cmd_Ws_UdStart 10156
#define pUmem_Cmd_Ws_UdAbort 10157
#define pUmem_Cmd_Ws_UdHold 10158
#define pUmem_Cmd_Ws_RjStart 10159
#define pUmem_Cmd_Ws_RjAbort 10160
#define pUmem_Cmd_Ws_RjHold 10161
#define pUmem_Cmd_TBD_6650 10162
#define pUmem_Cmd_TBD_6654 10163
#define pUmem_Cmd_TBD_6658 10164
#define pUmem_Cmd_TBD_665C 10165
#define pUmem_Cmd_TBD_6660 10166
#define pUmem_Cmd_TBD_6664 10167
#define pUmem_Cmd_TBD_6668 10168
#define pUmem_Cmd_TBD_666C 10169
#define pUmem_Cmd_TBD_6670 10170
#define pUmem_Cmd_TBD_6674 10171
#define pUmem_Cmd_TBD_6678 10172
#define pUmem_Cmd_TBD_667C 10173
#define pUmem_Cmd_Ws_1stTransRjRsp 10174
#define pUmem_Cmd_Ws_2ndTransLdRsp 10175
#define pUmem_Cmd_Ws_2dVisionCkRsp 10176
#define pUmem_Cmd_Ws_LwmStartRsp 10177
#define pUmem_Cmd_TBD_6690 10178
#define pUmem_Cmd_TBD_6694 10179
#define pUmem_Cmd_TBD_6698 10180
#define pUmem_Cmd_TBD_669C 10181
#define pUmem_Cmd_TBD_66A0 10182
#define pUmem_Cmd_Ws_RspSkipOpt 10183
#define pUmem_Cmd_Ws_2ndTransLdAlignX 10184
#define pUmem_Cmd_Ws_2ndTransLdAlignY 10185
#define pUmem_Cmd_Ws_2ndTransLdAlignC 10186
#define pUmem_Cmd_TBD_66B4 10187
#define pUmem_Cmd_TBD_66B8 10188
#define pUmem_Cmd_TBD_66BC 10189
#define pUmem_Cmd_TBD_66C0 10190
#define pUmem_Cmd_TBD_66C4 10191
#define pUmem_Cmd_TBD_66C8 10192
#define pUmem_Cmd_TBD_66CC 10193
#define pUmem_Cmd_Ws_2ndTransPdtDir 10194
#define pUmem_Cmd_Ws_2ndTransPdtNo 10195
#define pUmem_Cmd_Ws_2ndTransTempOpt 10196
#define pUmem_Cmd_TBD_66DC 10197
#define pUmem_Cmd_TBD_66E0 10198
#define pUmem_Cmd_TBD_66E4 10199
#define pUmem_Cmd_TBD_66E8 10200
#define pUmem_Cmd_TBD_66EC 10201
#define pUmem_Cmd_TBD_66F0 10202
#define pUmem_Cmd_TBD_66F4 10203
#define pUmem_Cmd_Ws_AccLimitX 10204
#define pUmem_Cmd_Ws_AccLimitY 10205
#define pUmem_Cmd_Ws_AccLimitC 10206
#define pUmem_Cmd_Ws_VelLimitC 10207
#define pUmem_Cmd_Ws_RefVel 10208
#define pUmem_Cmd_Ws_RotOffsetX 10209
#define pUmem_Cmd_Ws_RotOffsetY 10210
#define pUmem_Cmd_Ws_TbVacBlow 10211
#define pUmem_Cmd_TBD_6718 10212
#define pUmem_Cmd_TBD_671C 10213
#define pUmem_Cmd_Ws_OutMode 10214
#define pUmem_Cmd_Ws_PfmPeriod 10215
#define pUmem_Cmd_Ws_PfmOnTime 10216
#define pUmem_Cmd_Ws_CorePfmEna 10217
#define pUmem_Cmd_Ws_RingPfmEna 10218
#define pUmem_Cmd_Ws_CorePowerSf 10219
#define pUmem_Cmd_Ws_CoreRefPower 10220
#define pUmem_Cmd_Ws_CoreMinPower 10221
#define pUmem_Cmd_Ws_CoreMaxPower 10222
#define pUmem_Cmd_Ws_RingPowerSf 10223
#define pUmem_Cmd_Ws_RingRefPower 10224
#define pUmem_Cmd_Ws_RingMinPower 10225
#define pUmem_Cmd_Ws_RingMaxPower 10226
#define pUmem_Cmd_TBD_6754 10227
#define pUmem_Cmd_TBD_6758 10228
#define pUmem_Cmd_TBD_675C 10229
#define pUmem_Cmd_TBD_6760 10230
#define pUmem_Cmd_TBD_6764 10231
#define pUmem_Cmd_TBD_6768 10232
#define pUmem_Cmd_TBD_676C 10233
#define pUmem_Cmd_Ws_ShotTime 10234
#define pUmem_Cmd_Ws_EprOut 10235
#define pUmem_Cmd_Ws_TempCkTime 10236
#define pUmem_Cmd_Ws_TempOffset1 10237
#define pUmem_Cmd_Ws_CldInposDelay 10238
#define pUmem_Cmd_Ws_CoverFwdPos 10239
#define pUmem_Cmd_Ws_CoverBwdPos 10240
#define pUmem_Cmd_Ws_TempOffset2 10241
#define pUmem_Cmd_TBD_6790 10242
#define pUmem_Cmd_TBD_6794 10243
#define pUmem_Cmd_TBD_6798 10244
#define pUmem_Cmd_TBD_679C 10245
#define pUmem_Cmd_TBD_67A0 10246
#define pUmem_Cmd_TBD_67A4 10247
#define pUmem_Cmd_TBD_67A8 10248
#define pUmem_Cmd_TBD_67AC 10249
#define pUmem_Cmd_TBD_67B0 10250
#define pUmem_Cmd_TBD_67B4 10251
#define pUmem_Cmd_TBD_67B8 10252
#define pUmem_Cmd_TBD_67BC 10253
#define pUmem_Cmd_Ws_LdVelX 10254
#define pUmem_Cmd_Ws_LdVelY 10255
#define pUmem_Cmd_Ws_LdVelC 10256
#define pUmem_Cmd_Ws_LdPosX 10257
#define pUmem_Cmd_Ws_LdPosY 10258
#define pUmem_Cmd_Ws_LdPosC 10259
#define pUmem_Cmd_Ws_RdVelX 10260
#define pUmem_Cmd_Ws_RdVelY 10261
#define pUmem_Cmd_Ws_RdVelC 10262
#define pUmem_Cmd_Ws_RdPosX 10263
#define pUmem_Cmd_Ws_RdPosY 10264
#define pUmem_Cmd_Ws_RdPosC 10265
#define pUmem_Cmd_Ws_WdVelX 10266
#define pUmem_Cmd_Ws_WdVelY 10267
#define pUmem_Cmd_Ws_WdVelC 10268
#define pUmem_Cmd_Ws_WdPosX 10269
#define pUmem_Cmd_Ws_WdPosY 10270
#define pUmem_Cmd_Ws_WdPosC 10271
#define pUmem_Cmd_Ws_WtVelX 10272
#define pUmem_Cmd_Ws_WtVelY 10273
#define pUmem_Cmd_Ws_WtVelC 10274
#define pUmem_Cmd_Ws_WtPosX 10275
#define pUmem_Cmd_Ws_WtPosY 10276
#define pUmem_Cmd_Ws_WtPosC 10277
#define pUmem_Cmd_Ws_UdVelX 10278
#define pUmem_Cmd_Ws_UdVelY 10279
#define pUmem_Cmd_Ws_UdVelC 10280
#define pUmem_Cmd_Ws_UdPosX 10281
#define pUmem_Cmd_Ws_UdPosY 10282
#define pUmem_Cmd_Ws_UdPosC 10283
#define pUmem_Cmd_Ws_RjVelX 10284
#define pUmem_Cmd_Ws_RjVelY 10285
#define pUmem_Cmd_Ws_RjVelC 10286
#define pUmem_Cmd_Ws_RjPosX 10287
#define pUmem_Cmd_Ws_RjPosY 10288
#define pUmem_Cmd_Ws_RjPosC 10289
#define pUmem_Cmd_TBD_6850 10290
#define pUmem_Cmd_TBD_6854 10291
#define pUmem_Cmd_TBD_6858 10292
#define pUmem_Cmd_TBD_685C 10293
#define pUmem_Cmd_TBD_6860 10294
#define pUmem_Cmd_TBD_6864 10295
#define pUmem_Cmd_TBD_6868 10296
#define pUmem_Cmd_TBD_686C 10297
#define pUmem_Cmd_TBD_6870 10298
#define pUmem_Cmd_TBD_6874 10299
#define pUmem_Cmd_TBD_6878 10300
#define pUmem_Cmd_TBD_687C 10301
#define pUmem_Cmd_TBD_6880 10302
#define pUmem_Cmd_TBD_6884 10303
#define pUmem_Cmd_Vs_ServoOn 10304
#define pUmem_Cmd_Vs_ServoOff 10305
#define pUmem_Cmd_Vs_HomeStart 10306
#define pUmem_Cmd_Vs_HomeAbort 10307
#define pUmem_Cmd_Vs_AlarmReset 10308
#define pUmem_Cmd_Vs_AlarmRetry 10309
#define pUmem_Cmd_Vs_AlarmAbort 10310
#define pUmem_Cmd_TBD_6994 10311
#define pUmem_Cmd_TBD_6998 10312
#define pUmem_Cmd_TBD_699C 10313
#define pUmem_Cmd_Vs_TestShot 10314
#define pUmem_Cmd_Vs_PdtStaChange 10315
#define pUmem_Cmd_TBD_69A8 10316
#define pUmem_Cmd_TBD_69AC 10317
#define pUmem_Cmd_TBD_69B0 10318
#define pUmem_Cmd_TBD_69B4 10319
#define pUmem_Cmd_TBD_69B8 10320
#define pUmem_Cmd_TBD_69BC 10321
#define pUmem_Cmd_TBD_69C0 10322
#define pUmem_Cmd_TBD_69C4 10323
#define pUmem_Cmd_TBD_69C8 10324
#define pUmem_Cmd_TBD_69CC 10325
#define pUmem_Cmd_TBD_69D0 10326
#define pUmem_Cmd_TBD_69D4 10327
#define pUmem_Cmd_TBD_69D8 10328
#define pUmem_Cmd_TBD_69DC 10329
#define pUmem_Cmd_TBD_69E0 10330
#define pUmem_Cmd_TBD_69E4 10331
#define pUmem_Cmd_TBD_69E8 10332
#define pUmem_Cmd_TBD_69EC 10333
#define pUmem_Cmd_Vs_LdStart 10334
#define pUmem_Cmd_Vs_LdAbort 10335
#define pUmem_Cmd_Vs_LdHold 10336
#define pUmem_Cmd_Vs_RdStart 10337
#define pUmem_Cmd_Vs_RdAbort 10338
#define pUmem_Cmd_Vs_RdHold 10339
#define pUmem_Cmd_Vs_VnStart 10340
#define pUmem_Cmd_Vs_VnAbort 10341
#define pUmem_Cmd_Vs_VnHold 10342
#define pUmem_Cmd_Vs_WtStart 10343
#define pUmem_Cmd_Vs_WtAbort 10344
#define pUmem_Cmd_Vs_WtHold 10345
#define pUmem_Cmd_Vs_UdStart 10346
#define pUmem_Cmd_Vs_UdAbort 10347
#define pUmem_Cmd_Vs_UdHold 10348
#define pUmem_Cmd_Vs_RjStart 10349
#define pUmem_Cmd_Vs_RjAbort 10350
#define pUmem_Cmd_Vs_RjHold 10351
#define pUmem_Cmd_TBD_6A38 10352
#define pUmem_Cmd_TBD_6A3C 10353
#define pUmem_Cmd_TBD_6A40 10354
#define pUmem_Cmd_TBD_6A44 10355
#define pUmem_Cmd_TBD_6A48 10356
#define pUmem_Cmd_TBD_6A4C 10357
#define pUmem_Cmd_TBD_6A50 10358
#define pUmem_Cmd_TBD_6A54 10359
#define pUmem_Cmd_TBD_6A58 10360
#define pUmem_Cmd_TBD_6A5C 10361
#define pUmem_Cmd_TBD_6A60 10362
#define pUmem_Cmd_TBD_6A64 10363
#define pUmem_Cmd_Vs_3rdTransUdRsp 10364
#define pUmem_Cmd_Vs_3rdTransRjRsp 10365
#define pUmem_Cmd_Vs_3DVisionStRsp 10366
#define pUmem_Cmd_Vs_3DVisionEdRsp 10367
#define pUmem_Cmd_TBD_6A78 10368
#define pUmem_Cmd_TBD_6A7C 10369
#define pUmem_Cmd_TBD_6A80 10370
#define pUmem_Cmd_TBD_6A84 10371
#define pUmem_Cmd_TBD_6A88 10372
#define pUmem_Cmd_Vs_RspSkipOpt 10373
#define pUmem_Cmd_TBD_6A90 10374
#define pUmem_Cmd_TBD_6A94 10375
#define pUmem_Cmd_TBD_6A98 10376
#define pUmem_Cmd_TBD_6A9C 10377
#define pUmem_Cmd_TBD_6AA0 10378
#define pUmem_Cmd_TBD_6AA4 10379
#define pUmem_Cmd_TBD_6AA8 10380
#define pUmem_Cmd_TBD_6AAC 10381
#define pUmem_Cmd_TBD_6AB0 10382
#define pUmem_Cmd_TBD_6AB4 10383
#define pUmem_Cmd_TBD_6AB8 10384
#define pUmem_Cmd_TBD_6ABC 10385
#define pUmem_Cmd_TBD_6AC0 10386
#define pUmem_Cmd_TBD_6AC4 10387
#define pUmem_Cmd_TBD_6AC8 10388
#define pUmem_Cmd_TBD_6ACC 10389
#define pUmem_Cmd_TBD_6AD0 10390
#define pUmem_Cmd_TBD_6AD4 10391
#define pUmem_Cmd_TBD_6AD8 10392
#define pUmem_Cmd_TBD_6ADC 10393
#define pUmem_Cmd_Vs_AccLimitX 10394
#define pUmem_Cmd_Vs_AccLimitY 10395
#define pUmem_Cmd_Vs_AccLimitC 10396
#define pUmem_Cmd_Vs_VelLimitC 10397
#define pUmem_Cmd_Vs_RefVel 10398
#define pUmem_Cmd_Vs_RotOffsetX 10399
#define pUmem_Cmd_Vs_RotOffsetY 10400
#define pUmem_Cmd_TBD_6AFC 10401
#define pUmem_Cmd_TBD_6B00 10402
#define pUmem_Cmd_TBD_6B04 10403
#define pUmem_Cmd_Vs_PfmPeriod 10404
#define pUmem_Cmd_Vs_PfmDuty 10405
#define pUmem_Cmd_TBD_6B10 10406
#define pUmem_Cmd_TBD_6B14 10407
#define pUmem_Cmd_TBD_6B18 10408
#define pUmem_Cmd_TBD_6B1C 10409
#define pUmem_Cmd_TBD_6B20 10410
#define pUmem_Cmd_TBD_6B24 10411
#define pUmem_Cmd_TBD_6B28 10412
#define pUmem_Cmd_TBD_6B2C 10413
#define pUmem_Cmd_TBD_6B30 10414
#define pUmem_Cmd_TBD_6B34 10415
#define pUmem_Cmd_TBD_6B38 10416
#define pUmem_Cmd_TBD_6B3C 10417
#define pUmem_Cmd_TBD_6B40 10418
#define pUmem_Cmd_TBD_6B44 10419
#define pUmem_Cmd_TBD_6B48 10420
#define pUmem_Cmd_TBD_6B4C 10421
#define pUmem_Cmd_TBD_6B50 10422
#define pUmem_Cmd_TBD_6B54 10423
#define pUmem_Cmd_Vs_ShotTime 10424
#define pUmem_Cmd_Vs_CldInposDelay 10425
#define pUmem_Cmd_TBD_6B60 10426
#define pUmem_Cmd_TBD_6B64 10427
#define pUmem_Cmd_TBD_6B68 10428
#define pUmem_Cmd_TBD_6B6C 10429
#define pUmem_Cmd_TBD_6B70 10430
#define pUmem_Cmd_TBD_6B74 10431
#define pUmem_Cmd_TBD_6B78 10432
#define pUmem_Cmd_TBD_6B7C 10433
#define pUmem_Cmd_TBD_6B80 10434
#define pUmem_Cmd_TBD_6B84 10435
#define pUmem_Cmd_TBD_6B88 10436
#define pUmem_Cmd_TBD_6B8C 10437
#define pUmem_Cmd_TBD_6B90 10438
#define pUmem_Cmd_TBD_6B94 10439
#define pUmem_Cmd_TBD_6B98 10440
#define pUmem_Cmd_TBD_6B9C 10441
#define pUmem_Cmd_TBD_6BA0 10442
#define pUmem_Cmd_TBD_6BA4 10443
#define pUmem_Cmd_Vs_LdVelX 10444
#define pUmem_Cmd_Vs_LdVelY 10445
#define pUmem_Cmd_Vs_LdVelC 10446
#define pUmem_Cmd_Vs_LdPosX 10447
#define pUmem_Cmd_Vs_LdPosY 10448
#define pUmem_Cmd_Vs_LdPosC 10449
#define pUmem_Cmd_Vs_RdVelX 10450
#define pUmem_Cmd_Vs_RdVelY 10451
#define pUmem_Cmd_Vs_RdVelC 10452
#define pUmem_Cmd_Vs_RdPosX 10453
#define pUmem_Cmd_Vs_RdPosY 10454
#define pUmem_Cmd_Vs_RdPosC 10455
#define pUmem_Cmd_Vs_VnVelX 10456
#define pUmem_Cmd_Vs_VnVelY 10457
#define pUmem_Cmd_Vs_VnVelC 10458
#define pUmem_Cmd_Vs_VnPosX 10459
#define pUmem_Cmd_Vs_VnPosY 10460
#define pUmem_Cmd_Vs_VnPosC 10461
#define pUmem_Cmd_Vs_WtVelX 10462
#define pUmem_Cmd_Vs_WtVelY 10463
#define pUmem_Cmd_Vs_WtVelC 10464
#define pUmem_Cmd_Vs_WtPosX 10465
#define pUmem_Cmd_Vs_WtPosY 10466
#define pUmem_Cmd_Vs_WtPosC 10467
#define pUmem_Cmd_Vs_UdVelX 10468
#define pUmem_Cmd_Vs_UdVelY 10469
#define pUmem_Cmd_Vs_UdVelC 10470
#define pUmem_Cmd_Vs_UdPosX 10471
#define pUmem_Cmd_Vs_UdPosY 10472
#define pUmem_Cmd_Vs_UdPosC 10473
#define pUmem_Cmd_Vs_RjVelX 10474
#define pUmem_Cmd_Vs_RjVelY 10475
#define pUmem_Cmd_Vs_RjVelC 10476
#define pUmem_Cmd_Vs_RjPosX 10477
#define pUmem_Cmd_Vs_RjPosY 10478
#define pUmem_Cmd_Vs_RjPosC 10479
#define pUmem_Cmd_TBD_6C38 10480
#define pUmem_Cmd_TBD_6C3C 10481
#define pUmem_Cmd_TBD_6C40 10482
#define pUmem_Cmd_TBD_6C44 10483
#define pUmem_Cmd_TBD_6C48 10484
#define pUmem_Cmd_TBD_6C4C 10485
#define pUmem_Cmd_TBD_6C50 10486
#define pUmem_Cmd_TBD_6C54 10487
#define pUmem_Cmd_TBD_6C58 10488
#define pUmem_Cmd_TBD_6C5C 10489
#define pUmem_Cmd_TBD_6C60 10490
#define pUmem_Cmd_TBD_6C64 10491
#define pUmem_Cmd_TBD_6C68 10492
#define pUmem_Cmd_TBD_6C6C 10493
#define pUmem_Cmd_Sc_ServoOn 10494
#define pUmem_Cmd_Sc_ServoOff 10495
#define pUmem_Cmd_Sc_HomeStart 10496
#define pUmem_Cmd_Sc_HomeAbort 10497
#define pUmem_Cmd_Sc_AlarmReset 10498
#define pUmem_Cmd_Sc_Fsave 10499
#define pUmem_Cmd_Sc_WblEna 10500
#define pUmem_Cmd_Sc_WblLen 10501
#define pUmem_Cmd_Sc_WblDist 10502
#define pUmem_Cmd_Sc_WblType 10503
#define pUmem_Cmd_Sc_WblRatioW 10504
#define pUmem_Cmd_Sc_WblRatioL 10505
#define pUmem_Cmd_Sc_WblOffsetX 10506
#define pUmem_Cmd_Sc_WblOffsetY 10507
#define pUmem_Di_Md00 10508
#define pUmem_Di_Md01 10524
#define pUmem_Di_Md02 10540
#define pUmem_Do_Md00 10556
#define pUmem_Do_Md01 10572
#define pUmem_Do_Md02 10588
#define pUmem_Di00 10604
#define pUmem_Di01_LaserReady 10605
#define pUmem_Di02_LaserReqResp 10606
#define pUmem_Di03_LaserPowerOn 10607
#define pUmem_Di04_LaserAdMode 10608
#define pUmem_Di05_LaserProgRun 10609
#define pUmem_Di06_LaserWarning 10610
#define pUmem_Di07_LaserAbnormal 10611
#define pUmem_Di08 10612
#define pUmem_Di09 10613
#define pUmem_Di0A 10614
#define pUmem_Di0B 10615
#define pUmem_Di0C 10616
#define pUmem_Di0D 10617
#define pUmem_Di0E 10618
#define pUmem_Di0F 10619
#define pUmem_Di10_WsLtFixUp 10620
#define pUmem_Di11_WsVsLtStrCls 10621
#define pUmem_Di12_WsLtFixDn 10622
#define pUmem_Di13_WsVsLtStrOpn 10623
#define pUmem_Di14_WsRtFixUp 10624
#define pUmem_Di15_WsVsRtStrCls 10625
#define pUmem_Di16_WsRtFixDn 10626
#define pUmem_Di17_WsVsRtStrOpn 10627
#define pUmem_Di18_WsTempBwd 10628
#define pUmem_Di19_TrPickUp 10629
#define pUmem_Di1A_WsTempFwd 10630
#define pUmem_Di1B_TrPickDn 10631
#define pUmem_Di1C_WsTbDet 10632
#define pUmem_Di1D_TrGripCls 10633
#define pUmem_Di1E 10634
#define pUmem_Di1F_TrGripOpn 10635
#define pUmem_Di20_VsTbFixBwd 10636
#define pUmem_Di21_WsAirCurtain 10637
#define pUmem_Di22_VsTbFixFwd 10638
#define pUmem_Di23_WsN2Blow 10639
#define pUmem_Di24_VsTbFixUp 10640
#define pUmem_Di25 10641
#define pUmem_Di26_VsTbFixDn 10642
#define pUmem_Di27 10643
#define pUmem_Di28 10644
#define pUmem_Di29 10645
#define pUmem_Di2A 10646
#define pUmem_Di2B 10647
#define pUmem_Di2C_VsTbDet 10648
#define pUmem_Di2D 10649
#define pUmem_Di2E 10650
#define pUmem_Di2F 10651
#define pUmem_Di30_EcldFwd 10652
#define pUmem_Di31_EcldBwd 10653
#define pUmem_Do00_LaserEmission 10654
#define pUmem_Do01_LaserReset 10655
#define pUmem_Do02_LaserRequest 10656
#define pUmem_Do03_LaserPowerOn 10657
#define pUmem_Do04_LaserAdInEna 10658
#define pUmem_Do05_LaserGuideEna 10659
#define pUmem_Do06_LaserProgEna 10660
#define pUmem_Do07_LaserProgStop 10661
#define pUmem_Do08 10662
#define pUmem_Do09 10663
#define pUmem_Do0A 10664
#define pUmem_Do0B 10665
#define pUmem_Do0C 10666
#define pUmem_Do0D 10667
#define pUmem_Do0E 10668
#define pUmem_Do0F 10669
#define pUmem_Do10_WsTbFixUp 10670
#define pUmem_Do11_WsTempBwd 10671
#define pUmem_Do12_WsTbFixDn 10672
#define pUmem_Do13_WsTempFwd 10673
#define pUmem_Do14_TrGripCls 10674
#define pUmem_Do15_VsTbFixBwd 10675
#define pUmem_Do16_TrGripOpn 10676
#define pUmem_Do17_VsTbFixFwd 10677
#define pUmem_Do18_TrPickUp 10678
#define pUmem_Do19_VsTbFixUp 10679
#define pUmem_Do1A_TrPickDn 10680
#define pUmem_Do1B_VsTbFixDn 10681
#define pUmem_Do1C_WsVsStrCls 10682
#define pUmem_Do1D_WsCoolAir 10683
#define pUmem_Do1E_WsVsStrOpn 10684
#define pUmem_Do1F 10685
#define pUmem_Do20_WsTbVacm 10686
#define pUmem_Do21_WsAirCurtain 10687
#define pUmem_Do22_WsTbBlow 10688
#define pUmem_Do23_WsN2Blow 10689
#define pUmem_Do24 10690
#define pUmem_Do25_WsTbVacmValve 10691
#define pUmem_Do26 10692
#define pUmem_Do27 10693
#define pUmem_Do28 10694
#define pUmem_Do29 10695
#define pUmem_Do2A 10696
#define pUmem_Do2B 10697
#define pUmem_Do2C 10698
#define pUmem_Do2D 10699
#define pUmem_Do2E 10700
#define pUmem_Do2F 10701
#define pUmem_Do30_EcldFwd 10702
#define pUmem_Do31_EcldBwd 10703
#define pUmem_Ai00_WsLoadCell 10704
#define pUmem_Ai01 10705
#define pUmem_Ti00_WsTempSen1 10706
#define pUmem_Ti01_WsTempSen2 10707
#define pUmem_Sta_Mc_BufIdx 10708
#define pUmem_Sta_Mc_SeqCur 10709
#define pUmem_Sta_Mc_SeqOld 10759
#define pUmem_Sta_Mc_Pdt 10809
#define pUmem_Sta_Mc_Time_L 10859
#define pUmem_Sta_Mc_Time_H 10909
#define pUmem_Sta_Mc_Time_BufD 10959
#define pUmem_Sta_Mc_Time_BufL 11009
#define pUmem_Sta_Mc_Time_BufH 11059
#define pUmem_Sta_CmdPos 11109
#define pUmem_Sta_ActPos 11141
#define pUmem_Sta_Velocity 11173
#define pUmem_Sta_Load 11205
#define pUmem_Sta_AmpEna 11237
#define pUmem_Sta_CloseLoop 11269
#define pUmem_Sta_InPos 11301
#define pUmem_Sta_HomeFin 11333
#define pUmem_Sta_HomeIng 11365
#define pUmem_Sta_LimitMinus 11397
#define pUmem_Sta_LimitPlus 11429
#define pUmem_Sta_FollowingErr 11461
#define pUmem_Sta_AmpFault 11493
#define pUmem_Sta_EncLoss 11525
#define pUmem_Sta_I2tErr 11557
#define pUmem_Sta_ProgPos 11589
#define pUmem_Cmd_ServoOn 11621
#define pUmem_Cmd_ServoOff 11653
#define pUmem_Cmd_HomeStart 11685
#define pUmem_Cmd_HomeAbort 11717
#define pUmem_Cmd_HomeOffset 11749
#define pUmem_Cmd_JogStop 11781
#define pUmem_Cmd_JogContPlus 11813
#define pUmem_Cmd_JogContMinus 11845
#define pUmem_Cmd_JogAbsMove 11877
#define pUmem_Cmd_JogIncMove 11909
#define pUmem_Cmd_JogAbsPos 11941
#define pUmem_Cmd_JogIncDist 11973
#define pUmem_Cmd_JogSpeed 12005
#define pUmem_Cmd_JogTa 12037
#define pUmem_Cmd_JogTs 12069
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
#define pWs_Vect_Dlt 12101
#define gWs_OutMode 8223
#define gWs_RefVel 8224
#define gWs_VelRatio 8225
#define gWs_LaserEna 8226
#define gWs_CorePowSf 8227
#define gWs_CoreRefPow 8228
#define gWs_CoreMinPow 8229
#define gWs_CoreMaxPow 8230
#define gWs_CoreOutPow 8231
#define gWs_CoreOutVdc 8232
#define gWs_CorePfmEna 8233
#define gWs_RingPowSf 8234
#define gWs_RingRefPow 8235
#define gWs_RingMinPow 8236
#define gWs_RingMaxPow 8237
#define gWs_RingOutPow 8238
#define gWs_RingOutVdc 8239
#define gWs_RingPfmEna 8240
#define gWs_PfmRtiCnt 8241
#define gWs_PfmPeriod 8242
#define gWs_PfmOnTime 8243
#define gWs_PfmOnCnt 8244
#define gWs_PfmOut 8245
#define gWs_PfmBuf 8246
#define gWs_PfmCnt 8247
#define gWs_WblEna 8248
#define gWs_WblLen 8249
#define gWs_WblDst 8250
#define gWs_WblCnt 8251
#define gWs_WblType 8252
#define gWs_WblRatW 8253
#define gWs_WblRatL 8254
#define gWs_WblOfsX 8255
#define gWs_WblOfsY 8256
#define gVs_AccLimitX 8257
#define gVs_AccLimitY 8258
#define gVs_AccLimitC 8259
#define gVs_VelLimitC 8260
#define gVs_PosX_Cur 8261
#define gVs_PosY_Cur 8262
#define gVs_PosX_Old 8263
#define gVs_PosY_Old 8264
#define gVs_PosX_Dlt 8265
#define gVs_PosY_Dlt 8266
#define gVs_PosV_Dlt 8267
#define gVs_Vect_Vel 8268
#define gVs_Vect_Sum 8269
#define pVs_Vect_Dlt 12102
#define gVs_RefVel 8270
#define gVs_PfmPeriod 8271
#define gVs_PfmDuty 8272
#define gVs_EquEna 8273
#define gVs_EquCnt 8274
#define gVs_EquSta_Cur 8275
#define gVs_EquSta_Old 8276
#define gSc_PosX_Cur 8277
#define gSc_PosY_Cur 8278
#define gSta_Idx 8279
#define gCmd_Idx 8280
#define gMt_HomeStart_Cur 8281
#define gMt_HomeStart_Old 8313
#define gMt_HomeAbort_Cur 8345
#define gMt_HomeAbort_Old 8377
#define gMt_ServoOn_Cur 8409
#define gMt_ServoOn_Old 8441
#define gMt_ServoOff_Cur 8473
#define gMt_ServoOff_Old 8505
#define gMt_Jog_Stop_Cur 8537
#define gMt_Jog_Stop_Old 8569
#define gMt_Jog_ContPlus_Cur 8601
#define gMt_Jog_ContPlus_Old 8633
#define gMt_Jog_ContMinus_Cur 8665
#define gMt_Jog_ContMinus_Old 8697
#define gMt_Jog_AbsMove_Cur 8729
#define gMt_Jog_AbsMove_Old 8761
#define gMt_Jog_IncMove_Cur 8793
#define gMt_Jog_IncMove_Old 8825
#define gMc_ServoOn_Cur 8857
#define gMc_ServoOn_Old 8858
#define gMc_ServoOff_Cur 8859
#define gMc_ServoOff_Old 8860
#define gMc_HomeStart_Cur 8861
#define gMc_HomeStart_Old 8862
#define gMc_HomeAbort_Cur 8863
#define gMc_HomeAbort_Old 8864
#define gMc_AlarmReset_Cur 8865
#define gMc_AlarmReset_Old 8866
#define gMc_RunMod_Cur 8867
#define gMc_RunMod_Old 8868
#define gMc_AutoStart_Cur 8869
#define gMc_AutoStart_Old 8870
#define gMc_AutoAbort_Cur 8871
#define gMc_AutoAbort_Old 8872
#define gMc_AutoPause_Cur 8873
#define gMc_AutoPause_Old 8874
#define gMc_CycleStart_Cur 8875
#define gMc_CycleStart_Old 8876
#define gMc_StepStart_Cur 8877
#define gMc_StepStart_Old 8878
#define gMc_Fsave_Cur 8879
#define gMc_Fsave_Old 8880
#define gWs_ServoOn_Cur 8881
#define gWs_ServoOn_Old 8882
#define gWs_ServoOff_Cur 8883
#define gWs_ServoOff_Old 8884
#define gWs_HomeStart_Cur 8885
#define gWs_HomeStart_Old 8886
#define gWs_HomeAbort_Cur 8887
#define gWs_HomeAbort_Old 8888
#define gWs_AlarmReset_Cur 8889
#define gWs_AlarmReset_Old 8890
#define gWs_AlarmRetry_Cur 8891
#define gWs_AlarmRetry_Old 8892
#define gWs_AlarmAbort_Cur 8893
#define gWs_AlarmAbort_Old 8894
#define gWs_PowerCheck_Cur 8895
#define gWs_PowerCheck_Old 8896
#define gWs_TestShot_Cur 8897
#define gWs_TestShot_Old 8898
#define gWs_LaserEnableStart_Cur 8899
#define gWs_LaserEnableStart_Old 8900
#define gWs_LaserDisableStart_Cur 8901
#define gWs_LaserDisableStart_Old 8902
#define gWs_LaserTestCrossStart_Cur 8903
#define gWs_LaserTestCrossStart_Old 8904
#define gWs_LaserTestCrossAbort_Cur 8905
#define gWs_LaserTestCrossAbort_Old 8906
#define gWs_LaserTestLineStart_Cur 8907
#define gWs_LaserTestLineStart_Old 8908
#define gWs_LaserTestLineAbort_Cur 8909
#define gWs_LaserTestLineAbort_Old 8910
#define gVs_ServoOn_Cur 8911
#define gVs_ServoOn_Old 8912
#define gVs_ServoOff_Cur 8913
#define gVs_ServoOff_Old 8914
#define gVs_HomeStart_Cur 8915
#define gVs_HomeStart_Old 8916
#define gVs_HomeAbort_Cur 8917
#define gVs_HomeAbort_Old 8918
#define gVs_AlarmReset_Cur 8919
#define gVs_AlarmReset_Old 8920
#define gVs_AlarmRetry_Cur 8921
#define gVs_AlarmRetry_Old 8922
#define gVs_AlarmAbort_Cur 8923
#define gVs_AlarmAbort_Old 8924
#define gVs_TestShot_Cur 8925
#define gVs_TestShot_Old 8926
#define gSc_ServoOn_Cur 8927
#define gSc_ServoOn_Old 8928
#define gSc_ServoOff_Cur 8929
#define gSc_ServoOff_Old 8930
#define gSc_HomeStart_Cur 8931
#define gSc_HomeStart_Old 8932
#define gSc_HomeAbort_Cur 8933
#define gSc_HomeAbort_Old 8934
#define gSc_AlarmReset_Cur 8935
#define gSc_AlarmReset_Old 8936
#define gWs_LdStart_Cur 8937
#define gWs_LdAbort_Cur 8938
#define gWs_LdStart_Old 8939
#define gWs_LdAbort_Old 8940
#define gWs_RdStart_Cur 8941
#define gWs_RdAbort_Cur 8942
#define gWs_RdStart_Old 8943
#define gWs_RdAbort_Old 8944
#define gWs_WdStart_Cur 8945
#define gWs_WdAbort_Cur 8946
#define gWs_WdStart_Old 8947
#define gWs_WdAbort_Old 8948
#define gWs_WtStart_Cur 8949
#define gWs_WtAbort_Cur 8950
#define gWs_WtStart_Old 8951
#define gWs_WtAbort_Old 8952
#define gWs_UdStart_Cur 8953
#define gWs_UdAbort_Cur 8954
#define gWs_UdStart_Old 8955
#define gWs_UdAbort_Old 8956
#define gWs_RjStart_Cur 8957
#define gWs_RjAbort_Cur 8958
#define gWs_RjStart_Old 8959
#define gWs_RjAbort_Old 8960
#define gVs_LdStart_Cur 8961
#define gVs_LdAbort_Cur 8962
#define gVs_LdStart_Old 8963
#define gVs_LdAbort_Old 8964
#define gVs_RdStart_Cur 8965
#define gVs_RdAbort_Cur 8966
#define gVs_RdStart_Old 8967
#define gVs_RdAbort_Old 8968
#define gVs_VnStart_Cur 8969
#define gVs_VnAbort_Cur 8970
#define gVs_VnStart_Old 8971
#define gVs_VnAbort_Old 8972
#define gVs_WtStart_Cur 8973
#define gVs_WtAbort_Cur 8974
#define gVs_WtStart_Old 8975
#define gVs_WtAbort_Old 8976
#define gVs_UdStart_Cur 8977
#define gVs_UdAbort_Cur 8978
#define gVs_UdStart_Old 8979
#define gVs_UdAbort_Old 8980
#define gVs_RjStart_Cur 8981
#define gVs_RjAbort_Cur 8982
#define gVs_RjStart_Old 8983
#define gVs_RjAbort_Old 8984
#define gWs_PdtStaChange_Cur 8985
#define gVs_PdtStaChange_Cur 8986
#define gTr_PdtStaChange_Cur 8987
#define gWs_PdtStaChange_Old 8988
#define gVs_PdtStaChange_Old 8989
#define gTr_PdtStaChange_Old 8990
#define gWs_Error 8991
#define gVs_Error 8992
#define gWs_ErrCode 8993
#define gVs_ErrCode 8994
#define gWs_Error_Cur 8995
#define gWs_Error_Old 8996
#define gVs_Error_Cur 8997
#define gVs_Error_Old 8998
#define gSc_Com_Sta 8999
#define gEc_WdTimer 9000
#define gMc_DistX_Cur 9001
#define gMc_DistX_Err 9002
#define gWs_Safety_Sta 9003
#define gVs_Safety_Sta 9004
#define gWs_Safety_Err 9005
#define gVs_Safety_Err 9006
#define gMc_AlarmReset_Ena 9007
#define gWs_AlarmReset_Ena 9008
#define gVs_AlarmReset_Ena 9009
#define gSc_AlarmReset_Ena 9010
#define gWs_AlarmRetry_Ena 9011
#define gVs_AlarmRetry_Ena 9012
#define gWs_AlarmAbort_Ena 9013
#define gVs_AlarmAbort_Ena 9014
#define gEc_Com_Sta 9015
#define gEc_Con_Start 9047
#define gEc_Con_Abort 9048
#define gEc_Con_Ena 9049
#define gEc_Con_Sta 9050
#define gEc_Con_Seq 9051
#define gEc_Con_Buf 9052
#define gEc_Con_Tmr 9053
#define gMt_Home_Idx 9054
#define gMt_Home_Start 9055
#define gMt_Home_Abort 9087
#define gMt_Home_Ena 9119
#define gMt_Home_Sta 9151
#define gMt_Home_Seq 9183
#define gMt_Home_Buf 9215
#define gMt_Home_Tmr 9247
#define gMt_Home_Err 9279
#define gMt_Home_Pos 9311
#define gMc_Home_Start 9343
#define gMc_Home_Abort 9344
#define gMc_Home_Ena 9345
#define gMc_Home_Sta 9346
#define gMc_Home_Seq 9347
#define gMc_Home_Buf 9348
#define gMc_Home_Tmr 9349
#define gMc_Home_Err 9350
#define gWs_Home_Start 9351
#define gWs_Home_Abort 9352
#define gWs_Home_Ena 9353
#define gWs_Home_Sta 9354
#define gWs_Home_Seq 9355
#define gWs_Home_Buf 9356
#define gWs_Home_Tmr 9357
#define gWs_Home_Err 9358
#define gVs_Home_Start 9359
#define gVs_Home_Abort 9360
#define gVs_Home_Ena 9361
#define gVs_Home_Sta 9362
#define gVs_Home_Seq 9363
#define gVs_Home_Buf 9364
#define gVs_Home_Tmr 9365
#define gVs_Home_Err 9366
#define gSc_Home_Start 9367
#define gSc_Home_Abort 9368
#define gSc_Home_Ena 9369
#define gSc_Home_Sta 9370
#define gSc_Home_Seq 9371
#define gSc_Home_Buf 9372
#define gSc_Home_Tmr 9373
#define gSc_Home_Err 9374
#define gSc_InitSta 9375
#define gJog_Idx 9376
#define gMt_ServoOn_Ena 9377
#define gMt_ServoOff_Ena 9409
#define gMc_ServoOn_Ena 9441
#define gMc_ServoOff_Ena 9442
#define gWs_ServoOn_Ena 9443
#define gWs_ServoOff_Ena 9444
#define gVs_ServoOn_Ena 9445
#define gVs_ServoOff_Ena 9446
#define gSc_ServoOn_Ena 9447
#define gSc_ServoOff_Ena 9448
#define gJog_Stop_Ena 9449
#define gJog_ContPlus_Ena 9481
#define gJog_ContMinus_Ena 9513
#define gJog_AbsMove_Ena 9545
#define gJog_IncMove_Ena 9577
#define gWs_PdtNo 9609
#define gVs_PdtNo 9610
#define gTr_PdtNo 9611
#define gWs_LdDir 9612
#define gMc_AutoRun_Start 9613
#define gMc_AutoRun_Abort 9614
#define gMc_AutoRun_Pause 9615
#define gMc_Cycle_Start 9616
#define gMc_Step_Start 9617
#define gMc_AutoRun_Ena 9618
#define gMc_AutoRun_Sta 9619
#define gMc_AutoRun_Seq 9620
#define gMc_AutoRun_Buf 9621
#define gMc_AutoRun_Tmr 9622
#define gMc_AutoRun_Err 9623
#define gWs_Loop_Start 9624
#define gWs_Loop_Abort 9625
#define gWs_Loop_Pause 9626
#define gWs_Loop_Ena 9627
#define gWs_Loop_Sta 9628
#define gWs_Loop_Seq 9629
#define gWs_Loop_Buf 9630
#define gWs_Loop_Tmr 9631
#define gWs_Loop_Err 9632
#define gWs_Loop_Time 9633
#define gWs_Loop_TimeBuf 9634
#define gWs_Seq_Cur 9635
#define gWs_Seq_Old 9636
#define gWs_Seq_Err 9637
#define gVs_Loop_Start 9638
#define gVs_Loop_Abort 9639
#define gVs_Loop_Pause 9640
#define gVs_Loop_Ena 9641
#define gVs_Loop_Sta 9642
#define gVs_Loop_Seq 9643
#define gVs_Loop_Buf 9644
#define gVs_Loop_Tmr 9645
#define gVs_Loop_Err 9646
#define gVs_Loop_Time 9647
#define gVs_Loop_TimeBuf 9648
#define gVs_Seq_Cur 9649
#define gVs_Seq_Old 9650
#define gVs_Seq_Err 9651
#define gWs_Sta_Pdt 9652
#define gVs_Sta_Pdt 9653
#define gTr_Sta_Pdt 9654
#define gWs_Sta_PdtBuf 9655
#define gVs_Sta_PdtBuf 9656
#define gTr_Sta_PdtBuf 9657
#define gWs_Sta_Stg 9658
#define gVs_Sta_Stg 9659
#define gWs_Pos_Pdt 9660
#define gVs_Pos_Pdt 9661
#define gWs_Pos_Stg 9662
#define gVs_Pos_Stg 9663
#define gWs_PdtStaChange_Ena 9664
#define gVs_PdtStaChange_Ena 9665
#define gTr_PdtStaChange_Ena 9666
#define gWs_Load_Start 9667
#define gWs_Load_Abort 9668
#define gWs_Load_Ena 9669
#define gWs_Load_Sta 9670
#define gWs_Load_Seq 9671
#define gWs_Load_Buf 9672
#define gWs_Load_Tmr 9673
#define gWs_Load_Err 9674
#define gWs_Load_VelX 9675
#define gWs_Load_VelY 9676
#define gWs_Load_VelC 9677
#define gWs_Load_PosX 9678
#define gWs_Load_PosY 9679
#define gWs_Load_PosC 9680
#define gWs_Load_Time 9681
#define gWs_Load_TimeBuf 9682
#define gWs_Ready_Start 9683
#define gWs_Ready_Abort 9684
#define gWs_Ready_Ena 9685
#define gWs_Ready_Sta 9686
#define gWs_Ready_Seq 9687
#define gWs_Ready_Buf 9688
#define gWs_Ready_Tmr 9689
#define gWs_Ready_Err 9690
#define gWs_Ready_VelX 9691
#define gWs_Ready_VelY 9692
#define gWs_Ready_VelC 9693
#define gWs_Ready_PosX 9694
#define gWs_Ready_PosY 9695
#define gWs_Ready_PosC 9696
#define gWs_Ready_Time 9697
#define gWs_Ready_TimeBuf 9698
#define gWs_Ready_VsnJudge 9699
#define gWs_Welding_Start 9700
#define gWs_Welding_Abort 9701
#define gWs_Welding_Ena 9702
#define gWs_Welding_Sta 9703
#define gWs_Welding_Seq 9704
#define gWs_Welding_Buf 9705
#define gWs_Welding_Tmr 9706
#define gWs_Welding_Err 9707
#define gWs_Welding_VelX 9708
#define gWs_Welding_VelY 9709
#define gWs_Welding_VelC 9710
#define gWs_Welding_PosX 9711
#define gWs_Welding_PosY 9712
#define gWs_Welding_PosC 9713
#define gWs_Welding_Time 9714
#define gWs_Welding_TimeBuf 9715
#define gWs_Prog_Dist 9716
#define gWs_Prog_Time 9717
#define gWs_Prog_TimeBuf 9718
#define gWs_File_Prog_Time 9719
#define gWs_File_Prog_TimeBuf 9720
#define gWs_Wait_Start 9721
#define gWs_Wait_Abort 9722
#define gWs_Wait_Ena 9723
#define gWs_Wait_Sta 9724
#define gWs_Wait_Seq 9725
#define gWs_Wait_Buf 9726
#define gWs_Wait_Tmr 9727
#define gWs_Wait_Err 9728
#define gWs_Wait_VelX 9729
#define gWs_Wait_VelY 9730
#define gWs_Wait_VelC 9731
#define gWs_Wait_PosX 9732
#define gWs_Wait_PosY 9733
#define gWs_Wait_PosC 9734
#define gWs_Wait_Time 9735
#define gWs_Wait_TimeBuf 9736
#define gWs_Unload_Start 9737
#define gWs_Unload_Abort 9738
#define gWs_Unload_Ena 9739
#define gWs_Unload_Sta 9740
#define gWs_Unload_Seq 9741
#define gWs_Unload_Buf 9742
#define gWs_Unload_Tmr 9743
#define gWs_Unload_Err 9744
#define gWs_Unload_VelX 9745
#define gWs_Unload_VelY 9746
#define gWs_Unload_VelC 9747
#define gWs_Unload_PosX 9748
#define gWs_Unload_PosY 9749
#define gWs_Unload_PosC 9750
#define gWs_Unload_Time 9751
#define gWs_Unload_TimeBuf 9752
#define gWs_Reject_Start 9753
#define gWs_Reject_Abort 9754
#define gWs_Reject_Ena 9755
#define gWs_Reject_Sta 9756
#define gWs_Reject_Seq 9757
#define gWs_Reject_Buf 9758
#define gWs_Reject_Tmr 9759
#define gWs_Reject_Err 9760
#define gWs_Reject_VelX 9761
#define gWs_Reject_VelY 9762
#define gWs_Reject_VelC 9763
#define gWs_Reject_PosX 9764
#define gWs_Reject_PosY 9765
#define gWs_Reject_PosC 9766
#define gWs_Reject_Time 9767
#define gWs_Reject_TimeBuf 9768
#define gVs_Load_Start 9769
#define gVs_Load_Abort 9770
#define gVs_Load_Ena 9771
#define gVs_Load_Sta 9772
#define gVs_Load_Seq 9773
#define gVs_Load_Buf 9774
#define gVs_Load_Tmr 9775
#define gVs_Load_Err 9776
#define gVs_Load_VelX 9777
#define gVs_Load_VelY 9778
#define gVs_Load_VelC 9779
#define gVs_Load_PosX 9780
#define gVs_Load_PosY 9781
#define gVs_Load_PosC 9782
#define gVs_Load_Time 9783
#define gVs_Load_TimeBuf 9784
#define gVs_Ready_Start 9785
#define gVs_Ready_Abort 9786
#define gVs_Ready_Ena 9787
#define gVs_Ready_Sta 9788
#define gVs_Ready_Seq 9789
#define gVs_Ready_Buf 9790
#define gVs_Ready_Tmr 9791
#define gVs_Ready_Err 9792
#define gVs_Ready_VelX 9793
#define gVs_Ready_VelY 9794
#define gVs_Ready_VelC 9795
#define gVs_Ready_PosX 9796
#define gVs_Ready_PosY 9797
#define gVs_Ready_PosC 9798
#define gVs_Ready_Time 9799
#define gVs_Ready_TimeBuf 9800
#define gVs_Ready_VsnJudge 9801
#define gVs_Vision_Start 9802
#define gVs_Vision_Abort 9803
#define gVs_Vision_Ena 9804
#define gVs_Vision_Sta 9805
#define gVs_Vision_Seq 9806
#define gVs_Vision_Buf 9807
#define gVs_Vision_Tmr 9808
#define gVs_Vision_Err 9809
#define gVs_Vision_VelX 9810
#define gVs_Vision_VelY 9811
#define gVs_Vision_VelC 9812
#define gVs_Vision_PosX 9813
#define gVs_Vision_PosY 9814
#define gVs_Vision_PosC 9815
#define gVs_Vision_Time 9816
#define gVs_Vision_TimeBuf 9817
#define gVs_Prog_Dist 9818
#define gVs_Prog_Time 9819
#define gVs_Prog_TimeBuf 9820
#define gVs_Vision_VsnJudge 9821
#define gVs_Wait_Start 9822
#define gVs_Wait_Abort 9823
#define gVs_Wait_Ena 9824
#define gVs_Wait_Sta 9825
#define gVs_Wait_Seq 9826
#define gVs_Wait_Buf 9827
#define gVs_Wait_Tmr 9828
#define gVs_Wait_Err 9829
#define gVs_Wait_VelX 9830
#define gVs_Wait_VelY 9831
#define gVs_Wait_VelC 9832
#define gVs_Wait_PosX 9833
#define gVs_Wait_PosY 9834
#define gVs_Wait_PosC 9835
#define gVs_Wait_Time 9836
#define gVs_Wait_TimeBuf 9837
#define gVs_Unload_Start 9838
#define gVs_Unload_Abort 9839
#define gVs_Unload_Ena 9840
#define gVs_Unload_Sta 9841
#define gVs_Unload_Seq 9842
#define gVs_Unload_Buf 9843
#define gVs_Unload_Tmr 9844
#define gVs_Unload_Err 9845
#define gVs_Unload_VelX 9846
#define gVs_Unload_VelY 9847
#define gVs_Unload_VelC 9848
#define gVs_Unload_PosX 9849
#define gVs_Unload_PosY 9850
#define gVs_Unload_PosC 9851
#define gVs_Unload_Time 9852
#define gVs_Unload_TimeBuf 9853
#define gVs_Reject_Start 9854
#define gVs_Reject_Abort 9855
#define gVs_Reject_Ena 9856
#define gVs_Reject_Sta 9857
#define gVs_Reject_Seq 9858
#define gVs_Reject_Buf 9859
#define gVs_Reject_Tmr 9860
#define gVs_Reject_Err 9861
#define gVs_Reject_VelX 9862
#define gVs_Reject_VelY 9863
#define gVs_Reject_VelC 9864
#define gVs_Reject_PosX 9865
#define gVs_Reject_PosY 9866
#define gVs_Reject_PosC 9867
#define gVs_Reject_Time 9868
#define gVs_Reject_TimeBuf 9869
#define gWs_CldInpos_Delay 9870
#define gVs_CldInpos_Delay 9871
#define gWs_CldIn_CoverUD 9872
#define gWs_CldIn_CoverFB 9873
#define gWs_CldIn_TempFB 9874
#define gWs_CldIn_ShtrOC 9875
#define gVs_CldIn_CoverUD 9876
#define gVs_CldIn_CoverFB 9877
#define gTr_CldIn_PickerUD 9878
#define gTr_CldIn_PickerOC 9879
#define gWs_Epr_OutVdc 9880
#define pWs_Epr_OutVdc 12103
#define gWs_EcldHome_Start 9881
#define gWs_EcldHome_Abort 9882
#define gWs_EcldHome_Ena 9883
#define gWs_EcldHome_Sta 9884
#define gWs_EcldHome_Seq 9885
#define gWs_EcldHome_Buf 9886
#define gWs_EcldHome_Tmr 9887
#define gWs_EcldHome_Err 9888
#define gWs_EcldHome_Try 9889
#define gWs_EcldHome_Fin 9890
#define gWs_EcldFwd_Start 9891
#define gWs_EcldFwd_Abort 9892
#define gWs_EcldFwd_Ena 9893
#define gWs_EcldFwd_Sta 9894
#define gWs_EcldFwd_Seq 9895
#define gWs_EcldFwd_Buf 9896
#define gWs_EcldFwd_Tmr 9897
#define gWs_EcldFwd_Err 9898
#define gWs_EcldFwd_Try 9899
#define gWs_EcldBwd_Start 9900
#define gWs_EcldBwd_Abort 9901
#define gWs_EcldBwd_Ena 9902
#define gWs_EcldBwd_Sta 9903
#define gWs_EcldBwd_Seq 9904
#define gWs_EcldBwd_Buf 9905
#define gWs_EcldBwd_Tmr 9906
#define gWs_EcldBwd_Err 9907
#define gWs_EcldBwd_Try 9908
#define gWs_EcldCmdFwd_Cur 9909
#define gWs_EcldCmdFwd_Old 9910
#define gWs_EcldCmdBwd_Cur 9911
#define gWs_EcldCmdBwd_Old 9912
#define gWs_TestShot_Ena 9913
#define gWs_TestShot_Time 9914
#define gVs_TestShot_Ena 9915
#define gVs_TestShot_Time 9916
#define gVs_TestShot_TimeBuf 9917
#define gVs_TestShot_Seq 9918
#define gVs_TestShot_Tmr 9919
#define gWs_LaserSta_Ready 9920
#define gWs_LaserSta_Enable 9921
#define gWs_LaserSta_CorePower 9922
#define gWs_LaserSta_RingPower 9923
#define gWs_LaserEnable_Start 9924
#define gWs_LaserEnable_Abort 9925
#define gWs_LaserEnable_Ena 9926
#define gWs_LaserEnable_Sta 9927
#define gWs_LaserEnable_Seq 9928
#define gWs_LaserEnable_Buf 9929
#define gWs_LaserEnable_Tmr 9930
#define gWs_LaserEnable_Err 9931
#define gWs_LaserDisable_Start 9932
#define gWs_LaserDisable_Abort 9933
#define gWs_LaserDisable_Ena 9934
#define gWs_LaserDisable_Sta 9935
#define gWs_LaserDisable_Seq 9936
#define gWs_LaserDisable_Buf 9937
#define gWs_LaserDisable_Tmr 9938
#define gWs_LaserDisable_Err 9939
#define gWs_LaserTestCross_Start 9940
#define gWs_LaserTestCross_Abort 9941
#define gWs_LaserTestCross_Ena 9942
#define gWs_LaserTestCross_Sta 9943
#define gWs_LaserTestCross_Seq 9944
#define gWs_LaserTestCross_Buf 9945
#define gWs_LaserTestCross_Tmr 9946
#define gWs_LaserTestCross_Err 9947
#define gWs_LaserTestLine_Start 9948
#define gWs_LaserTestLine_Abort 9949
#define gWs_LaserTestLine_Ena 9950
#define gWs_LaserTestLine_Sta 9951
#define gWs_LaserTestLine_Seq 9952
#define gWs_LaserTestLine_Buf 9953
#define gWs_LaserTestLine_Tmr 9954
#define gWs_LaserTestLine_Err 9955
#define gWs_TgtMov_Start 9956
#define gWs_TgtMov_Abort 9957
#define gWs_TgtMov_Ena 9958
#define gWs_TgtMov_Sta 9959
#define gWs_TgtMov_Seq 9960
#define gWs_TgtMov_Buf 9961
#define gWs_TgtMov_Tmr 9962
#define gWs_TgtMov_Err 9963
#define gVs_TgtMov_Start 9964
#define gVs_TgtMov_Abort 9965
#define gVs_TgtMov_Ena 9966
#define gVs_TgtMov_Sta 9967
#define gVs_TgtMov_Seq 9968
#define gVs_TgtMov_Buf 9969
#define gVs_TgtMov_Tmr 9970
#define gVs_TgtMov_Err 9971
#define gWs_TgtMov_VelX 9972
#define gWs_TgtMov_VelY 9973
#define gWs_TgtMov_VelC 9974
#define gWs_TgtMov_PosX 9975
#define gWs_TgtMov_PosY 9976
#define gWs_TgtMov_PosC 9977
#define gVs_TgtMov_VelX 9978
#define gVs_TgtMov_VelY 9979
#define gVs_TgtMov_VelC 9980
#define gVs_TgtMov_PosX 9981
#define gVs_TgtMov_PosY 9982
#define gVs_TgtMov_PosC 9983
#define gWs_CoverOpn_TgtAng 9984
#define gWs_CoverOpn_Start 9985
#define gWs_CoverOpn_Abort 9986
#define gWs_CoverOpn_Ena 9987
#define gWs_CoverOpn_Sta 9988
#define gWs_CoverOpn_Seq 9989
#define gWs_CoverOpn_Buf 9990
#define gWs_CoverOpn_Tmr 9991
#define gWs_CoverOpn_Err 9992
#define gWs_CoverCls_Start 9993
#define gWs_CoverCls_Abort 9994
#define gWs_CoverCls_Ena 9995
#define gWs_CoverCls_Sta 9996
#define gWs_CoverCls_Seq 9997
#define gWs_CoverCls_Buf 9998
#define gWs_CoverCls_Tmr 9999
#define gWs_CoverCls_Err 10000
#define gWsV_CoverOpn_Start 10001
#define gWsV_CoverOpn_Abort 10002
#define gWsV_CoverOpn_Ena 10003
#define gWsV_CoverOpn_Sta 10004
#define gWsV_CoverOpn_Seq 10005
#define gWsV_CoverOpn_Buf 10006
#define gWsV_CoverOpn_Tmr 10007
#define gWsV_CoverOpn_Err 10008
#define gWsV_CoverCls_Start 10009
#define gWsV_CoverCls_Abort 10010
#define gWsV_CoverCls_Ena 10011
#define gWsV_CoverCls_Sta 10012
#define gWsV_CoverCls_Seq 10013
#define gWsV_CoverCls_Buf 10014
#define gWsV_CoverCls_Tmr 10015
#define gWsV_CoverCls_Err 10016
#define gWsV_Cover_Cur 10017
#define gVs_CoverOpn_Start 10018
#define gVs_CoverOpn_Abort 10019
#define gVs_CoverOpn_Ena 10020
#define gVs_CoverOpn_Sta 10021
#define gVs_CoverOpn_Seq 10022
#define gVs_CoverOpn_Buf 10023
#define gVs_CoverOpn_Tmr 10024
#define gVs_CoverOpn_Err 10025
#define gVs_CoverCls_Start 10026
#define gVs_CoverCls_Abort 10027
#define gVs_CoverCls_Ena 10028
#define gVs_CoverCls_Sta 10029
#define gVs_CoverCls_Seq 10030
#define gVs_CoverCls_Buf 10031
#define gVs_CoverCls_Tmr 10032
#define gVs_CoverCls_Err 10033
#define gWs_ThCoverPos_Old 10034
#define gVs_ThCoverPos_Old 10035
#define gWs_ThTargetPos_Old 10036
#define gVs_ThTargetPos_Old 10037
#define gWs_CoverMoving_Sta 10038
#define gVs_CoverMoving_Sta 10039
#define gBlow_Time 10040
#define gWs_PowerCheck_Start 10041
#define gWs_PowerCheck_Abort 10042
#define gWs_PowerCheck_Ena 10043
#define gWs_PowerCheck_Time 10044
#define gWs_PowerCheck_TimeBuf 10045
#define gWs_PowerCheck_Seq 10046
#define gWs_PowerCheck_Tmr 10047
#define gVs_PostVisionST_Start 10048
#define gVs_PostVisionST_Abort 10049
#define gVs_PostVisionST_Ena 10050
#define gVs_PostVisionST_Sta 10051
#define gVs_PostVisionST_Seq 10052
#define gVs_PostVisionST_Buf 10053
#define gVs_PostVisionST_Tmr 10054
#define gVs_PostVisionST_Err 10055
#define gVs_PostVisionED_Start 10056
#define gVs_PostVisionED_Abort 10057
#define gVs_PostVisionED_Ena 10058
#define gVs_PostVisionED_Sta 10059
#define gVs_PostVisionED_Seq 10060
#define gVs_PostVisionED_Buf 10061
#define gVs_PostVisionED_Tmr 10062
#define gVs_PostVisionED_Err 10063
#define gWs_Skip_N2 10064
#define gN2BlowState 10065
#define gN2BlowOld 10066
#define gN2BlowTime 10067
#define gIsWsCoverComplete 10068
#define gIsVsCoverComplete 10069
#define gIsWStationReady 10070
#define gIsVStationReady 10071
#define gKin_Sf 10072
#define gKin_RotOffset 10104
#define gKin_Len1 10136
#define gKin_Len2 10137
#define gKin_GalvoSfX 10138
#define gKin_GalvoSfY 10139
#define gMc_SeqBuf_Idx 10140
#define gWs_SeqBuf_Cur 10141
#define gWs_SeqBuf_Old 10142
#define gVs_SeqBuf_Cur 10143
#define gVs_SeqBuf_Old 10144
#define gScMon_GalvoAngX 10145
#define gScMon_GalvoAngY 10146
#define Len_X 10147
#define Len_Y 10148
#define Len_R 10149
#define gMc_TransTest_Start 10150
#define gMc_TransTest_Abort 10151
#define gMc_TransTest_Ena 10152
#define gMc_TransTest_Sta 10153
#define gMc_TransTest_Seq 10154
#define gMc_TransTest_Buf 10155
#define gMc_TransTest_Tmr 10156
#define gMc_TransTest_Err 10157
#define gMc_TransTest_Vel 10158
#define gRspSim_PdtNo 10159
#define gRspSim_LdAlignX 10160
#define gRspSim_LdAlignY 10161
#define gRspSim_LdAlignC 10162
#define gRspSim_LdDirRep 10163
#define gRspSim_2dVsnRsp 10164
#define gRspSim_3dVsnRsp 10165
#define gRspSim_LdDirJug 10166
#define gRspSim_2dVsnJug 10167
#define gRspSim_3dVsnJug 10168
#define gRspSim_LdDirRat 10169
#define gRspSim_2dVsnRat 10170
#define gRspSim_3dVsnRat 10171
#endif
#endif
#endif //_PP_PROJ_H_
