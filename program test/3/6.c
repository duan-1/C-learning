/* 将输入的夸脱数显示出水分子的数量 */
#include <stdio.h>

int main(void)
{
    float mass;
    float quart;
    mass = 3e-23;
    printf("请输入水的夸脱数：");
    scanf("%f", &quart);
    printf("\n%.1f 夸脱水的质量为 %.0f 克，其中有 %e 个水分子！", quart, quart * 950, quart * 950 / mass);

    return 0;
}