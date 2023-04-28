#include <stdio.h>
int main(void) {
  int count = 0;
  int sum = 0, days;

  printf("Please enter day:");
  scanf("%d", &days);
  while (count++ < days) {
    sum = sum + count;
  }
  printf("sum = %d\n", sum);

  return 0;
}
