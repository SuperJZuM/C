// 可移植整数类型名
#include <inttypes.h>
#include <stdio.h>

int main(void) {
  int32_t me32 = 45933945;

  printf("First, assume int32_t is int: ");
  printf("me32 = %d\n", me32);
  printf("Next, let's not make any assumptions.\n");
  printf("Instead, use a \"macro\" from inttypes.h: \n");
  printf("me32 = %" PRId32 "\n", me32);

  return 0;
}
