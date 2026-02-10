using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography;
using System.Text;
using System.Threading.Tasks;

namespace Test_PPMAC
{
    public class PmacData
    {
        public enum ePlotDataType
        {
            CmdPos = 1,
            ActPos = 2,
            PosErr = 3,
            Velocity = 4,
            Load = 5,
        };

        static public Int32 uConfigParamNum = 4;

        static public bool bPmacConnected = false;
        static public Int32 nPmacDeviceType = 0;
        static public Int32 nPmacDeviceNo = 255;
        static public Double dPmacDeviceFrq = 0;

        public enum Axis
        {
            wX = 9,
            wY = 10,
            wC = 11,
            sX = 5,
            sY = 6,
            vX = 13,
            vY = 14,
            vC = 15
        };

        static public Int32 nMtrNum = 16;
        static public Int32 nDinNum = 16;
        static public Int32 nDoutNum = 16;
        
        static public Int32 nRecvMtrDataNum = 640;
        static public Int32 nSendMtrDataNum = 640;
        static public Int32 nRecvMcDataNum = 30;
        static public Int32 nSendMcDataNum = 30;
        static public Int32 nRecvWdDataNum = 60;
        static public Int32 nSendWdDataNum = 60;
        static public Int32 nRecvVsDataNum = 60;
        static public Int32 nSendVsDataNum = 60;
        static public Int32 nRecvIoDataNum = Convert.ToInt32(Math.Ceiling(Convert.ToDouble(nDinNum) / 16));
        static public Int32 nSendIoDataNum = Convert.ToInt32(Math.Ceiling(Convert.ToDouble(nDoutNum) / 16));

        static public Int32 nRecvMtrDataStartAdd = 10000;
        static public Int32 nSendMtrDataStartAdd = 20000;
        static public Int32 nRecvMcDataStartAdd = 15000;
        static public Int32 nSendMcDataStartAdd = 25000;
        static public Int32 nRecvWdDataStartAdd = 16000;
        static public Int32 nSendWdDataStartAdd = 26000;
        static public Int32 nRecvVsDataStartAdd = 17000;
        static public Int32 nSendVsDataStartAdd = 27000;
        static public Int32 nRecvIoDataStartAdd = 30000;
        static public Int32 nSendIoDataStartAdd = 31000;

        static public uint uMtrDataOffset = 20;
        //---------------------------------------------------------//
        static public uint uIdxStaMtrCmdPos = 0;
        static public uint uIdxStaMtrActPos = 1;
        static public uint uIdxStaMtrVelocity = 2;
        static public uint uIdxStaMtrLoad = 3;
        static public uint uIdxStaMtrAmpEna = 4;
        static public uint uIdxStaMtrCloseLoop = 5;
        static public uint uIdxStaMtrInPos = 6;
        static public uint uIdxStaMtrHomeFin = 7;
        static public uint uIdxStaMtrHomeIng = 8;
        static public uint uIdxStaMtrLimitMinus = 9;
        static public uint uIdxStaMtrLimitPlus = 10;
        static public uint uIdxStaMtrFollowingErr = 11;
        static public uint uIdxStaMtrAmpFault = 12;
        static public uint uIdxStaMtrEncLoss = 13;
        static public uint uIdxStaMtrI2tErr = 14;
        //---------------------------------------------------------//
        static public uint uIdxCmdMtrServoOn = 0;
        static public uint uIdxCmdMtrServoOff = 1;
        static public uint uIdxCmdMtrHomeStart = 2;
        static public uint uIdxCmdMtrHomeAbort = 3;
        static public uint uIdxCmdMtrHomeOffset = 4;
        static public uint uIdxCmdMtrJogStop = 5;
        static public uint uIdxCmdMtrJogContPlus = 6;
        static public uint uIdxCmdMtrJogContMinus = 7;
        static public uint uIdxCmdMtrJogAbsMove = 8;
        static public uint uIdxCmdMtrJogIncMove = 9;
        static public uint uIdxCmdMtrJogAbsPos = 10;
        static public uint uIdxCmdMtrJogIncDist = 11;
        static public uint uIdxCmdMtrJogSpeed = 12;
        static public uint uIdxCmdMtrJogTa = 13;
        static public uint uIdxCmdMtrJogTs = 14;
        //---------------------------------------------------------//
        static public uint uIdxStaMcAmpEna = 0;
        static public uint uIdxStaMcInPos = 1;
        static public uint uIdxStaMcHomeFin = 2;
        static public uint uIdxStaMcHomeIng = 3;
        static public uint uIdxStaMcProgRun = 4;
        static public uint uIdxStaMcError = 5;
        static public uint uIdxStaMcErrCode = 6;
		static public uint uIdxStaMcEcatCon = 7;

		static public uint uIdxCmdMcServoOn = 0;
        static public uint uIdxCmdMcServoOff = 1;
        static public uint uIdxCmdMcHomeStart = 2;
        static public uint uIdxCmdMcHomeAbort = 3;
        static public uint uIdxCmdMcProgStart = 4;
        static public uint uIdxCmdMcProgAbort = 5;
        static public uint uIdxCmdMcProgHold = 6;
        static public uint uIdxCmdMcProgNum = 7;
        static public uint uIdxCmdMcFsave = 8;
        //---------------------------------------------------------//
        static public uint uIdxStaWdProgPosWx = 0;
        static public uint uIdxStaWdProgPosWy = 1;
        static public uint uIdxStaWdProgPosWc = 2;
        static public uint uIdxStaWdVectorVel = 3;
        static public uint uIdxStaWdProgTime = 4;
		static public uint uIdxStaWdProgPosSx = 5;
		static public uint uIdxStaWdProgPosSy = 6;

		static public uint uIdxCmdWdProgStart = 0;
        static public uint uIdxCmdWdProgAbort = 1;
        static public uint uIdxCmdWdProgHold = 2;
        static public uint uIdxCmdWdRdyPosMove = 3;
        static public uint uIdxCmdWdRdyPosStop = 4;
        static public uint uIdxCmdWdSrtPosMove = 5;
        static public uint uIdxCmdWdSrtPosStop = 6;
        static public uint uIdxCmdWdRdyPosX = 7;
        static public uint uIdxCmdWdRdyPosY = 8;
        static public uint uIdxCmdWdRdyPosC = 9;
        static public uint uIdxCmdWdSrtPosX = 10;
        static public uint uIdxCmdWdSrtPosY = 11;
        static public uint uIdxCmdWdSrtPosC = 12;
        static public uint uIdxCmdWdSrtVelX = 13;
        static public uint uIdxCmdWdSrtVelY = 14;
        static public uint uIdxCmdWdSrtVelC = 15;
        static public uint uIdxCmdWdMdiStart = 16;
        static public uint uIdxCmdWdMdiAbort = 17;
        static public uint uIdxCmdWdMdiPosX = 18;
        static public uint uIdxCmdWdMdiPosY = 19;
        static public uint uIdxCmdWdMdiPosC = 20;
        static public uint uIdxCmdWdAccLimitX = 21;
        static public uint uIdxCmdWdAccLimitY = 22;
        static public uint uIdxCmdWdAccLimitC = 23;
        static public uint uIdxCmdWdVelLimitC = 24;

        static public uint uIdxCmdWdRotOffsetX = 25;
        static public uint uIdxCmdWdRotOffsetY = 26;
        static public uint uIdxCmdWdEsyderFwd = 27;
        static public uint uIdxCmdWdEsyderBwd = 28;
        static public uint uIdxCmdWdTestShot = 29;
        static public uint uIdxCmdWdShotTime = 30;
        static public uint uIdxCmdWdOutMode = 31;
        static public uint uIdxCmdWdRefVel = 32;
        static public uint uIdxCmdWdPfmPeriod = 33;
        static public uint uIdxCmdWdPfmOnTime = 34;
        static public uint uIdxCmdWdCorePowerSf = 35;
        static public uint uIdxCmdWdCoreRefPower = 36;
        static public uint uIdxCmdWdCoreMinPower = 37;
        static public uint uIdxCmdWdCoreMaxPower = 38;
        static public uint uIdxCmdWdCorePfmEna = 39;
        static public uint uIdxCmdWdRingPowerSf = 40;
        static public uint uIdxCmdWdRingRefPower = 41;
        static public uint uIdxCmdWdRingMinPower = 42;
        static public uint uIdxCmdWdRingMaxPower = 43;
        static public uint uIdxCmdWdRingPfmEna = 44;

        static public uint uIdxCmdWdWblEna = 47;
        static public uint uIdxCmdWdWblLen = 48;
        static public uint uIdxCmdWdWblDist = 49;
        static public uint uIdxCmdWdWblType = 50;
        static public uint uIdxCmdWdWblRatioW = 51;
        static public uint uIdxCmdWdWblRatioL = 52;
        static public uint uIdxCmdWdWblOffsetX = 53;
        static public uint uIdxCmdWdWblOffsetY = 54;

        //---------------------------------------------------------//
        static public uint uIdxStaVsProgPosVx = 0;
		static public uint uIdxStaVsProgPosVy = 1;
		static public uint uIdxStaVsProgPosVc = 2;
		static public uint uIdxStaVsVectorVel = 3;
		static public uint uIdxStaVsProgTime = 4;

		static public uint uIdxCmdVsProgStart = 0;
        static public uint uIdxCmdVsProgAbort = 1;
        static public uint uIdxCmdVsProgHold = 2;
        static public uint uIdxCmdVsRdyPosMove = 3;
        static public uint uIdxCmdVsRdyPosStop = 4;
        static public uint uIdxCmdVsSrtPosMove = 5;
        static public uint uIdxCmdVsSrtPosStop = 6;
        static public uint uIdxCmdVsRdyPosX = 7;
        static public uint uIdxCmdVsRdyPosY = 8;
        static public uint uIdxCmdVsRdyPosC = 9;
        static public uint uIdxCmdVsSrtPosX = 10;
        static public uint uIdxCmdVsSrtPosY = 11;
        static public uint uIdxCmdVsSrtPosC = 12;
        static public uint uIdxCmdVsSrtVelX = 13;
        static public uint uIdxCmdVsSrtVelY = 14;
        static public uint uIdxCmdVsSrtVelC = 15;
        static public uint uIdxCmdVsMdiStart = 16;
        static public uint uIdxCmdVsMdiAbort = 17;
        static public uint uIdxCmdVsMdiPosX = 18;
        static public uint uIdxCmdVsMdiPosY = 19;
        static public uint uIdxCmdVsMdiPosC = 20;
        static public uint uIdxCmdVsAccLimitX = 21;
        static public uint uIdxCmdVsAccLimitY = 22;
        static public uint uIdxCmdVsAccLimitC = 23;
        static public uint uIdxCmdVsVelLimitC = 24;
        static public uint uIdxCmdVsRotOffsetX = 25;
        static public uint uIdxCmdVsRotOffsetY = 26;
        static public uint uIdxCmdVsEsyderFwd = 27;
        static public uint uIdxCmdVsEsyderBwd = 28;
        static public uint uIdxCmdVsTestShot = 29;
        static public uint uIdxCmdVsShotTime = 30;
        static public uint uIdxCmdVsRefVel = 31;
        static public uint uIdxCmdVsPeriod = 32;
        static public uint uIdxCmdVsDuty = 33;

        //---------------------------------------------------------//
        public struct _sMotor
        {
            public Int32 nStaCmdPos;
            public Int32 nStaActPos;
            public Int32 nStaVelocity;
            public Int32 nStaLoad;
            public Int32 nStaAmpEna;
            public Int32 nStaCloseLoop;
            public Int32 nStaInPos;
            public Int32 nStaHomeFin;
            public Int32 nStaHomeIng;
            public Int32 nStaLimitMinus;
            public Int32 nStaLimitPlus;
            public Int32 nStaFollowingErr;
            public Int32 nStaAmpFault;
            public Int32 nStaEncLoss;
            public Int32 nStaI2tErr;
            public Int32 nPosErr;

            public Int32 nCmdServoOn;
            public Int32 nCmdServoOff;
            public Int32 nCmdHomeStart;
            public Int32 nCmdHomeStop;
            public Int32 nCmdHomeOffset;
            public Int32 nCmdJogStop;
            public Int32 nCmdJogContPlus;
            public Int32 nCmdJogContMinus;
            public Int32 nCmdJogAbsMove;
            public Int32 nCmdJogIncMove;
            public Int32 nCmdJogAbsPos;
            public Int32 nCmdJogIncDist;
            public Int32 nCmdJogSpeed;
            public Int32 nCmdJogTa;
            public Int32 nCmdJogTs;
        }
        static public _sMotor[] sMotor = new _sMotor[256];

        public struct _sMachine
        {
            public Int32 nStaAmpEna;
            public Int32 nStaInPos;
            public Int32 nStaHomeFin;
            public Int32 nStaHomeIng;
            public Int32 nStaProgRun;
            public Int32 nStaError;
            public Int32 nStaErrCode;
			public Int32 nStaEcatCon;

			public Int32 nCmdServoOn;
            public Int32 nCmdServoOff;
            public Int32 nCmdHomeStart;
            public Int32 nCmdHomeStop;
            public Int32 nCmdProgStart;
            public Int32 nCmdProgAbort;
            public Int32 nCmdProgHold;
            public Int32 nCmdProgNum;
            public Int32 nCmdFsave;
        }
        static public _sMachine sMachine;

        public struct _sWelding
        {
            public Int32 nStaProgPosWx;
            public Int32 nStaProgPosWy;
            public Int32 nStaProgPosWc;
            public Int32 nStaVectorVel;
            public Int32 nStaProgTime;
			public Int32 nStaProgPosSx;
			public Int32 nStaProgPosSy;

			public Int32 nCmdProgStart;
            public Int32 nCmdProgAbort;
            public Int32 nCmdProgHold;
            public Int32 nCmdRdyPosMove;
            public Int32 nCmdRdyPosStop;
            public Int32 nCmdSrtPosMove;
            public Int32 nCmdSrtPosStop;
            public Int32 nCmdRdyPosX;
            public Int32 nCmdRdyPosY;
            public Int32 nCmdRdyPosC;
            public Int32 nCmdSrtPosX;
            public Int32 nCmdSrtPosY;
            public Int32 nCmdSrtPosC;
            public Int32 nCmdSrtVelX;
            public Int32 nCmdSrtVelY;
            public Int32 nCmdSrtVelC;
            public Int32 nCmdMdiStart;
            public Int32 nCmdMdiAbort;
            public Int32 nCmdMdiPosX;
            public Int32 nCmdMdiPosY;
            public Int32 nCmdMdiPosC;
            public Int32 nCmdAccLimitX;
            public Int32 nCmdAccLimitY;
            public Int32 nCmdAccLimitC;
            public Int32 nCmdVelLimitC;
            public Int32 nCmdRotOffsetX;
            public Int32 nCmdRotOffsetY;
            public Int32 nCmdEsyderFwd;
            public Int32 nCmdEsyderBwd;
            public Int32 nCmdTestShot;
            public Int32 nCmdShotTime;

            public Int32 nCmdOutMode;
            public Int32 nCmdRefVel;
            public Int32 nCmdPfmPeriod;
            public Int32 nCmdPfmOnTime;
            public Int32 nCmdCorePowerSf;
            public Int32 nCmdCoreRefPower;
            public Int32 nCmdCoreMinPower;
            public Int32 nCmdCoreMaxPower;
            public Int32 nCmdCorePfmEna;
            public Int32 nCmdRingPowerSf;
            public Int32 nCmdRingRefPower;
            public Int32 nCmdRingMinPower;
            public Int32 nCmdRingMaxPower;
            public Int32 nCmdRingPfmEna;
            public Int32 nCmdWblEna;
            public Int32 nCmdWblLen;
            public Int32 nCmdWblDist;
            public Int32 nCmdWblType;
            public Int32 nCmdWblRatioW;
            public Int32 nCmdWblRatioL;
            public Int32 nCmdWblOffsetX;
            public Int32 nCmdWblOffsetY;
        }
        static public _sWelding sWelding;

        public struct _sVision
        {
			public Int32 nStaProgPosVx;
			public Int32 nStaProgPosVy;
			public Int32 nStaProgPosVc;
			public Int32 nStaVectorVel;
			public Int32 nStaProgTime;

			public Int32 nCmdProgStart;
            public Int32 nCmdProgAbort;
            public Int32 nCmdProgHold;
            public Int32 nCmdRdyPosMove;
            public Int32 nCmdRdyPosStop;
            public Int32 nCmdSrtPosMove;
            public Int32 nCmdSrtPosStop;
            public Int32 nCmdRdyPosX;
            public Int32 nCmdRdyPosY;
            public Int32 nCmdRdyPosC;
            public Int32 nCmdSrtPosX;
            public Int32 nCmdSrtPosY;
            public Int32 nCmdSrtPosC;
            public Int32 nCmdSrtVelX;
            public Int32 nCmdSrtVelY;
            public Int32 nCmdSrtVelC;
            public Int32 nCmdMdiStart;
            public Int32 nCmdMdiAbort;
            public Int32 nCmdMdiPosX;
            public Int32 nCmdMdiPosY;
            public Int32 nCmdMdiPosC;
            public Int32 nCmdAccLimitX;
            public Int32 nCmdAccLimitY;
            public Int32 nCmdAccLimitC;
            public Int32 nCmdVelLimitC;
            public Int32 nCmdRotOffsetX;
            public Int32 nCmdRotOffsetY;
            public Int32 nCmdEsyderFwd;
            public Int32 nCmdEsyderBwd;
            public Int32 nCmdTestShot;
            public Int32 nCmdShotTime;

            public Int32 nCmdRefVel;
            public Int32 nCmdPeriod;
            public Int32 nCmdDuty;
        }
        static public _sVision sVision;


        static public bool[] bDioIn = new bool[nDinNum];
        static public bool[] bDioOut = new bool[nDoutNum];

        static public Int32[] nDioIn = new Int32[nRecvIoDataNum];
        static public Int32[] nDioOut = new Int32[nRecvIoDataNum];
    }

}
