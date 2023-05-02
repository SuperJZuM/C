#include <stdio.h>
double cal(double a, double b);
int main(void) {
  double a, b;

  printf("Please enter two numbers (q to quit):\n");
  while (scanf("%lf %lf", &a, &b) == 2) {
    printf("(%g - %g) / (%g * %g)", a, b, a, b);
    printf("= %g\n", cal(a, b));
    printf("Please enter again (q to quit):\n");
  }
  printf("Done.\n");

  return 0;
}

double cal(double a, double b) { return (a - b) / (a * b); }
