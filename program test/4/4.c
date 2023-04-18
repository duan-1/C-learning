/* 编写一个程序，提示用户输入身高（单位：英寸）和姓名，
然后以下面的格式显示用户刚输入的信息：
Dabney, you are 6.208 feet tall
使用 float 类型，并用/作为除号。
如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示出来。 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    float weight;
    printf("请输入你的名字:\n");
    scanf("%s", name);
    printf("请输入你的身高（厘米）:\n");
    scanf("%f", &weight);
    printf("%s，你的身高为：%0.2f 米", name, weight / 100);
    getchar();

    return 0;
}