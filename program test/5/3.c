/* 编写一个程序，提示用户输入天数，然后将其转换成周数和天数。
例如，用户输入 18，则转换成 2 周 4 天。以下面的格式显示结果：
18 days are 2 weeks, 4 days,
通过循环让用户重复输入天数，当用户输入一个非正值时（如 0 或 -2 0） ，循环结束。 */
#include <stdio.h>

#define WEEKTODAY 7

int main(void)
{
    int day, week, newDay;

    printf("Enter number of days(enter number <= 0 to quit):\n");
    fflush(stdin);
    scanf("%d", &day);
    while (day > 0)
    {
        week = day / WEEKTODAY;
        newDay = day % WEEKTODAY;
        printf("%d days are %d weeks, %d days.\n", day, week, newDay);
        printf("Enter number of days(enter number <= 0 to quit):\n");
        fflush(stdin);
        scanf("%d", &day);
    }

    return 0;
}