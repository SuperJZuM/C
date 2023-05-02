#include <stdio.h>
int main(void) {
  int col, row;
  char ch;

  for (col = 0; col <= 5; col++) {
    for (row = 0, ch = 'F'; row <= col; row++) {
      printf("%c", ch - row);
    }
    printf("\n");
  }

  return 0;
}
