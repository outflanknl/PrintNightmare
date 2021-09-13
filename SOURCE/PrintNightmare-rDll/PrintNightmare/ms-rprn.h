

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for rpc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __rpc_h__
#define __rpc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __winspool_INTERFACE_DEFINED__
#define __winspool_INTERFACE_DEFINED__

/* interface winspool */
/* [unique][endpoint][ms_union][version][uuid] */ 

typedef /* [context_handle] */ void *PRINTER_HANDLE;

typedef long HRESULT;

typedef wchar_t *STRING_HANDLE;

typedef unsigned char BYTE;

typedef unsigned __int64 DWORDLONG;

typedef unsigned __int64 *PDWORDLONG;

typedef struct _DEVMODE_CONTAINER
    {
    DWORD cbBuf;
    /* [unique][size_is] */ BYTE *pDevMode;
    } 	DEVMODE_CONTAINER;

typedef struct _DOC_INFO_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ DOC_INFO_1 *pDocInfo1;
        } 	DocInfo;
    } 	DOC_INFO_CONTAINER;

typedef struct _RPC_DRIVER_INFO_3
    {
    long cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    long cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    } 	RPC_DRIVER_INFO_3;

typedef struct _RPC_DRIVER_INFO_4
    {
    long cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    long cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    long cchPreviousNames;
    /* [unique][size_is] */ wchar_t *pszzPreviousNames;
    } 	RPC_DRIVER_INFO_4;

typedef struct _RPC_DRIVER_INFO_6
    {
    long cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    long cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    long cchPreviousNames;
    /* [unique][size_is] */ wchar_t *pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    /* [string] */ wchar_t *pMfgName;
    /* [string] */ wchar_t *pOEMUrl;
    /* [string] */ wchar_t *pHardwareID;
    /* [string] */ wchar_t *pProvider;
    } 	RPC_DRIVER_INFO_6;

typedef struct _RPC_DRIVER_INFO_8
    {
    long cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    long cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    long cchPreviousNames;
    /* [unique][size_is] */ wchar_t *pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    /* [string] */ wchar_t *pMfgName;
    /* [string] */ wchar_t *pOEMUrl;
    /* [string] */ wchar_t *pHardwareID;
    /* [string] */ wchar_t *pProvider;
    /* [string] */ wchar_t *pPrintProcessor;
    /* [string] */ wchar_t *pVendorSetup;
    long cchColorProfiles;
    /* [unique][size_is] */ wchar_t *pszzColorProfiles;
    /* [string] */ wchar_t *pInfPath;
    long dwPrinterDriverAttributes;
    long cchCoreDependencies;
    /* [unique][size_is] */ wchar_t *pszzCoreDriverDependencies;
    FILETIME ftMinInboxDriverVerDate;
    DWORDLONG dwlMinInboxDriverVerVersion;
    } 	RPC_DRIVER_INFO_8;

typedef struct _DRIVER_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ DRIVER_INFO_1 *pNotUsed;
        /* [case()] */ DRIVER_INFO_2 *Level2;
        /* [case()] */ RPC_DRIVER_INFO_3 *Level3;
        /* [case()] */ RPC_DRIVER_INFO_4 *Level4;
        /* [case()] */ RPC_DRIVER_INFO_6 *Level6;
        /* [case()] */ RPC_DRIVER_INFO_8 *Level8;
        } 	DriverInfo;
    } 	DRIVER_CONTAINER;

DWORD RpcEnumPrinters( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcOpenPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired);

DWORD RpcSetJob( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetJob( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumJobs( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSetPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddPrinterDriver( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPrinterDrivers( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcGetPrinterDriver( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetPrinterDriverDirectory( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinterDriver( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddPrintProcessor( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPrintProcessors( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetPrintProcessorDirectory( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId);

DWORD RpcStartPagePrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten);

DWORD RpcEndPagePrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAbortPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcReadPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAddJob( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcScheduleJob( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetPrinterData( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSetPrinterData( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcWaitForPrinterChange( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcClosePrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddForm( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeleteForm( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetForm( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSetForm( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumForms( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPorts( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumMonitors( 
    /* [in] */ handle_t IDL_handle);

void Opnum37NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePort( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcCreatePrinterIC( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcPlayGdiScriptOnPrinterIC( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinterIC( 
    /* [in] */ handle_t IDL_handle);

void Opnum43NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum44NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum45NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddMonitor( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeleteMonitor( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrintProcessor( 
    /* [in] */ handle_t IDL_handle);

void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPrintProcessorDatatypes( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcResetPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetPrinterDriver2( 
    /* [in] */ handle_t IDL_handle);

void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcFindClosePrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle);

void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcReplyOpenPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcRouterReplyPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcReplyClosePrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddPortEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcRemoteFindFirstPrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle);

void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcRemoteFindFirstPrinterChangeNotificationEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcRouterReplyPrinterEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcRouterRefreshPrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle);

void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcOpenPrinterEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddPrinterEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSetPort( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPrinterData( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinterData( 
    /* [in] */ handle_t IDL_handle);

void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum76NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSetPrinterDataEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetPrinterDataEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPrinterDataEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPrinterKey( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinterDataEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinterKey( 
    /* [in] */ handle_t IDL_handle);

void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinterDriverEx( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddPerMachineConnection( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePerMachineConnection( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPerMachineConnections( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcXcvData( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddPrinterDriverEx( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags);

void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcFlushPrinter( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSendRecvBidiData( 
    /* [in] */ handle_t IDL_handle);

void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetCorePrinterDrivers( 
    /* [in] */ handle_t IDL_handle);

void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetPrinterDriverPackagePath( 
    /* [in] */ handle_t IDL_handle);

void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetJobNamedPropertyValue( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSetJobNamedProperty( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeleteJobNamedProperty( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumJobNamedProperties( 
    /* [in] */ handle_t IDL_handle);

void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);



extern RPC_IF_HANDLE winspool_v1_0_c_ifspec;
extern RPC_IF_HANDLE winspool_v1_0_s_ifspec;
#endif /* __winspool_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_rpc_0000_0001 */
/* [local] */ 

void Opnum115NotUsedOnWire( void);

DWORD RpcLogJobInfoForBranchOffice( void);

DWORD RpcRegeneratePrintDeviceCapabilities( void);

void Opnum118NotUsedOnWire( void);

HRESULT RpcIppCreateJobOnPrinter( void);

HRESULT RpcIppGetJobAttributes( void);

HRESULT RpcIppSetJobAttributes( void);

HRESULT RpcIppGetPrinterAttributes( void);

HRESULT RpcIppSetPrinterAttributes( void);



extern RPC_IF_HANDLE __MIDL_itf_rpc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rpc_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PRINTER_HANDLE_rundown( PRINTER_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


