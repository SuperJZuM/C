#include <stdio.h>
int main(void) {
  int day;
  int week;
  int day1;
  printf("Please enter day:\n");
  scanf("%d", &day);
  while (day > 0) {
    week = day / 7;
    day1 = day % 7;
    printf("%d days are %d weeks, %d days.\n", day, week, day1);
    printf("Next input:\n");
    scanf("%d", &day);
  }
  printf("Done!\n");

  return 0;
}
