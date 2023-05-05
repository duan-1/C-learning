/* 修改程序 addemup．c（程序清单 5.13） ，你可以认为 addemup·c 是计算 20 天里赚多少钱的程序
（假没第 1 天赚 $1、第 2 天赚 $2、第 3 天赚 $3，以此类推）。修改程序，使其可以与用户交互，根
据用户输入的数进行计算（即，用读入的一个变量来代替 20） 。 */
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
        sum = sum + count;
    }
    printf("sum = $%d\n", sum);

    printf("press any key to quit...");
    fflush(stdin);
    getchar();
    return 0;
}