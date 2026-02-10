using System;
using System.Runtime.InteropServices;
using System.Text;

namespace ONSYS
{
	public class PowerPmac
	{
		public const Int32 MAX_COMMAND_SIZE = 4096;
		public const Int32 MAX_RESPONSE_SIZE = 65536;
		
		private Int32 m_nDeviceID;

		public PowerPmac()
		{
			m_nDeviceID = -1;
		}

#region 라이브러리 초기화 및 관련 정보

		/*
		장치 IP가 살아 있는지 확인
			UInt32 uIPAddress : PowerPmac의 IP Address (부호 없는 정수)
			Return : 1 = alive, 0 = dead
		*/
		public Int32 OPKIsDeviceDetect(UInt32 uIPAddress)
		{
			return OPK.OPKIsDeviceDetect(uIPAddress);
		}

		/*
		장치 IP가 살아 있는지 확인
			UInt32 uIPAddress : PowerPmac의 IP Address (부호 없는 정수)
			Return : 1 = alive, 0 = dead
	*/
		public Int32 OPKIsDeviceDetect(string strIPAddress)
		{
			String[] strField = strIPAddress.Split('.');
			UInt32 uIPAddress;
 
			if (strField.Length != 4)
				return Convert.ToInt32(OPK_REURN_CODE.ORC_Failed);

			uIPAddress = ((Convert.ToUInt32(strField[0]) & 0xFF) << 24) | ((Convert.ToUInt32(strField[1]) & 0xFF) << 16) | ((Convert.ToUInt32(strField[2]) & 0xFF) << 8) | (Convert.ToUInt32(strField[3]) & 0xFF);

			return OPK.OPKIsDeviceDetect(uIPAddress);
		}

		/*
		라이브러리 초기화 및 연결
			UInt32 uIPAddress : PowerPmac의 IP Address (부호 없는 정수)
			Int32 nDeviceMode : 통신 방법, OPK_DEVICE_MODE 참조 
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKOpen(UInt32 uIPAddress, Int32 nDeviceMode)
		{
			return OPK.OPKOpen(uIPAddress, nDeviceMode, out m_nDeviceID);
		}

		/*
		라이브러리 초기화 및 연결
			string strIPAddress : PowerPmac의 IP Address (문자열)
			Int32 nDeviceMode : 통신 방법, OPK_DEVICE_MODE 참조 
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKOpen(String strIPAddress, Int32 nDeviceMode)
		{
			String[] strField = strIPAddress.Split('.');
			UInt32 uIPAddress;

			if (strField.Length != 4)
				return Convert.ToInt32(OPK_REURN_CODE.ORC_Failed);

			uIPAddress = ((Convert.ToUInt32(strField[0]) & 0xFF) << 24) | ((Convert.ToUInt32(strField[1]) & 0xFF) << 16) | ((Convert.ToUInt32(strField[2]) & 0xFF) << 8) | (Convert.ToUInt32(strField[3]) & 0xFF);

			return OPK.OPKOpen(uIPAddress, nDeviceMode, out m_nDeviceID);
		}

		/*
		라이브러리 연결해제 및 닫기
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKClose()
		{
			return OPK.OPKClose(m_nDeviceID);
		}

		/*
		통신 연결이 되어 있는지 확인
			out Int32 pbIsConnected : 1 또는 0
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKIsConnected(out Int32 pbIsConnected)
		{
			return OPK.OPKIsConnected(m_nDeviceID, out pbIsConnected);
		}

		/*
		현재 연결한 장치 IP Address 확인
			out UInt32 puIPAddres : PowerPmac의 IP Address (부호 없는 정수)
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetIPAddress(out UInt32 puIPAddress)
		{
			return OPK.OPKGetIPAddress(m_nDeviceID, out puIPAddress);
		}

		/*
		현재 연결한 장치 통신 방법 확인
			out Int32 pnDeviceMode : 통신 방법, OPK_DEVICE_MODE 참조
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetDeviceMode(out Int32 pnDeviceMode)
		{
			return OPK.OPKGetDeviceMode(m_nDeviceID, out pnDeviceMode);
		}

		/*
		현재 연결한 장치의 CPU 타입 확인
			out Int32 pnCPUType : CPU 타입, CPU_TYPE 참조
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetCPUType(out Int32 pnCPUType)
		{
			return OPK.OPKGetCPUType(m_nDeviceID, out pnCPUType);
		}

#endregion

#region Command 통신

		/*
		응답이 필요한 통신 명령
			String strCommand : 명령어
			out String strResponse : 명령어의 응답내용
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetResponse(String strCommand, out String strResponse)
		{
			Byte[] szCommand = new Byte[MAX_COMMAND_SIZE];
			Byte[] szResponse = new Byte[MAX_RESPONSE_SIZE];
			Int32 nReturn;

			szCommand = Encoding.UTF8.GetBytes(strCommand);
			nReturn = OPK.OPKGetResponseA(m_nDeviceID, szCommand, szResponse, MAX_RESPONSE_SIZE);
			strResponse = Encoding.UTF8.GetString(szResponse).Trim('\0');

			return nReturn;
		}

		/*
		응답이 필요한 통신 명령
		다중 명령어 사용시 응답은 배열 형태로 받음
			String strCommand : 명령어
			out String[] astrResponse : 명령어의 응답내용
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetResponse(String strCommand, out String[] astrResponse)
		{
			Int32 nReturn;
			String strResponse;
			astrResponse = new String[1];

			if (strCommand.Length == 0)
				return Convert.ToInt32(OPK_REURN_CODE.ORC_Failed);

			nReturn = OPKGetResponse(strCommand, out strResponse);
			if (nReturn != (Int32)OPK_REURN_CODE.ORC_Ok)
				return nReturn;
		//	if (strResponse[strResponse.Length - 2] == '\r')
		//		strResponse = strResponse.Remove(strResponse.Length - 2, 2);
			astrResponse = strResponse.Split(new string[] { "\r\n" }, StringSplitOptions.RemoveEmptyEntries);

			return nReturn;
		}

		/*
		응답이 필요없는 통신 명령
			String strCommand : 명령어
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSendCommand(String strCommand)
		{
			Byte[] szCommand = new Byte[MAX_COMMAND_SIZE];

			szCommand = Encoding.UTF8.GetBytes(strCommand);
			return OPK.OPKSendCommandA(m_nDeviceID, szCommand);
		}

		/*
		GetResponsA와 동일하게 동작되나 보조 채널을 사용하기 때문에 주 채널에 영향을 주지 않음
			string strScript : 스크립트 명령어
			out String strResponse : 스크립트의 응답내용
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKScriptRun(String strScript, out String strResponse)
		{
			Byte[] szScript = new Byte[MAX_COMMAND_SIZE];
			Byte[] szResponse = new Byte[MAX_RESPONSE_SIZE];
			Int32 nReturn;

			szScript = Encoding.UTF8.GetBytes(strScript);
			nReturn = OPK.OPKScriptRunA(m_nDeviceID, szScript, szResponse, MAX_RESPONSE_SIZE);
			strResponse = Encoding.UTF8.GetString(szResponse).Trim('\0');

			return nReturn;
		}

		/*
		다운로드 실행
			Int32 nDownloadMode : 다운로드 방식, OPK_DOWNLOAD_MODE 참조
			const string strDownloadFile : 다운로드할 파일명
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKDownloadRun(Int32 nDownloadMode, String strDownloadFile)
		{
			Byte[] szDownloadFile = new byte[MAX_COMMAND_SIZE];

			szDownloadFile = Encoding.UTF8.GetBytes(strDownloadFile);
			return OPK.OPKDownloadRunA(m_nDeviceID, nDownloadMode, szDownloadFile);
		}

		/*
		이벤트 등록
		문자열은 Single character 방식 사용
		메시지 방식 또는 콜백 방식 지원
			HWND hEventWnd : 메시지 방식 사용시 윈도우 핸들
			PEventMessageA lpEventMessage : 콜백 방식 사용시 진행률 및 메시지 함수 포인터
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKRegisterForEvent(IntPtr hEventWnd, PEventMessageA lpEventMessage)
		{
			return OPK.OPKRegisterForEventA(m_nDeviceID, hEventWnd, lpEventMessage);
		}

#endregion

#region UserBuffer 통신

		/*
		User Buffer 통신, 전송 크기 설정
			Default : 16384
			Int32 nSize : Byte 단위
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetCourierSize(Int32 nSize)
		{
			return OPK.OPKSetCourierSize(m_nDeviceID, nSize);
		}

		/*
		User Buffer 통신, 전송 크기 확인
			out Int32 pnSize : Byte 단위
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetCourierSize(out Int32 pnSize)
		{
			return OPK.OPKGetCourierSize(m_nDeviceID, out pnSize);
		}

		/*
		User Buffer 통신, 구조체 또는 배열 형태의 데이터 입력
			Int32 nAddress : User shared memory의 시작 주소 값 (Sys.Cdata[i] 기준 i와 동일함)
			Int32 nSize : byte 단위의 데이터 크기
			IntPtr pValue : 구조체 또는 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferRaw(Int32 nAddress, Int32 nSize, IntPtr pValue)
		{
			return OPK.OPKSetUserBufferRaw(m_nDeviceID, nAddress, nSize, pValue);
		}

		/*
		User Buffer 통신, 구조체 또는 배열 형태의 데이터 출력
			Int32 nAddress : User shared memory의 시작 주소 값 (Sys.Cdata[i] 기준 i와 동일함)
			Int32 nSize : byte 단위의 데이터 크기
			IntPtr pValue : 구조체 또는 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferRaw(Int32 nAddress, Int32 nSize, IntPtr pValue)
		{
			return OPK.OPKGetUserBufferRaw(m_nDeviceID, nAddress, nSize, pValue);
		}

		/*
		User Buffer 통신, character(byte) 형태의 배열 데이터 입력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Cdata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Byte[] pcValue : character 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferChar(Int32 nIndex, Int32 nCount, Byte[] pcValue)
		{
			return OPK.OPKSetUserBufferChar(m_nDeviceID, nIndex, nCount, pcValue);
		}

		/*
		User Buffer 통신, character(byte) 형태의 배열 데이터 출력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Cdata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Byte[] pcValu : character 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferChar(Int32 nIndex, Int32 nCount, Byte[] pcValue)
		{
			return OPK.OPKGetUserBufferChar(m_nDeviceID, nIndex, nCount, pcValue);
		}

		/*
		User Buffer 통신, signed integer 형태의 배열 데이터 입력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Idata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Int32[] pnValue : signed integer 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferInteger(Int32 nIndex, Int32 nCount, Int32[] pnValue)
		{
			return OPK.OPKSetUserBufferInteger(m_nDeviceID, nIndex, nCount, pnValue);
		}

		/*
		User Buffer 통신, signed integer 형태의 배열 데이터 출력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Idata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Int32[] pnValue : signed integer 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferInteger(Int32 nIndex, Int32 nCount, Int32[] pnValue)
		{
			return OPK.OPKGetUserBufferInteger(m_nDeviceID, nIndex, nCount, pnValue);
		}

		/*
		User Buffer 통신, unsigned integer 형태의 배열 데이터 입력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Udata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			UInt32[] puValue : unsigned integer 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferUInteger(Int32 nIndex, Int32 nCount, UInt32[] puValue)
		{
			return OPK.OPKSetUserBufferUInteger(m_nDeviceID, nIndex, nCount, puValue);
		}

		/*
		User Buffer 통신, unsigned integer 형태의 배열 데이터 출력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Udata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			 UInt32[] puValue : unsigned integer 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferUInteger(Int32 nIndex, Int32 nCount, UInt32[] puValue)
		{
			return OPK.OPKGetUserBufferUInteger(m_nDeviceID, nIndex, nCount, puValue);
		}

		/*
		User Buffer 통신, float 형태의 배열 데이터 입력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Fdata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Single[] pfValue : float 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferSingle(Int32 nIndex, Int32 nCount, Single[] pfValue)
		{
			return OPK.OPKSetUserBufferSingle(m_nDeviceID, nIndex, nCount, pfValue);
		}

		/*
		User Buffer 통신, float 형태의 배열 데이터 출력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Fdata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Single[] pfValue : float 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferSingle(Int32 nIndex, Int32 nCount, Single[] pfValue)
		{
			return OPK.OPKGetUserBufferSingle(m_nDeviceID, nIndex, nCount, pfValue);
		}

		/*
		User Buffer 통신, double 형태의 배열 데이터 입력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Ddata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Double[] pdValue : double 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferDouble(Int32 nIndex, Int32 nCount, Double[] pdValue)
		{
			return OPK.OPKSetUserBufferDouble(m_nDeviceID, nIndex, nCount, pdValue);
		}

		/*
		User Buffer 통신, double 형태의 배열 데이터 출력
			Int32 nIndex : User shared memory의 시작 인덱스 값 (Sys.Ddata[i] 기준 i와 동일함)
			Int32 nCount : 배열의 개수
			Double[] pdValue : double 배열 데이터의 시작 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferDouble(Int32 nIndex, Int32 nCount, Double[] pdValue)
		{
			return OPK.OPKGetUserBufferDouble(m_nDeviceID, nIndex, nCount, pdValue);
		}


		/*
		User Buffer 통신, character(byte) 형태의 단일 데이터 입력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Cdata[i] 기준 i와 동일함)
			Byte cValue : character 데이터의 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferOneChar(Int32 nIndex, Byte cValue)
		{
			return OPK.OPKSetUserBufferOneChar(m_nDeviceID, nIndex, cValue);
		}

		/*
		User Buffer 통신, character(byte) 형태의 단일 데이터 출력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Cdata[i] 기준 i와 동일함)
			out Byte pcValue : character 데이터의 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferOneChar(Int32 nIndex, out Byte pcValue)
		{
			return OPK.OPKGetUserBufferOneChar(m_nDeviceID, nIndex, out pcValue);
		}

		/*
		User Buffer 통신, signed integer 형태의 단일 데이터 입력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Idata[i] 기준 i와 동일함)
			Int32 nValue : signed integer 데이터의 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferOneInteger(Int32 nIndex, Int32 nValue)
		{
			return OPK.OPKSetUserBufferOneInteger(m_nDeviceID, nIndex, nValue);
		}

		/*
		User Buffer 통신, signed integer 형태의 단일 데이터 입력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Idata[i] 기준 i와 동일함)
			out Int32 pnValue : signed integer 데이터의 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferOneInteger(Int32 nIndex, out Int32 pnValue)
		{
			return OPK.OPKGetUserBufferOneInteger(m_nDeviceID, nIndex, out pnValue);
		}

		/*
		User Buffer 통신, unsigned integer 형태의 단일 데이터 입력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Udata[i] 기준 i와 동일함)
			UInt32 uValue : unsigned integer 데이터의 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferOneUInteger(Int32 nIndex, UInt32 uValue)
		{
			return OPK.OPKSetUserBufferOneUInteger(m_nDeviceID, nIndex, uValue);
		}

		/*
		User Buffer 통신, unsigned integer 형태의 단일 데이터 출력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Udata[i] 기준 i와 동일함)
			out UInt32 puValue : unsigned integer 데이터의 주소  값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferOneUInteger(Int32 nIndex, out UInt32 puValue)
		{
			return OPK.OPKGetUserBufferOneUInteger(m_nDeviceID, nIndex, out puValue);
		}

		/*
		User Buffer 통신, float 형태의 단일 데이터 입력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Fdata[i] 기준 i와 동일함)
			Single fValue : float 데이터의 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferOneSingle(Int32 nIndex, Single fValue)
		{
			return OPK.OPKSetUserBufferOneSingle(m_nDeviceID, nIndex, fValue);
		}

		/*
		User Buffer 통신, float 형태의 단일 데이터 출력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Fdata[i] 기준 i와 동일함)
			out Single pfValue : float 데이터의 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferOneSingle(Int32 nIndex, out Single pfValue)
		{
			return OPK.OPKGetUserBufferOneSingle(m_nDeviceID, nIndex, out pfValue);
		}

		/*
		User Buffer 통신, double 형태의 단일 데이터 입력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Ddata[i] 기준 i와 동일함)
			Double dValue : double 데이터의 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKSetUserBufferOneDouble(Int32 nIndex, Double dValue)
		{
			return OPK.OPKSetUserBufferOneDouble(m_nDeviceID, nIndex, dValue);
		}

		/*
		User Buffer 통신, double 형태의 단일 데이터 출력
			Int32 nIndex : User shared memory의 인덱스 값 (Sys.Ddata[i] 기준 i와 동일함)
			PDOUBLE pdValue : double 데이터의 주소 값
			Return : OPK_REURN_CODE 참조
		*/
		public Int32 OPKGetUserBufferOneDouble(Int32 nIndex, out Double pdValue)
		{
			return OPK.OPKGetUserBufferOneDouble(m_nDeviceID, nIndex, out pdValue);
		}


		// OPKSetUserBufferVariable 통합
		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Int32 nCount, Byte[] pcValue)
		{
			return OPK.OPKSetUserBufferChar(m_nDeviceID, nIndex, nCount, pcValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Int32 nCount, Int32[] pnValue)
		{
			return OPK.OPKSetUserBufferInteger(m_nDeviceID, nIndex, nCount, pnValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Int32 nCount, UInt32[] puValue)
		{
			return OPK.OPKSetUserBufferUInteger(m_nDeviceID, nIndex, nCount, puValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Int32 nCount, Single[] pfValue)
		{
			return OPK.OPKSetUserBufferSingle(m_nDeviceID, nIndex, nCount, pfValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Int32 nCount, Double[] pdValue)
		{
			return OPK.OPKSetUserBufferDouble(m_nDeviceID, nIndex, nCount, pdValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Byte cValue)
		{
			return OPK.OPKSetUserBufferOneChar(m_nDeviceID, nIndex, cValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Int32 nValue)
		{
			return OPK.OPKSetUserBufferOneInteger(m_nDeviceID, nIndex, nValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, UInt32 uValue)
		{
			return OPK.OPKSetUserBufferOneUInteger(m_nDeviceID, nIndex, uValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Single fValue)
		{
			return OPK.OPKSetUserBufferOneSingle(m_nDeviceID, nIndex, fValue);
		}

		public Int32 OPKSetUserBufferVariable(Int32 nIndex, Double dValue)
		{
			return OPK.OPKSetUserBufferOneDouble(m_nDeviceID, nIndex, dValue);
		}


		// OPKGetUserBufferVariable 통합
		public Int32 OPKGetUserBufferVariable(Int32 nIndex, Int32 nCount, Byte[] pcValue)
		{
			return OPK.OPKGetUserBufferChar(m_nDeviceID, nIndex, nCount, pcValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, Int32 nCount, Int32[] pnValue)
		{
			return OPK.OPKGetUserBufferInteger(m_nDeviceID, nIndex, nCount, pnValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, Int32 nCount, UInt32[] puValue)
		{
			return OPK.OPKGetUserBufferUInteger(m_nDeviceID, nIndex, nCount, puValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, Int32 nCount, Single[] pfValue)
		{
			return OPK.OPKGetUserBufferSingle(m_nDeviceID, nIndex, nCount, pfValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, Int32 nCount, Double[] pdValue)
		{
			return OPK.OPKGetUserBufferDouble(m_nDeviceID, nIndex, nCount, pdValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, out Byte pcValue)
		{
			return OPK.OPKGetUserBufferOneChar(m_nDeviceID, nIndex, out pcValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, out Int32 pnValue)
		{
			return OPK.OPKGetUserBufferOneInteger(m_nDeviceID, nIndex, out pnValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, out UInt32 puValue)
		{
			return OPK.OPKGetUserBufferOneUInteger(m_nDeviceID, nIndex, out puValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, out Single pfValue)
		{
			return OPK.OPKGetUserBufferOneSingle(m_nDeviceID, nIndex, out pfValue);
		}

		public Int32 OPKGetUserBufferVariable(Int32 nIndex, out Double pdValue)
		{
			return OPK.OPKGetUserBufferOneDouble(m_nDeviceID, nIndex, out pdValue);
		}

#endregion

	}
}
