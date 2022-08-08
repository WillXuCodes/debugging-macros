#ifndef _DEBUG_MACRO_H_
#define _DEBUG_MACRO_H_

#ifdef DEBUG_MACROS

#include <stdio.h>
// TODOS:
// Variadic Macros
// C++ Macros
// general utilities

#ifndef _cplusplus
#define DBREAKPOINT {				\
			int dummy;		\
			dprintvS("Breakpoint"); \
			scanf("%d",&dummy);     \
		    }

#define DCHECKPOINT printf("|-------------------------CHECKPOINT--------------------------| Function: %s Line: %d \n", __func__,  __LINE__);

// 1 Val:
#define dprintvS(stre) printf("Message: %s:**********DEBUG: Function: %s Line: %d \n", stre, __func__,  __LINE__)

#define dprintvInt(inte) printf("Integer: %d:**********DEBUG: VarName: " #inte " Function: %s Line: %d \n", inte, __func__,  __LINE__)

#define dprintvLong(longe) printf("Long: %ld:**********DEBUG: VarName: " #longe " Function: %s Line: %d \n", longe, __func__,  __LINE__)

#define dprintvChar(charVal) printf("Char: %c:**********DEBUG: VarName: " #charVal " Function: %s Line: %d \n", charVal, __func__,  __LINE__)

// 2 Val:
#define dprintvS2(stre,stre2) printf("Message1: %s Message2: %s **********DEBUG: Function: %s Line: %d \n", stre, stre2, __func__,  __LINE__)

#define dprintvInt2(inte,inte2) printf("Int1: %d Int2: %d **********DEBUG: Function: %s VarName1: " #inte " VarName2: " #inte2 " Line: %d \n", inte, inte2, __func__,  __LINE__)

#define dprintvLong2(longe,long2) printf("Long1: %ld Long2: %ld **********DEBUG: Function: %s Line: %d \n", longe, long2, __func__,  __LINE__)

#define dprintvChar2(charVal,charVal2) printf("Char1: %c Char2: %c **********DEBUG: Function: %s Line: %d \n", charVal, charVal2, __func__,  __LINE__)


//print binary
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

#define PrtClr "\e[0;30;103m"
#define BfrClr "\e[0m" //can't use these :/ TODO: Fix later and getting working with ThinLinc

#define dprintvBin(bin) printf("\n "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(bin));


#else


//print binary
#define BYTE_TO_BINARY_PATTERN {}
#define BYTE_TO_BINARY(byte)  {}

#define PrtClr {}
#define BfrClr {}

#define dprintvBin(bin) {}


// general utilities
#define DBREAKPOINT {}

#define DCHECKPOINT {}

// 1 Val:
#define dprintvS(stre) {}

#define dprintvInt(inte) {}

#define dprintvLong(longe) {}

#define dprintvChar(charVal) {}

// 2 Val:
#define dprintvS2(stre,stre2) {}

#define dprintvInt2(inte,inte2) {}

#define dprintvLong2(longe,long2) {}

#define dprintvChar2(charVal,charVal2) {}

#else
// TODO: Implement C++ Macros (Or code) here
#endif

#endif
#endif
