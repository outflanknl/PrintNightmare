

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "ms-rprn.h"

#define TYPE_FORMAT_STRING_SIZE   697                               
#define PROC_FORMAT_STRING_SIZE   4077                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _rpc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } rpc_MIDL_TYPE_FORMAT_STRING;

typedef struct _rpc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } rpc_MIDL_PROC_FORMAT_STRING;

typedef struct _rpc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } rpc_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString;
extern const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString;
extern const rpc_MIDL_EXPR_FORMAT_STRING rpc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: winspool, ver. 1.0,
   GUID={0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}} */

 extern const MIDL_STUBLESS_PROXY_INFO winspool_ProxyInfo;

static const RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = 
    {
    {(unsigned char *) "ncacn_np", (unsigned char *) "\\pipe\\spoolss"}
    };


static const RPC_CLIENT_INTERFACE winspool___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    1,
    (RPC_PROTSEQ_ENDPOINT *)__RpcProtseqEndpoint,
    0,
    &winspool_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE winspool_v1_0_c_ifspec = (RPC_IF_HANDLE)& winspool___RpcClientInterface;

extern const MIDL_STUB_DESC winspool_StubDesc;

static RPC_BINDING_HANDLE winspool__MIDL_AutoBindHandle;


DWORD RpcEnumPrinters( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  0,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcOpenPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  1,
                  0,
                  pPrinterName,
                  pHandle,
                  pDatatype,
                  pDevModeContainer,
                  AccessRequired);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  2,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  3,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumJobs( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  4,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  5,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  6,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  7,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  8,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterDriver( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  9,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterDrivers( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  10,
                  0,
                  IDL_handle,
                  pName,
                  pEnvironment,
                  Level,
                  pDrivers,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  11,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriverDirectory( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  12,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterDriver( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  13,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrintProcessor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  14,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrintProcessors( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  15,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrintProcessorDirectory( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  16,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  17,
                  0,
                  hPrinter,
                  pDocInfoContainer,
                  pJobId);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartPagePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  18,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  19,
                  0,
                  hPrinter,
                  pBuf,
                  cbBuf,
                  pcWritten);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndPagePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  20,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAbortPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  21,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReadPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  22,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  23,
                  0,
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  24,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcScheduleJob( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  25,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  26,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  27,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWaitForPrinterChange( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  28,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcClosePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  29,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  30,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  31,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  32,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetForm( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  33,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumForms( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  34,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPorts( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  35,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumMonitors( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  36,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum37NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  37,
                  0,
                  IDL_handle);
    
}


void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  38,
                  0,
                  IDL_handle);
    
}


DWORD RpcDeletePort( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  39,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcCreatePrinterIC( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  40,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcPlayGdiScriptOnPrinterIC( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  41,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterIC( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  42,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum43NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  43,
                  0,
                  IDL_handle);
    
}


void Opnum44NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  44,
                  0,
                  IDL_handle);
    
}


void Opnum45NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  45,
                  0,
                  IDL_handle);
    
}


DWORD RpcAddMonitor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  46,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteMonitor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  47,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrintProcessor( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  48,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  49,
                  0,
                  IDL_handle);
    
}


void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  50,
                  0,
                  IDL_handle);
    
}


DWORD RpcEnumPrintProcessorDatatypes( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  51,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcResetPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  52,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver2( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  53,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  54,
                  0,
                  IDL_handle);
    
}


void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  55,
                  0,
                  IDL_handle);
    
}


DWORD RpcFindClosePrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  56,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  57,
                  0,
                  IDL_handle);
    
}


DWORD RpcReplyOpenPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  58,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  59,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReplyClosePrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  60,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPortEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  61,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  62,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  63,
                  0,
                  IDL_handle);
    
}


void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  64,
                  0,
                  IDL_handle);
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotificationEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  65,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinterEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  66,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterRefreshPrinterChangeNotification( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  67,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  68,
                  0,
                  IDL_handle);
    
}


DWORD RpcOpenPrinterEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  69,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  70,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPort( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  71,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  72,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  73,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  74,
                  0,
                  IDL_handle);
    
}


void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  75,
                  0,
                  IDL_handle);
    
}


void Opnum76NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  76,
                  0,
                  IDL_handle);
    
}


DWORD RpcSetPrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  77,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  78,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  79,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterKey( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  80,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterDataEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  81,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterKey( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  82,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  83,
                  0,
                  IDL_handle);
    
}


DWORD RpcDeletePrinterDriverEx( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  84,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPerMachineConnection( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  85,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePerMachineConnection( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  86,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPerMachineConnections( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  87,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcXcvData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  88,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterDriverEx( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  89,
                  0,
                  IDL_handle,
                  pName,
                  pDriverContainer,
                  dwFileCopyFlags);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  90,
                  0,
                  IDL_handle);
    
}


void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  91,
                  0,
                  IDL_handle);
    
}


void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  92,
                  0,
                  IDL_handle);
    
}


void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  93,
                  0,
                  IDL_handle);
    
}


void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  94,
                  0,
                  IDL_handle);
    
}


void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  95,
                  0,
                  IDL_handle);
    
}


DWORD RpcFlushPrinter( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  96,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSendRecvBidiData( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  97,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  98,
                  0,
                  IDL_handle);
    
}


void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  99,
                  0,
                  IDL_handle);
    
}


void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  100,
                  0,
                  IDL_handle);
    
}


void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  101,
                  0,
                  IDL_handle);
    
}


HRESULT RpcGetCorePrinterDrivers( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  102,
                  0,
                  IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  103,
                  0,
                  IDL_handle);
    
}


HRESULT RpcGetPrinterDriverPackagePath( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  104,
                  0,
                  IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  105,
                  0,
                  IDL_handle);
    
}


void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  106,
                  0,
                  IDL_handle);
    
}


void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  107,
                  0,
                  IDL_handle);
    
}


void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  108,
                  0,
                  IDL_handle);
    
}


void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  109,
                  0,
                  IDL_handle);
    
}


DWORD RpcGetJobNamedPropertyValue( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  110,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetJobNamedProperty( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  111,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteJobNamedProperty( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  112,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumJobNamedProperties( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  113,
                  0,
                  IDL_handle);
    return ( DWORD  )_RetVal.Simple;
    
}


void Opnum114NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&winspool_ProxyInfo,
                  114,
                  0,
                  IDL_handle);
    
}


/* Standard interface: __MIDL_itf_rpc_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const rpc_MIDL_PROC_FORMAT_STRING rpc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcEnumPrinters */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
/* 18 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 20 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenPrinter */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x48,		/* Old Flags:  */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	NdrFcShort( 0x40 ),	/* 64 */
/* 50 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 52 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 62 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 64 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 68 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 70 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 72 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pDatatype */

/* 74 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 76 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 78 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 80 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 82 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 84 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Parameter AccessRequired */

/* 86 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 88 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 90 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 92 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 94 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 96 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJob */

/* 98 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 100 */	NdrFcLong( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x2 ),	/* 2 */
/* 106 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 108 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 118 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetJob */

/* 134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x3 ),	/* 3 */
/* 142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 152 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 154 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobs */

/* 170 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 190 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 202 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinter */

/* 206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x5 ),	/* 5 */
/* 214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 216 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 226 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 238 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinter */

/* 242 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x6 ),	/* 6 */
/* 250 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 252 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 262 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinter */

/* 278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x7 ),	/* 7 */
/* 286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 288 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 298 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinter */

/* 314 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 324 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 326 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 332 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 334 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriver */

/* 350 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x9 ),	/* 9 */
/* 358 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 360 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 370 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDrivers */

/* 386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcShort( 0xa ),	/* 10 */
/* 394 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 396 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 400 */	NdrFcShort( 0x10 ),	/* 16 */
/* 402 */	NdrFcShort( 0x40 ),	/* 64 */
/* 404 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 406 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 408 */	NdrFcShort( 0x1 ),	/* 1 */
/* 410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 420 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 422 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 426 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 428 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 430 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDrivers */

/* 434 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 436 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 438 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter cbBuf */

/* 440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 442 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 448 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 452 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 454 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 460 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver */

/* 464 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0xb ),	/* 11 */
/* 472 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 474 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 484 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 494 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 496 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriverDirectory */

/* 500 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0xc ),	/* 12 */
/* 508 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 510 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 520 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 530 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDriver */

/* 536 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0xd ),	/* 13 */
/* 544 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 546 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 554 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 556 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrintProcessor */

/* 572 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0xe ),	/* 14 */
/* 580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 582 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 584 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 592 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 604 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrintProcessors */

/* 608 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0xf ),	/* 15 */
/* 616 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 618 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 620 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 628 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrintProcessorDirectory */

/* 644 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x10 ),	/* 16 */
/* 652 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 654 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 664 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 676 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartDocPrinter */

/* 680 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x11 ),	/* 17 */
/* 688 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 690 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 692 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 694 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 696 */	NdrFcShort( 0x24 ),	/* 36 */
/* 698 */	NdrFcShort( 0x24 ),	/* 36 */
/* 700 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 702 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x1 ),	/* 1 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 712 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 714 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 716 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter pDocInfoContainer */

/* 718 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 720 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 722 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter pJobId */

/* 724 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 726 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 730 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 732 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartPagePrinter */

/* 736 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 738 */	NdrFcLong( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x12 ),	/* 18 */
/* 744 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 746 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 756 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 768 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWritePrinter */

/* 772 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x13 ),	/* 19 */
/* 780 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 782 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 784 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 786 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 788 */	NdrFcShort( 0x2c ),	/* 44 */
/* 790 */	NdrFcShort( 0x24 ),	/* 36 */
/* 792 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 794 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 804 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 806 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 808 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter pBuf */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 814 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter cbBuf */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndPagePrinter */

/* 834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x14 ),	/* 20 */
/* 842 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 844 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 852 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 854 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAbortPrinter */

/* 870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x15 ),	/* 21 */
/* 878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 880 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 888 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 890 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReadPrinter */

/* 906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x16 ),	/* 22 */
/* 914 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 916 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 918 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 924 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 926 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndDocPrinter */

/* 942 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x17 ),	/* 23 */
/* 950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 952 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 954 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 956 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0x24 ),	/* 36 */
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 964 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 974 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 976 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 978 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Return value */

/* 980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 982 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddJob */

/* 986 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x18 ),	/* 24 */
/* 994 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 996 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 998 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1006 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1016 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1018 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcScheduleJob */

/* 1022 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1028 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1032 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1040 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1042 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1054 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterData */

/* 1058 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1068 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1078 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinterData */

/* 1094 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1102 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1104 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1112 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1114 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1126 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForPrinterChange */

/* 1130 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1136 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1138 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1140 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1150 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1162 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcClosePrinter */

/* 1166 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1174 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1176 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1184 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1186 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddForm */

/* 1202 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1210 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1212 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1214 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1220 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1222 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1234 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteForm */

/* 1238 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1246 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1248 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1256 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1258 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1270 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetForm */

/* 1274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1282 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1284 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1292 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1294 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1306 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetForm */

/* 1310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1320 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1328 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1330 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumForms */

/* 1346 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1354 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1356 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1364 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1366 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1376 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPorts */

/* 1382 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1392 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1394 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1400 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1402 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumMonitors */

/* 1418 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1426 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1428 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1430 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1436 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1438 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1450 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum37NotUsedOnWire */

/* 1454 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1464 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1474 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 1484 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1494 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1504 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePort */

/* 1514 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1522 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1524 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1526 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1532 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1534 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1546 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCreatePrinterIC */

/* 1550 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1558 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1560 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1562 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1570 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPlayGdiScriptOnPrinterIC */

/* 1586 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1596 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1598 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1604 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1606 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1618 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterIC */

/* 1622 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1630 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1632 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1640 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1642 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum43NotUsedOnWire */

/* 1658 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1664 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1666 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1668 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1678 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum44NotUsedOnWire */

/* 1688 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1696 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1698 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1708 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum45NotUsedOnWire */

/* 1718 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1720 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1726 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1728 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1736 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1738 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcAddMonitor */

/* 1748 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1756 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1758 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1766 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1768 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1780 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteMonitor */

/* 1784 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1792 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1794 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1796 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1804 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1816 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrintProcessor */

/* 1820 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1828 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1830 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1838 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1840 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1850 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum49NotUsedOnWire */

/* 1856 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1864 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1866 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1876 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum50NotUsedOnWire */

/* 1886 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1894 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1896 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1898 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1906 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcEnumPrintProcessorDatatypes */

/* 1916 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1924 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1926 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1928 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1936 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcResetPrinter */

/* 1952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1958 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1960 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1962 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1970 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1972 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1984 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver2 */

/* 1988 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x35 ),	/* 53 */
/* 1996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1998 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2000 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2008 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2020 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 2024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2030 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2032 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2036 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2044 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 2054 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2062 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2064 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2072 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2074 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFindClosePrinterChangeNotification */

/* 2084 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2092 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2094 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2096 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2104 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum57NotUsedOnWire */

/* 2120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2132 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2140 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcReplyOpenPrinter */

/* 2150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x3a ),	/* 58 */
/* 2158 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2168 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2170 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2182 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinter */

/* 2186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2192 */	NdrFcShort( 0x3b ),	/* 59 */
/* 2194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2196 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2204 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2206 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReplyClosePrinter */

/* 2222 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2230 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2232 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2234 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2240 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2242 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPortEx */

/* 2258 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x3d ),	/* 61 */
/* 2266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2268 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2276 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2278 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2290 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotification */

/* 2294 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x3e ),	/* 62 */
/* 2302 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2304 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2306 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2314 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2326 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 2330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x3f ),	/* 63 */
/* 2338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2348 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2350 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 2360 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2362 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2370 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2372 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2378 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2380 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotificationEx */

/* 2390 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x41 ),	/* 65 */
/* 2398 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2400 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2402 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2410 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2422 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinterEx */

/* 2426 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x42 ),	/* 66 */
/* 2434 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2436 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2438 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2444 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2446 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterRefreshPrinterChangeNotification */

/* 2462 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x43 ),	/* 67 */
/* 2470 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2472 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2474 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2480 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2482 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum68NotUsedOnWire */

/* 2498 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2508 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2516 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2518 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcOpenPrinterEx */

/* 2528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2534 */	NdrFcShort( 0x45 ),	/* 69 */
/* 2536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2538 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2546 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2548 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2558 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2560 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterEx */

/* 2564 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2570 */	NdrFcShort( 0x46 ),	/* 70 */
/* 2572 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2574 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2576 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2582 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2584 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2596 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPort */

/* 2600 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2606 */	NdrFcShort( 0x47 ),	/* 71 */
/* 2608 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2610 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2618 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2620 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterData */

/* 2636 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2644 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2646 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2648 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2654 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2656 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2668 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterData */

/* 2672 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x49 ),	/* 73 */
/* 2680 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2682 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2684 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2690 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2692 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum74NotUsedOnWire */

/* 2708 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x4a ),	/* 74 */
/* 2716 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2718 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2726 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2728 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 2738 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x4b ),	/* 75 */
/* 2746 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2748 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2750 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2756 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2758 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum76NotUsedOnWire */

/* 2768 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2774 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2778 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2780 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2786 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2788 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcSetPrinterDataEx */

/* 2798 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2804 */	NdrFcShort( 0x4d ),	/* 77 */
/* 2806 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2808 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2810 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2816 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2818 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDataEx */

/* 2834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x4e ),	/* 78 */
/* 2842 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2844 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2852 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2854 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDataEx */

/* 2870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x4f ),	/* 79 */
/* 2878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2880 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2882 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2888 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2890 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2900 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterKey */

/* 2906 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2914 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2916 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2918 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2924 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2926 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2938 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDataEx */

/* 2942 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2948 */	NdrFcShort( 0x51 ),	/* 81 */
/* 2950 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2952 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2954 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2960 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2962 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2970 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 2972 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterKey */

/* 2978 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2984 */	NdrFcShort( 0x52 ),	/* 82 */
/* 2986 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2988 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2990 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2996 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 2998 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3010 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 3014 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3020 */	NdrFcShort( 0x53 ),	/* 83 */
/* 3022 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3024 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3026 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3032 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3034 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePrinterDriverEx */

/* 3044 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3050 */	NdrFcShort( 0x54 ),	/* 84 */
/* 3052 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3054 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3056 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3064 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3074 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3076 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPerMachineConnection */

/* 3080 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3082 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3086 */	NdrFcShort( 0x55 ),	/* 85 */
/* 3088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3090 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3092 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3098 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3100 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3110 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePerMachineConnection */

/* 3116 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3122 */	NdrFcShort( 0x56 ),	/* 86 */
/* 3124 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3126 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3128 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3134 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3136 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3146 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3148 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPerMachineConnections */

/* 3152 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3158 */	NdrFcShort( 0x57 ),	/* 87 */
/* 3160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3162 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3164 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3172 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcXcvData */

/* 3188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3194 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3198 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3204 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3206 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3208 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3220 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriverEx */

/* 3224 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x59 ),	/* 89 */
/* 3232 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3234 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3236 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3240 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3244 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3254 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3256 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3258 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 3260 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3264 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Parameter dwFileCopyFlags */

/* 3266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3268 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3274 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 3278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3284 */	NdrFcShort( 0x5a ),	/* 90 */
/* 3286 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3288 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3298 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 3308 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3314 */	NdrFcShort( 0x5b ),	/* 91 */
/* 3316 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3318 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3320 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3326 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3328 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 3338 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3348 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3350 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3358 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 3368 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3374 */	NdrFcShort( 0x5d ),	/* 93 */
/* 3376 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3378 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3380 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3388 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 3398 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x5e ),	/* 94 */
/* 3406 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3408 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3416 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3418 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 3428 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3434 */	NdrFcShort( 0x5f ),	/* 95 */
/* 3436 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3438 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3440 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3448 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFlushPrinter */

/* 3458 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x60 ),	/* 96 */
/* 3466 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3468 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3476 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3478 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSendRecvBidiData */

/* 3494 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3500 */	NdrFcShort( 0x61 ),	/* 97 */
/* 3502 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3504 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3506 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3512 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3514 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 3530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3536 */	NdrFcShort( 0x62 ),	/* 98 */
/* 3538 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3540 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3548 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3550 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 3560 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3566 */	NdrFcShort( 0x63 ),	/* 99 */
/* 3568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3570 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3572 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3580 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 3590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3596 */	NdrFcShort( 0x64 ),	/* 100 */
/* 3598 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3600 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3608 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3610 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 3620 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x65 ),	/* 101 */
/* 3628 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3630 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3632 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3638 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3640 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetCorePrinterDrivers */

/* 3650 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x66 ),	/* 102 */
/* 3658 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3660 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3662 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3668 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3670 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3680 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3682 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 3686 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3692 */	NdrFcShort( 0x67 ),	/* 103 */
/* 3694 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3696 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3698 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3706 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetPrinterDriverPackagePath */

/* 3716 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3722 */	NdrFcShort( 0x68 ),	/* 104 */
/* 3724 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3726 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3728 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3736 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3748 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 3752 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x69 ),	/* 105 */
/* 3760 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3762 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3764 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3772 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3780 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 3782 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x6a ),	/* 106 */
/* 3790 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3792 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3794 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3800 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3802 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 3812 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3818 */	NdrFcShort( 0x6b ),	/* 107 */
/* 3820 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3822 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3824 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3830 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3832 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 3842 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3848 */	NdrFcShort( 0x6c ),	/* 108 */
/* 3850 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3852 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3854 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3860 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3862 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 3872 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x6d ),	/* 109 */
/* 3880 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3882 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3884 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3892 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetJobNamedPropertyValue */

/* 3902 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3908 */	NdrFcShort( 0x6e ),	/* 110 */
/* 3910 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3912 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3914 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3920 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3922 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3934 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJobNamedProperty */

/* 3938 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3944 */	NdrFcShort( 0x6f ),	/* 111 */
/* 3946 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3948 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3950 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3956 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3958 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 3968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3970 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteJobNamedProperty */

/* 3974 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3980 */	NdrFcShort( 0x70 ),	/* 112 */
/* 3982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3984 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3986 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3992 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 3994 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4002 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4006 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobNamedProperties */

/* 4010 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4016 */	NdrFcShort( 0x71 ),	/* 113 */
/* 4018 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4020 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4022 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4030 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4042 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum114NotUsedOnWire */

/* 4046 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4052 */	NdrFcShort( 0x72 ),	/* 114 */
/* 4054 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4056 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4058 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4064 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4066 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4074 */	NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };

static const rpc_MIDL_TYPE_FORMAT_STRING rpc__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x0,	/* FC_RP */
/* 16 */	NdrFcShort( 0xe ),	/* Offset= 14 (30) */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 30 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 32 */	NdrFcShort( 0x10 ),	/* 16 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x6 ),	/* Offset= 6 (42) */
/* 38 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 40 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 42 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 44 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (18) */
/* 46 */	
			0x12, 0x0,	/* FC_UP */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 52 */	NdrFcShort( 0x1 ),	/* 1 */
/* 54 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 56 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 58 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 60 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 62 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 64 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 66 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	
			0x11, 0x0,	/* FC_RP */
/* 72 */	NdrFcShort( 0x34 ),	/* Offset= 52 (124) */
/* 74 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 76 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 78 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 80 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 88 */	NdrFcLong( 0x1 ),	/* 1 */
/* 92 */	NdrFcShort( 0x4 ),	/* Offset= 4 (96) */
/* 94 */	NdrFcShort( 0xffff ),	/* Offset= -1 (93) */
/* 96 */	
			0x12, 0x0,	/* FC_UP */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x18 ),	/* 24 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x6 ),	/* Offset= 6 (112) */
/* 108 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 110 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 112 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 114 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 116 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 122 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 124 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* Offset= 0 (130) */
/* 132 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 134 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (74) */
/* 138 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 140 */	
			0x11, 0x0,	/* FC_RP */
/* 142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (144) */
/* 144 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 148 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 150 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 152 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 154 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 156 */	
			0x11, 0x0,	/* FC_RP */
/* 158 */	NdrFcShort( 0x20a ),	/* Offset= 522 (680) */
/* 160 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 162 */	0x8,		/* Corr desc: FC_LONG */
			0x0,		/*  */
/* 164 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 166 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (170) */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	NdrFcShort( 0x3006 ),	/* 12294 */
/* 174 */	NdrFcLong( 0x1 ),	/* 1 */
/* 178 */	NdrFcShort( 0x22 ),	/* Offset= 34 (212) */
/* 180 */	NdrFcLong( 0x2 ),	/* 2 */
/* 184 */	NdrFcShort( 0x2e ),	/* Offset= 46 (230) */
/* 186 */	NdrFcLong( 0x3 ),	/* 3 */
/* 190 */	NdrFcShort( 0x50 ),	/* Offset= 80 (270) */
/* 192 */	NdrFcLong( 0x4 ),	/* 4 */
/* 196 */	NdrFcShort( 0x94 ),	/* Offset= 148 (344) */
/* 198 */	NdrFcLong( 0x6 ),	/* 6 */
/* 202 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (426) */
/* 204 */	NdrFcLong( 0x8 ),	/* 8 */
/* 208 */	NdrFcShort( 0x140 ),	/* Offset= 320 (528) */
/* 210 */	NdrFcShort( 0xffff ),	/* Offset= -1 (209) */
/* 212 */	
			0x12, 0x0,	/* FC_UP */
/* 214 */	NdrFcShort( 0x2 ),	/* Offset= 2 (216) */
/* 216 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0x4 ),	/* Offset= 4 (226) */
/* 224 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 226 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 228 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 230 */	
			0x12, 0x0,	/* FC_UP */
/* 232 */	NdrFcShort( 0x2 ),	/* Offset= 2 (234) */
/* 234 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 236 */	NdrFcShort( 0x30 ),	/* 48 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0xa ),	/* Offset= 10 (250) */
/* 242 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 244 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 246 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 248 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 250 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 252 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 254 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 256 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 258 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 260 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 262 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 264 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 266 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 268 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 270 */	
			0x12, 0x0,	/* FC_UP */
/* 272 */	NdrFcShort( 0xe ),	/* Offset= 14 (286) */
/* 274 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 276 */	NdrFcShort( 0x2 ),	/* 2 */
/* 278 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 280 */	NdrFcShort( 0x48 ),	/* 72 */
/* 282 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 284 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 286 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 288 */	NdrFcShort( 0x58 ),	/* 88 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x10 ),	/* Offset= 16 (308) */
/* 294 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 296 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 298 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 300 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 302 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 304 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 306 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 308 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 310 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 312 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 314 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 316 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 318 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 320 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 322 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 324 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 326 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 328 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 330 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 332 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 334 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 336 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 338 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 340 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 342 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (274) */
/* 344 */	
			0x12, 0x0,	/* FC_UP */
/* 346 */	NdrFcShort( 0xe ),	/* Offset= 14 (360) */
/* 348 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 350 */	NdrFcShort( 0x2 ),	/* 2 */
/* 352 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 354 */	NdrFcShort( 0x58 ),	/* 88 */
/* 356 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 358 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 360 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 362 */	NdrFcShort( 0x68 ),	/* 104 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x14 ),	/* Offset= 20 (386) */
/* 368 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 370 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 372 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 374 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 376 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 378 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 380 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 382 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 384 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 386 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 388 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 390 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 392 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 394 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 396 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 398 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 400 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 402 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 404 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 406 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 408 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 410 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 412 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 414 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 416 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 418 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 420 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (274) */
/* 422 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 424 */	NdrFcShort( 0xffb4 ),	/* Offset= -76 (348) */
/* 426 */	
			0x12, 0x0,	/* FC_UP */
/* 428 */	NdrFcShort( 0xa ),	/* Offset= 10 (438) */
/* 430 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 434 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 436 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 438 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 440 */	NdrFcShort( 0x98 ),	/* 152 */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x1c ),	/* Offset= 28 (472) */
/* 446 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 448 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 450 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 452 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 454 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 456 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 458 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 460 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 462 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 464 */	NdrFcShort( 0xffde ),	/* Offset= -34 (430) */
/* 466 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 468 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 470 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 472 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 474 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 476 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 478 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 480 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 482 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 484 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 486 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 488 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 490 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 492 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 494 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 496 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 498 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 502 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 504 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 506 */	NdrFcShort( 0xff18 ),	/* Offset= -232 (274) */
/* 508 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 510 */	NdrFcShort( 0xff5e ),	/* Offset= -162 (348) */
/* 512 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 514 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 516 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 518 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 522 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 524 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 526 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 528 */	
			0x12, 0x0,	/* FC_UP */
/* 530 */	NdrFcShort( 0x1a ),	/* Offset= 26 (556) */
/* 532 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 534 */	NdrFcShort( 0x2 ),	/* 2 */
/* 536 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 538 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 540 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 542 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 544 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 546 */	NdrFcShort( 0x2 ),	/* 2 */
/* 548 */	0x18,		/* Corr desc:  field pointer, FC_LONG */
			0x0,		/*  */
/* 550 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 552 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 554 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 556 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 558 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x2a ),	/* Offset= 42 (604) */
/* 564 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 566 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 568 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 570 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 572 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 574 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 576 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 578 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 580 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 582 */	NdrFcShort( 0xff68 ),	/* Offset= -152 (430) */
/* 584 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 586 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 588 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 590 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 592 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 594 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 596 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 598 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 600 */	NdrFcShort( 0xff56 ),	/* Offset= -170 (430) */
/* 602 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 604 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 606 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 608 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 610 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 612 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 614 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 616 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 618 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 620 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 622 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 624 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 626 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 628 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 630 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 632 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 634 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 636 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 638 */	NdrFcShort( 0xfe94 ),	/* Offset= -364 (274) */
/* 640 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 642 */	NdrFcShort( 0xfeda ),	/* Offset= -294 (348) */
/* 644 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 646 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 648 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 650 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 652 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 654 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 656 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 658 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 660 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 662 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 664 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 666 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 668 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 670 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (532) */
/* 672 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 674 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 676 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 678 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (544) */
/* 680 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 682 */	NdrFcShort( 0x10 ),	/* 16 */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* Offset= 0 (686) */
/* 688 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 690 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 692 */	NdrFcShort( 0xfdec ),	/* Offset= -532 (160) */
/* 694 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short winspool_FormatStringOffsetTable[] =
    {
    0,
    36,
    98,
    134,
    170,
    206,
    242,
    278,
    314,
    350,
    386,
    464,
    500,
    536,
    572,
    608,
    644,
    680,
    736,
    772,
    834,
    870,
    906,
    942,
    986,
    1022,
    1058,
    1094,
    1130,
    1166,
    1202,
    1238,
    1274,
    1310,
    1346,
    1382,
    1418,
    1454,
    1484,
    1514,
    1550,
    1586,
    1622,
    1658,
    1688,
    1718,
    1748,
    1784,
    1820,
    1856,
    1886,
    1916,
    1952,
    1988,
    2024,
    2054,
    2084,
    2120,
    2150,
    2186,
    2222,
    2258,
    2294,
    2330,
    2360,
    2390,
    2426,
    2462,
    2498,
    2528,
    2564,
    2600,
    2636,
    2672,
    2708,
    2738,
    2768,
    2798,
    2834,
    2870,
    2906,
    2942,
    2978,
    3014,
    3044,
    3080,
    3116,
    3152,
    3188,
    3224,
    3278,
    3308,
    3338,
    3368,
    3398,
    3428,
    3458,
    3494,
    3530,
    3560,
    3590,
    3620,
    3650,
    3686,
    3716,
    3752,
    3782,
    3812,
    3842,
    3872,
    3902,
    3938,
    3974,
    4010,
    4046
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag345_t;
extern const __midl_frag345_t __midl_frag345;

typedef 
NDR64_FORMAT_CHAR
__midl_frag344_t;
extern const __midl_frag344_t __midl_frag344;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag343_t;
extern const __midl_frag343_t __midl_frag343;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
    struct _NDR64_POINTER_FORMAT frag12;
    struct _NDR64_POINTER_FORMAT frag13;
    struct _NDR64_POINTER_FORMAT frag14;
    struct _NDR64_POINTER_FORMAT frag15;
    struct _NDR64_POINTER_FORMAT frag16;
    struct _NDR64_POINTER_FORMAT frag17;
    struct _NDR64_POINTER_FORMAT frag18;
    struct _NDR64_POINTER_FORMAT frag19;
}
__midl_frag310_t;
extern const __midl_frag310_t __midl_frag310;

typedef 
NDR64_FORMAT_CHAR
__midl_frag309_t;
extern const __midl_frag309_t __midl_frag309;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag308_t;
extern const __midl_frag308_t __midl_frag308;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag307_t;
extern const __midl_frag307_t __midl_frag307;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag306_t;
extern const __midl_frag306_t __midl_frag306;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag304_t;
extern const __midl_frag304_t __midl_frag304;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag303_t;
extern const __midl_frag303_t __midl_frag303;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag294_t;
extern const __midl_frag294_t __midl_frag294;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag292_t;
extern const __midl_frag292_t __midl_frag292;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag291_t;
extern const __midl_frag291_t __midl_frag291;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_MEMPAD_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag32;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag35;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag36;
    } frag2;
}
__midl_frag282_t;
extern const __midl_frag282_t __midl_frag282;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
    struct _NDR64_POINTER_FORMAT frag12;
    struct _NDR64_POINTER_FORMAT frag13;
    struct _NDR64_POINTER_FORMAT frag14;
}
__midl_frag280_t;
extern const __midl_frag280_t __midl_frag280;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
    } frag2;
}
__midl_frag261_t;
extern const __midl_frag261_t __midl_frag261;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag260_t;
extern const __midl_frag260_t __midl_frag260;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
}
__midl_frag259_t;
extern const __midl_frag259_t __midl_frag259;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag244_t;
extern const __midl_frag244_t __midl_frag244;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag243_t;
extern const __midl_frag243_t __midl_frag243;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
}
__midl_frag242_t;
extern const __midl_frag242_t __midl_frag242;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
    } frag2;
}
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag229_t;
extern const __midl_frag229_t __midl_frag229;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag228_t;
extern const __midl_frag228_t __midl_frag228;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag222_t;
extern const __midl_frag222_t __midl_frag222;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag219_t;
extern const __midl_frag219_t __midl_frag219;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    NDR64_UINT32 frag9;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag86_t;
extern const __midl_frag86_t __midl_frag86;

typedef 
NDR64_FORMAT_CHAR
__midl_frag84_t;
extern const __midl_frag84_t __midl_frag84;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag66_t;
extern const __midl_frag66_t __midl_frag66;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag42_t;
extern const __midl_frag42_t __midl_frag42;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag345_t __midl_frag345 =
{ 
/* Opnum114NotUsedOnWire */
    { 
    /* Opnum114NotUsedOnWire */      /* procedure Opnum114NotUsedOnWire */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 8 /* 0x8 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    }
};

static const __midl_frag344_t __midl_frag344 =
0x5    /* FC64_INT32 */;

static const __midl_frag343_t __midl_frag343 =
{ 
/* RpcEnumJobNamedProperties */
    { 
    /* RpcEnumJobNamedProperties */      /* procedure RpcEnumJobNamedProperties */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag344,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag310_t __midl_frag310 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag291
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag294
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag303
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag307
    }
};

static const __midl_frag309_t __midl_frag309 =
0x11    /* FC64_WCHAR */;

static const __midl_frag308_t __midl_frag308 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 196 /* 0xc4 */
    }
};

static const __midl_frag307_t __midl_frag307 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag308
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag309
    }
};

static const __midl_frag306_t __midl_frag306 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag304_t __midl_frag304 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 168 /* 0xa8 */
    }
};

static const __midl_frag303_t __midl_frag303 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag304
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag309
    }
};

static const __midl_frag295_t __midl_frag295 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 88 /* 0x58 */
    }
};

static const __midl_frag294_t __midl_frag294 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag295
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag309
    }
};

static const __midl_frag292_t __midl_frag292 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */
    }
};

static const __midl_frag291_t __midl_frag291 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag292
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag309
    }
};

static const __midl_frag282_t __midl_frag282 =
{ 
/* RPC_DRIVER_INFO_8 */
    { 
    /* RPC_DRIVER_INFO_8 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_8 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 224 /* 0xe0 */,
        0,
        0,
        &__midl_frag310,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag281_t __midl_frag281 =
{ 
/* *RPC_DRIVER_INFO_8 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag282
};

static const __midl_frag280_t __midl_frag280 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag291
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag294
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    }
};

static const __midl_frag261_t __midl_frag261 =
{ 
/* RPC_DRIVER_INFO_6 */
    { 
    /* RPC_DRIVER_INFO_6 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_6 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 152 /* 0x98 */,
        0,
        0,
        &__midl_frag280,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag260_t __midl_frag260 =
{ 
/* *RPC_DRIVER_INFO_6 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag261
};

static const __midl_frag259_t __midl_frag259 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag291
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag294
    }
};

static const __midl_frag244_t __midl_frag244 =
{ 
/* RPC_DRIVER_INFO_4 */
    { 
    /* RPC_DRIVER_INFO_4 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_4 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 104 /* 0x68 */,
        0,
        0,
        &__midl_frag259,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag243_t __midl_frag243 =
{ 
/* *RPC_DRIVER_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag244
};

static const __midl_frag242_t __midl_frag242 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag291
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/* RPC_DRIVER_INFO_3 */
    { 
    /* RPC_DRIVER_INFO_3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_3 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 88 /* 0x58 */,
        0,
        0,
        &__midl_frag242,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag229_t __midl_frag229 =
{ 
/* *RPC_DRIVER_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag230
};

static const __midl_frag228_t __midl_frag228 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag306
    }
};

static const __midl_frag222_t __midl_frag222 =
{ 
/* DRIVER_INFO_2 */
    { 
    /* DRIVER_INFO_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_INFO_2 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        &__midl_frag228,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* *DRIVER_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag222
};

static const __midl_frag219_t __midl_frag219 =
{ 
/* DRIVER_INFO_1 */
    { 
    /* DRIVER_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_INFO_1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag306
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag218_t __midl_frag218 =
{ 
/* *DRIVER_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag219
};

static const __midl_frag217_t __midl_frag217 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* __MIDL_winspool_0002 */
    { 
    /* __MIDL_winspool_0002 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag217,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 6 /* 0x6 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag218,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag221,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag229,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag243,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag260,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag281,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag215_t __midl_frag215 =
{ 
/* DRIVER_CONTAINER */
    { 
    /* DRIVER_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_CONTAINER */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag216
        },
        { 
        /* DRIVER_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag214_t __midl_frag214 =
{ 
/* *DRIVER_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag215
};

static const __midl_frag212_t __midl_frag212 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag306
};

static const __midl_frag211_t __midl_frag211 =
{ 
/* RpcAddPrinterDriverEx */
    { 
    /* RpcAddPrinterDriverEx */      /* procedure RpcAddPrinterDriverEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag212,
        { 
        /* pName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pDriverContainer */      /* parameter pDriverContainer */
        &__midl_frag215,
        { 
        /* pDriverContainer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwFileCopyFlags */      /* parameter dwFileCopyFlags */
        &__midl_frag344,
        { 
        /* dwFileCopyFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag344,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag95_t __midl_frag95 =
{ 
/* RpcEndDocPrinter */
    { 
    /* RpcEndDocPrinter */      /* procedure RpcEndDocPrinter */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag96,
        { 
        /* hPrinter */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag344,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag86_t __midl_frag86 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag344
};

static const __midl_frag84_t __midl_frag84 =
0x10    /* FC64_CHAR */;

static const __midl_frag83_t __midl_frag83 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag83
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag84
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag82
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* RpcWritePrinter */
    { 
    /* RpcWritePrinter */      /* procedure RpcWritePrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag96,
        { 
        /* hPrinter */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pBuf */      /* parameter pBuf */
        &__midl_frag82,
        { 
        /* pBuf */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag344,
        { 
        /* cbBuf */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pcWritten */      /* parameter pcWritten */
        &__midl_frag344,
        { 
        /* pcWritten */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag344,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag70_t __midl_frag70 =
{ 
/* DOC_INFO_1 */
    { 
    /* DOC_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DOC_INFO_1 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag306
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag306
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag306
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* *DOC_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag70
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* __MIDL_winspool_0001 */
    { 
    /* __MIDL_winspool_0001 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag217,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag69,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag66_t __midl_frag66 =
{ 
/* DOC_INFO_CONTAINER */
    { 
    /* DOC_INFO_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DOC_INFO_CONTAINER */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag67
        },
        { 
        /* DOC_INFO_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag65_t __midl_frag65 =
{ 
/* *DOC_INFO_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag66
};

static const __midl_frag63_t __midl_frag63 =
{ 
/* RpcStartDocPrinter */
    { 
    /* RpcStartDocPrinter */      /* procedure RpcStartDocPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag96,
        { 
        /* hPrinter */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pDocInfoContainer */      /* parameter pDocInfoContainer */
        &__midl_frag66,
        { 
        /* pDocInfoContainer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pJobId */      /* parameter pJobId */
        &__midl_frag344,
        { 
        /* pJobId */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag344,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag43_t __midl_frag43 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag42_t __midl_frag42 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag43
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag84
    }
};

static const __midl_frag41_t __midl_frag41 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag42
};

static const __midl_frag35_t __midl_frag35 =
{ 
/* RpcEnumPrinterDrivers */
    { 
    /* RpcEnumPrinterDrivers */      /* procedure RpcEnumPrinterDrivers */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag212,
        { 
        /* pName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag212,
        { 
        /* pEnvironment */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag344,
        { 
        /* Level */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pDrivers */      /* parameter pDrivers */
        &__midl_frag41,
        { 
        /* pDrivers */
            1,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag344,
        { 
        /* cbBuf */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag344,
        { 
        /* pcbNeeded */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag344,
        { 
        /* pcReturned */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag344,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag13
    }
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag217
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag84
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* DEVMODE_CONTAINER */
    { 
    /* DEVMODE_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DEVMODE_CONTAINER */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag16,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* *DEVMODE_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag12
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag8
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* RpcOpenPrinter */
    { 
    /* RpcOpenPrinter */      /* procedure RpcOpenPrinter */
        (NDR64_UINT32) 2883651 /* 0x2c0043 */,    /* auto handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag212,
        { 
        /* pPrinterName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pHandle */      /* parameter pHandle */
        &__midl_frag8,
        { 
        /* pHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pDatatype */      /* parameter pDatatype */
        &__midl_frag212,
        { 
        /* pDatatype */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag12,
        { 
        /* pDevModeContainer */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* AccessRequired */      /* parameter AccessRequired */
        &__midl_frag344,
        { 
        /* AccessRequired */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag344,
        { 
        /* DWORD */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef winspool_Ndr64ProcTable[] =
    {
    &__midl_frag343,
    &__midl_frag4,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag35,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag63,
    &__midl_frag343,
    &__midl_frag79,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag95,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag211,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag345,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag343,
    &__midl_frag345
    };


static const MIDL_STUB_DESC winspool_StubDesc = 
    {
    (void *)& winspool___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &winspool__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    rpc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& winspool_ProxyInfo,   /* proxy/server info */
    0
    };

static const MIDL_SYNTAX_INFO winspool_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    rpc__MIDL_ProcFormatString.Format,
    winspool_FormatStringOffsetTable,
    rpc__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) winspool_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO winspool_ProxyInfo =
    {
    &winspool_StubDesc,
    rpc__MIDL_ProcFormatString.Format,
    winspool_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)winspool_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

