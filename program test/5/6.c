/* 修改编程练习 5 的程序，使其能计算整数的平方和（可以认为第 1 天赚 $1、第 2 天赚 $4、第 3 天赚$9，
以此类推，这看起来很不错）。c 没有平方函数，但是可以用 n * n 来表示 n 的平方。 */
#include <stdio.h>

int main(void)
{
    int count, sum, days;

    count = 0;
    sum = 0;
    printf("Enter a number of days: ");
    fflush(stdin);
    scanf("%d", &days);
    while (count++ < days)
    {
        sum = sum + count * count;
    }
    printf("sum = $%d\n", sum);

    printf("press any key to quit...");
    fflush(stdin);
    getchar();
    return 0;
}