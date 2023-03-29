/* 编写一个程序将年龄转化为对应的秒数 */
#include <stdio.h>

int main(void)
{
    double yearSec;
    int age;
    yearSec = 3.156e7;
    printf("请输入你的年龄：");
    scanf("%d", &age);
    printf("你的年龄对应的秒数为：%.0f", yearSec * age);

    return 0;
}