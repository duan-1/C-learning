/*  编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式，再打印成 p 记数法（即十六进制记数法）。 */
#include <stdio.h>

int main(void)
{
    float number;
    printf("Enter a floating-point value: ______\b\b\b\b\b\b");
    scanf("%f", &number);
    printf("\nfixed-point notation: %f\n", number);
    printf("exponential notation: %e\n", number);
    printf("p notation: %a\n", number);

    return 0;
}