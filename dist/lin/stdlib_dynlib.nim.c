/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <dlfcn.h>
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

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__ALH9bdNwXEzg7MPq4PA9csvw)(void* lib, NCSTRING name) {
	void* result;
	result = (void*)0;
	result = dlsym(lib, name);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__3W0xEugBG13TxVu4hk9b9b5g)(void) {
	void* result;
	result = (void*)0;
	result = dlopen(NIM_NIL, RTLD_NOW);
	return result;
}
