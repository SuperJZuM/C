#include <stdio.h>
int main(void) {
  int col, row;

  for (col = 1; col <= 4; col++) {
    for (row = 1; row <= 8; row++)
      printf("$");
    printf("\n");
  }
  return 0;
}
