#include <stdio.h>
int main(void) {
  float num;

  printf("Please enter:\n");
  scanf("%f", &num);
  printf("a. The input is %.1f or %.1e\n", num, num);
  printf("b. The input is %+.3f or %.3E\n", num, num);

  return 0;
}
