#include <stdio.h>
#define N 8
int main(void) {
  double num1[N], num2[N];

  printf("Please enter %d numbers:\n", N);
  for (int i = 0; i < N; i++) {
    scanf("%lf", &num1[i]);
  }
  num2[0] = num1[0];
  for (int i = 1; i < N; i++) {
    num2[i] = num1[i] + num2[i - 1];
  }
  printf("Here are the results for array num1:\n");
  for (int i = 0; i < N; i++) {
    printf("%-10g", num1[i]);
  }
  printf("\nHere are the results for array num2:\n");
  for (int i = 0; i < N; i++) {
    printf("%-10g", num2[i]);
  }
  printf("\nDone.\n");

  return 0;
}
