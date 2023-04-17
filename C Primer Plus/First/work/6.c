#include <stdio.h>
int main(void) {
  int toes = 0;
  printf("Please enter:");
  scanf("%d", &toes);
  printf("This value is %d, twice this value is %d, and it's squared is %d\n",
         toes, toes * 2, toes * toes);

  return 0;
}
