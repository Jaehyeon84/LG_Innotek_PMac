using System;
using System.Runtime.InteropServices;

namespace ONSYS
{
    #region Enum 정의
    public enum OPK_RETURN_CODE
    {
        ORC_Ok = 0,                 // 에러 없음
        ORC_NotSupported = 111,     // 지원하지 않음
        ORC_InvalidDevice = 121,    // 장치번호가 유효하지 않음
        ORC_InvalidParameter = 122, // 함수의 파라미터가 잘못됨
        ORC_Failed = 131,           // 다양한 오류로 인한 실패
        ORC_Opened = 141,           // 현재 장치에 Open 함수를 실행한 상태임
        ORC_NotOpened = 142,        // 현재 통신에 Open 함수를 실행하지 않은 상태임
        ORC_OutOfRange = 151,       // 
        ORC_DataRemains = 161,      // GetResponse의 응답할 내용이 남아 있음
        ORC_CmdLengthExceeds = 162, // GetResponse의 명령어가 4095 Byte를 초과 했음
        ORC_ResLengthExceeds = 163, // GetResponse의 응답할 내용의 길이가 지정한 버퍼의 크기보다 초과 했음
        ORC_Downloading = 171       // 다운로드 중인 상태
    };

    public enum OPK_DEVICE_MODE
    {
        ODM_SingleChannel = 10,
        ODM_Comfort = 10,           // 일반모드이며 프로그램 실행 중 다운로드 기능을 사용하지 않거나 1 ~ 2회 정도 사용하는 경우 적합함
        ODM_DualChannel = 11,		// 이중채널 모드이며 빈번한 다운로드 기능을 사용할 경우 적합함, ODM_Comfort 모드보다 Open 시간이 길지만 다운로드 속도가 빠름
        ODM_Developer = 20,			// 개발자 모드
        ODM_SecureShell = 20
    };

    public enum OPK_CPU_TYPE
    {
        OCT_NONE = 0,
        OCT_APM86xxx = 12,
        OCT_LS1021A = 21,
        OCT_LS1043A = 22
    };

    public enum OPK_DOWNLOAD_MODE
    {
        ODM_FileToFtp = 0,          // 파일을 Temp 디렉토리에 다운로드 함
        ODM_FileToAutoAndRun = 10,  // 파일 사이즈에 따라서 ODM_FileToFtpAndRun 또는 ODM_FileToFtpAndRun으로 동작함
        ODM_FileToFtpAndRun = 11,   // 파일을 다운로드한 후 실행 함
        ODM_FileToBufferAndRun = 12 // 파일을 메모리 버퍼로 바로 올림
    };

    public enum OPK_EVENT_TYPE
    {
        OET_DownloadProgress = 10,  // 다운로드 진행률
        OET_DownloadStringA = 11,   // 다운로드 메시지, Single character
        OET_DownloadStringW = 12,   // 다운로드 메시지, Wide character
        OET_GetSendsStringA = 21,   // GetSends 메시지, Single character
        OET_GetSendsStringW = 22    // GetSends 메시지, Wide character
    };

    public enum OPK_EVENT_MESSAGE
    {
        OPK_WM_EVENT = 0x1216
    };

    public struct COPYDATASTRUCT
    {
        public IntPtr dwData;
        public UInt32 cbData;
        [MarshalAs(UnmanagedType.LPStr)]
        public String lpData;
    }

    public delegate void PEventMessageA(Int32 nEventType, Int32 nMessage, String lpcMessage);

    #endregion

    public class OPK
    {
        public const String strDllName = "opk.dll";

        #region 라이브러리 초기화 및 관련 정보

        [DllImport(strDllName)]
        public static extern Int32 OPKIsDeviceDetect(UInt32 uIPAddress);

        [DllImport(strDllName)]
        public static extern Int32 OPKOpen(UInt32 uIPAddress, Int32 nDeviceMode, out Int32 pnDeviceID);

        [DllImport(strDllName)]
        public static extern Int32 OPKClose(Int32 nDeviceID);

        [DllImport(strDllName)]
        public static extern Int32 OPKIsConnected(Int32 nDeviceID, out Int32 pbIsConnected);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetIPAddress(Int32 nDeviceID, out UInt32 puIPAddress);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetDeviceMode(Int32 nDeviceID, out Int32 pnDeviceMode);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetCPUType(Int32 nDeviceID, out Int32 pnCPUType);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetVersion(Int32 nDeviceID, out UInt32 puOpkVersion, out UInt32 puHsbVersion);

        #endregion

        #region Command 통신

        [DllImport(strDllName)]
        public static extern Int32 OPKGetResponseA(Int32 nDeviceID, Byte[] lpcCommand, Byte[] lpResponse, Int32 nLength);

        [DllImport(strDllName)]
        public static extern Int32 OPKSendCommandA(Int32 nDeviceID, Byte[] lpcCommand);

        [DllImport(strDllName)]
        public static extern Int32 OPKScriptRunA(Int32 nDeviceID, Byte[] lpcScript, Byte[] lpResponse, Int32 nLength);

        [DllImport(strDllName)]
        public static extern Int32 OPKDownloadRunA(Int32 nDeviceID, Int32 nDownloadMode, Byte[] lpcDownloadFile);

        [DllImport(strDllName)]
        public static extern Int32 OPKRegisterForEventA(Int32 nDeviceID, IntPtr hEventWnd, PEventMessageA lpEventMessage);

        #endregion

        #region UserBuffer 통신

        [DllImport(strDllName)]
        public static extern Int32 OPKSetCourierSize(Int32 nDeviceID, Int32 nSize);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetCourierSize(Int32 nDeviceID, out Int32 pnSize);

        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferRaw(Int32 nDeviceID, Int32 nAddress, Int32 nSize, IntPtr pValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferRaw(Int32 nDeviceID, Int32 nAddress, Int32 nSize, IntPtr pValue);


        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferChar(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Byte[] pcValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferChar(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Byte[] pcValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferInteger(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Int32[] pnValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferInteger(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Int32[] pnValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferUInteger(Int32 nDeviceID, Int32 nIndex, Int32 nCount, UInt32[] puValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferUInteger(Int32 nDeviceID, Int32 nIndex, Int32 nCount, UInt32[] puValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferSingle(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Single[] pfValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferSingle(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Single[] pfValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferDouble(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Double[] pdValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferDouble(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Double[] pdValue);


        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferOneChar(Int32 nDeviceID, Int32 nIndex, Byte cValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferOneChar(Int32 nDeviceID, Int32 nIndex, out Byte pcValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferOneInteger(Int32 nDeviceID, Int32 nIndex, Int32 nValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferOneInteger(Int32 nDeviceID, Int32 nIndex, out Int32 pnValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferOneUInteger(Int32 nDeviceID, Int32 nIndex, UInt32 uValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferOneUInteger(Int32 nDeviceID, Int32 nIndex, out UInt32 puValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferOneSingle(Int32 nDeviceID, Int32 nIndex, Single fValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferOneSingle(Int32 nDeviceID, Int32 nIndex, out Single pfValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKSetUserBufferOneDouble(Int32 nDeviceID, Int32 nIndex, Double dValue);
        [DllImport(strDllName)]
        public static extern Int32 OPKGetUserBufferOneDouble(Int32 nDeviceID, Int32 nIndex, out Double pdValue);

        #endregion


        #region Global P 변수 통신

        [DllImport(strDllName)]
        public static extern Int32 OPKSetPVariable(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Double[] pdValue);

        [DllImport(strDllName)]
        public static extern Int32 OPKGetPVariable(Int32 nDeviceID, Int32 nIndex, Int32 nCount, Double[] pdValue);


        [DllImport(strDllName)]
        public static extern Int32 OPKSetPVariableOne(Int32 nDeviceID, Int32 nIndex, Double dValue);

        [DllImport(strDllName)]
        public static extern Int32 OPKGetPVariableOne(Int32 nDeviceID, Int32 nIndex, out Double pdValue);

        #endregion


        #region GatherBuffer 통신

        [DllImport(strDllName)]
        public static extern Int32 OPKGetGatherBufferRaw(Int32 nDeviceID, Int32 nAddress, Int32 nSize, IntPtr pValue);

        [DllImport(strDllName)]
        public static extern Int32 OPKGetGatherBufferStructure(Int32 nDeviceID, Int32 nIndex, Int32 nCount, IntPtr pValue);

        #endregion
    }
}