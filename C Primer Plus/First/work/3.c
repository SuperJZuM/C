#include <stdio.h>
int main(void) {
  int age = 0;
  int day = 0;

  printf("Please enter age:");
  scanf("%d", &age);
  day = age * 365;
  printf("Your age is %d, Convert to days is %d\n", age, day);

  return 0;
}
