// 几种常见的语句
#include <stdio.h>
int main(void) // 计算前20个整数的和
{
  int count, sum;

  count = 0; // 表达式语句
  sum = 0;
  while (count++ < 20) // 迭代语句
  {
    sum = sum + count;
  }
  printf("sum = %d\n", sum);

  return 0; // 跳转语句
}
