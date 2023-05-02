// 替换输入的字母，非字母字符保持不变
#include <ctype.h>
#include <stdio.h>
int main(void) {
  char ch;

  while ((ch = getchar()) != '\n') {
    if (isalpha(ch))
      putchar(ch + 1);
    else
      putchar(ch);
  }
  putchar(ch);

  return 0;
}
