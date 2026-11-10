/* printf with the l, z and t length modifiers */

#include <stdio.h>
#include <stddef.h>

long sl = -1234567890L;
unsigned long ul = 4000000000UL;
size_t sz = 12345;
ptrdiff_t pd = -6789;
char arr[10];

int main(void)
{
  printf("%ld %li %lu %lx %lX %lo\n", sl, sl, ul, ul, ul, ul);
  printf("[%12ld] [%-12ld] [%+ld] [%015lu]\n", sl, sl, 42L, ul);
  printf("%zu %zx %zd\n", sz, sz, (ptrdiff_t) sz);
  printf("%td %tu\n", pd, (size_t) 6789);
  printf("%td %zu\n", &arr[7] - &arr[2], sizeof(arr));
  printf("%lld %llu\n", -9876543210LL, 9876543210ULL);
  return 0;
}
