#ifndef _WX_DEBUG_MACRO_H_
#define _WX_DEBUG_MACRO_H_

#include <stdio.h>

// general utilities
#define DBREAKPOINT {				\
			int dummy;		\
			dprintvS("Breakpoint"); \
			scanf("%d",&dummy);     \
		    }

#define DCHECKPOINT printf("|-------------------------CHECKPOINT--------------------------| Function: %s Line: %d \n", __func__,  __LINE__);

// 1 Val:
#define dprintvS(stre) printf("Message: %s:**********DEBUG: Function: %s Line: %d \n", stre, __func__,  __LINE__)

#define dprintvInt(inte) printf("Integer: %d:**********DEBUG: Function: %s Line: %d \n", inte, __func__,  __LINE__)

#define dprintvLong(longe) printf("Long: %ld:**********DEBUG: Function: %s Line: %d \n", longe, __func__,  __LINE__)

#define dprintvChar(charVal) printf("Char: %c:**********DEBUG: Function: %s Line: %d \n", charVal, charVal2, __func__,  __LINE__)

// 2 Val:
#define dprintvS2(stre,stre2) printf("Message1: %s Message2: %s **********DEBUG: Function: %s Line: %d \n", stre, stre2, __func__,  __LINE__)

#define dprintvInt2(inte,inte2) printf("Int1: %d Int2: %d **********DEBUG: Function: %s Line: %d \n", inte, inte2, __func__,  __LINE__)

#define dprintvLong(longe,long2) printf("Long1: %ld Long2: %ld **********DEBUG: Function: %s Line: %d \n", longe, long2, __func__,  __LINE__)

#define dprintvChar(charVal,charVal2) printf("Char1: %c Char2: %c **********DEBUG: Function: %s Line: %d \n", charVal, charVal2, __func__,  __LINE__)

#endif
