/* printf with field width and precision on string and character conversions */

#include <stdio.h>

char buf[] = "hello, world";
char unterminated[3] = { 'a', 'b', 'c' };

int main(void)
{
  printf("[%s] [%.3s] [%.0s] [%.s] [%.20s]\n",
         "abcdef", "abcdef", "abcdef", "abcdef", "abcdef");
  printf("[%8s] [%-8s] [%8.3s] [%-8.3s] [%2s]\n",
         "abc", "abc", "abcdef", "abcdef", "abcdef");
  printf("[%.5s] [%12.5s] [%-12.5s]\n", buf, buf, buf);
  /* With a precision, the array need not be null-terminated (C11 7.21.6.1p8) */
  printf("[%.3s] [%.2s]\n", unterminated, unterminated);
  printf("[%c] [%3c] [%-3c]\n", 'x', 'y', 'z');
  return 0;
}
