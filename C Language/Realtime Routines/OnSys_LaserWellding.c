/*For more information see notes.txt in the Documentation folder */
#include "usrcode.h"
#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_

#include "../Include/pp_proj.h"

#define cFuncType_Rti	0
#define cFuncType_Kin	1

#define cKinType_Fwd	0
#define cKinType_Inv	1

int Rti_Loop(int wx, int wy, int wc, int vx, int vy, int vc);

int Kin_WeldingFwd(int mx, int my, int mc, LocalData *Ldata);
int Kin_WeldingInv(int mx, int my, int mc, LocalData *Ldata);

int Kin_VisionFwd(int mx, int my, int mc, LocalData *Ldata);
int Kin_VisionInv(int mx, int my, int mc, LocalData *Ldata);

int Kin_ScannerFwd(int mx, int my, LocalData *Ldata);
int Kin_ScannerInv(int mx, int my, LocalData *Ldata);

double OnSys_LaserWellding(int fnc, int opt1, int opt2, int opt3, int opt4, int opt5, int opt6, struct LocalData *Ldata)
{
	gTest_Cnt++;
	if(fnc==cFuncType_Rti)
	{
		Rti_Loop(opt1,opt2,opt3,opt4,opt5,opt6);
	}
	else if(fnc==cFuncType_Kin)
	{
		if(opt1==1)
		{
			if(opt2==cKinType_Fwd)			Kin_WeldingFwd(opt3,opt4,opt5,Ldata);
			else if(opt2==cKinType_Inv)		Kin_WeldingInv(opt3,opt4,opt5,Ldata);
		}
		else if(opt1==2)
		{
			if(opt2==cKinType_Fwd)			Kin_ScannerFwd(opt3,opt4,Ldata);
			else if(opt2==cKinType_Inv)		Kin_ScannerInv(opt3,opt4,Ldata);
		}
		else if(opt1==3)
		{
			if(opt2==cKinType_Fwd)			Kin_VisionFwd(opt3,opt4,opt5,Ldata);
			else if(opt2==cKinType_Inv)		Kin_VisionInv(opt3,opt4,opt5,Ldata);
		}
	}

	return 0.0;
}

double pi = 3.1415926535897932384626433832795;			// Constant Pi
double DegtoRad = 0.01745329251994329576923690768489;	// Degrees to Radians
double RadtoDeg = 57.295779513082320876798154814105;	// Radians to Degrees
///////////////////////////////////////////////////////////////////////////////
// Rti Loop
///////////////////////////////////////////////////////////////////////////////
#define cLaserMod_Mnul			0
#define cLaserMod_Auto			1

int Rti_Loop(int wx, int wy, int wc, int vx, int vy, int vc)
{
	double x_buf,y_buf,c_buf;
	double *wld_vect_dlt = (double*)pushm + 1000;
	double *vsn_vect_dlt = (double*)pushm + 1001;
	volatile GateArray3 *WeldingGate3 = GetGate3MemPtr(0);	// Gate3[0]

	gMc_Servo_Cnt_Cur = pshm->ServoCount;
	gMc_Servo_Prd_Dlt = (gMc_Servo_Cnt_Cur - gMc_Servo_Cnt_Old)*pshm->ServoPeriod;
	gMc_Servo_Cnt_Old = gMc_Servo_Cnt_Cur;

	//---------------------------------------------------------------------------//
	// Welding Vector Distance, Velocity Calculation
	//---------------------------------------------------------------------------//
	c_buf = (pshm->Motor[wc].DesPos - pshm->Motor[wc].HomePos)/gKin_Sf(wc)*(pi/180);
	x_buf =-(pshm->Motor[wx].DesPos - pshm->Motor[wx].HomePos)/gKin_Sf(wx);
	y_buf =-(pshm->Motor[wy].DesPos - pshm->Motor[wy].HomePos)/gKin_Sf(wy);

	gWs_PosX_Cur = cos(c_buf)*x_buf - sin(c_buf)*y_buf;
	gWs_PosY_Cur = sin(c_buf)*x_buf + cos(c_buf)*y_buf;

	gWs_PosX_Dlt = gWs_PosX_Cur-gWs_PosX_Old;
	gWs_PosY_Dlt = gWs_PosY_Cur-gWs_PosY_Old;
	gWs_PosV_Dlt = sqrt(gWs_PosX_Dlt*gWs_PosX_Dlt + gWs_PosY_Dlt*gWs_PosY_Dlt)*1000;

	gWs_PosX_Old = gWs_PosX_Cur;
	gWs_PosY_Old = gWs_PosY_Cur;

	if(gMc_Servo_Prd_Dlt==(pshm->ServoPeriod*(pshm->RtIntPeriod+1)))
	{
		gWs_Vect_Vel = gWs_PosV_Dlt/gMc_Servo_Prd_Dlt;
		gWs_Vect_Sum += gWs_PosV_Dlt;
		//*wld_vect_dlt = gWs_PosV_Dlt;
		*wld_vect_dlt = gWs_PosV_Dlt/(pshm->RtIntPeriod+1);	// Edit 25.08.22 Enctable Update every servo cycle
	}

	//---------------------------------------------------------------------------//
	// Vision Vector Distance, Velocity Calculation
	//---------------------------------------------------------------------------//
	c_buf = (pshm->Motor[vc].DesPos - pshm->Motor[vc].HomePos)/gKin_Sf(vc)*(pi/180);
	x_buf =-(pshm->Motor[vx].DesPos - pshm->Motor[vx].HomePos)/gKin_Sf(vx);
	y_buf =-(pshm->Motor[vy].DesPos - pshm->Motor[vy].HomePos)/gKin_Sf(vy);

	gVs_PosX_Cur = cos(c_buf)*x_buf - sin(c_buf)*y_buf;
	gVs_PosY_Cur = sin(c_buf)*x_buf + cos(c_buf)*y_buf;

	gVs_PosX_Dlt = gVs_PosX_Cur-gVs_PosX_Old;
	gVs_PosY_Dlt = gVs_PosY_Cur-gVs_PosY_Old;
	gVs_PosV_Dlt = sqrt(gVs_PosX_Dlt*gVs_PosX_Dlt + gVs_PosY_Dlt*gVs_PosY_Dlt)*1000;

	gVs_PosX_Old = gVs_PosX_Cur;
	gVs_PosY_Old = gVs_PosY_Cur;

	if(gMc_Servo_Prd_Dlt==(pshm->ServoPeriod*(pshm->RtIntPeriod+1)))
	{
		gVs_Vect_Vel = gVs_PosV_Dlt/gMc_Servo_Prd_Dlt;
		gVs_Vect_Sum += gVs_PosV_Dlt;
		//*vsn_vect_dlt = gVs_PosV_Dlt;
		*vsn_vect_dlt = gVs_PosV_Dlt/(pshm->RtIntPeriod+1);	// Edit 25.08.22 Enctable Update every servo cycle
	}

	//---------------------------------------------------------------------------//
	// Laser Triger Calculation
	//---------------------------------------------------------------------------//
	if(gWs_LaserEna==1 && gWs_PfmPeriod!=0 && gWs_PfmOnTime!=0)
	{
		gWs_PfmRtiCnt++;
		if(gWs_PfmOut==0)
		{
			if(gWs_Vect_Sum > (gWs_PfmPeriod*gWs_PfmCnt))
			{
				gWs_PfmOnCnt = rint(gWs_PfmOnTime/(pshm->ServoPeriod*(pshm->RtIntPeriod+1)));
				gWs_PfmBuf = gWs_PfmRtiCnt + gWs_PfmOnCnt;
				gWs_PfmCnt = rint(gWs_Vect_Sum/gWs_PfmPeriod + 1);
				gWs_PfmOut = 1;
			}
		}
		else if(gWs_PfmOut==1)
		{
			if(gWs_PfmRtiCnt > gWs_PfmBuf)
			{
				gWs_PfmOut = 0;
			}
		}
	}

	//---------------------------------------------------------------------------//
	// Laser Power Calculation
	//---------------------------------------------------------------------------//
	if(gWs_RefVel==0)		gWs_VelRatio = 0;
	else					gWs_VelRatio = gWs_Vect_Vel/gWs_RefVel;

	if(gWs_OutMode==cLaserMod_Mnul || gWs_LaserTest_Ena==1 || gWs_TestShot_Ena==1)
	{
		gWs_CoreOutPow = gWs_CoreRefPow;
		gWs_RingOutPow = gWs_RingRefPow;
	}
	else
	{
		gWs_CoreOutPow = (gWs_CoreRefPow - gWs_CoreMinPow)*gWs_VelRatio + gWs_CoreMinPow;
		gWs_RingOutPow = (gWs_RingRefPow - gWs_RingMinPow)*gWs_VelRatio + gWs_RingMinPow;
	}

	if(gWs_CoreRefPow<=0 || gWs_CorePowSf==0)	gWs_CoreOutVdc = 0;
	else if(gWs_CoreOutPow > gWs_CoreMaxPow)	gWs_CoreOutVdc = gWs_CoreMaxPow/gWs_CorePowSf;
	else if(gWs_CoreOutPow < gWs_CoreMinPow)	gWs_CoreOutVdc = gWs_CoreMinPow/gWs_CorePowSf;
	else										gWs_CoreOutVdc = gWs_CoreOutPow/gWs_CorePowSf;
	
	if(gWs_RingRefPow<=0 || gWs_RingPowSf==0)	gWs_RingOutVdc = 0;
	else if(gWs_RingOutPow > gWs_RingMaxPow)	gWs_RingOutVdc = gWs_RingMaxPow/gWs_RingPowSf;
	else if(gWs_RingOutPow < gWs_RingMinPow)	gWs_RingOutVdc = gWs_RingMinPow/gWs_RingPowSf;
	else										gWs_RingOutVdc = gWs_RingOutPow/gWs_RingPowSf;

	//---------------------------------------------------------------------------//
	// Dac Output
	//---------------------------------------------------------------------------//
	if(pshm->Gate3AutoDetect!=0)		// Gate 없을 시 UserCode에서 Gate 관련 변수 사용하면 RtErr
	{
		if((pshm->Coord[1].Ldata.Status & 0x2E)==0x20)		// Check Prog Run Status
		{
			if(gWs_LaserEna==1)
			{
				if(gWs_CorePfmEna==1)	WeldingGate3->Chan[3].Dac[0] = 2147483647*(gWs_CoreOutVdc/10)*gWs_PfmOut;
				else					WeldingGate3->Chan[3].Dac[0] = 2147483647*(gWs_CoreOutVdc/10);
				
				if(gWs_RingPfmEna==1)	WeldingGate3->Chan[3].Dac[1] = 2147483647*(gWs_RingOutVdc/10)*gWs_PfmOut;
				else					WeldingGate3->Chan[3].Dac[1] = 2147483647*(gWs_RingOutVdc/10);		
			}
			else
			{
				WeldingGate3->Chan[3].Dac[0] = 0;
				WeldingGate3->Chan[3].Dac[1] = 0;
			}
		}
		else if(gWs_LaserTest_Ena==1 || gWs_TestShot_Ena==1)
		{
			if(gWs_LaserEna==1)
			{
				WeldingGate3->Chan[3].Dac[0] = 2147483647*(gWs_CoreOutVdc/10);
				WeldingGate3->Chan[3].Dac[1] = 2147483647*(gWs_RingOutVdc/10);
//				if(gWs_CorePfmEna==1)	WeldingGate3->Chan[3].Dac[0] = 2147483647*(gWs_CoreOutVdc/10)*gWs_PfmOut;
//				else					WeldingGate3->Chan[3].Dac[0] = 2147483647*(gWs_CoreOutVdc/10);

//				if(gWs_RingPfmEna==1)	WeldingGate3->Chan[3].Dac[1] = 2147483647*(gWs_RingOutVdc/10)*gWs_PfmOut;
//				else					WeldingGate3->Chan[3].Dac[1] = 2147483647*(gWs_RingOutVdc/10);	
			}
			else
			{
				WeldingGate3->Chan[3].Dac[0] = 0;
				WeldingGate3->Chan[3].Dac[1] = 0;
			}		
		}
		else
		{
			gWs_LaserEna = 0;
			WeldingGate3->Chan[3].Dac[0] = 0;
			WeldingGate3->Chan[3].Dac[1] = 0;
		}
	}

	return 0;
}


///////////////////////////////////////////////////////////////////////////////
// Welding Forward Kinematics
///////////////////////////////////////////////////////////////////////////////
int Kin_WeldingFwd(int mx, int my, int mc, LocalData *Ldata)
{
	double *R;
	double *L;
	double *C;
	double *D;

	double x_buf1,y_buf1;
	double x_buf2,y_buf2;
	double c_buf;
	//--------------------------------------------------------------------//
	R = GetRVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + Ldata->Lsize;
	L = GetLVarPtr(Ldata);	// Ldata->L + Ldata->Lindex;
	C = GetCVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + MAX_MOTORS;
	D = GetDVarPtr(Ldata);	// Ldata->D;
	//--------------------------------------------------------------------//
	KinPosAxisC=KinPosMotor[mc]/gKin_Sf(mc);
	c_buf = KinPosAxisC*(pi/180);

	x_buf1=-KinPosMotor[mx]/gKin_Sf(mx);
	y_buf1=-KinPosMotor[my]/gKin_Sf(my);
	
	//x_buf2 = cos(-c_buf)*x_buf1 - sin(-c_buf)*y_buf1;
	//y_buf2 = sin(-c_buf)*x_buf1 + cos(-c_buf)*y_buf1;

	x_buf2 = cos(c_buf)*(x_buf1-gKin_RotOffset(mx)) - sin(c_buf)*(y_buf1-gKin_RotOffset(my)) + gKin_RotOffset(mx);
	y_buf2 = sin(c_buf)*(x_buf1-gKin_RotOffset(mx)) + cos(c_buf)*(y_buf1-gKin_RotOffset(my)) + gKin_RotOffset(my);

	KinPosAxisX = x_buf2;
	KinPosAxisY = y_buf2;

	return 0;
}

///////////////////////////////////////////////////////////////////////////////
// Welding Inverse Kinematics
///////////////////////////////////////////////////////////////////////////////
int Kin_WeldingInv(int mx, int my, int mc, LocalData *Ldata)
{
	double *R;
	double *L;
	double *C;
	double *D;
	
	double x_buf1,y_buf1;
	double x_buf2,y_buf2;
	double c_buf;
	//--------------------------------------------------------------------//
	R = GetRVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + Ldata->Lsize;
	L = GetLVarPtr(Ldata);	// Ldata->L + Ldata->Lindex;
	C = GetCVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + MAX_MOTORS;
	D = GetDVarPtr(Ldata);	// Ldata->D;
	//--------------------------------------------------------------------//
	c_buf = KinPosAxisC*(pi/180);

	x_buf1 = KinPosAxisX;
	y_buf1 = KinPosAxisY;

//	x_buf2 = cos(c_buf)*x_buf1 - sin(c_buf)*y_buf1;
//	y_buf2 = sin(c_buf)*x_buf1 + cos(c_buf)*y_buf1;
	
	x_buf2 = cos(-c_buf)*(x_buf1-gKin_RotOffset(mx)) - sin(-c_buf)*(y_buf1-gKin_RotOffset(my))+gKin_RotOffset(mx);
	y_buf2 = sin(-c_buf)*(x_buf1-gKin_RotOffset(mx)) + cos(-c_buf)*(y_buf1-gKin_RotOffset(my))+gKin_RotOffset(my);

	KinPosMotor[mx]=-x_buf2*gKin_Sf(mx);
	KinPosMotor[my]=-y_buf2*gKin_Sf(my);
	KinPosMotor[mc]=KinPosAxisC*gKin_Sf(mc);

	return 0;
}

///////////////////////////////////////////////////////////////////////////////
// Scanner Forward Kinematics
///////////////////////////////////////////////////////////////////////////////
int Kin_ScannerFwd(int mx, int my, LocalData *Ldata)
{
	double *R;
	double *L;
	double *C;
	double *D;

	double GalvoXAngD, GalvoYAngD, Ytemp;
	//--------------------------------------------------------------------//
	R = GetRVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + Ldata->Lsize;
	L = GetLVarPtr(Ldata);	// Ldata->L + Ldata->Lindex;
	C = GetCVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + MAX_MOTORS;
	D = GetDVarPtr(Ldata);	// Ldata->D;
	//--------------------------------------------------------------------//
	if(gMach_Type!=0)
	{
		GalvoXAngD = KinPosMotor[mx] * gKin_GalvoSfX;
		GalvoYAngD = KinPosMotor[my] * (-gKin_GalvoSfY);
		Ytemp = gKin_Len2 * tan(GalvoYAngD * DegtoRad);
		KinPosAxisY = Ytemp;
		KinPosAxisX = ( gKin_Len1 + sqrt(pow(gKin_Len2,2) + pow(Ytemp,2))) * tan(GalvoXAngD * DegtoRad);
	}
	else
	{
		KinPosAxisX = KinPosMotor[mx]/1000;
		KinPosAxisY = KinPosMotor[my]/1000;
	}

	return 0;
}

///////////////////////////////////////////////////////////////////////////////
// Scanner Inverse Kinematics
///////////////////////////////////////////////////////////////////////////////
int Kin_ScannerInv(int mx, int my, LocalData *Ldata)
{
	double *R;
	double *L;
	double *C;
	double *D;
	//--------------------------------------------------------------------//
	R = GetRVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + Ldata->Lsize;
	L = GetLVarPtr(Ldata);	// Ldata->L + Ldata->Lindex;
	C = GetCVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + MAX_MOTORS;
	D = GetDVarPtr(Ldata);	// Ldata->D;
	//--------------------------------------------------------------------//
	if(gMach_Type!=0)
	{
		KinPosMotor[mx] = atan(KinPosAxisX/(gKin_Len1+sqrt(pow(gKin_Len2,2)+pow(KinPosAxisY,2))))*RadtoDeg/gKin_GalvoSfX;
		KinPosMotor[my] = atan(KinPosAxisY/gKin_Len2)* RadtoDeg/(-gKin_GalvoSfY);
	}
	else
	{
  		KinPosMotor[mx] = KinPosAxisX*1000;
		KinPosMotor[my] = KinPosAxisY*1000;
	}

	return 0;
}

///////////////////////////////////////////////////////////////////////////////
// Vision Forward Kinematics
///////////////////////////////////////////////////////////////////////////////
int Kin_VisionFwd(int mx, int my, int mc, LocalData *Ldata)
{
	double *R;
	double *L;
	double *C;
	double *D;

	double x_buf1,y_buf1;
	double x_buf2,y_buf2;
	double c_buf;
	//--------------------------------------------------------------------//
	R = GetRVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + Ldata->Lsize;
	L = GetLVarPtr(Ldata);	// Ldata->L + Ldata->Lindex;
	C = GetCVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + MAX_MOTORS;
	D = GetDVarPtr(Ldata);	// Ldata->D;
	//--------------------------------------------------------------------//
	KinPosAxisC=KinPosMotor[mc]/gKin_Sf(mc);
	c_buf = KinPosAxisC*(pi/180);

	x_buf1=-KinPosMotor[mx]/gKin_Sf(mx);
	y_buf1=-KinPosMotor[my]/gKin_Sf(my);
	
	//x_buf2 = cos(-c_buf)*x_buf1 - sin(-c_buf)*y_buf1;
	//y_buf2 = sin(-c_buf)*x_buf1 + cos(-c_buf)*y_buf1;

	x_buf2 = cos(c_buf)*(x_buf1-gKin_RotOffset(mx)) - sin(c_buf)*(y_buf1-gKin_RotOffset(my)) + gKin_RotOffset(mx);
	y_buf2 = sin(c_buf)*(x_buf1-gKin_RotOffset(mx)) + cos(c_buf)*(y_buf1-gKin_RotOffset(my)) + gKin_RotOffset(my);

	KinPosAxisX = x_buf2;
	KinPosAxisY = y_buf2;

	return 0;
}

///////////////////////////////////////////////////////////////////////////////
// Vision Inverse Kinematics
///////////////////////////////////////////////////////////////////////////////
int Kin_VisionInv(int mx, int my, int mc, LocalData *Ldata)
{
	double *R;
	double *L;
	double *C;
	double *D;
	
	double x_buf1,y_buf1;
	double x_buf2,y_buf2;
	double c_buf;
	//--------------------------------------------------------------------//
	R = GetRVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + Ldata->Lsize;
	L = GetLVarPtr(Ldata);	// Ldata->L + Ldata->Lindex;
	C = GetCVarPtr(Ldata);	// Ldata->L + Ldata->Lindex + MAX_MOTORS;
	D = GetDVarPtr(Ldata);	// Ldata->D;
	//--------------------------------------------------------------------//
	c_buf = KinPosAxisC*(pi/180);

	x_buf1 = KinPosAxisX;
	y_buf1 = KinPosAxisY;

//	x_buf2 = cos(c_buf)*x_buf1 - sin(c_buf)*y_buf1;
//	y_buf2 = sin(c_buf)*x_buf1 + cos(c_buf)*y_buf1;
	
	x_buf2 = cos(-c_buf)*(x_buf1-gKin_RotOffset(mx)) - sin(-c_buf)*(y_buf1-gKin_RotOffset(my))+gKin_RotOffset(mx);
	y_buf2 = sin(-c_buf)*(x_buf1-gKin_RotOffset(mx)) + cos(-c_buf)*(y_buf1-gKin_RotOffset(my))+gKin_RotOffset(my);

	KinPosMotor[mx]=-x_buf2*gKin_Sf(mx);
	KinPosMotor[my]=-y_buf2*gKin_Sf(my);
	KinPosMotor[mc]=KinPosAxisC*gKin_Sf(mc);

	return 0;
}

