/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   /usr/bin/x86_64-w64-mingw32-gcc -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN   -I/home/juan/.choosenim/toolchains/nim-1.4.0/lib -I/home/juan/code/faster-than-walk/src -o /home/juan/code/faster-than-walk/dist/win/stdlib_strutils.nim.c.o /home/juan/code/faster-than-walk/dist/win/stdlib_strutils.nim.c */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
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
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, nsuAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, invalidFormatString__8vOMwvNB8blLQSoRXfInAg)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, findNormalized__7LxW6wQxHkQGOeaPw6nEjQ)(NimStringDesc* x, NimStringDesc** inArray, NI inArrayLen_0);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);

/* section: NIM_merge_DATA */
extern TNimType NTI__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__JGc9b9bh2D3nTdUR7TGyq8aA_5, "invalid format string", 21);

/* section: NIM_merge_VARS */
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
N_LIB_PRIVATE N_NOINLINE(void, invalidFormatString__8vOMwvNB8blLQSoRXfInAg)(void) {
	tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T1_;
	nimfr_("invalidFormatString", "strutils.nim");
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
	(*T1_).Sup.Sup.name = "ValueError";
	(*T1_).Sup.Sup.message = copyString(((NimStringDesc*) &TM__JGc9b9bh2D3nTdUR7TGyq8aA_5));
	(*T1_).Sup.Sup.parent = NIM_NIL;
	nimln_(2759, "strutils.nim");
	raiseExceptionEx((Exception*)T1_, "ValueError", "invalidFormatString", "strutils.nim", 2759);
	popFrame();
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr_("toLowerAscii", "strutils.nim");
	result = (NIM_CHAR)0;
	nimln_(210, "strutils.nim");
	{
		NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_25;
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		nimln_(211, "strutils.nim");
		if (nimAddInt(((NU8)(c)), ((NI) 32), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_25)) { raiseOverflow(); };
		if (((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_25)) < ((NI) 0) || ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_25)) > ((NI) 255)){ raiseRangeErrorI((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_25), ((NI) 0), ((NI) 255)); }
		result = ((NIM_CHAR) (((NI) ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_25)))));
	}
	goto LA1_;
	LA3_: ;
	{
		nimln_(213, "strutils.nim");
		result = c;
	}
	LA1_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	NI i;
	NI j;
	nimfr_("cmpIgnoreStyle", "strutils.nim");
{	result = (NI)0;
	i = ((NI) 0);
	j = ((NI) 0);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			{
				while (1) {
					NIM_BOOL T5_;
					T5_ = (NIM_BOOL)0;
					T5_ = (i < (a ? a->Sup.len : 0));
					if (!(T5_)) goto LA6_;
					T5_ = ((NU8)(a->data[i]) == (NU8)(95));
					LA6_: ;
					if (!T5_) goto LA4;
					i += ((NI) 1);
				} LA4: ;
			}
			{
				while (1) {
					NIM_BOOL T9_;
					T9_ = (NIM_BOOL)0;
					T9_ = (j < (b ? b->Sup.len : 0));
					if (!(T9_)) goto LA10_;
					T9_ = ((NU8)(b->data[j]) == (NU8)(95));
					LA10_: ;
					if (!T9_) goto LA8;
					j += ((NI) 1);
				} LA8: ;
			}
			{
				if (!(i < (a ? a->Sup.len : 0))) goto LA13_;
				aa = nsuToLowerAsciiChar(a->data[i]);
			}
			goto LA11_;
			LA13_: ;
			{
				aa = 0;
			}
			LA11_: ;
			{
				if (!(j < (b ? b->Sup.len : 0))) goto LA18_;
				bb = nsuToLowerAsciiChar(b->data[j]);
			}
			goto LA16_;
			LA18_: ;
			{
				bb = 0;
			}
			LA16_: ;
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				if (!!((result == ((NI) 0)))) goto LA23_;
				goto BeforeRet_;
			}
			LA23_: ;
			{
				if (!((a ? a->Sup.len : 0) <= i)) goto LA27_;
				{
					if (!((b ? b->Sup.len : 0) <= j)) goto LA31_;
					result = ((NI) 0);
					goto BeforeRet_;
				}
				LA31_: ;
				result = ((NI) -1);
				goto BeforeRet_;
			}
			goto LA25_;
			LA27_: ;
			{
				if (!((b ? b->Sup.len : 0) <= j)) goto LA34_;
				result = ((NI) 1);
				goto BeforeRet_;
			}
			goto LA25_;
			LA34_: ;
			LA25_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		}
	}
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, findNormalized__7LxW6wQxHkQGOeaPw6nEjQ)(NimStringDesc* x, NimStringDesc** inArray, NI inArrayLen_0) {
	NI result;
	NI i;
	nimfr_("findNormalized", "strutils.nim");
{	result = (NI)0;
	nimln_(2751, "strutils.nim");
	i = ((NI) 0);
	{
		nimln_(2752, "strutils.nim");
		while (1) {
			NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_26;
			if (!(i < (inArrayLen_0-1))) goto LA2;
			nimln_(2753, "strutils.nim");
			{
				NI T5_;
				if ((NU)(i) >= (NU)(inArrayLen_0)){ raiseIndexError2(i,inArrayLen_0-1); }
				T5_ = (NI)0;
				T5_ = nsuCmpIgnoreStyle(x, inArray[i]);
				if (!(T5_ == ((NI) 0))) goto LA6_;
				result = i;
				goto BeforeRet_;
			}
			LA6_: ;
			nimln_(2754, "strutils.nim");
			if (nimAddInt(i, ((NI) 2), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_26)) { raiseOverflow(); };
			i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_26);
		} LA2: ;
	}
	nimln_(2756, "strutils.nim");
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nsuAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0) {
	NI i;
	NI num;
	nimfr_("addf", "strutils.nim");
	nimln_(2765, "strutils.nim");
	i = ((NI) 0);
	nimln_(2766, "strutils.nim");
	num = ((NI) 0);
	{
		nimln_(2767, "strutils.nim");
		while (1) {
			if (!(i < (formatstr ? formatstr->Sup.len : 0))) goto LA2;
			nimln_(2768, "strutils.nim");
			{
				NIM_BOOL T5_;
				NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_3;
				NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_4;
				T5_ = (NIM_BOOL)0;
				if ((NU)(i) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(i,(formatstr ? formatstr->Sup.len : 0)-1); }
				T5_ = ((NU8)(formatstr->data[i]) == (NU8)(36));
				if (!(T5_)) goto LA6_;
				if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_3)) { raiseOverflow(); };
				T5_ = ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_3) < (formatstr ? formatstr->Sup.len : 0));
				LA6_: ;
				if (!T5_) goto LA7_;
				nimln_(2769, "strutils.nim");
				if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_4)) { raiseOverflow(); };
				if ((NU)((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_4)) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_4),(formatstr ? formatstr->Sup.len : 0)-1); }
				switch (((NU8)(formatstr->data[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_4)]))) {
				case 35:
				{
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_6;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_7;
					nimln_(2771, "strutils.nim");
					{
						if (!((aLen_0-1) < num)) goto LA12_;
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
					}
					LA12_: ;
					nimln_(2772, "strutils.nim");
					if ((NU)(num) >= (NU)(aLen_0)){ raiseIndexError2(num,aLen_0-1); }
					(*s) = resizeString((*s), (a[num] ? a[num]->Sup.len : 0) + 0);
appendString((*s), a[num]);
					nimln_(2773, "strutils.nim");
					if (nimAddInt(i, ((NI) 2), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_6)) { raiseOverflow(); };
					i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_6);
					nimln_(2774, "strutils.nim");
					if (nimAddInt(num, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_7)) { raiseOverflow(); };
					num = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_7);
				}
				break;
				case 36:
				{
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_8;
					nimln_(2776, "strutils.nim");
					(*s) = addChar((*s), 36);
					nimln_(2777, "strutils.nim");
					if (nimAddInt(i, ((NI) 2), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_8)) { raiseOverflow(); };
					i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_8);
				}
				break;
				case 49 ... 57:
				case 45:
				{
					NI j;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_9;
					NIM_BOOL negative;
					NI idx;
					nimln_(2779, "strutils.nim");
					j = ((NI) 0);
					nimln_(2780, "strutils.nim");
					if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_9)) { raiseOverflow(); };
					i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_9);
					nimln_(2781, "strutils.nim");
					if ((NU)(i) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(i,(formatstr ? formatstr->Sup.len : 0)-1); }
					negative = ((NU8)(formatstr->data[i]) == (NU8)(45));
					nimln_(2782, "strutils.nim");
					{
						NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_10;
						if (!negative) goto LA18_;
						if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_10)) { raiseOverflow(); };
						i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_10);
					}
					LA18_: ;
					{
						nimln_(2783, "strutils.nim");
						while (1) {
							NIM_BOOL T22_;
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_11;
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_12;
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_13;
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_14;
							T22_ = (NIM_BOOL)0;
							T22_ = (i < (formatstr ? formatstr->Sup.len : 0));
							if (!(T22_)) goto LA23_;
							if ((NU)(i) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(i,(formatstr ? formatstr->Sup.len : 0)-1); }
							T22_ = (((NU8)(formatstr->data[i])) >= ((NU8)(48)) && ((NU8)(formatstr->data[i])) <= ((NU8)(57)));
							LA23_: ;
							if (!T22_) goto LA21;
							nimln_(2784, "strutils.nim");
							if (nimMulInt(j, ((NI) 10), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_11)) { raiseOverflow(); };
							if ((NU)(i) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(i,(formatstr ? formatstr->Sup.len : 0)-1); }
							if (nimAddInt((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_11), ((NU8)(formatstr->data[i])), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_12)) { raiseOverflow(); };
							if (nimSubInt((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_12), ((NI) 48), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_13)) { raiseOverflow(); };
							j = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_13);
							nimln_(2785, "strutils.nim");
							if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_14)) { raiseOverflow(); };
							i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_14);
						} LA21: ;
					}
					nimln_(2786, "strutils.nim");
					{
						NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_15;
						if (!!(negative)) goto LA26_;
						if (nimSubInt(j, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_15)) { raiseOverflow(); };
						idx = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_15);
					}
					goto LA24_;
					LA26_: ;
					{
						NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_16;
						if (nimSubInt(aLen_0, j, &TM__JGc9b9bh2D3nTdUR7TGyq8aA_16)) { raiseOverflow(); };
						idx = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_16);
					}
					LA24_: ;
					nimln_(2787, "strutils.nim");
					{
						NIM_BOOL T31_;
						T31_ = (NIM_BOOL)0;
						T31_ = (idx < ((NI) 0));
						if (T31_) goto LA32_;
						T31_ = ((aLen_0-1) < idx);
						LA32_: ;
						if (!T31_) goto LA33_;
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
					}
					LA33_: ;
					nimln_(2788, "strutils.nim");
					if ((NU)(idx) >= (NU)(aLen_0)){ raiseIndexError2(idx,aLen_0-1); }
					(*s) = resizeString((*s), (a[idx] ? a[idx]->Sup.len : 0) + 0);
appendString((*s), a[idx]);
				}
				break;
				case 123:
				{
					NI j_2;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_17;
					NI k;
					NIM_BOOL negative_2;
					NI isNumber;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_30;
					nimln_(2790, "strutils.nim");
					if (nimAddInt(i, ((NI) 2), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_17)) { raiseOverflow(); };
					j_2 = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_17);
					nimln_(2791, "strutils.nim");
					k = ((NI) 0);
					nimln_(2792, "strutils.nim");
					if ((NU)(j_2) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(j_2,(formatstr ? formatstr->Sup.len : 0)-1); }
					negative_2 = ((NU8)(formatstr->data[j_2]) == (NU8)(45));
					nimln_(2793, "strutils.nim");
					{
						NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_18;
						if (!negative_2) goto LA38_;
						if (nimAddInt(j_2, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_18)) { raiseOverflow(); };
						j_2 = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_18);
					}
					LA38_: ;
					nimln_(2794, "strutils.nim");
					isNumber = ((NI) 0);
					{
						nimln_(2795, "strutils.nim");
						while (1) {
							NIM_BOOL T42_;
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_22;
							T42_ = (NIM_BOOL)0;
							T42_ = (j_2 < (formatstr ? formatstr->Sup.len : 0));
							if (!(T42_)) goto LA43_;
							if ((NU)(j_2) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(j_2,(formatstr ? formatstr->Sup.len : 0)-1); }
							T42_ = !((((NU8)(formatstr->data[j_2])) == ((NU8)(0)) || ((NU8)(formatstr->data[j_2])) == ((NU8)(125))));
							LA43_: ;
							if (!T42_) goto LA41;
							nimln_(2796, "strutils.nim");
							{
								NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_19;
								NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_20;
								NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_21;
								if ((NU)(j_2) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(j_2,(formatstr ? formatstr->Sup.len : 0)-1); }
								if (!(((NU8)(formatstr->data[j_2])) >= ((NU8)(48)) && ((NU8)(formatstr->data[j_2])) <= ((NU8)(57)))) goto LA46_;
								nimln_(2797, "strutils.nim");
								if (nimMulInt(k, ((NI) 10), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_19)) { raiseOverflow(); };
								if ((NU)(j_2) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(j_2,(formatstr ? formatstr->Sup.len : 0)-1); }
								if (nimAddInt((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_19), ((NU8)(formatstr->data[j_2])), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_20)) { raiseOverflow(); };
								if (nimSubInt((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_20), ((NI) 48), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_21)) { raiseOverflow(); };
								k = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_21);
								nimln_(2798, "strutils.nim");
								{
									if (!(isNumber == ((NI) 0))) goto LA50_;
									isNumber = ((NI) 1);
								}
								LA50_: ;
							}
							goto LA44_;
							LA46_: ;
							{
								nimln_(2800, "strutils.nim");
								isNumber = ((NI) -1);
							}
							LA44_: ;
							nimln_(2801, "strutils.nim");
							if (nimAddInt(j_2, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_22)) { raiseOverflow(); };
							j_2 = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_22);
						} LA41: ;
					}
					nimln_(2802, "strutils.nim");
					{
						NI idx_2;
						if (!(isNumber == ((NI) 1))) goto LA55_;
						nimln_(2803, "strutils.nim");
						{
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_23;
							if (!!(negative_2)) goto LA59_;
							if (nimSubInt(k, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_23)) { raiseOverflow(); };
							idx_2 = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_23);
						}
						goto LA57_;
						LA59_: ;
						{
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_24;
							if (nimSubInt(aLen_0, k, &TM__JGc9b9bh2D3nTdUR7TGyq8aA_24)) { raiseOverflow(); };
							idx_2 = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_24);
						}
						LA57_: ;
						nimln_(2804, "strutils.nim");
						{
							NIM_BOOL T64_;
							T64_ = (NIM_BOOL)0;
							T64_ = (idx_2 < ((NI) 0));
							if (T64_) goto LA65_;
							T64_ = ((aLen_0-1) < idx_2);
							LA65_: ;
							if (!T64_) goto LA66_;
							invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
						}
						LA66_: ;
						nimln_(2805, "strutils.nim");
						if ((NU)(idx_2) >= (NU)(aLen_0)){ raiseIndexError2(idx_2,aLen_0-1); }
						(*s) = resizeString((*s), (a[idx_2] ? a[idx_2]->Sup.len : 0) + 0);
appendString((*s), a[idx_2]);
					}
					goto LA53_;
					LA55_: ;
					{
						NI x;
						NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_27;
						NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_28;
						NimStringDesc* T69_;
						nimln_(2807, "strutils.nim");
						if (nimAddInt(i, ((NI) 2), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_27)) { raiseOverflow(); };
						if (nimSubInt(j_2, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_28)) { raiseOverflow(); };
						T69_ = (NimStringDesc*)0;
						T69_ = substr__2yh9cer0ymNRHlOOg8P7IuA(formatstr, (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_27), (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_28));
						x = findNormalized__7LxW6wQxHkQGOeaPw6nEjQ(T69_, a, aLen_0);
						nimln_(2808, "strutils.nim");
						{
							NIM_BOOL T72_;
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_29;
							T72_ = (NIM_BOOL)0;
							T72_ = (((NI) 0) <= x);
							if (!(T72_)) goto LA73_;
							T72_ = (x < (aLen_0-1));
							LA73_: ;
							if (!T72_) goto LA74_;
							if (nimAddInt(x, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_29)) { raiseOverflow(); };
							if ((NU)((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_29)) >= (NU)(aLen_0)){ raiseIndexError2((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_29),aLen_0-1); }
							(*s) = resizeString((*s), (a[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_29)] ? a[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_29)]->Sup.len : 0) + 0);
appendString((*s), a[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_29)]);
						}
						goto LA70_;
						LA74_: ;
						{
							nimln_(2809, "strutils.nim");
							invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
						}
						LA70_: ;
					}
					LA53_: ;
					nimln_(2810, "strutils.nim");
					if (nimAddInt(j_2, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_30)) { raiseOverflow(); };
					i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_30);
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j_3;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_31;
					NI x_2;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_33;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_34;
					NimStringDesc* T82_;
					nimln_(2812, "strutils.nim");
					if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_31)) { raiseOverflow(); };
					j_3 = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_31);
					{
						nimln_(2813, "strutils.nim");
						while (1) {
							NIM_BOOL T80_;
							NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_32;
							T80_ = (NIM_BOOL)0;
							T80_ = (j_3 < (formatstr ? formatstr->Sup.len : 0));
							if (!(T80_)) goto LA81_;
							if ((NU)(j_3) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(j_3,(formatstr ? formatstr->Sup.len : 0)-1); }
							T80_ = (((NU8)(formatstr->data[j_3])) >= ((NU8)(97)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(122)) || ((NU8)(formatstr->data[j_3])) >= ((NU8)(65)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(90)) || ((NU8)(formatstr->data[j_3])) >= ((NU8)(48)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(57)) || ((NU8)(formatstr->data[j_3])) >= ((NU8)(128)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(255)) || ((NU8)(formatstr->data[j_3])) == ((NU8)(95)));
							LA81_: ;
							if (!T80_) goto LA79;
							if (nimAddInt(j_3, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_32)) { raiseOverflow(); };
							j_3 = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_32);
						} LA79: ;
					}
					nimln_(2814, "strutils.nim");
					if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_33)) { raiseOverflow(); };
					if (nimSubInt(j_3, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_34)) { raiseOverflow(); };
					T82_ = (NimStringDesc*)0;
					T82_ = substr__2yh9cer0ymNRHlOOg8P7IuA(formatstr, (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_33), (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_34));
					x_2 = findNormalized__7LxW6wQxHkQGOeaPw6nEjQ(T82_, a, aLen_0);
					nimln_(2815, "strutils.nim");
					{
						NIM_BOOL T85_;
						NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_35;
						T85_ = (NIM_BOOL)0;
						T85_ = (((NI) 0) <= x_2);
						if (!(T85_)) goto LA86_;
						T85_ = (x_2 < (aLen_0-1));
						LA86_: ;
						if (!T85_) goto LA87_;
						if (nimAddInt(x_2, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_35)) { raiseOverflow(); };
						if ((NU)((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_35)) >= (NU)(aLen_0)){ raiseIndexError2((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_35),aLen_0-1); }
						(*s) = resizeString((*s), (a[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_35)] ? a[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_35)]->Sup.len : 0) + 0);
appendString((*s), a[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_35)]);
					}
					goto LA83_;
					LA87_: ;
					{
						nimln_(2816, "strutils.nim");
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
					}
					LA83_: ;
					nimln_(2817, "strutils.nim");
					i = j_3;
				}
				break;
				default:
				{
					nimln_(2819, "strutils.nim");
					invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
				}
				break;
				}
			}
			goto LA3_;
			LA7_: ;
			{
				NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_36;
				nimln_(2821, "strutils.nim");
				if ((NU)(i) >= (NU)(formatstr ? formatstr->Sup.len : 0)){ raiseIndexError2(i,(formatstr ? formatstr->Sup.len : 0)-1); }
				(*s) = addChar((*s), formatstr->data[i]);
				nimln_(2822, "strutils.nim");
				if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_36)) { raiseOverflow(); };
				i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_36);
			}
			LA3_: ;
		} LA2: ;
	}
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0) {
	NimStringDesc* result;
	NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_2;
	nimfr_("%", "strutils.nim");
	result = (NimStringDesc*)0;
	nimln_(2869, "strutils.nim");
	if (nimAddInt((formatstr ? formatstr->Sup.len : 0), (NI)((NU64)(aLen_0) << (NU64)(((NI) 4))), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_2)) { raiseOverflow(); };
	if (((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_2)) < ((NI) 0) || ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_2)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_2), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = rawNewString(((NI) ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_2))));
	nimln_(2870, "strutils.nim");
	nsuAddf((&result), formatstr, a, aLen_0);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuEndsWith)(NimStringDesc* s, NimStringDesc* suffix) {
	NIM_BOOL result;
	NI i;
	NI j;
	NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_37;
	nimfr_("endsWith", "strutils.nim");
{	result = (NIM_BOOL)0;
	nimln_(1687, "strutils.nim");
	i = ((NI) 0);
	nimln_(1688, "strutils.nim");
	if (nimSubInt((s ? s->Sup.len : 0), (suffix ? suffix->Sup.len : 0), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_37)) { raiseOverflow(); };
	j = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_37);
	{
		nimln_(1689, "strutils.nim");
		while (1) {
			NIM_BOOL T3_;
			NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_38;
			NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_39;
			NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_41;
			T3_ = (NIM_BOOL)0;
			if (nimAddInt(i, j, &TM__JGc9b9bh2D3nTdUR7TGyq8aA_38)) { raiseOverflow(); };
			T3_ = (((NI) 0) <= (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_38));
			if (!(T3_)) goto LA4_;
			if (nimAddInt(i, j, &TM__JGc9b9bh2D3nTdUR7TGyq8aA_39)) { raiseOverflow(); };
			T3_ = ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_39) < (s ? s->Sup.len : 0));
			LA4_: ;
			if (!T3_) goto LA2;
			nimln_(1690, "strutils.nim");
			{
				NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_40;
				if (nimAddInt(i, j, &TM__JGc9b9bh2D3nTdUR7TGyq8aA_40)) { raiseOverflow(); };
				if ((NU)((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_40)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_40),(s ? s->Sup.len : 0)-1); }
				if ((NU)(i) >= (NU)(suffix ? suffix->Sup.len : 0)){ raiseIndexError2(i,(suffix ? suffix->Sup.len : 0)-1); }
				if (!!(((NU8)(s->data[(NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_40)]) == (NU8)(suffix->data[i])))) goto LA7_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			LA7_: ;
			nimln_(1691, "strutils.nim");
			if (nimAddInt(i, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_41)) { raiseOverflow(); };
			i = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_41);
		} LA2: ;
	}
	nimln_(1692, "strutils.nim");
	{
		if (!((suffix ? suffix->Sup.len : 0) <= i)) goto LA11_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA11_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s) {
	NimStringDesc* result;
	NI j;
	nimfr_("normalize", "strutils.nim");
	result = (NimStringDesc*)0;
	nimln_(315, "strutils.nim");
	if (((s ? s->Sup.len : 0)) < ((NI) 0) || ((s ? s->Sup.len : 0)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((s ? s->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = mnewString(((NI) ((s ? s->Sup.len : 0))));
	nimln_(316, "strutils.nim");
	j = ((NI) 0);
	{
		NI i;
		NI colontmp_;
		NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_42;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(317, "strutils.nim");
		if (nimSubInt((s ? s->Sup.len : 0), ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_42)) { raiseOverflow(); };
		colontmp_ = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_42);
		nimln_(77, "iterators_1.nim");
		res = ((NI) 0);
		{
			nimln_(78, "iterators_1.nim");
			while (1) {
				NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_46;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(317, "strutils.nim");
				i = res;
				nimln_(318, "strutils.nim");
				{
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_43;
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_44;
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
					if (!(((NU8)(s->data[i])) >= ((NU8)(65)) && ((NU8)(s->data[i])) <= ((NU8)(90)))) goto LA6_;
					if ((NU)(j) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(j,(result ? result->Sup.len : 0)-1); }
					nimln_(319, "strutils.nim");
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
					if (nimAddInt(((NU8)(s->data[i])), ((NI) 32), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_43)) { raiseOverflow(); };
					if (((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_43)) < ((NI) 0) || ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_43)) > ((NI) 255)){ raiseRangeErrorI((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_43), ((NI) 0), ((NI) 255)); }
					result->data[j] = ((NIM_CHAR) (((NI) ((NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_43)))));
					nimln_(320, "strutils.nim");
					if (nimAddInt(j, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_44)) { raiseOverflow(); };
					j = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_44);
				}
				goto LA4_;
				LA6_: ;
				{
					NI TM__JGc9b9bh2D3nTdUR7TGyq8aA_45;
					nimln_(321, "strutils.nim");
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
					if (!!(((NU8)(s->data[i]) == (NU8)(95)))) goto LA9_;
					if ((NU)(j) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(j,(result ? result->Sup.len : 0)-1); }
					nimln_(322, "strutils.nim");
					if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
					result->data[j] = s->data[i];
					nimln_(323, "strutils.nim");
					if (nimAddInt(j, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_45)) { raiseOverflow(); };
					j = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_45);
				}
				goto LA4_;
				LA9_: ;
				LA4_: ;
				nimln_(80, "iterators_1.nim");
				if (nimAddInt(res, ((NI) 1), &TM__JGc9b9bh2D3nTdUR7TGyq8aA_46)) { raiseOverflow(); };
				res = (NI)(TM__JGc9b9bh2D3nTdUR7TGyq8aA_46);
			} LA3: ;
		}
	}
	nimln_(324, "strutils.nim");
	{
		if (!!((j == (s ? s->Sup.len : 0)))) goto LA13_;
		if ((j) < ((NI) 0) || (j) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(j, ((NI) 0), ((NI) IL64(9223372036854775807))); }
		result = setLengthStr(result, ((NI) (j)));
	}
	LA13_: ;
	popFrame();
	return result;
}
