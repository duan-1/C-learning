/* 编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。用下面的格式进行输出（系统不同，指数记数法显示的位数可能不同）：
a.输入 21.3 或 2.1e+001；
b.输入 +21.290 或 2.129E+001； */
#include <stdio.h>

int main(void)
{
    float num;
    printf("Please enter a Decimal number:\n");
    scanf("%f", &num);
    printf("a.输入 %f 或 %e;\n", num, num);
    printf("b.输入 %+f 或 %E;\n", num, num);

    return 0;
}