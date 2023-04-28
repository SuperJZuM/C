#include <stdio.h>
int main(void) {
  int num;
  int x;
  printf("Please enter intager:");
  scanf("%d", &num);
  x = num + 11;
  while (num < x) {
    printf("%d\n", num);
    num++;
  }

  return 0;
}
