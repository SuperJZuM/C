#include <stdio.h>
int main(void) {
  double dollar = 1000000.00;
  int year = 0;
  while (dollar > 0) {
    year++;
    dollar += dollar * 0.08 - 100000.00;
  }
  printf("%d\n", year);

  return 0;
}
