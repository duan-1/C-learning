/* 编写一个程序，将一个 double 类型的变量设置为 1.0/3.0，一个 float 类型的变量设置为 1.0/3.0。
分别显示两次计算的结果各 3 次：一次显示小数点后面 6 位数字；一次显示小数点后面 12 位数字；
一次显示小数点后面 16 位数字。程序中要包含 float.h 头文件，并显示 FLT_DIG 和 DBL_DIG 的值。
1.0/3.0 的值与这些值一致吗？ */
#include <stdio.h>
#include <float.h>

int main(void)
{
    double number_d = 1.0/3.0;
    float number_f = 1.0/3.0;

    printf("double value:\n");
    printf("%.6f %.12f %.16f\n", number_d, number_d, number_d);
    printf("float value:\n");
    printf("%.6f %.12f %.16f\n", number_f, number_f, number_f);
    printf("DBL_DIG: %d\n", DBL_DIG);
    printf("FLT_DIG: %d", FLT_DIG);

    fflush(stdin);
    getchar();
    return 0;
}