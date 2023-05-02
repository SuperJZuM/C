#include <stdio.h>
int main(void) {
  int col, row;

  for (col = 1; col <= 5; col++) {
    for (row = 1; row <= col; row++) {
      printf("$");
    }
    printf("\n");
  }

  return 0;
}
