#include <stdio.h>
int main(void) {
  float cup;
  printf("Please enter the number of cups: ");
  scanf("%f", &cup);
  printf("%.1f pint, %.1f ounce, %.1f spoon, %.1f teaspoon\n", cup / 2, cup * 8,
         cup * 16, cup * 48);

  return 0;
}
