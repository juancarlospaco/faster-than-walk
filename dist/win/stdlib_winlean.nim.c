/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg tyObject_GUID__J2WQBMgezjwf6Trblkflgg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA;

/* section: NIM_merge_TYPES */
typedef NI8 tyArray__9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray__9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef N_STDCALL_PTR(NCSTRING, tyProc__5ctyytqoGFQ0BA1imFGbVw) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI, tyProc__uryidYWkntM7ddjZSyxvyQ) (void);
typedef N_STDCALL_PTR(NI, tyProc__lLim4ugM6CVjiaTaa7eXVA) (NI16* lpFileName, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(NI32, tyProc__aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* arguments);
typedef N_STDCALL_PTR(void, tyProc__im9buRnIvptJfzdASYMEbBA) (void* p);
typedef N_STDCALL_PTR(NI32, tyProc__9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI32, tyProc__jwEWAkul5J6p6K0UfXa1tw) (NI hFindFile, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(void, tyProc__ofoySXaAAlxxs9bQS9a1etlg) (NI hFindFile);

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__Yq5XYz2ycX5V5B9bUM4Uyiw)(NimStringDesc* path, NIM_BOOL globalSymbols);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__ALH9bdNwXEzg7MPq4PA9csvw)(void* lib, NCSTRING name);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_2, "Ws2_32.dll", 10);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_5, "kernel32", 8);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_6, "kernel32", 8);

/* section: NIM_merge_VARS */
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX__YmR9c9crObjjK9ckt1ygsPQKg = {((NI32) 631375801), ((NI16) -8717), ((NI16) 18016), {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX__pwoOiDuyZgHBOLaI2GSBpg = {((NI32) -1254720015), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS__rSjtFMq7pCHQR2EQvcKbDg = {((NI32) -1254720014), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyProc__5ctyytqoGFQ0BA1imFGbVw inet_ntop_real__FVXn9aJ5AOo23ScDsZUc9aZw = NIM_NIL;
N_LIB_PRIVATE void* ws2__hGspZUrVrEMpO9aP9c3dJQPQ;
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_3;
tyProc__uryidYWkntM7ddjZSyxvyQ Dl_12798563_;
tyProc__lLim4ugM6CVjiaTaa7eXVA Dl_12797456_;
tyProc__aO673xGTLLxou7P7GxoCXA Dl_12796835_;
tyProc__im9buRnIvptJfzdASYMEbBA Dl_12797001_;
tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_12796830_;
tyProc__jwEWAkul5J6p6K0UfXa1tw Dl_12797461_;
tyProc__ofoySXaAAlxxs9bQS9a1etlg Dl_12797614_;

/* section: NIM_merge_PROCS */
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_winleanInit000)(void) {
{
	void* T1_;
NIM_BOOL* nimErr_;
nimErr_ = nimErrorFlag();
	T1_ = (void*)0;
	T1_ = loadLib__Yq5XYz2ycX5V5B9bUM4Uyiw(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_2), NIM_FALSE);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	ws2__hGspZUrVrEMpO9aP9c3dJQPQ = T1_;
	{
		void* T6_;
		if (!!((ws2__hGspZUrVrEMpO9aP9c3dJQPQ == NIM_NIL))) goto LA4_;
		T6_ = (void*)0;
		T6_ = symAddr__ALH9bdNwXEzg7MPq4PA9csvw(ws2__hGspZUrVrEMpO9aP9c3dJQPQ, "inet_ntop");
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		inet_ntop_real__FVXn9aJ5AOo23ScDsZUc9aZw = ((tyProc__5ctyytqoGFQ0BA1imFGbVw) (T6_));
	}
	LA4_: ;
	BeforeRet_: ;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_winleanDatInit000)(void) {

/* section: NIM_merge_DYNLIB_INIT */
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_3 = nimLoadLibrary(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_5)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_6));
	Dl_12798563_ = (tyProc__uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetCurrentProcess");
	Dl_12797456_ = (tyProc__lLim4ugM6CVjiaTaa7eXVA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FindFirstFileW");
	Dl_12796835_ = (tyProc__aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FormatMessageW");
	Dl_12797001_ = (tyProc__im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "LocalFree");
	Dl_12796830_ = (tyProc__9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetLastError");
	Dl_12797461_ = (tyProc__jwEWAkul5J6p6K0UfXa1tw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FindNextFileW");
	Dl_12797614_ = (tyProc__ofoySXaAAlxxs9bQS9a1etlg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FindClose");
}

