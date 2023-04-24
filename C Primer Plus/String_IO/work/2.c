#include <stdio.h>
#include <string.h>

int main(void) {
  char name[20];
  int name_long;

  printf("Please enter your name: ");
  scanf("%19s", name);
  printf("Print your name:\n");
  printf("a.\"%s\"\n", name);
  printf("b.\"%20s\"\n", name);
  printf("c.\"%-20s\"\n", name);
  name_long = strlen(name) + 3;
  printf("d.%*s\n", name_long, name);

  return 0;
}

