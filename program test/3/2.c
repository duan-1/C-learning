/* 输入 ASCII 码值打印对应字符 */
#include <stdio.h>

int main(void)
{
    char ascii;

    printf("请输入 ASCII 码值：______\b\b\b\b\b\b");
    scanf("%d", &ascii);
    printf("\n其对应的字符为：\'%c\'", ascii);

    return 0;
}