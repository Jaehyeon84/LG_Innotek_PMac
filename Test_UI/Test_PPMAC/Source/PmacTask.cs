using ONSYS;
using static ONSYS.OPK;

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace Test_PPMAC
{

    public class PmacTask
    {
        PmacTest _formMain;
        private bool _bPmacConnectTaskEna = false;
        private Task _taskPmacConnectLoop = null;

        private bool _bPmacDataTaskEna = false;
        private Task _taskPmacDataLoop = null;

        private Int32[] _nRecvMtrData = new Int32[2048];
        private Int32[] _nSendMtrData = new Int32[2048];
        private Int32[] _nRecvMcData = new Int32[2048];
        private Int32[] _nSendMcData = new Int32[2048];
        private Int32[] _nRecvWdData = new Int32[2048];
        private Int32[] _nSendWdData = new Int32[2048];
        private Int32[] _nRecvVsData = new Int32[2048];
        private Int32[] _nSendVsData = new Int32[2048];
        private Int32[] _nRecvIoData = new Int32[2048];
        private Int32[] _nSendIoData = new Int32[2048];
        
        public PmacTask() 
        { 
            
        }

        public Int32 OPKGetResponse(String strCommand, out String strResponse)
        {
            Byte[] szCommand = new Byte[4096];
            Byte[] szResponse = new Byte[4096];
            Int32 nReturn;

            szCommand = Encoding.UTF8.GetBytes(strCommand);
            nReturn = OPKGetResponseA(PmacData.nPmacDeviceNo, szCommand, szResponse, 4096);
            strResponse = Encoding.UTF8.GetString(szResponse).Trim('\0');

            return nReturn;
        }

        public Int32 OPKScriptRun(String strScript, out String strResponse)
        {
            Byte[] szScript = new Byte[4096];
            Byte[] szResponse = new Byte[4096];
            Int32 nReturn;

            szScript = Encoding.UTF8.GetBytes(strScript);
            nReturn = OPKScriptRunA(PmacData.nPmacDeviceNo, szScript, szResponse, 4096);
            strResponse = Encoding.UTF8.GetString(szResponse).Trim('\0');

            return nReturn;
        }
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Connection Task
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////   
        public void StartPmacConnectTask(PmacTest frm)
        {
            if (!_bPmacConnectTaskEna)
            {
                _taskPmacConnectLoop = new Task(() =>
                {
                    taskPmacConnectLoop(500);
                });
                _bPmacConnectTaskEna = true;
                _taskPmacConnectLoop.Start();
            }
            _formMain = frm;
        }

        public void StopPmacConnectTask()
        {
            if (_bPmacConnectTaskEna)
            {
                PmacData.bPmacConnected = false;
                _bPmacConnectTaskEna = false;
                if(_taskPmacConnectLoop!=null)      _taskPmacConnectLoop.Wait(1000);
            }
        }

        private void taskPmacConnectLoop(Int32 nIntervalmsec)     // Pmac Data Loop
        {
            Int32 nRet;

            while (_bPmacConnectTaskEna)
            {
                OPKIsConnected(PmacData.nPmacDeviceNo, out nRet);
                if (nRet ==1)   PmacData.bPmacConnected = true;
                else            PmacData.bPmacConnected = false;

                if (_formMain != null)
                {
                    _formMain.BeginInvoke(new MethodInvoker(delegate ()
                    {
                        if(PmacData.bPmacConnected==true)   _formMain.radioButtonHeartBeat.Checked ^= true;
                        else                                _formMain.radioButtonHeartBeat.Checked = false;
                    }));
                }
                Thread.Sleep(nIntervalmsec);
            }
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Data Task
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////
        public void StartPmacDataTask()
        {
            if (!_bPmacDataTaskEna)
            {
                _taskPmacDataLoop = new Task(() =>
                {
                    taskPmacDataLoop(50);
                });
                _bPmacDataTaskEna = true;
                _taskPmacDataLoop.Start();
            }
        }

        public void StopPmacDataTask()
        {
            if (_bPmacDataTaskEna)
            {
                _bPmacDataTaskEna = false;
                if(_taskPmacDataLoop!=null) _taskPmacDataLoop.Wait(1000);
            }
        }
        void ByteArrayToInt32(byte[] byteArray, Int32[] intArray, int length, int opt)
        {
            byte[] slice = new byte[4];
            int idx, offset;

            for (idx = 0; idx < length; idx++)
            {
                offset = idx * 4;
                Array.Copy(byteArray, offset, slice, 0, 4);
                if (opt == 1)
                {
                    Array.Reverse(slice, 0, slice.Length);
                }
                intArray[idx] = BitConverter.ToInt32(slice, 0);
            }
        }

        private void taskPmacDataLoop(Int32 nIntervalmsec)     // Pmac Data Loop
        {
            Int32 nRet;
            int nCpuType = PmacData.nPmacDeviceType;
            byte[] readbyte = new byte[4096];
            while (_bPmacDataTaskEna)
            {
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nRecvMtrDataStartAdd / 4, PmacData.nRecvMtrDataNum, _nRecvMtrData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nSendMtrDataStartAdd / 4, PmacData.nSendMtrDataNum, _nSendMtrData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nRecvMcDataStartAdd / 4, PmacData.nRecvMcDataNum, _nRecvMcData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nSendMcDataStartAdd / 4, PmacData.nSendMcDataNum, _nSendMcData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nRecvWdDataStartAdd / 4, PmacData.nRecvWdDataNum, _nRecvWdData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nSendWdDataStartAdd / 4, PmacData.nSendWdDataNum, _nSendWdData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nRecvVsDataStartAdd / 4, PmacData.nRecvVsDataNum, _nRecvVsData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nSendVsDataStartAdd / 4, PmacData.nSendVsDataNum, _nSendVsData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nRecvIoDataStartAdd / 4, PmacData.nRecvIoDataNum, _nRecvIoData);
                nRet = OPKGetUserBufferInteger(PmacData.nPmacDeviceNo, PmacData.nSendIoDataStartAdd / 4, PmacData.nSendIoDataNum, _nSendIoData);

                UpdateMtData();
                UpdateMcData();
                UpdateWdData();
                UpdateVsData();
                UpdateIoData();

                //UpdateSeqData();

                _formMain.BeginInvoke(new MethodInvoker(delegate () // 한곳에서 몰아서 호출해야 함. 여러군데서 하면 행온됨.
                {
                    _formMain.UpdateForm();
                }));
                Thread.Sleep(nIntervalmsec);
            }
        }

        public void UpdateMtData()
        {
            for (int i = 0; i < PmacData.nMtrNum; i++)
            {
                PmacData.sMotor[i + 1].nStaCmdPos       = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrCmdPos];
                PmacData.sMotor[i + 1].nStaActPos       = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrActPos];
                PmacData.sMotor[i + 1].nStaVelocity     = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrVelocity];
                PmacData.sMotor[i + 1].nStaLoad         = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrLoad];
                PmacData.sMotor[i + 1].nStaAmpEna       = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrAmpEna];
                PmacData.sMotor[i + 1].nStaCloseLoop    = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrCloseLoop];
                PmacData.sMotor[i + 1].nStaInPos        = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrInPos];
                PmacData.sMotor[i + 1].nStaHomeFin      = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrHomeFin];
                PmacData.sMotor[i + 1].nStaHomeIng      = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrHomeIng];
                PmacData.sMotor[i + 1].nStaLimitMinus   = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrLimitMinus];
                PmacData.sMotor[i + 1].nStaLimitPlus    = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrLimitPlus];
                PmacData.sMotor[i + 1].nStaFollowingErr = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrFollowingErr];
                PmacData.sMotor[i + 1].nStaAmpFault     = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrAmpFault];
                PmacData.sMotor[i + 1].nStaEncLoss      = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrEncLoss];
                PmacData.sMotor[i + 1].nStaI2tErr       = _nRecvMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxStaMtrI2tErr];
                PmacData.sMotor[i + 1].nPosErr          = PmacData.sMotor[i + 1].nStaCmdPos - PmacData.sMotor[i + 1].nStaActPos;

                PmacData.sMotor[i + 1].nCmdServoOn      = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrServoOn];
                PmacData.sMotor[i + 1].nCmdServoOff     = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrServoOff];
                PmacData.sMotor[i + 1].nCmdHomeStart    = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrHomeStart];
                PmacData.sMotor[i + 1].nCmdHomeStop     = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrHomeAbort];
                PmacData.sMotor[i + 1].nCmdHomeOffset   = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrHomeOffset];
                PmacData.sMotor[i + 1].nCmdJogStop      = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogStop];
                PmacData.sMotor[i + 1].nCmdJogContPlus  = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogContPlus];
                PmacData.sMotor[i + 1].nCmdJogContMinus = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogContMinus];
                PmacData.sMotor[i + 1].nCmdJogAbsMove   = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogAbsMove];
                PmacData.sMotor[i + 1].nCmdJogIncMove   = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogIncMove];
                PmacData.sMotor[i + 1].nCmdJogAbsPos    = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogAbsPos];
                PmacData.sMotor[i + 1].nCmdJogIncDist   = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogIncDist];
                PmacData.sMotor[i + 1].nCmdJogSpeed     = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogSpeed];
                PmacData.sMotor[i + 1].nCmdJogTa        = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogTa];
                PmacData.sMotor[i + 1].nCmdJogTs        = _nSendMtrData[PmacData.uMtrDataOffset * i + PmacData.uIdxCmdMtrJogTs];
            }
        }

        public void UpdateMcData()
        {
            PmacData.sMachine.nStaAmpEna = _nRecvMcData[PmacData.uIdxStaMcAmpEna];
            PmacData.sMachine.nStaInPos = _nRecvMcData[PmacData.uIdxStaMcInPos];
            PmacData.sMachine.nStaHomeFin = _nRecvMcData[PmacData.uIdxStaMcHomeFin];
            PmacData.sMachine.nStaHomeIng = _nRecvMcData[PmacData.uIdxStaMcHomeIng];
            PmacData.sMachine.nStaProgRun = _nRecvMcData[PmacData.uIdxStaMcProgRun];
            PmacData.sMachine.nStaError = _nRecvMcData[PmacData.uIdxStaMcError];
            PmacData.sMachine.nStaErrCode = _nRecvMcData[PmacData.uIdxStaMcErrCode];
            PmacData.sMachine.nStaEcatCon = _nRecvMcData[PmacData.uIdxStaMcEcatCon];

            PmacData.sMachine.nCmdServoOn = _nSendMcData[PmacData.uIdxCmdMcServoOn];
            PmacData.sMachine.nCmdServoOff = _nSendMcData[PmacData.uIdxCmdMcServoOff];
            PmacData.sMachine.nCmdHomeStart = _nSendMcData[PmacData.uIdxCmdMcHomeStart];
            PmacData.sMachine.nCmdHomeStop = _nSendMcData[PmacData.uIdxCmdMcHomeAbort];
            PmacData.sMachine.nCmdProgStart = _nSendMcData[PmacData.uIdxCmdMcProgStart];
            PmacData.sMachine.nCmdProgAbort = _nSendMcData[PmacData.uIdxCmdMcProgAbort];
            PmacData.sMachine.nCmdProgHold = _nSendMcData[PmacData.uIdxCmdMcProgHold];
            PmacData.sMachine.nCmdProgNum = _nSendMcData[PmacData.uIdxCmdMcProgNum];
            PmacData.sMachine.nCmdFsave = _nSendMcData[PmacData.uIdxCmdMcFsave];


        }

        public void UpdateWdData()
        {
            PmacData.sWelding.nStaProgPosWx = _nRecvWdData[PmacData.uIdxStaWdProgPosWx];
            PmacData.sWelding.nStaProgPosWy = _nRecvWdData[PmacData.uIdxStaWdProgPosWy];
            PmacData.sWelding.nStaProgPosWc = _nRecvWdData[PmacData.uIdxStaWdProgPosWc];
            PmacData.sWelding.nStaVectorVel = _nRecvWdData[PmacData.uIdxStaWdVectorVel];
            PmacData.sWelding.nStaProgTime = _nRecvWdData[PmacData.uIdxStaWdProgTime];
            PmacData.sWelding.nStaProgPosSx = _nRecvWdData[PmacData.uIdxStaWdProgPosSx];
            PmacData.sWelding.nStaProgPosSy = _nRecvWdData[PmacData.uIdxStaWdProgPosSy];

            PmacData.sWelding.nCmdProgStart = _nSendWdData[PmacData.uIdxCmdWdProgStart];
            PmacData.sWelding.nCmdProgAbort = _nSendWdData[PmacData.uIdxCmdWdProgAbort];
            PmacData.sWelding.nCmdProgHold = _nSendWdData[PmacData.uIdxCmdWdProgHold];
            PmacData.sWelding.nCmdRdyPosX = _nSendWdData[PmacData.uIdxCmdWdRdyPosX];
            PmacData.sWelding.nCmdRdyPosY = _nSendWdData[PmacData.uIdxCmdWdRdyPosY];
            PmacData.sWelding.nCmdRdyPosC = _nSendWdData[PmacData.uIdxCmdWdRdyPosC];
            PmacData.sWelding.nCmdSrtPosX = _nSendWdData[PmacData.uIdxCmdWdSrtPosX];
            PmacData.sWelding.nCmdSrtPosY = _nSendWdData[PmacData.uIdxCmdWdSrtPosY];
            PmacData.sWelding.nCmdSrtPosC = _nSendWdData[PmacData.uIdxCmdWdSrtPosC];
            PmacData.sWelding.nCmdSrtVelX = _nSendWdData[PmacData.uIdxCmdWdSrtVelX];
            PmacData.sWelding.nCmdSrtVelY = _nSendWdData[PmacData.uIdxCmdWdSrtVelY];
            PmacData.sWelding.nCmdSrtVelC = _nSendWdData[PmacData.uIdxCmdWdSrtVelC];
            PmacData.sWelding.nCmdMdiStart = _nSendWdData[PmacData.uIdxCmdWdMdiStart];
            PmacData.sWelding.nCmdMdiAbort = _nSendWdData[PmacData.uIdxCmdWdMdiAbort];
            PmacData.sWelding.nCmdMdiPosX = _nSendWdData[PmacData.uIdxCmdWdMdiPosX];
            PmacData.sWelding.nCmdMdiPosY = _nSendWdData[PmacData.uIdxCmdWdMdiPosY];
            PmacData.sWelding.nCmdMdiPosC = _nSendWdData[PmacData.uIdxCmdWdMdiPosC];
            PmacData.sWelding.nCmdAccLimitX = _nSendWdData[PmacData.uIdxCmdWdAccLimitX];
            PmacData.sWelding.nCmdAccLimitY = _nSendWdData[PmacData.uIdxCmdWdAccLimitY];
            PmacData.sWelding.nCmdAccLimitC = _nSendWdData[PmacData.uIdxCmdWdAccLimitC];
            PmacData.sWelding.nCmdVelLimitC = _nSendWdData[PmacData.uIdxCmdWdVelLimitC];
            PmacData.sWelding.nCmdRotOffsetX = _nSendWdData[PmacData.uIdxCmdWdRotOffsetX];
            PmacData.sWelding.nCmdRotOffsetY = _nSendWdData[PmacData.uIdxCmdWdRotOffsetY];
            PmacData.sWelding.nCmdEsyderFwd = _nSendWdData[PmacData.uIdxCmdWdEsyderFwd];
            PmacData.sWelding.nCmdEsyderBwd = _nSendWdData[PmacData.uIdxCmdWdEsyderBwd];
            PmacData.sWelding.nCmdTestShot = _nSendWdData[PmacData.uIdxCmdWdTestShot];
            PmacData.sWelding.nCmdShotTime = _nSendWdData[PmacData.uIdxCmdWdShotTime];
            PmacData.sWelding.nCmdOutMode = _nSendWdData[PmacData.uIdxCmdWdOutMode];
            PmacData.sWelding.nCmdRefVel = _nSendWdData[PmacData.uIdxCmdWdRefVel];
            PmacData.sWelding.nCmdPfmPeriod = _nSendWdData[PmacData.uIdxCmdWdPfmPeriod];
            PmacData.sWelding.nCmdPfmOnTime = _nSendWdData[PmacData.uIdxCmdWdPfmOnTime];
            PmacData.sWelding.nCmdCorePowerSf = _nSendWdData[PmacData.uIdxCmdWdCorePowerSf];
            PmacData.sWelding.nCmdCoreRefPower = _nSendWdData[PmacData.uIdxCmdWdCoreRefPower];
            PmacData.sWelding.nCmdCoreMinPower = _nSendWdData[PmacData.uIdxCmdWdCoreMinPower];
            PmacData.sWelding.nCmdCoreMaxPower = _nSendWdData[PmacData.uIdxCmdWdCoreMaxPower];
            PmacData.sWelding.nCmdCorePfmEna = _nSendWdData[PmacData.uIdxCmdWdCorePfmEna];
            PmacData.sWelding.nCmdRingPowerSf = _nSendWdData[PmacData.uIdxCmdWdRingPowerSf];
            PmacData.sWelding.nCmdRingRefPower = _nSendWdData[PmacData.uIdxCmdWdRingRefPower];
            PmacData.sWelding.nCmdRingMinPower = _nSendWdData[PmacData.uIdxCmdWdRingMinPower];
            PmacData.sWelding.nCmdRingMaxPower = _nSendWdData[PmacData.uIdxCmdWdRingMaxPower];
            PmacData.sWelding.nCmdRingPfmEna = _nSendWdData[PmacData.uIdxCmdWdRingPfmEna];
            PmacData.sWelding.nCmdWblEna = _nSendWdData[PmacData.uIdxCmdWdWblEna];
            PmacData.sWelding.nCmdWblLen = _nSendWdData[PmacData.uIdxCmdWdWblLen];
            PmacData.sWelding.nCmdWblDist = _nSendWdData[PmacData.uIdxCmdWdWblDist];
            PmacData.sWelding.nCmdWblType = _nSendWdData[PmacData.uIdxCmdWdWblType];
            PmacData.sWelding.nCmdWblRatioW = _nSendWdData[PmacData.uIdxCmdWdWblRatioW];
            PmacData.sWelding.nCmdWblRatioL = _nSendWdData[PmacData.uIdxCmdWdWblRatioL];
            PmacData.sWelding.nCmdWblOffsetX = _nSendWdData[PmacData.uIdxCmdWdWblOffsetX];
            PmacData.sWelding.nCmdWblOffsetY = _nSendWdData[PmacData.uIdxCmdWdWblOffsetY];
        }

        public void UpdateVsData()
        {
            PmacData.sVision.nStaProgPosVx = _nRecvVsData[PmacData.uIdxStaVsProgPosVx];
            PmacData.sVision.nStaProgPosVy = _nRecvVsData[PmacData.uIdxStaVsProgPosVy];
            PmacData.sVision.nStaProgPosVc = _nRecvVsData[PmacData.uIdxStaVsProgPosVc];
            PmacData.sVision.nStaVectorVel = _nRecvVsData[PmacData.uIdxStaVsVectorVel];
            PmacData.sVision.nStaProgTime = _nRecvVsData[PmacData.uIdxStaVsProgTime];

            PmacData.sVision.nCmdProgStart = _nSendVsData[PmacData.uIdxCmdVsProgStart];
            PmacData.sVision.nCmdProgAbort = _nSendVsData[PmacData.uIdxCmdVsProgAbort];
            PmacData.sVision.nCmdProgHold = _nSendVsData[PmacData.uIdxCmdVsProgHold];
            PmacData.sVision.nCmdRdyPosX = _nSendVsData[PmacData.uIdxCmdVsRdyPosX];
            PmacData.sVision.nCmdRdyPosY = _nSendVsData[PmacData.uIdxCmdVsRdyPosY];
            PmacData.sVision.nCmdRdyPosC = _nSendVsData[PmacData.uIdxCmdVsRdyPosC];
            PmacData.sVision.nCmdSrtPosX = _nSendVsData[PmacData.uIdxCmdVsSrtPosX];
            PmacData.sVision.nCmdSrtPosY = _nSendVsData[PmacData.uIdxCmdVsSrtPosY];
            PmacData.sVision.nCmdSrtPosC = _nSendVsData[PmacData.uIdxCmdVsSrtPosC];
            PmacData.sVision.nCmdSrtVelX = _nSendVsData[PmacData.uIdxCmdVsSrtVelX];
            PmacData.sVision.nCmdSrtVelY = _nSendVsData[PmacData.uIdxCmdVsSrtVelY];
            PmacData.sVision.nCmdSrtVelC = _nSendVsData[PmacData.uIdxCmdVsSrtVelC];
            PmacData.sVision.nCmdMdiStart = _nSendVsData[PmacData.uIdxCmdVsMdiStart];
            PmacData.sVision.nCmdMdiAbort = _nSendVsData[PmacData.uIdxCmdVsMdiAbort];
            PmacData.sVision.nCmdMdiPosX = _nSendVsData[PmacData.uIdxCmdVsMdiPosX];
            PmacData.sVision.nCmdMdiPosY = _nSendVsData[PmacData.uIdxCmdVsMdiPosY];
            PmacData.sVision.nCmdMdiPosC = _nSendVsData[PmacData.uIdxCmdVsMdiPosC];
            PmacData.sVision.nCmdAccLimitX = _nSendVsData[PmacData.uIdxCmdVsAccLimitX];
            PmacData.sVision.nCmdAccLimitY = _nSendVsData[PmacData.uIdxCmdVsAccLimitY];
            PmacData.sVision.nCmdAccLimitC = _nSendVsData[PmacData.uIdxCmdVsAccLimitC];
            PmacData.sVision.nCmdVelLimitC = _nSendVsData[PmacData.uIdxCmdVsVelLimitC];
            PmacData.sVision.nCmdRotOffsetX = _nSendVsData[PmacData.uIdxCmdVsRotOffsetX];
            PmacData.sVision.nCmdRotOffsetY = _nSendVsData[PmacData.uIdxCmdVsRotOffsetY];
            PmacData.sVision.nCmdEsyderFwd = _nSendVsData[PmacData.uIdxCmdVsEsyderFwd];
            PmacData.sVision.nCmdEsyderBwd = _nSendVsData[PmacData.uIdxCmdVsEsyderBwd];
            PmacData.sVision.nCmdTestShot = _nSendVsData[PmacData.uIdxCmdVsTestShot];
            PmacData.sVision.nCmdShotTime = _nSendVsData[PmacData.uIdxCmdVsShotTime];
            PmacData.sVision.nCmdRefVel = _nSendVsData[PmacData.uIdxCmdVsRefVel];
            PmacData.sVision.nCmdPeriod = _nSendVsData[PmacData.uIdxCmdVsPeriod];
            PmacData.sVision.nCmdDuty = _nSendVsData[PmacData.uIdxCmdVsDuty];
        }

        public void UpdateIoData()
        {
            int i,j = 0;
            int nMemIdx = 0;

            PmacData.bDioIn = new bool[PmacData.nDinNum];
            PmacData.bDioOut = new bool[PmacData.nDoutNum];

            for (i = 0; i < PmacData.nRecvIoDataNum; i++)
            {
                PmacData.nDioIn[i] = _nRecvIoData[i];
            }

            for (i = 0; i < PmacData.nSendIoDataNum; i++)
            {
                PmacData.nDioOut[i] = _nSendIoData[i];
            }

            for (i = 0; i < PmacData.nDinNum; i++)
            {
                if (j >= 16)
                {
                    j = 0;
                    nMemIdx++;
                }
                PmacData.bDioIn[i] = Convert.ToBoolean((_nRecvIoData[nMemIdx] >> j) & 0x01);
                j++;
            }

            j = 0;
            nMemIdx = 0;
            for (i = 0; i < PmacData.nDoutNum; i++)
            {
                if (j >= 16)
                {
                    j = 0;
                    nMemIdx++;
                }
                PmacData.bDioOut[i] = Convert.ToBoolean((_nSendIoData[nMemIdx] >> j) & 0x01);
                j++;
            }
        }
    }
}
