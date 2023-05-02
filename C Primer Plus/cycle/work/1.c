#include <stdio.h>
#define SIZE 26
int main(void) {
  char arr[SIZE];
  int num;

  for (num = 0; num < SIZE; num++) {
    arr[num] = 'a' + num;
  }
  printf("Here are 26 letters:\n");
  for (num = 0; num < SIZE; num++) {
    printf("%c ", arr[num]);
  }
  printf("\n");

  return 0;
}
