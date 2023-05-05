/* 编写一个程序，要求用户输入一个华氏温度。程序应读取 double 类型的值作为温度值，并把该值
作为参数传递给一个用户自定义的函数 Temperatures()。该函数计算摄氏温度和开氏温度，并
以小数点后面两位数字的精度显示 3 种温度。要使用不同的温标来表示这 3 个温度值。下面是华氏
温度转摄氏温度的公式：
摄氏温度 = 5.0 / 9.0 * （华氏温度 - 32.0）
开氏温标常用于科学研究，0 表示绝对零，代表最低的温度。下面是摄氏温度转开氏温度的公式：
开氏温度 = 摄氏温度 + 273.16
Temperatures() 函数中用 const 创建温度转换中使用的变量。在 main() 函数中使用一个循环
让用户重复输入温度，当用户输入 q 或其他非数字时，循环结束。scanf() 函数返回读取数据的
数量，所以如果读取数字则返回 1，如果读取 q 则不返回 1。可以使用==运算符将 scanf() 的返
回值和 1 作比较，测试两值是否相等。 */
#include <stdio.h>

void Temperatures(double f);

int main(void)
{
    double f;

    printf("Enter a number of Fahrenheit(enter q or non-numeric to quit): ");
    fflush(stdin);
    while (scanf("%lf", &f) == 1)
    {
        Temperatures(f);
        printf("Enter a number of Fahrenheit(enter q or non-numeric to quit): ");
    }

    fflush(stdin);
    printf("press any key to quit...");
    getchar();
    return 0;
}

void Temperatures(double f)
{
    const double ktoc = 273.16;
    const double ftoc = 32.0;
    double c, k;

    c = 5.0 / 9.0 * (f - ftoc);
    k = c + ktoc;
    printf("%.2lf ℉ = %.2lf ℃ = %.2f K\n", f, c, k);
}
