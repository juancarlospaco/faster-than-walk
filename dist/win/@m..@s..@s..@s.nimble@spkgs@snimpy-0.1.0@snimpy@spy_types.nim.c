/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   /usr/bin/x86_64-w64-mingw32-gcc -c  -w -fmax-errors=3 -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN   -I'/home/juan/.choosenim/toolchains/nim-#devel/lib' -I/home/juan/code/faster-than-walk/src -o /home/juan/code/faster-than-walk/dist/win/@m..@s..@s..@s.nimble@spkgs@snimpy-0.1.0@snimpy@spy_types.nim.c.o /home/juan/code/faster-than-walk/dist/win/@m..@s..@s..@s.nimble@spkgs@snimpy-0.1.0@snimpy@spy_types.nim.c */
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
typedef struct tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g;
typedef struct tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg;

/* section: NIM_merge_TYPES */
typedef N_CDECL_PTR(void*, tyProc__uQWqJp3WAx8fOY1h9aCwjIg) (void* s, void* a, void* k);
struct tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw {
NCSTRING ml_name;
tyProc__uQWqJp3WAx8fOY1h9aCwjIg ml_meth;
int ml_flags;
NCSTRING ml_doc;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CDECL_PTR(void*, tyProc__eYT4U6bGFqFBUxk9b15mfOA) (tyObject_PyTypeObject3Obj__cRsC9bGvH9bX6A9aVx8UB6I5g* typ, void* a, void* b);
struct tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg {
NCSTRING name;
int typ;
NI offset;
int flags;
NCSTRING doc;
};

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__9aWi1PsmvCuTKIYDHHnhfcw_;
extern TNimType NTI__S9agCYBinaYZnGWcjTdxclg_;
N_LIB_PRIVATE TNimType NTI__uQWqJp3WAx8fOY1h9aCwjIg_;
extern TNimType NTI__nlCscttRCss70IBTyuBqnA_;
N_LIB_PRIVATE TNimType NTI__eYT4U6bGFqFBUxk9b15mfOA_;
N_LIB_PRIVATE TNimType NTI__WC29aEeHi2Pdy9c4AkllcBTg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE N_NIMCALL(void, nimpy_py_typesDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__NTBSFVABaCX7j6t0zZIyng_2_4[4];
static TNimNode* TM__NTBSFVABaCX7j6t0zZIyng_3_5[5];
static TNimNode TM__NTBSFVABaCX7j6t0zZIyng_0[11];

/* section: NIM_merge_TYPE_INIT3 */
NTI__9aWi1PsmvCuTKIYDHHnhfcw_.size = sizeof(tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw);
NTI__9aWi1PsmvCuTKIYDHHnhfcw_.align = NIM_ALIGNOF(tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw);
NTI__9aWi1PsmvCuTKIYDHHnhfcw_.kind = 18;
NTI__9aWi1PsmvCuTKIYDHHnhfcw_.base = 0;
NTI__9aWi1PsmvCuTKIYDHHnhfcw_.flags = 3;
TM__NTBSFVABaCX7j6t0zZIyng_2_4[0] = &TM__NTBSFVABaCX7j6t0zZIyng_0[1];
TM__NTBSFVABaCX7j6t0zZIyng_0[1].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[1].offset = offsetof(tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw, ml_name);
TM__NTBSFVABaCX7j6t0zZIyng_0[1].typ = (&NTI__S9agCYBinaYZnGWcjTdxclg_);
TM__NTBSFVABaCX7j6t0zZIyng_0[1].name = "ml_name";
TM__NTBSFVABaCX7j6t0zZIyng_2_4[1] = &TM__NTBSFVABaCX7j6t0zZIyng_0[2];
NTI__uQWqJp3WAx8fOY1h9aCwjIg_.size = sizeof(tyProc__uQWqJp3WAx8fOY1h9aCwjIg);
NTI__uQWqJp3WAx8fOY1h9aCwjIg_.align = NIM_ALIGNOF(tyProc__uQWqJp3WAx8fOY1h9aCwjIg);
NTI__uQWqJp3WAx8fOY1h9aCwjIg_.kind = 25;
NTI__uQWqJp3WAx8fOY1h9aCwjIg_.base = 0;
NTI__uQWqJp3WAx8fOY1h9aCwjIg_.flags = 3;
TM__NTBSFVABaCX7j6t0zZIyng_0[2].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[2].offset = offsetof(tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw, ml_meth);
TM__NTBSFVABaCX7j6t0zZIyng_0[2].typ = (&NTI__uQWqJp3WAx8fOY1h9aCwjIg_);
TM__NTBSFVABaCX7j6t0zZIyng_0[2].name = "ml_meth";
TM__NTBSFVABaCX7j6t0zZIyng_2_4[2] = &TM__NTBSFVABaCX7j6t0zZIyng_0[3];
TM__NTBSFVABaCX7j6t0zZIyng_0[3].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[3].offset = offsetof(tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw, ml_flags);
TM__NTBSFVABaCX7j6t0zZIyng_0[3].typ = (&NTI__nlCscttRCss70IBTyuBqnA_);
TM__NTBSFVABaCX7j6t0zZIyng_0[3].name = "ml_flags";
TM__NTBSFVABaCX7j6t0zZIyng_2_4[3] = &TM__NTBSFVABaCX7j6t0zZIyng_0[4];
TM__NTBSFVABaCX7j6t0zZIyng_0[4].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[4].offset = offsetof(tyObject_PyMethodDef__9aWi1PsmvCuTKIYDHHnhfcw, ml_doc);
TM__NTBSFVABaCX7j6t0zZIyng_0[4].typ = (&NTI__S9agCYBinaYZnGWcjTdxclg_);
TM__NTBSFVABaCX7j6t0zZIyng_0[4].name = "ml_doc";
TM__NTBSFVABaCX7j6t0zZIyng_0[0].len = 4; TM__NTBSFVABaCX7j6t0zZIyng_0[0].kind = 2; TM__NTBSFVABaCX7j6t0zZIyng_0[0].sons = &TM__NTBSFVABaCX7j6t0zZIyng_2_4[0];
NTI__9aWi1PsmvCuTKIYDHHnhfcw_.node = &TM__NTBSFVABaCX7j6t0zZIyng_0[0];
NTI__eYT4U6bGFqFBUxk9b15mfOA_.size = sizeof(tyProc__eYT4U6bGFqFBUxk9b15mfOA);
NTI__eYT4U6bGFqFBUxk9b15mfOA_.align = NIM_ALIGNOF(tyProc__eYT4U6bGFqFBUxk9b15mfOA);
NTI__eYT4U6bGFqFBUxk9b15mfOA_.kind = 25;
NTI__eYT4U6bGFqFBUxk9b15mfOA_.base = 0;
NTI__eYT4U6bGFqFBUxk9b15mfOA_.flags = 3;
NTI__WC29aEeHi2Pdy9c4AkllcBTg_.size = sizeof(tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg);
NTI__WC29aEeHi2Pdy9c4AkllcBTg_.align = NIM_ALIGNOF(tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg);
NTI__WC29aEeHi2Pdy9c4AkllcBTg_.kind = 18;
NTI__WC29aEeHi2Pdy9c4AkllcBTg_.base = 0;
NTI__WC29aEeHi2Pdy9c4AkllcBTg_.flags = 3;
TM__NTBSFVABaCX7j6t0zZIyng_3_5[0] = &TM__NTBSFVABaCX7j6t0zZIyng_0[6];
TM__NTBSFVABaCX7j6t0zZIyng_0[6].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[6].offset = offsetof(tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg, name);
TM__NTBSFVABaCX7j6t0zZIyng_0[6].typ = (&NTI__S9agCYBinaYZnGWcjTdxclg_);
TM__NTBSFVABaCX7j6t0zZIyng_0[6].name = "name";
TM__NTBSFVABaCX7j6t0zZIyng_3_5[1] = &TM__NTBSFVABaCX7j6t0zZIyng_0[7];
TM__NTBSFVABaCX7j6t0zZIyng_0[7].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[7].offset = offsetof(tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg, typ);
TM__NTBSFVABaCX7j6t0zZIyng_0[7].typ = (&NTI__nlCscttRCss70IBTyuBqnA_);
TM__NTBSFVABaCX7j6t0zZIyng_0[7].name = "typ";
TM__NTBSFVABaCX7j6t0zZIyng_3_5[2] = &TM__NTBSFVABaCX7j6t0zZIyng_0[8];
TM__NTBSFVABaCX7j6t0zZIyng_0[8].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[8].offset = offsetof(tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg, offset);
TM__NTBSFVABaCX7j6t0zZIyng_0[8].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__NTBSFVABaCX7j6t0zZIyng_0[8].name = "offset";
TM__NTBSFVABaCX7j6t0zZIyng_3_5[3] = &TM__NTBSFVABaCX7j6t0zZIyng_0[9];
TM__NTBSFVABaCX7j6t0zZIyng_0[9].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[9].offset = offsetof(tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg, flags);
TM__NTBSFVABaCX7j6t0zZIyng_0[9].typ = (&NTI__nlCscttRCss70IBTyuBqnA_);
TM__NTBSFVABaCX7j6t0zZIyng_0[9].name = "flags";
TM__NTBSFVABaCX7j6t0zZIyng_3_5[4] = &TM__NTBSFVABaCX7j6t0zZIyng_0[10];
TM__NTBSFVABaCX7j6t0zZIyng_0[10].kind = 1;
TM__NTBSFVABaCX7j6t0zZIyng_0[10].offset = offsetof(tyObject_PyMemberDef__WC29aEeHi2Pdy9c4AkllcBTg, doc);
TM__NTBSFVABaCX7j6t0zZIyng_0[10].typ = (&NTI__S9agCYBinaYZnGWcjTdxclg_);
TM__NTBSFVABaCX7j6t0zZIyng_0[10].name = "doc";
TM__NTBSFVABaCX7j6t0zZIyng_0[5].len = 5; TM__NTBSFVABaCX7j6t0zZIyng_0[5].kind = 2; TM__NTBSFVABaCX7j6t0zZIyng_0[5].sons = &TM__NTBSFVABaCX7j6t0zZIyng_3_5[0];
NTI__WC29aEeHi2Pdy9c4AkllcBTg_.node = &TM__NTBSFVABaCX7j6t0zZIyng_0[5];
}

