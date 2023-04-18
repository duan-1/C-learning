/* 编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来。 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[40], lastName[40];
    printf("Please enter your first name:\n");
    scanf("%s", firstName);
    printf("Please enter your last name:\n");
    scanf("%s", lastName);
    printf("%s,%s", firstName, lastName);

    return 0;
}