#include <stdio.h>
int main(void) {
  int feet;
  double inch, cm;

  printf("Please enter your height:");
  scanf("%lf", &cm);
  while (cm > 0) {
    feet = cm / 30.48;
    inch = (cm - 30.48 * feet) / 2.54;

    printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
    printf("Enter a height in centimeters (<= 0 to quit):");
    scanf("%lf", &cm);
  }
  printf("Bye!\n");

  return 0;
}
