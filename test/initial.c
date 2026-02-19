#include "../src/mb_natural.h"
#include "../src/mb_stdAlloc.h"

#define I_MB_memoryLength 2048
char g_mb_memory[I_MB_memoryLength];

int main(void) {
  mb_Natural A = mb_natural_empty();
  u32 R = 0;

  mb_natural_divDigit(MB_stdAlloc, &A, 1, NULL, &R);

  return 1;
}
