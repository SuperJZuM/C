#include <stdio.h>
int main(void) {
  float height;
  float cm;
  printf("Please enter your height(inch): ");
  scanf("%f", &height);
  cm = height * 2.54;
  printf("Your height is %.1f cm\n", cm);

  return 0;
}
