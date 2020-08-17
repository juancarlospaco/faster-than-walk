/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   /usr/bin/x86_64-w64-mingw32-gcc -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN   -I'/home/juan/.choosenim/toolchains/nim-#devel/lib' -I/home/juan/code/faster-than-walk/src -o /home/juan/code/faster-than-walk/dist/win/stdlib_io.nim.c.o /home/juan/code/faster-than-walk/dist/win/stdlib_io.nim.c */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <io.h>
#include <stdio.h>
#include <fcntl.h>
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
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
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
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
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
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, writeWindows__JO9bn8JE1R6MjKZqdvhBrWg)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) __attribute__((noreturn));
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);

/* section: NIM_merge_DATA */
extern TNimType NTI__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "cannot write string to file", 27);

/* section: NIM_merge_VARS */
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
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
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) {
	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T1_;
	nimfr_("raiseEIO", "io.nim");
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
	(*T1_).Sup.Sup.name = "IOError";
	(*T1_).Sup.Sup.message = copyString(msg);
	(*T1_).Sup.Sup.parent = NIM_NIL;
	nimln_(139, "io.nim");
	raiseExceptionEx((Exception*)T1_, "IOError", "raiseEIO", "io.nim", 139);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, writeWindows__JO9bn8JE1R6MjKZqdvhBrWg)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise) {
	int i;
	i = fprintf(f, "%s", nimToCStringConv(s));
	{
		while (1) {
			if (!(((NI) (i)) < (s ? s->Sup.len : 0))) goto LA2;
			{
				int w;
				NI TM__MnCJ0VAmeZ9aTATUB39cx60Q_3;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA5_;
				w = fputc(0, f);
				{
					if (!!((w == ((NI32) 0)))) goto LA9_;
					{
						if (!doRaise) goto LA13_;
						raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_2));
					}
					LA13_: ;
					goto LA1;
				}
				LA9_: ;
				if (nimAddInt(i, ((NI) 1), &TM__MnCJ0VAmeZ9aTATUB39cx60Q_3)) { raiseOverflow(); };
				if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_3 < (-2147483647 -1) || TM__MnCJ0VAmeZ9aTATUB39cx60Q_3 > 2147483647){ raiseOverflow(); }
				i = (int)(TM__MnCJ0VAmeZ9aTATUB39cx60Q_3);
			}
			goto LA3_;
			LA5_: ;
			{
				int w_2;
				NI TM__MnCJ0VAmeZ9aTATUB39cx60Q_4;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				w_2 = fprintf(f, "%s", (&s->data[i]));
				{
					if (!(w_2 <= ((NI32) 0))) goto LA18_;
					{
						if (!doRaise) goto LA22_;
						raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_2));
					}
					LA22_: ;
					goto LA1;
				}
				LA18_: ;
				if (nimAddInt(i, ((NI) (w_2)), &TM__MnCJ0VAmeZ9aTATUB39cx60Q_4)) { raiseOverflow(); };
				if (TM__MnCJ0VAmeZ9aTATUB39cx60Q_4 < (-2147483647 -1) || TM__MnCJ0VAmeZ9aTATUB39cx60Q_4 > 2147483647){ raiseOverflow(); }
				i = (int)(TM__MnCJ0VAmeZ9aTATUB39cx60Q_4);
			}
			LA3_: ;
		} LA2: ;
	} LA1: ;
}
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {
	int T4_;
	int T5_;
	nimfr_("echoBinSafe", "io.nim");
	{
		NimStringDesc** s;
		NI i;
		s = (NimStringDesc**)0;
		nimln_(8, "iterators.nim");
		i = ((NI) 0);
		{
			nimln_(9, "iterators.nim");
			while (1) {
				NI TM__MnCJ0VAmeZ9aTATUB39cx60Q_5;
				if (!(i < argsLen_0)) goto LA3;
				nimln_(784, "io.nim");
				if ((NU)(i) >= (NU)(argsLen_0)){ raiseIndexError2(i,argsLen_0-1); }
				s = (&args[i]);
				nimln_(786, "io.nim");
				writeWindows__JO9bn8JE1R6MjKZqdvhBrWg(stdout, (*s), NIM_FALSE);
				nimln_(11, "iterators.nim");
				if (nimAddInt(i, ((NI) 1), &TM__MnCJ0VAmeZ9aTATUB39cx60Q_5)) { raiseOverflow(); };
				i = (NI)(TM__MnCJ0VAmeZ9aTATUB39cx60Q_5);
			} LA3: ;
		}
	}
	nimln_(790, "io.nim");
	T4_ = (int)0;
	T4_ = fwrite(((void*) ("\012")), ((size_t) 1), ((size_t) 1), stdout);
	(void)(T4_);
	nimln_(791, "io.nim");
	T5_ = (int)0;
	T5_ = fflush(stdout);
	(void)(T5_);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioInit000)(void) {
{
	int T1_;
	int T2_;
	int T3_;
	nimfr_("io", "io.nim");
	nimln_(808, "io.nim");
	T1_ = (int)0;
	T1_ = _fileno(stdin);
	_setmode(T1_, _O_BINARY);
	nimln_(809, "io.nim");
	T2_ = (int)0;
	T2_ = _fileno(stdout);
	_setmode(T2_, _O_BINARY);
	nimln_(810, "io.nim");
	T3_ = (int)0;
	T3_ = _fileno(stderr);
	_setmode(T3_, _O_BINARY);
	popFrame();
}
}

