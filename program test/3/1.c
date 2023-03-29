/* 观察整数上溢、浮点数上溢和浮点数下溢的情况 */
#include <stdio.h>

int main(void)
{
    int a;
    float b, c;
    a = 2147483647;
    b = 3.4e38;
    c = 3.4e-45;

    printf("整数：%d\n浮点数：%e\n浮点数：%e\n", a, b, c);
    printf("整数上溢：%d\n浮点数上溢：%e\n浮点数下溢：%e\n", a + 1, b * 100.0f, c / 100.0f);

    return 0;
}