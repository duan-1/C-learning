/* 编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。使用 #define 或 const 创建一个表示 60 的
符号常量或 const 变量。通过 while 循环让用户重复输入值，直到用户输入小于或等于 0 的值才停止循环。 */
#include <stdio.h>

#define HTOM 60

int main(void)
{
    int m, h;

    printf("请输入分钟数（输入小于或等于 0 的数退出程序）：\n");
    fflush(stdin);
    scanf("%d", &m);
    while (m > 0)
    {
        h = m / HTOM;
        printf("%d 分钟为 %d 小时 %d 分钟。\n", m, h, m % HTOM);
        printf("请输入分钟数（输入小于或等于 0 的数退出程序）：\n");
        fflush(stdin);
        scanf("%d", &m);
    }

    return 0;
}