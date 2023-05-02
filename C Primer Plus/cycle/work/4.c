#include <stdio.h>
int main(void) {
  char ch = 'A';
  int j, i;

  for (i = 1; i <= 6; i++) {
    for (j = 0; j < i; j++) {
      printf("%c", ch);
      ch += 1;
    }
    printf("\n");
  }
  return 0;
}
