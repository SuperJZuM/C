#include <stdio.h>
int main(void) {
  float inch;
  char name[20];

  printf("Please enter your name:\n");
  scanf("%s", name);
  printf("Hello! %s, how tall are you(inch):\n", name);
  scanf("%f", &inch);
  printf("%s, you are %.3f feet tall\n", name, inch / 12);
  printf("You are %.3f cm tall\n", inch * 2.54);

  return 0;
}
