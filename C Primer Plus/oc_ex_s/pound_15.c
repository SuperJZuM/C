// 定义一个带一个参数的函数
#include <stdio.h>
void pound(int n); // ANSI函数原型声明

int mian(void) {
  int times = 5;
  char ch = '!'; // ASCII码是33
  float f = 6.0;

  pound(times); // int类型的参数
  pound(ch);    // 和pound((int)n); 相同
  pound(f);

  return 0;
}
void pound(int n) /* ANSI风格函数头  表明该函数接受一个int类型的参数 */
{
  while (n-- > 0) {
    printf("#");
  }
  printf("\n");
}
