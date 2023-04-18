/* 编写一个程序，提示用户输入名和姓，并执行一下操作：
a.打印名和姓，包括双引号；
b.在宽度为 20 的字段右端打印名和姓，包括双引号；
c.在宽度为 20 的字段左端打印名和姓，包括双引号；
d.在比姓名宽度宽 3 的字段中打印名和姓。 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[40], lastName[40];
    printf("Please enter your first name:\n");
    scanf("%s", firstName);
    printf("Please enter your last name:\n");
    scanf("%s", lastName);
    printf("\"%s %s\"\n", firstName, lastName);
    printf("\"%20s %20s\"\n", firstName, lastName);
    printf("\"%-20s %-20s\"\n", firstName, lastName);
    printf("%*s %*s", strlen(firstName) + 3, firstName, strlen(lastName) + 3, lastName);

    return 0;
}