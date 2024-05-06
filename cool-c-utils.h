#ifndef __WX_COOL_C_UTILS__H_
#define __WX_COOL_C_UTILS__H_

static const unsigned char BitReverseTableByte[256] = 
{
 #   define R2(n)     n,     n + 128,     n + 64,     n + 192
 #   define R4(n) R2(n), R2(n + 32), R2(n + 16), R2(n + 48)
 #   define R6(n) R4(n), R4(n + 8), R4(n + 4), R4(n + 12)
     R6(0), R6(2), R6(1), R6(3)
};



#endif
