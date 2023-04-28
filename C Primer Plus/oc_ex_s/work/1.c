#include <stdio.h>
#define SEC 60
int main(void) {
  int min;
  int min2 = 0;
  int hour = 0;

  printf("Please enter:\n");
  scanf("%d", &min);

  while (min > 0) {
    hour = min / SEC;
    min2 = min % SEC;
    printf("%d hour %d min\n", hour, min2);
    printf("Next input?\n");
    scanf("%d", &min);
  }

  return 0;
}
