#include <stdio.h>
int main(void) {
  double x, y;

  printf("Please enter two numbers (q to quit):\n");
  while (scanf("%lf %lf", &x, &y) == 2) {
    printf("num = %lf\n", (x - y) / (x * y));
    printf("You can enter again (q to quit):\n");
  }
  printf("Done!\n");

  return 0;
}
