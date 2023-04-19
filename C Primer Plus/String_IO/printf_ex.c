#include <stdio.h>
int main(void) {
  char name[40];
  float cash;
  scanf("%s %f", name, &cash);
  printf("The %s family just may be $%.2f dollars richer!\n", name, cash);

  return 0;
}
