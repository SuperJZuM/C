#include <stdio.h>
int main(void) {
  float aboat = 32000.0;
  double abet = 2.14e9; // 2.14 * 10 ^ 9
  long double dip = 5.32e-5;

  printf("%f can be written %e\n", aboat, aboat);
  printf("And it's %a in hexadecimal, powers of 2 notation\n",
         aboat); // 要求编译器支持C99或其中相关的特性
  printf("%f can be written %e\n", abet, abet);
  printf("%Lf can be written %Le\n", dip, dip);

  return 0;
}
