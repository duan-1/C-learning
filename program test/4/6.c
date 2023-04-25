/* 编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
Melissa Honeybee
      7        8
接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
Melissa Honeybee
7       8 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char firstName[20],lastName[20];

    printf("Please enter your first name:\n");
    fflush(stdin);
    scanf("%s", firstName);
    printf("Please enter your last name:\n");
    fflush(stdin);
    scanf("%s", lastName);
    printf("%s %s\n%*d %*d\n", firstName, lastName, strlen(firstName),
        strlen(firstName), strlen(lastName), strlen(lastName));
    printf("%s %s\n%-*d %-*d\n", firstName, lastName, strlen(firstName),
        strlen(firstName), strlen(lastName), strlen(lastName));

    fflush(stdin);
    getchar();
    return 0;
}