#include <stdio.h>
int main(void) {
  int val1, val2, val3;

  printf("Please enter:\n");
  scanf("%d %d %d", &val1, &val2, &val3);
  printf("%9d %9d %9d\n", val1, val2, val3);

  return 0;
}
