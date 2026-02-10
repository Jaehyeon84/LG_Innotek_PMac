using ONSYS;
using System;
using System.Drawing;
using System.IO;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Messaging;
using System.Text;
using System.Threading;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;
using System.Windows.Interop;
using static ONSYS.OPK;
using OpenFileDialog = System.Windows.Forms.OpenFileDialog;


namespace Test_PPMAC
{
    public partial class PmacTest : Form
    {
        //TextBox[] _textBoxJogSpeed = new TextBox[32];

        private PmacTask pmacTask;

        private Int32 _nMtrNum = 0;
        private Int32 _nDinNum = 0;
        private Int32 _nDoutNum = 0;
        private Int32 _nJogSelIdx = 0;
        string _strFilePath = null;
        string _strDownPath = null;

        private bool _DataGridDinLoad = false;
        private bool _DataGridDoutLoad = false;

        public PmacTest()
        {
            InitializeComponent();
            pmacTask = new PmacTask();
        }

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Form Load/Close
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        public static void SetDoubleBuffered(System.Windows.Forms.Control c)
        {
            if (System.Windows.Forms.SystemInformation.TerminalServerSession)
                return;
            System.Reflection.PropertyInfo aProp = typeof(Control).GetProperty("DoubleBuffered", System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
            if (aProp != null)
            {
                aProp.SetValue(c, true, null);
            }
        }
        private void PmacTest_Load(object sender, EventArgs e)
        {
            string strBuf;
            FileStream fsConfig;
            StreamReader srConfig;
            int nPramNum;
            //--------------------------------------------------------------------------------------------//
            SetDoubleBuffered(tableLayoutPanelAxisPos);
            SetDoubleBuffered(tableLayoutPanelAxisSta);
            //--------------------------------------------------------------------------------------------//
            _strFilePath = @"..\\Config.ini";
            nPramNum = PmacData.uConfigParamNum;
            fsConfig = new FileStream(_strFilePath, FileMode.OpenOrCreate);
            srConfig = new StreamReader(fsConfig);

            String[] strParam = new String[nPramNum];

            for (int i = 0; i < nPramNum; i++)
            {
                strParam[i] = srConfig.ReadLine();
                if (strParam[i] == null) break;
            }
            fsConfig.Close();

            //PmacData.nPmacDeviceType = Convert.ToInt32(strParam[0]);
            //PmacData.nMtrNum = Convert.ToInt32(strParam[1]);
            //PmacData.nDinNum = Convert.ToInt32(strParam[2]);
            //PmacData.nDoutNum = Convert.ToInt32(strParam[3]);

            _nMtrNum = PmacData.nMtrNum;
            if (_nMtrNum == 0) _nMtrNum = 1;
            _nDinNum = PmacData.nDinNum;
            _nDoutNum = PmacData.nDoutNum;

            //--------------------------------------------------------------------------------------------//
            dataGridViewDioIn.Columns.Clear();
            dataGridViewDioIn.Columns.Add("ColumnDinNum", "No");
            dataGridViewDioIn.Columns.Add("ColumnDinNum", "Name");
            dataGridViewDioIn.Columns.Add("ColumnDinSta", "Sta");

            dataGridViewDioIn.Columns[0].SortMode = DataGridViewColumnSortMode.NotSortable;
            dataGridViewDioIn.Columns[1].SortMode = DataGridViewColumnSortMode.NotSortable;
            dataGridViewDioIn.Columns[1].SortMode = DataGridViewColumnSortMode.NotSortable;

            dataGridViewDioIn.ColumnHeadersDefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridViewDioIn.Columns[0].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridViewDioIn.Columns[1].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridViewDioIn.Columns[2].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;

            dataGridViewDioIn.Columns[0].Width = 40;
            dataGridViewDioIn.Columns[1].Width = 180;
            dataGridViewDioIn.Columns[2].Width = 60;

            dataGridViewDioIn.Columns[0].ReadOnly = true;
            dataGridViewDioIn.Columns[1].ReadOnly = false;
            dataGridViewDioIn.Columns[2].ReadOnly = true;

            dataGridViewDioIn.Columns[2].DefaultCellStyle.ForeColor = Color.White;

            for (int i = 0; i < _nDinNum; i++)
            {
                strBuf = Convert.ToString(i).PadLeft(3, '0'); ;
                dataGridViewDioIn.Rows.Add(strBuf, "TBD", "OFF");
            }

            dataGridViewDioIn.RowHeadersVisible = false;

            _strFilePath = @"..\\Din.txt";
            fsConfig = new FileStream(_strFilePath, FileMode.OpenOrCreate);
            srConfig = new StreamReader(fsConfig);

            for (int i = 0; i < _nDinNum; i++)
            {
                strBuf = srConfig.ReadLine();
                if (strBuf != null)
                {
                    dataGridViewDioIn[1, i].Value = strBuf;
                }
                else
                {
                    dataGridViewDioIn[1, i].Value = "TBD";
                }
            }
            fsConfig.Close();
            _DataGridDinLoad = true;
            //--------------------------------------------------------------------------------------------//
            dataGridViewDioOut.Columns.Clear();
            dataGridViewDioOut.Columns.Add("ColumnDinNum", "No");
            dataGridViewDioOut.Columns.Add("ColumnDinNum", "Name");
            dataGridViewDioOut.Columns.Add("ColumnDinSta", "ON");
            dataGridViewDioOut.Columns.Add("ColumnDinSta", "OFF");

            dataGridViewDioOut.Columns[0].SortMode = DataGridViewColumnSortMode.NotSortable;
            dataGridViewDioOut.Columns[1].SortMode = DataGridViewColumnSortMode.NotSortable;
            dataGridViewDioOut.Columns[2].SortMode = DataGridViewColumnSortMode.NotSortable;
            dataGridViewDioOut.Columns[3].SortMode = DataGridViewColumnSortMode.NotSortable;

            dataGridViewDioOut.ColumnHeadersDefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridViewDioOut.Columns[0].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridViewDioOut.Columns[1].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridViewDioOut.Columns[2].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            dataGridViewDioOut.Columns[3].DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;

            dataGridViewDioOut.Columns[0].Width = 40;
            dataGridViewDioOut.Columns[1].Width = 180;
            dataGridViewDioOut.Columns[2].Width = 60;
            dataGridViewDioOut.Columns[3].Width = 60;

            dataGridViewDioOut.Columns[0].ReadOnly = true;
            dataGridViewDioOut.Columns[1].ReadOnly = false;
            dataGridViewDioOut.Columns[2].ReadOnly = true;
            dataGridViewDioOut.Columns[3].ReadOnly = true;

            dataGridViewDioOut.Columns[2].DefaultCellStyle.ForeColor = Color.White;
            dataGridViewDioOut.Columns[3].DefaultCellStyle.ForeColor = Color.White;

            for (int i = 0; i < _nDoutNum; i++)
            {
                strBuf = Convert.ToString(i).PadLeft(3, '0'); ;
                dataGridViewDioOut.Rows.Add(strBuf, "TBD", "ON", "OFF");
            }
            //dataGridViewDioOut.Rows[0].Cells[2] = new DataGridViewButtonCell();

            dataGridViewDioOut.RowHeadersVisible = false;

            _strFilePath = @"..\\Dout.txt";
            fsConfig = new FileStream(_strFilePath, FileMode.OpenOrCreate);
            srConfig = new StreamReader(fsConfig);

            for (int i = 0; i < _nDoutNum; i++)
            {
                strBuf = srConfig.ReadLine();
                if (strBuf != null)
                {
                    dataGridViewDioOut[1, i].Value = strBuf;
                }
                else
                {
                    dataGridViewDioOut[1, i].Value = "TBD";
                }
            }
            fsConfig.Close();
            _DataGridDoutLoad = true;

            //--------------------------------------------------------------------------------------------//
            toolStripStatusLabelOutput.Text = "Disconnected";
        }

        private void PmacTest_FormClosed(object sender, FormClosedEventArgs e)
        {
            pmacTask.StopPmacConnectTask();
            pmacTask.StopPmacDataTask();
            OPKClose(PmacData.nPmacDeviceNo);
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Task Event
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        public void UpdateForm()
        {
            UpdateMtData();
            UpdateManualData();
            UpdateMcData();
            UpdateWdData();
            UpdateVsData();
            UpdateIoStatus();
        }
        public void UpdateMcData()
        {
            radioButtonMcEcatCon.Checked = Convert.ToBoolean(PmacData.sMachine.nStaEcatCon);
            radioButtonMcAmpEna.Checked = Convert.ToBoolean(PmacData.sMachine.nStaAmpEna);
            radioButtonMcInPos.Checked = Convert.ToBoolean(PmacData.sMachine.nStaInPos);
            radioButtonMcHome.Checked = Convert.ToBoolean(PmacData.sMachine.nStaHomeFin);
            radioButtonMcProgRun.Checked = Convert.ToBoolean(PmacData.sMachine.nStaProgRun);
            radioButtonMcErr.Checked = Convert.ToBoolean(PmacData.sMachine.nStaError);

            if (PmacData.bPmacConnected == false) toolStripStatusLabelOutput.Text = "Disconnected";
            else
            {
                //toolStripStatusLabelOutput.Text = "Connected";
            }

        }
        public void UpdateMtData()
        {
            labelProgPos_wX.Text = (Convert.ToDouble(PmacData.sWelding.nStaProgPosWx) / 1000).ToString("N3");
            labelProgPos_wY.Text = (Convert.ToDouble(PmacData.sWelding.nStaProgPosWy) / 1000).ToString("N3");
            labelProgPos_wC.Text = (Convert.ToDouble(PmacData.sWelding.nStaProgPosWc) / 1000).ToString("N3");
            labelProgPos_sX.Text = (Convert.ToDouble(PmacData.sWelding.nStaProgPosSx) / 1000).ToString("N3");
            labelProgPos_sY.Text = (Convert.ToDouble(PmacData.sWelding.nStaProgPosSy) / 1000).ToString("N3");
            labelProgPos_vX.Text = (Convert.ToDouble(PmacData.sVision.nStaProgPosVx) / 1000).ToString("N3");
            labelProgPos_vY.Text = (Convert.ToDouble(PmacData.sVision.nStaProgPosVy) / 1000).ToString("N3");
            labelProgPos_vC.Text = (Convert.ToDouble(PmacData.sVision.nStaProgPosVc) / 1000).ToString("N3");

            labelMachPos_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nStaActPos) / 1000).ToString("N3");
            labelMachPos_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nStaActPos) / 1000).ToString("N3");
            labelMachPos_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nStaActPos) / 1000).ToString("N3");
            labelMachPos_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nStaActPos) / 1000).ToString("N3");
            labelMachPos_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nStaActPos) / 1000).ToString("N3");
            labelMachPos_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nStaActPos) / 1000).ToString("N3");
            labelMachPos_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nStaActPos) / 1000).ToString("N3");
            labelMachPos_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nStaActPos) / 1000).ToString("N3");

            labelMachVel_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nStaVelocity) / 1000).ToString("N3");
            labelMachVel_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nStaVelocity) / 1000).ToString("N3");
            labelMachVel_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nStaVelocity) / 1000).ToString("N3");
            labelMachVel_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nStaVelocity) / 1000).ToString("N3");
            labelMachVel_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nStaVelocity) / 1000).ToString("N3");
            labelMachVel_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nStaVelocity) / 1000).ToString("N3");
            labelMachVel_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nStaVelocity) / 1000).ToString("N3");
            labelMachVel_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nStaVelocity) / 1000).ToString("N3");

            labelLoad_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nStaLoad) / 10).ToString("N1");
            labelLoad_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nStaLoad) / 10).ToString("N1");
            labelLoad_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nStaLoad) / 10).ToString("N1");
            labelLoad_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nStaLoad) / 10).ToString("N1");
            labelLoad_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nStaLoad) / 10).ToString("N1");
            labelLoad_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nStaLoad) / 10).ToString("N1");
            labelLoad_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nStaLoad) / 10).ToString("N1");
            labelLoad_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nStaLoad) / 10).ToString("N1");
            //
            buttonAxisSta_AmpEna_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_AmpEna_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_AmpEna_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_AmpEna_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_AmpEna_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_AmpEna_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_AmpEna_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_AmpEna_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaAmpEna == 1) ? Color.Green : Color.DarkGray;

            buttonAxisSta_CloseLoop_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_CloseLoop_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_CloseLoop_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_CloseLoop_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_CloseLoop_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_CloseLoop_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_CloseLoop_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_CloseLoop_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaCloseLoop == 1) ? Color.Green : Color.DarkGray;

            buttonAxisSta_InPos_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaInPos == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_InPos_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaInPos == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_InPos_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaInPos == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_InPos_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaInPos == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_InPos_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaInPos == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_InPos_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaInPos == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_InPos_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaInPos == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_InPos_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaInPos == 1) ? Color.Green : Color.DarkGray;

            buttonAxisSta_HomeFin_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeFin_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeFin_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeFin_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeFin_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeFin_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeFin_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeFin_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaHomeFin == 1) ? Color.Green : Color.DarkGray;

            buttonAxisSta_HomeIng_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeIng_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeIng_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeIng_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeIng_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeIng_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeIng_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;
            buttonAxisSta_HomeIng_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaHomeIng == 1) ? Color.Green : Color.DarkGray;

            buttonAxisSta_LimitMinus_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitMinus_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitMinus_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitMinus_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitMinus_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitMinus_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitMinus_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitMinus_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaLimitMinus == 1) ? Color.Red : Color.DarkGray;

            buttonAxisSta_LimitPlus_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitPlus_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitPlus_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitPlus_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitPlus_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitPlus_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitPlus_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_LimitPlus_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaLimitPlus == 1) ? Color.Red : Color.DarkGray;

            buttonAxisSta_FollowingErr_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_FollowingErr_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_FollowingErr_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_FollowingErr_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_FollowingErr_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_FollowingErr_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_FollowingErr_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_FollowingErr_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaFollowingErr == 1) ? Color.Red : Color.DarkGray;

            buttonAxisSta_AmpFault_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_AmpFault_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_AmpFault_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_AmpFault_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_AmpFault_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_AmpFault_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_AmpFault_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_AmpFault_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaAmpFault == 1) ? Color.Red : Color.DarkGray;

            buttonAxisSta_EncLoss_wX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wX].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_EncLoss_wY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wY].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_EncLoss_wC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.wC].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_EncLoss_sX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sX].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_EncLoss_sY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.sY].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_EncLoss_vX.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vX].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_EncLoss_vY.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vY].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;
            buttonAxisSta_EncLoss_vC.BackColor = (PmacData.sMotor[(int)PmacData.Axis.vC].nStaEncLoss == 1) ? Color.Red : Color.DarkGray;

            labelVel_Welding.Text = (Convert.ToDouble(PmacData.sWelding.nStaVectorVel) / 1000).ToString("N3");
            labelVel_Vision.Text = (Convert.ToDouble(PmacData.sVision.nStaVectorVel) / 1000).ToString("N3");

            labelTime_Welding.Text = (Convert.ToDouble(PmacData.sWelding.nStaProgTime) / 1000).ToString("N3");
            labelTime_Vision.Text = (Convert.ToDouble(PmacData.sVision.nStaProgTime) / 1000).ToString("N3");
        }
        public void UpdateManualData()
        {
            if (tabControl1.SelectedTab == tabPageManual)
            {
                if (!textBoxJogSpeed_wX.Focused) textBoxJogSpeed_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nCmdJogSpeed) / 1000).ToString("N3");
                if (!textBoxJogSpeed_wY.Focused) textBoxJogSpeed_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nCmdJogSpeed) / 1000).ToString("N3");
                if (!textBoxJogSpeed_wC.Focused) textBoxJogSpeed_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nCmdJogSpeed) / 1000).ToString("N3");
                if (!textBoxJogSpeed_sX.Focused) textBoxJogSpeed_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nCmdJogSpeed) / 1000).ToString("N3");
                if (!textBoxJogSpeed_sY.Focused) textBoxJogSpeed_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nCmdJogSpeed) / 1000).ToString("N3");
                if (!textBoxJogSpeed_vX.Focused) textBoxJogSpeed_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nCmdJogSpeed) / 1000).ToString("N3");
                if (!textBoxJogSpeed_vY.Focused) textBoxJogSpeed_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nCmdJogSpeed) / 1000).ToString("N3");
                if (!textBoxJogSpeed_vC.Focused) textBoxJogSpeed_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nCmdJogSpeed) / 1000).ToString("N3");

                if (!textBoxJogTa_wX.Focused) textBoxJogTa_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nCmdJogTa)).ToString("N0");
                if (!textBoxJogTa_wY.Focused) textBoxJogTa_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nCmdJogTa)).ToString("N0");
                if (!textBoxJogTa_wC.Focused) textBoxJogTa_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nCmdJogTa)).ToString("N0");
                if (!textBoxJogTa_sX.Focused) textBoxJogTa_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nCmdJogTa)).ToString("N0");
                if (!textBoxJogTa_sY.Focused) textBoxJogTa_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nCmdJogTa)).ToString("N0");
                if (!textBoxJogTa_vX.Focused) textBoxJogTa_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nCmdJogTa)).ToString("N0");
                if (!textBoxJogTa_vY.Focused) textBoxJogTa_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nCmdJogTa)).ToString("N0");
                if (!textBoxJogTa_vC.Focused) textBoxJogTa_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nCmdJogTa)).ToString("N0");

                if (!textBoxJogTs_wX.Focused) textBoxJogTs_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nCmdJogTs)).ToString("N0");
                if (!textBoxJogTs_wY.Focused) textBoxJogTs_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nCmdJogTs)).ToString("N0");
                if (!textBoxJogTs_wC.Focused) textBoxJogTs_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nCmdJogTs)).ToString("N0");
                if (!textBoxJogTs_sX.Focused) textBoxJogTs_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nCmdJogTs)).ToString("N0");
                if (!textBoxJogTs_sY.Focused) textBoxJogTs_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nCmdJogTs)).ToString("N0");
                if (!textBoxJogTs_vX.Focused) textBoxJogTs_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nCmdJogTs)).ToString("N0");
                if (!textBoxJogTs_vY.Focused) textBoxJogTs_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nCmdJogTs)).ToString("N0");
                if (!textBoxJogTs_vC.Focused) textBoxJogTs_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nCmdJogTs)).ToString("N0");

                if (!textBoxJogAbs_wX.Focused) textBoxJogAbs_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nCmdJogAbsPos) / 1000).ToString("N3");
                if (!textBoxJogAbs_wY.Focused) textBoxJogAbs_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nCmdJogAbsPos) / 1000).ToString("N3");
                if (!textBoxJogAbs_wC.Focused) textBoxJogAbs_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nCmdJogAbsPos) / 1000).ToString("N3");
                if (!textBoxJogAbs_sX.Focused) textBoxJogAbs_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nCmdJogAbsPos) / 1000).ToString("N3");
                if (!textBoxJogAbs_sY.Focused) textBoxJogAbs_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nCmdJogAbsPos) / 1000).ToString("N3");
                if (!textBoxJogAbs_vX.Focused) textBoxJogAbs_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nCmdJogAbsPos) / 1000).ToString("N3");
                if (!textBoxJogAbs_vY.Focused) textBoxJogAbs_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nCmdJogAbsPos) / 1000).ToString("N3");
                if (!textBoxJogAbs_vC.Focused) textBoxJogAbs_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nCmdJogAbsPos) / 1000).ToString("N3");

                if (!textBoxJogInc_wX.Focused) textBoxJogInc_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nCmdJogIncDist) / 1000).ToString("N3");
                if (!textBoxJogInc_wY.Focused) textBoxJogInc_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nCmdJogIncDist) / 1000).ToString("N3");
                if (!textBoxJogInc_wC.Focused) textBoxJogInc_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nCmdJogIncDist) / 1000).ToString("N3");
                if (!textBoxJogInc_sX.Focused) textBoxJogInc_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nCmdJogIncDist) / 1000).ToString("N3");
                if (!textBoxJogInc_sY.Focused) textBoxJogInc_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nCmdJogIncDist) / 1000).ToString("N3");
                if (!textBoxJogInc_vX.Focused) textBoxJogInc_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nCmdJogIncDist) / 1000).ToString("N3");
                if (!textBoxJogInc_vY.Focused) textBoxJogInc_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nCmdJogIncDist) / 1000).ToString("N3");
                if (!textBoxJogInc_vC.Focused) textBoxJogInc_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nCmdJogIncDist) / 1000).ToString("N3");

                if (!textBoxHomeOffset_wX.Focused) textBoxHomeOffset_wX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wX].nCmdHomeOffset) / 1000).ToString("N3");
                if (!textBoxHomeOffset_wY.Focused) textBoxHomeOffset_wY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wY].nCmdHomeOffset) / 1000).ToString("N3");
                if (!textBoxHomeOffset_wC.Focused) textBoxHomeOffset_wC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.wC].nCmdHomeOffset) / 1000).ToString("N3");
                if (!textBoxHomeOffset_sX.Focused) textBoxHomeOffset_sX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sX].nCmdHomeOffset) / 1000).ToString("N3");
                if (!textBoxHomeOffset_sY.Focused) textBoxHomeOffset_sY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.sY].nCmdHomeOffset) / 1000).ToString("N3");
                if (!textBoxHomeOffset_vX.Focused) textBoxHomeOffset_vX.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vX].nCmdHomeOffset) / 1000).ToString("N3");
                if (!textBoxHomeOffset_vY.Focused) textBoxHomeOffset_vY.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vY].nCmdHomeOffset) / 1000).ToString("N3");
                if (!textBoxHomeOffset_vC.Focused) textBoxHomeOffset_vC.Text = (Convert.ToDouble(PmacData.sMotor[(int)PmacData.Axis.vC].nCmdHomeOffset) / 1000).ToString("N3");
            }

        }
        public void UpdateWdData()
        {
            if (!textBoxWeldingAccLimitX.Focused) textBoxWeldingAccLimitX.Text = Convert.ToString(PmacData.sWelding.nCmdAccLimitX);
            if (!textBoxWeldingAccLimitY.Focused) textBoxWeldingAccLimitY.Text = Convert.ToString(PmacData.sWelding.nCmdAccLimitY);
            if (!textBoxWeldingAccLimitC.Focused) textBoxWeldingAccLimitC.Text = Convert.ToString(PmacData.sWelding.nCmdAccLimitC);
            if (!textBoxWeldingVelLimitC.Focused) textBoxWeldingVelLimitC.Text = Convert.ToString(PmacData.sWelding.nCmdVelLimitC);

            if (!textBoxWeldingRdyPosX.Focused) textBoxWeldingRdyPosX.Text = (Convert.ToDouble(PmacData.sWelding.nCmdRdyPosX) / 1000).ToString("N3");
            if (!textBoxWeldingRdyPosY.Focused) textBoxWeldingRdyPosY.Text = (Convert.ToDouble(PmacData.sWelding.nCmdRdyPosY) / 1000).ToString("N3");
            if (!textBoxWeldingRdyPosC.Focused) textBoxWeldingRdyPosC.Text = (Convert.ToDouble(PmacData.sWelding.nCmdRdyPosC) / 1000).ToString("N3");
            if (!textBoxWeldingSrtPosX.Focused) textBoxWeldingSrtPosX.Text = (Convert.ToDouble(PmacData.sWelding.nCmdSrtPosX) / 1000).ToString("N3");
            if (!textBoxWeldingSrtPosY.Focused) textBoxWeldingSrtPosY.Text = (Convert.ToDouble(PmacData.sWelding.nCmdSrtPosY) / 1000).ToString("N3");
            if (!textBoxWeldingSrtPosC.Focused) textBoxWeldingSrtPosC.Text = (Convert.ToDouble(PmacData.sWelding.nCmdSrtPosC) / 1000).ToString("N3");
            if (!textBoxWeldingSrtVelX.Focused) textBoxWeldingSrtVelX.Text = Convert.ToString(PmacData.sWelding.nCmdSrtVelX);
            if (!textBoxWeldingSrtVelY.Focused) textBoxWeldingSrtVelY.Text = Convert.ToString(PmacData.sWelding.nCmdSrtVelY);
            if (!textBoxWeldingSrtVelC.Focused) textBoxWeldingSrtVelC.Text = Convert.ToString(PmacData.sWelding.nCmdSrtVelC);
            if (!textBoxWeldingRotOffsetX.Focused) textBoxWeldingRotOffsetX.Text = Convert.ToString(PmacData.sWelding.nCmdRotOffsetX);
            if (!textBoxWeldingRotOffsetY.Focused) textBoxWeldingRotOffsetY.Text = Convert.ToString(PmacData.sWelding.nCmdRotOffsetY);
            if (!textBoxWeldingTestShotTime.Focused) textBoxWeldingTestShotTime.Text = Convert.ToString(PmacData.sWelding.nCmdShotTime);

            if (!textBoxWeldingOutMode.Focused) textBoxWeldingOutMode.Text = Convert.ToString(PmacData.sWelding.nCmdOutMode);
            if (!textBoxWeldingRefVelocity.Focused) textBoxWeldingRefVelocity.Text = Convert.ToString(PmacData.sWelding.nCmdRefVel);
            if (!textBoxWeldingPfmPeriod.Focused) textBoxWeldingPfmPeriod.Text = Convert.ToString(PmacData.sWelding.nCmdPfmPeriod);
            if (!textBoxWeldingPfmOnTime.Focused) textBoxWeldingPfmOnTime.Text = Convert.ToString(PmacData.sWelding.nCmdPfmOnTime);
            if (!textBoxWeldingCorePowerSf.Focused) textBoxWeldingCorePowerSf.Text = Convert.ToString(PmacData.sWelding.nCmdCorePowerSf);
            if (!textBoxWeldingCoreRefPower.Focused) textBoxWeldingCoreRefPower.Text = Convert.ToString(PmacData.sWelding.nCmdCoreRefPower);
            if (!textBoxWeldingCoreMaxPower.Focused) textBoxWeldingCoreMaxPower.Text = Convert.ToString(PmacData.sWelding.nCmdCoreMaxPower);
            if (!textBoxWeldingCoreMinPower.Focused) textBoxWeldingCoreMinPower.Text = Convert.ToString(PmacData.sWelding.nCmdCoreMinPower);
            if (!textBoxWeldingCorePfmEna.Focused) textBoxWeldingCorePfmEna.Text = Convert.ToString(PmacData.sWelding.nCmdCorePfmEna);

            if (!textBoxWeldingRingPowerSf.Focused) textBoxWeldingRingPowerSf.Text = Convert.ToString(PmacData.sWelding.nCmdRingPowerSf);
            if (!textBoxWeldingRingRefPower.Focused) textBoxWeldingRingRefPower.Text = Convert.ToString(PmacData.sWelding.nCmdRingRefPower);
            if (!textBoxWeldingRingMaxPower.Focused) textBoxWeldingRingMaxPower.Text = Convert.ToString(PmacData.sWelding.nCmdRingMaxPower);
            if (!textBoxWeldingRingMinPower.Focused) textBoxWeldingRingMinPower.Text = Convert.ToString(PmacData.sWelding.nCmdRingMinPower);
            if (!textBoxWeldingRingPfmEna.Focused) textBoxWeldingRingPfmEna.Text = Convert.ToString(PmacData.sWelding.nCmdRingPfmEna);

            if (!textBoxWeldingWblEna.Focused) textBoxWeldingWblEna.Text = Convert.ToString(PmacData.sWelding.nCmdWblEna);
            if (!textBoxWeldingWblLen.Focused) textBoxWeldingWblLen.Text = Convert.ToString(PmacData.sWelding.nCmdWblLen);
            if (!textBoxWeldingWblDist.Focused) textBoxWeldingWblDist.Text = Convert.ToString(PmacData.sWelding.nCmdWblDist);
            if (!textBoxWeldingWblType.Focused) textBoxWeldingWblType.Text = Convert.ToString(PmacData.sWelding.nCmdWblType);
            if (!textBoxWeldingWblRatW.Focused) textBoxWeldingWblRatW.Text = Convert.ToString(PmacData.sWelding.nCmdWblRatioW);
            if (!textBoxWeldingWblRatL.Focused) textBoxWeldingWblRatL.Text = Convert.ToString(PmacData.sWelding.nCmdWblRatioL);
            if (!textBoxWeldingWblOffsetX.Focused) textBoxWeldingWblOffsetX.Text = Convert.ToString(PmacData.sWelding.nCmdWblOffsetX);
            if (!textBoxWeldingWblOffsetY.Focused) textBoxWeldingWblOffsetY.Text = Convert.ToString(PmacData.sWelding.nCmdWblOffsetY);
        }
        public void UpdateVsData()
        {
            if (!textBoxVisionAccLimitX.Focused) textBoxVisionAccLimitX.Text = Convert.ToString(PmacData.sVision.nCmdAccLimitX);
            if (!textBoxVisionAccLimitY.Focused) textBoxVisionAccLimitY.Text = Convert.ToString(PmacData.sVision.nCmdAccLimitY);
            if (!textBoxVisionAccLimitC.Focused) textBoxVisionAccLimitC.Text = Convert.ToString(PmacData.sVision.nCmdAccLimitC);
            if (!textBoxVisionVelLimitC.Focused) textBoxVisionVelLimitC.Text = Convert.ToString(PmacData.sVision.nCmdVelLimitC);

            if (!textBoxVisionRdyPosX.Focused) textBoxVisionRdyPosX.Text = (Convert.ToDouble(PmacData.sVision.nCmdRdyPosX) / 1000).ToString("N3");
            if (!textBoxVisionRdyPosY.Focused) textBoxVisionRdyPosY.Text = (Convert.ToDouble(PmacData.sVision.nCmdRdyPosY) / 1000).ToString("N3");
            if (!textBoxVisionRdyPosC.Focused) textBoxVisionRdyPosC.Text = (Convert.ToDouble(PmacData.sVision.nCmdRdyPosC) / 1000).ToString("N3");
            if (!textBoxVisionSrtPosX.Focused) textBoxVisionSrtPosX.Text = (Convert.ToDouble(PmacData.sVision.nCmdSrtPosX) / 1000).ToString("N3");
            if (!textBoxVisionSrtPosY.Focused) textBoxVisionSrtPosY.Text = (Convert.ToDouble(PmacData.sVision.nCmdSrtPosY) / 1000).ToString("N3");
            if (!textBoxVisionSrtPosC.Focused) textBoxVisionSrtPosC.Text = (Convert.ToDouble(PmacData.sVision.nCmdSrtPosC) / 1000).ToString("N3");
            if (!textBoxVisionSrtVelX.Focused) textBoxVisionSrtVelX.Text = Convert.ToString(PmacData.sVision.nCmdSrtVelX);
            if (!textBoxVisionSrtVelY.Focused) textBoxVisionSrtVelY.Text = Convert.ToString(PmacData.sVision.nCmdSrtVelY);
            if (!textBoxVisionSrtVelC.Focused) textBoxVisionSrtVelC.Text = Convert.ToString(PmacData.sVision.nCmdSrtVelC);
            if (!textBoxVisionRotOffsetX.Focused) textBoxVisionRotOffsetX.Text = Convert.ToString(PmacData.sVision.nCmdRotOffsetX);
            if (!textBoxVisionRotOffsetY.Focused) textBoxVisionRotOffsetY.Text = Convert.ToString(PmacData.sVision.nCmdRotOffsetY);
            if (!textBoxVisionTestShotTime.Focused) textBoxVisionTestShotTime.Text = Convert.ToString(PmacData.sVision.nCmdShotTime);

            if (!textBoxVisionRefVelocity.Focused) textBoxVisionRefVelocity.Text = Convert.ToString(PmacData.sVision.nCmdRefVel);
            if (!textBoxVisionTrigPeriod.Focused) textBoxVisionTrigPeriod.Text = Convert.ToString(PmacData.sVision.nCmdPeriod);
            if (!textBoxVisionTrigDuty.Focused) textBoxVisionTrigDuty.Text = Convert.ToString(PmacData.sVision.nCmdDuty);
        }
        public void UpdateIoStatus()
        {
            for (int i = 0; i < _nDinNum; i++)
            {
                dataGridViewDioIn[2, i].Style.BackColor = (PmacData.bDioIn[i]) ? Color.Green : Color.DarkRed;
                dataGridViewDioIn[2, i].Value = (PmacData.bDioIn[i]) ? "ON" : "OFF";
            }
            if (dataGridViewDioIn.CurrentCell != null) dataGridViewDioIn.CurrentCell.Style.SelectionBackColor = dataGridViewDioIn.CurrentCell.Style.BackColor;

            for (int i = 0; i < _nDoutNum; i++)
            {
                dataGridViewDioOut[2, i].Style.BackColor = (PmacData.bDioOut[i]) ? Color.Green : Color.LightGray;
                dataGridViewDioOut[3, i].Style.BackColor = (PmacData.bDioOut[i]) ? Color.LightGray : Color.DarkRed;
            }
            if (dataGridViewDioOut.CurrentCell != null) dataGridViewDioOut.CurrentCell.Style.SelectionBackColor = dataGridViewDioOut.CurrentCell.Style.BackColor;
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Connection Pannel
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void buttonConnect_Click(object sender, EventArgs e)
        {
            Int32 nRet;
            UInt32 uIPAddress;
            String[] strIP = new String[4];

            OPKIsConnected(PmacData.nPmacDeviceNo, out nRet);
            if (nRet != 1)
            {
                strIP = maskedTextBoxIpAddr.Text.Split('.');
                uIPAddress = (Convert.ToUInt32(strIP[0]) << 24) | (Convert.ToUInt32(strIP[1]) << 16) | (Convert.ToUInt32(strIP[2]) << 8) | Convert.ToUInt32(strIP[3]);
                nRet = OPKOpen(uIPAddress, Convert.ToInt32(OPK_DEVICE_MODE.ODM_DualChannel), out PmacData.nPmacDeviceNo);

                if ((OPK_RETURN_CODE)nRet == OPK_RETURN_CODE.ORC_Ok)
                {
                    pmacTask.StartPmacConnectTask(this);
                    pmacTask.StartPmacDataTask();
                    toolStripStatusLabelOutput.Text = "Connected";

                    Int32 nReturn = OPK.OPKRegisterForEventA(PmacData.nPmacDeviceNo, Handle, null);
                }
                else
                {
                    MessageBox.Show("연결실패");
                }
                //System.Diagnostics.Debug.WriteLine(nRet);
            }
        }
        private void buttonDisConnect_Click(object sender, EventArgs e)
        {
            pmacTask.StopPmacConnectTask();
            pmacTask.StopPmacDataTask();
            OPKClose(PmacData.nPmacDeviceNo);
            toolStripStatusLabelOutput.Text = "Disconnected";
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Digital In/Out
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void dataGridViewDioIn_CellValueChanged(object sender, DataGridViewCellEventArgs e)
        {
            if (_DataGridDinLoad == true)
            {
                StreamWriter swDin;
                _strFilePath = @"..\\Din.txt";
                swDin = new StreamWriter(_strFilePath);

                if (e.ColumnIndex == 1)
                {
                    for (int i = 0; i < _nDinNum; i++)
                    {
                        if (dataGridViewDioIn[1, i].Value != null)
                        {
                            swDin.WriteLine(dataGridViewDioIn[1, i].Value.ToString());
                        }
                    }
                }
                swDin.Close();
            }
        }
        private void dataGridViewDioOut_CellValueChanged(object sender, DataGridViewCellEventArgs e)
        {
            if (_DataGridDoutLoad == true)
            {
                StreamWriter swDout;
                _strFilePath = @"..\\Dout.txt";
                swDout = new StreamWriter(_strFilePath);

                if (e.ColumnIndex == 1)
                {
                    for (int i = 0; i < _nDoutNum; i++)
                    {
                        if (dataGridViewDioOut[1, i].Value != null)
                        {
                            swDout.WriteLine(dataGridViewDioOut[1, i].Value.ToString());
                        }
                    }
                }
                swDout.Close();
            }
        }
        private void dataGridViewDioOut_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdIoAdd = 0;
            Int32 nCmdValue = 0;

            int nSelectRow = 0;
            int nSelectColumn = 0;
            nSelectRow = e.RowIndex;
            nSelectColumn = e.ColumnIndex;

            if (nSelectRow == -1) return;       // 헤더 클릭

            nCmdIoAdd = Convert.ToInt32(Math.Floor(Convert.ToDouble(nSelectRow) / 16));
            nCmdAdd = Convert.ToInt32(PmacData.nSendIoDataStartAdd / 4 + nCmdIoAdd);
            nCmdValue = PmacData.nDioOut[nCmdIoAdd];

            if (nSelectColumn == 2)
            {
                nCmdValue = nCmdValue | (0x01 << (nSelectRow % 16));
            }
            else if (nSelectColumn == 3)
            {
                nCmdValue = nCmdValue & ~(0x01 << (nSelectRow % 16));
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// File Download
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void buttonFileOpen_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Title = "열기";
            openFileDialog.Filter = "PPMAC Program ( *.pmc) | *.pmc|NC Program ( *.nc) | *.nc|Text File ( *.txt) | *.txt|모든 파일 (*.*) | *.*;";

            DialogResult Dr = openFileDialog.ShowDialog();
            if (Dr == DialogResult.OK)
            {
                _strDownPath = openFileDialog.FileName;
                labelFilePath.Text = _strDownPath;
                richTextBoxFileDownload.LoadFile(_strDownPath, RichTextBoxStreamType.PlainText);

                progressBarFileDownload.Value = 0;
                toolStripStatusLabelOutput.Text = "File Open !  ";
            }
        }

        private void buttonFileDown_Click(object sender, EventArgs e)
        {
            Int32 nReturn;
            if (_strDownPath == null)
            {
                MessageBox.Show("파일이 지정되지 않았습니다.");
            }
            else if(_DownloadProgress == true)
            {
                MessageBox.Show("파일 다운로드가 진행중입니다.");
            }
            else
            {
                nReturn = OPKDownloadRunA(PmacData.nPmacDeviceNo, Convert.ToInt32(OPK_DOWNLOAD_MODE.ODM_FileToAutoAndRun), Encoding.UTF8.GetBytes(_strDownPath));
                if(nReturn != Convert.ToInt32(OPK_RETURN_CODE.ORC_Ok))
                {
                    MessageBox.Show("파일 다운로드 실패 : " + nReturn.ToString());
                    return;
                }
                else
                {
                    toolStripStatusLabelOutput.Text = "Download Start !  ";
                    _DownloadProgress = true;
                }
            }
        }

        bool _DownloadProgress = false;
        int _Cnt_Start = 0; 
        protected override void WndProc(ref Message message)
        {
            if (message.Msg == Convert.ToInt32(OPK_EVENT_MESSAGE.OPK_WM_EVENT))
            {
                COPYDATASTRUCT cds = (COPYDATASTRUCT)Marshal.PtrToStructure(message.LParam, typeof(COPYDATASTRUCT));
                _Cnt_Start++;
                 System.Diagnostics.Debug.WriteLine("WndProc : " + _Cnt_Start + "\n\r");

                switch (cds.dwData.ToInt32() & 0xFFFF)
                {
                    case (Int32)OPK_EVENT_TYPE.OET_DownloadProgress: // Progress
                        progressBarFileDownload.Value = Convert.ToInt32(cds.cbData);
                        if (cds.cbData == 100) _DownloadProgress = false;
                        break;

                    case (Int32)OPK_EVENT_TYPE.OET_DownloadStringA: // Message
                        AddLine(cds.lpData);
                        break;
                }
            }

            base.WndProc(ref message);
        }

        public void AddLine(string strLine)
        {
            if (strLine != "")
            {
                bool cCaptOk = strLine.Contains("EOF");
                bool cCaptNg = strLine.Contains("error");

                if (cCaptOk)
                {
                    toolStripStatusLabelOutput.Text = "File Download Succese !  ";
                }
                else
                {
                    toolStripStatusLabelOutput.Text = strLine;
                }
                System.Diagnostics.Debug.WriteLine(strLine);
            }
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Machine Command Button
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void buttonMachine_MouseDown(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 1;

            switch (sender)
            {
                case Button button when sender == buttonMcServoOn:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcServoOn);
                    break;
                case Button button when sender == buttonMcServoOff:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcServoOff);
                    break;
                case Button button when sender == buttonMcHomeStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcHomeStart);
                    break;
                case Button button when sender == buttonMcHomeAbort:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcHomeAbort);
                    break;
                case Button button when sender == buttonMcFsave:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcFsave);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        private void buttonMachine_MouseUp(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;

            switch (sender)
            {
                case Button button when sender == buttonMcServoOn:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcServoOn);
                    break;
                case Button button when sender == buttonMcServoOff:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcServoOff);
                    break;
                case Button button when sender == buttonMcHomeStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcHomeStart);
                    break;
                case Button button when sender == buttonMcHomeAbort:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcHomeAbort);
                    break;
                case Button button when sender == buttonMcFsave:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMcDataStartAdd / 4 + PmacData.uIdxCmdMcFsave);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Manual Command Value
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void textBoxJog_Enter(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.PeachPuff;
            }
        }

        private void textBoxJog_Leave(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.White;
            }
        }

        private void textBoxJog_KeyPress(object sender, KeyPressEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;

            int[] nMtrIdx = new int[32];
            nMtrIdx[1] = (int)PmacData.Axis.wX - 1;
            nMtrIdx[2] = (int)PmacData.Axis.wY - 1;
            nMtrIdx[3] = (int)PmacData.Axis.wC - 1;
            nMtrIdx[4] = (int)PmacData.Axis.sX - 1;
            nMtrIdx[5] = (int)PmacData.Axis.sY - 1;
            nMtrIdx[6] = (int)PmacData.Axis.vX - 1;
            nMtrIdx[7] = (int)PmacData.Axis.vY - 1;
            nMtrIdx[8] = (int)PmacData.Axis.vC - 1;

            int row = 0;
            int col = 0;

            if (e.KeyChar == 13)
            {
                if (sender is TextBox textBox)
                {
                    row = tableLayoutPanelJog.GetRow(textBox);
                    col = tableLayoutPanelJog.GetColumn(textBox);
                    try
                    {
                        switch (col)
                        {
                            case 1:
                                nCmdValue = Convert.ToInt32(Convert.ToDouble(textBox.Text) * 1000);
                                nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nMtrIdx[row] * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogSpeed);
                                break;
                            case 2:
                                nCmdValue = Convert.ToInt32(Convert.ToDouble(textBox.Text));
                                nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nMtrIdx[row] * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogTa);
                                break;
                            case 3:
                                nCmdValue = Convert.ToInt32(Convert.ToDouble(textBox.Text));
                                nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nMtrIdx[row] * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogTs);
                                break;
                            case 4:
                                nCmdValue = Convert.ToInt32(Convert.ToDouble(textBox.Text) * 1000);
                                nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nMtrIdx[row] * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogAbsPos);
                                break;
                            case 5:
                                nCmdValue = Convert.ToInt32(Convert.ToDouble(textBox.Text) * 1000);
                                nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nMtrIdx[row] * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogIncDist);
                                break;
                            case 6:
                                nCmdValue = Convert.ToInt32(Convert.ToDouble(textBox.Text) * 1000);
                                nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nMtrIdx[row] * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrHomeOffset);
                                break;
                        }
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }

                    OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    textBox.BackColor = Color.White;
                }

            }
        }

        private void textBoxMdi_Enter(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.PeachPuff;
            }
        }

        private void textBoxMdi_Leave(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.White;
            }
        }

        private void textBoxMdi_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.White;
            }
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Manual Command Button
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void buttonJogSel_Click(object sender, MouseEventArgs e)
        {
            switch (sender)
            {
                case Button button when sender == buttonJogSel_wX:
                    _nJogSelIdx = (int)PmacData.Axis.wX;
                    buttonJogSel_wX.BackColor = Color.Aqua;
                    buttonJogSel_wY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wC.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vC.BackColor = System.Drawing.SystemColors.Control;
                    break;
                case Button button when sender == buttonJogSel_wY:
                    _nJogSelIdx = (int)PmacData.Axis.wY;
                    buttonJogSel_wX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wY.BackColor = Color.Aqua;
                    buttonJogSel_wC.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vC.BackColor = System.Drawing.SystemColors.Control;
                    break;
                case Button button when sender == buttonJogSel_wC:
                    _nJogSelIdx = (int)PmacData.Axis.wC;
                    buttonJogSel_wX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wC.BackColor = Color.Aqua;
                    buttonJogSel_sX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vC.BackColor = System.Drawing.SystemColors.Control;
                    break;
                case Button button when sender == buttonJogSel_sX:
                    _nJogSelIdx = (int)PmacData.Axis.sX;
                    buttonJogSel_wX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wC.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sX.BackColor = Color.Aqua;
                    buttonJogSel_sY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vC.BackColor = System.Drawing.SystemColors.Control;
                    break;
                case Button button when sender == buttonJogSel_sY:
                    _nJogSelIdx = (int)PmacData.Axis.sY;
                    buttonJogSel_wX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wC.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sY.BackColor = Color.Aqua;
                    buttonJogSel_vX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vC.BackColor = System.Drawing.SystemColors.Control;
                    break;
                case Button button when sender == buttonJogSel_vX:
                    _nJogSelIdx = (int)PmacData.Axis.vX;
                    buttonJogSel_wX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wC.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vX.BackColor = Color.Aqua;
                    buttonJogSel_vY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vC.BackColor = System.Drawing.SystemColors.Control;
                    break;
                case Button button when sender == buttonJogSel_vY:
                    _nJogSelIdx = (int)PmacData.Axis.vY;
                    buttonJogSel_wX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wC.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vY.BackColor = Color.Aqua;
                    buttonJogSel_vC.BackColor = System.Drawing.SystemColors.Control;
                    break;
                case Button button when sender == buttonJogSel_vC:
                    _nJogSelIdx = (int)PmacData.Axis.vC;
                    buttonJogSel_wX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_wC.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_sY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vX.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vY.BackColor = System.Drawing.SystemColors.Control;
                    buttonJogSel_vC.BackColor = Color.Aqua;
                    break;
            }
        }
        private void buttonJog_MouseDown(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 1;
            Int32 nJogSel = 0;
            if (_nJogSelIdx <= 0 || _nJogSelIdx > PmacData.nMtrNum)
            {
                MessageBox.Show("축을 선택을 해 주세요.");
                return;
            }

            nJogSel = _nJogSelIdx - 1;

            switch (sender)
            {
                case Button button when sender == buttonServoOn:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrServoOn);
                    break;
                case Button button when sender == buttonServoOff:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrServoOff);
                    break;
                case Button button when sender == buttonHomeStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrHomeStart);
                    break;
                case Button button when sender == buttonHomeAbort:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrHomeAbort);
                    break;
                case Button button when sender == buttonJogAbs:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogAbsMove);
                    break;
                case Button button when sender == buttonJogInc:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogIncMove);
                    break;
                case Button button when sender == buttonJogPlus:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogContPlus);
                    break;
                case Button button when sender == buttonJogMinus:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogContMinus);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        private void buttonJog_MouseUp(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;
            Int32 nJogSel = 0;
            if (_nJogSelIdx <= 0 || _nJogSelIdx > PmacData.nMtrNum)
            {
                MessageBox.Show("축을 선택을 해 주세요.");
                return;
            }
            nJogSel = _nJogSelIdx - 1;

            switch (sender)
            {
                case Button button when sender == buttonServoOn:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrServoOn);
                    break;
                case Button button when sender == buttonServoOff:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrServoOff);
                    break;
                case Button button when sender == buttonHomeStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrHomeStart);
                    break;
                case Button button when sender == buttonHomeAbort:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrHomeAbort);
                    break;
                case Button button when sender == buttonJogAbs:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogAbsMove);
                    break;
                case Button button when sender == buttonJogInc:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogIncMove);
                    break;
                case Button button when sender == buttonJogPlus:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogContPlus);
                    break;
                case Button button when sender == buttonJogMinus:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendMtrDataStartAdd / 4 + nJogSel * PmacData.uMtrDataOffset + PmacData.uIdxCmdMtrJogContMinus);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        private void buttonMdi_MouseDown(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;

            switch (sender)
            {
                case Button button when sender == buttonMdiMoveW1:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos1_wX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);

                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos1_wY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);

                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos1_wC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);

                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;

                case Button button when sender == buttonMdiMoveW2:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos2_wX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos2_wY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos2_wC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;

                case Button button when sender == buttonMdiMoveW3:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos3_wX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos3_wY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos3_wC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;

                case Button button when sender == buttonMdiMoveW4:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos4_wX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos4_wY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos4_wC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;
                case Button button when sender == buttonMdiMoveV1:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos1_vX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);

                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos1_vY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);

                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos1_vC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);

                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;

                case Button button when sender == buttonMdiMoveV2:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos2_vX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos2_vY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos2_vC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;

                case Button button when sender == buttonMdiMoveV3:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos3_vX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos3_vY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos3_vC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;

                case Button button when sender == buttonMdiMoveV4:
                    try
                    {
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos4_vX.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosX);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos4_vY.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosY);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = Convert.ToInt32(Convert.ToDouble(textBoxMdiPos4_vC.Text) * 1000.0);
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiPosC);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                        nCmdValue = 1;
                        nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiStart);
                        OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                    }
                    catch (FormatException e1)
                    {
                        MessageBox.Show(e1.Message);
                        return;
                    }
                    break;
            }
        }
        private void buttonMdi_MouseUp(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;
            if (sender == buttonMdiMoveW1 || sender == buttonMdiMoveW2 || sender == buttonMdiMoveW3 || sender == buttonMdiMoveW4)
            {
                nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdMdiStart);
            }
            else if (sender == buttonMdiMoveV1 || sender == buttonMdiMoveV2 || sender == buttonMdiMoveV3 || sender == buttonMdiMoveV4)
            {
                nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsMdiStart);
            }

            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
         }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Welding Command Value
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void textBoxWelding_Enter(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.PeachPuff;
            }
        }

        private void textBoxWelding_Leave(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.White;
            }
        }
        private void textBoxWelding_KeyPress(object sender, KeyPressEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;

            if (e.KeyChar == 13)
            {
                try
                {
                    switch (sender)
                    {
                        case TextBox textbox when sender == textBoxWeldingAccLimitX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdAccLimitX);
                            break;
                        case TextBox textbox when sender == textBoxWeldingAccLimitY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdAccLimitY);
                            break;
                        case TextBox textbox when sender == textBoxWeldingAccLimitC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdAccLimitC);
                            break;
                        case TextBox textbox when sender == textBoxWeldingVelLimitC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdVelLimitC);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRdyPosX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRdyPosX);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRdyPosY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRdyPosY);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRdyPosC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRdyPosC);
                            break;
                        case TextBox textbox when sender == textBoxWeldingSrtPosX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtPosX);
                            break;
                        case TextBox textbox when sender == textBoxWeldingSrtPosY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtPosY);
                            break;
                        case TextBox textbox when sender == textBoxWeldingSrtPosC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtPosC);
                            break;
                        case TextBox textbox when sender == textBoxWeldingSrtVelX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtVelX);
                            break;
                        case TextBox textbox when sender == textBoxWeldingSrtVelY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtVelY);
                            break;
                        case TextBox textbox when sender == textBoxWeldingSrtVelC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtVelC);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRotOffsetX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRotOffsetX);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRotOffsetY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRotOffsetY);
                            break;
                        case TextBox textbox when sender == textBoxWeldingTestShotTime:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdShotTime);
                            break;
                        case TextBox textbox when sender == textBoxWeldingOutMode:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdOutMode);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRefVelocity:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRefVel);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblEna:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblEna);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblLen:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblLen);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblDist:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblDist);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblType:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblType);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblRatW:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblRatioW);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblRatL:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblRatioL);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblOffsetX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblOffsetX);
                            break;
                        case TextBox textbox when sender == textBoxWeldingWblOffsetY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdWblOffsetY);
                            break;
                        case TextBox textbox when sender == textBoxWeldingCorePowerSf:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdCorePowerSf);
                            break;
                        case TextBox textbox when sender == textBoxWeldingCoreRefPower:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdCoreRefPower);
                            break;
                        case TextBox textbox when sender == textBoxWeldingCoreMaxPower:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdCoreMaxPower);
                            break;
                        case TextBox textbox when sender == textBoxWeldingCoreMinPower:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdCoreMinPower);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRingPowerSf:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRingPowerSf);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRingRefPower:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRingRefPower);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRingMaxPower:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRingMaxPower);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRingMinPower:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRingMinPower);
                            break;
                        case TextBox textbox when sender == textBoxWeldingCorePfmEna:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdCorePfmEna);
                            break;
                        case TextBox textbox when sender == textBoxWeldingRingPfmEna:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRingPfmEna);
                            break;
                        case TextBox textbox when sender == textBoxWeldingPfmPeriod:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdPfmPeriod);
                            break;
                        case TextBox textbox when sender == textBoxWeldingPfmOnTime:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdPfmOnTime);
                            break;
                    }
                    OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                }
                catch (FormatException e1)
                {
                    MessageBox.Show(e1.Message);
                    return;
                }

                if (sender is TextBox textBox)
                {
                    textBox.BackColor = Color.White;
                }
            }
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Welding Command Button
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void buttonWelding_MouseDown(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 1;
 
            switch (sender)
            {
                case Button button when sender == buttonWeldingEsdrBwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdEsyderBwd);
                    break;
                case Button button when sender == buttonWeldingEsdrFwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdEsyderFwd);
                    break;
                case Button button when sender == buttonWeldingRdyPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRdyPosMove);
                    break;
                case Button button when sender == buttonWeldingRdyPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRdyPosStop);
                    break;
                case Button button when sender == buttonWeldingSrtPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtPosMove);
                    break;
                case Button button when sender == buttonWeldingSrtPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtPosStop);
                    break;
                case Button button when sender == buttonWeldingProgStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdProgStart);
                    break;
                case Button button when sender == buttonWeldingProgStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdProgAbort);
                    break;
                case Button button when sender == buttonWeldingTestShot:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdTestShot);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        private void buttonWelding_MouseUp(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;

            switch (sender)
            {
                case Button button when sender == buttonWeldingEsdrBwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdEsyderBwd);
                    break;
                case Button button when sender == buttonWeldingEsdrFwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdEsyderFwd);
                    break;
                case Button button when sender == buttonWeldingRdyPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRdyPosMove);
                    break;
                case Button button when sender == buttonWeldingRdyPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdRdyPosStop);
                    break;
                case Button button when sender == buttonWeldingSrtPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtPosMove);
                    break;
                case Button button when sender == buttonWeldingSrtPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdSrtPosStop);
                    break;
                case Button button when sender == buttonWeldingProgStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdProgStart);
                    break;
                case Button button when sender == buttonWeldingProgStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdProgAbort);
                    break;
                case Button button when sender == buttonWeldingTestShot:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendWdDataStartAdd / 4 + PmacData.uIdxCmdWdTestShot);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Vision Command Value
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void textBoxVision_Enter(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.PeachPuff;
            }
        }

        private void textBoxVision_Leave(object sender, EventArgs e)
        {
            if (sender is TextBox textBox)
            {
                textBox.BackColor = Color.White;
            }
        }
        private void textBoxVision_KeyPress(object sender, KeyPressEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;

            if (e.KeyChar == 13)
            {
                try
                {
                    switch (sender)
                    {
                        case TextBox textbox when sender == textBoxVisionAccLimitX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsAccLimitX);
                            break;
                        case TextBox textbox when sender == textBoxVisionAccLimitY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsAccLimitY);
                            break;
                        case TextBox textbox when sender == textBoxVisionAccLimitC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsAccLimitC);
                            break;
                        case TextBox textbox when sender == textBoxVisionVelLimitC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsVelLimitC);
                            break;
                        case TextBox textbox when sender == textBoxVisionRdyPosX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRdyPosX);
                            break;
                        case TextBox textbox when sender == textBoxVisionRdyPosY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRdyPosY);
                            break;
                        case TextBox textbox when sender == textBoxVisionRdyPosC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRdyPosC);
                            break;
                        case TextBox textbox when sender == textBoxVisionSrtPosX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtPosX);
                            break;
                        case TextBox textbox when sender == textBoxVisionSrtPosY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtPosY);
                            break;
                        case TextBox textbox when sender == textBoxVisionSrtPosC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text) * 1000.0);
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtPosC);
                            break;
                        case TextBox textbox when sender == textBoxVisionSrtVelX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtVelX);
                            break;
                        case TextBox textbox when sender == textBoxVisionSrtVelY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtVelY);
                            break;
                        case TextBox textbox when sender == textBoxVisionSrtVelC:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtVelC);
                            break;
                        case TextBox textbox when sender == textBoxVisionRotOffsetX:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRotOffsetX);
                            break;
                        case TextBox textbox when sender == textBoxVisionRotOffsetY:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRotOffsetY);
                            break;
                        case TextBox textbox when sender == textBoxVisionTestShotTime:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsShotTime);
                            break;
                        case TextBox textbox when sender == textBoxVisionRefVelocity:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRefVel);
                            break;
                        case TextBox textbox when sender == textBoxVisionTrigPeriod:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsPeriod);
                            break;
                        case TextBox textbox when sender == textBoxVisionTrigDuty:
                            nCmdValue = Convert.ToInt32(Convert.ToDouble(textbox.Text));
                            nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsDuty);
                            break;
                     }
                    OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
                }
                catch (FormatException e1)
                {
                    MessageBox.Show(e1.Message);
                    return;
                }

                if (sender is TextBox textBox)
                {
                    textBox.BackColor = Color.White;
                }
            }
        }
        #endregion
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// Vision Command Button
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        #region
        private void buttonVision_MouseDown(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 1;

            switch (sender)
            {
                case Button button when sender == buttonVisionEsdrBwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsEsyderBwd);
                    break;
                case Button button when sender == buttonVisionEsdrFwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsEsyderFwd);
                    break;
                case Button button when sender == buttonVisionRdyPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRdyPosMove);
                    break;
                case Button button when sender == buttonVisionRdyPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRdyPosStop);
                    break;
                case Button button when sender == buttonVisionSrtPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtPosMove);
                    break;
                case Button button when sender == buttonVisionSrtPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtPosStop);
                    break;
                case Button button when sender == buttonVisionProgStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsProgStart);
                    break;
                case Button button when sender == buttonVisionProgStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsProgAbort);
                    break;
                case Button button when sender == buttonVisionTestShot:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsTestShot);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        private void buttonVision_MouseUp(object sender, MouseEventArgs e)
        {
            Int32 nCmdAdd = 0;
            Int32 nCmdValue = 0;

            switch (sender)
            {
                case Button button when sender == buttonVisionEsdrBwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsEsyderBwd);
                    break;
                case Button button when sender == buttonVisionEsdrFwd:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsEsyderFwd);
                    break;
                case Button button when sender == buttonVisionRdyPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRdyPosMove);
                    break;
                case Button button when sender == buttonVisionRdyPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsRdyPosStop);
                    break;
                case Button button when sender == buttonVisionSrtPosMove:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtPosMove);
                    break;
                case Button button when sender == buttonVisionSrtPosStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsSrtPosStop);
                    break;
                case Button button when sender == buttonVisionProgStart:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsProgStart);
                    break;
                case Button button when sender == buttonVisionProgStop:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsProgAbort);
                    break;
                case Button button when sender == buttonVisionTestShot:
                    nCmdAdd = Convert.ToInt32(PmacData.nSendVsDataStartAdd / 4 + PmacData.uIdxCmdVsTestShot);
                    break;
            }
            OPKSetUserBufferOneInteger(PmacData.nPmacDeviceNo, nCmdAdd, nCmdValue);
        }
        #endregion
    }
}
