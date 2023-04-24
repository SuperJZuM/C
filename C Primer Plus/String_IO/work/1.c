#include <stdio.h>
int main(void) {
  char gname[10];
  char fname[10];

  printf("Please enter your given nume and famliy name:\n");
  scanf("%s%s", gname, fname);
  printf("%s,%s\n", gname, fname);

  return 0;
}
