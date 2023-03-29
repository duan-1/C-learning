/* 编写一个程序，发出一声警报，然后打印文本 */
#include <stdio.h>

int main(void)
{
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"");
    getchar();

    return 0;
}