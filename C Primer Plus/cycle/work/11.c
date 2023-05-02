#include <stdio.h>
int main(void) {
  int num[8];
  printf("Please enter eight numbers:\n");
  for (int i = 0; i < 8; i++) {
    scanf("%d", &num[i]);
  }
  printf("Reverse order printing 8 numbers:\n");
  for (int i = 7; i >= 0; i--) {
    printf("%d ", num[i]);
  }
  printf("\n");

  return 0;
}
