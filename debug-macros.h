#ifndef _DEBUG_MACRO_H_
#define _DEBUG_MACRO_H_

// define this to something else to disable macros (I kinda just slap a random char at the end of this macro to disable the debug macros
// will still compile even if inline. 
#define DEBUG_MACROS

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

// some places I work at don't exactly use the default printf command, but instead have a sim_printf or something like that.
#define print_cmd printf

#define DCHECKPOINT print_cmd("|-------------------------CHECKPOINT--------------------------| Function: %s Line: %d \n", __FILE__, __func__,  __LINE__);

// 1 Val:
#define dprintvS(stre) print_cmd("Message: %s:**********DEBUG: File: %s Function: %s Line: %d \n", stre, __FILE__, __func__,  __LINE__)

#define dprintvInt(inte) print_cmd("Integer: %d:**********DEBUG: VarName: " #inte " File: %s Function: %s Line: %d \n", inte, __FILE__, __func__,  __LINE__)

#define dprintvLong(longe) print_cmd("Long: %ld:**********DEBUG: VarName: " #longe " File: %s Function: %s Line: %d \n", longe, __FILE__, __func__,  __LINE__)

#define dprintvChar(charVal) print_cmd("Char: %c:**********DEBUG: VarName: " #charVal " File: %s Function: %s Line: %d \n", charVal, __FILE__, __func__,  __LINE__)

// 2 Val:
#define dprintvS2(stre,stre2) print_cmd("Message1: %s Message2: %s **********DEBUG: File: %s Function: %s Line: %d \n", stre, stre2, __FILE__, __func__,  __LINE__)

#define dprintvInt2(inte,inte2) print_cmd("Int1: %d Int2: %d **********DEBUG: File: %s Function: %s VarName1: " #inte " VarName2: " #inte2 " Line: %d \n", inte, inte2, __FILE__, __func__,  __LINE__)

#define dprintvLong2(longe,long2) print_cmd("Long1: %ld Long2: %ld **********DEBUG: File: %s Function: %s Line: %d \n", longe, long2, __FILE__, __func__,  __LINE__)

#define dprintvChar2(charVal,charVal2) print_cmd("Char1: %c Char2: %c **********DEBUG: File: %s Function: %s Line: %d \n", charVal, charVal2, __FILE__, __func__,  __LINE__)

// Assertion
#define DASSERT(assertion) \
{ \
	if(assertion) printf("**********DASSERT SUCCESS: | "#assertion" | is true. File: %s Function: %s Line: %d \n", __FILE__, __func__,  __LINE__); \
	else { \
		if(assertion) printf("**********DASSERT FAILED: | "#assertion" | is false. File: %s Function: %s Line: %d \n", __FILE__, __func__,  __LINE__); \
		DBREAKPOINT \
	} \
}
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
#define BfrClr "\e[0m" //can't use these, figure out how to add platform detection 
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
#endif // end of ifndef _cplusplus

#else // else for ifdef debug_macros
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
#endif

#endif
