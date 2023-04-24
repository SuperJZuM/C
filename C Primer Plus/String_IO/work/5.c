#include <stdio.h>
int main(void) {
  float speed, size, time;
  printf("Please enter net speed(Mb/s):\n");
  scanf("%f", &speed);
  printf("Please enter file size(MB):\n");
  scanf("%f", &size);
  time = size / speed;
  printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed,
         size);
  printf("Downloads in %.2f second\n", time);

  return 0;
}
