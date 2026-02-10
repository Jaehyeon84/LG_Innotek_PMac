/*For more information see notes.txt in the Documentation folder */
#include "usrcode.h"
#define _PPScriptMode_		// for enum mode, replace this with #define _EnumMode_	

#include "../Include/pp_proj.h"

extern struct SHM        *pshm;  // Pointer to shared memory
extern volatile unsigned *piom;  // Pointer to I/O memory
extern void              *pushm; // Pointer to user memory

void user_phase(struct MotorData *Mptr)
{
}

double user_pid_ctrl(struct MotorData *Mptr)
{
	double *p;
	p = pushm;
	return 0;
}

void CaptCompISR(void)
{
	unsigned *pUnsigned = pushm;
	*pUnsigned = *pUnsigned + 1;
}

double GetLocal(struct LocalData *Ldata, int m)
{
	return *(Ldata->L + Ldata->Lindex + m);
}

void SetLocal(struct LocalData *Ldata, int m, double value)
{
	*(Ldata->L + Ldata->Lindex + m) = value;
}

double *GetLocalPtr(struct LocalData *Ldata, int m)
{
	return (Ldata->L + Ldata->Lindex + m);
}

double CfromScript(double arg1, double arg2, double arg3, double arg4, double arg5, double arg6, double arg7, struct LocalData *Ldata)
{
	int nFuncType = (int) arg1;
	int nOpt1 = (int) arg2;
	int nOpt2 = (int) arg3;
	int nOpt3 = (int) arg4;
	int nOpt4 = (int) arg5;
	int nOpt5 = (int) arg6;
	int nOpt6 = (int) arg7;
 
	OnSys_LaserWellding(nFuncType, nOpt1, nOpt2, nOpt3, nOpt4, nOpt5, nOpt6,  Ldata);
	return 0.0;
}

