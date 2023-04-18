#include <stdio.h>
int main(void) {
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  int second = age * 31560000;
  printf("%d years is %d seconds\n", age, second);

  return 0;
}
