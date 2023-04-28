#include <stdio.h>
int main(void) {
  int sum = 0;
  int count = 0;
  int days = 0;
  int square = 0;

  printf("Please enter days:");
  scanf("%d", &days);
  while (count++ < days) {
    sum = count * count;
    square = square + sum;
  }
  printf("sum = $%d\n", square);

  return 0;
}
