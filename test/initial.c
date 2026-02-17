#include "../src/mb_natural.h"
#include "../src/mb_stdAlloc.h"

#define I_MB_memoryLength 2048
char g_mb_memory[I_MB_memoryLength];

int main(void) {
  mb_Natural A = mb_natural_empty();
  mb_Natural B = mb_natural_empty();

  mb_natural_add(MB_stdAlloc, &A, &A, &B);

  return 1;
}
