#include <stdio.h>
#include <string.h>
int main(void) {
  char fname[20];
  char lname[20];
  int x, y;

  printf("Please enter your first name:\n");
  scanf("%s", fname);
  printf("Please enter your last name:\n");
  scanf("%s", lname);
  printf("%s %s\n", fname, lname);

  x = strlen(fname);
  y = strlen(lname);

  printf("%*d %*d\n", x, x, y, y);
  printf("%s %s\n", fname, lname);
  printf("%-*d %-*d\n", x, x, y, y);

  return 0;
}
