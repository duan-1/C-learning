/* 将杯数转换为品脱、盎司、汤勺、茶勺 */
#include <stdio.h>

int main(void)
{
    float cups, pint, ounce, soup_spoon, tea_spoon;
    printf("请输入杯数：");
    scanf("%f", &cups);
    pint = cups / 2;
    ounce = cups * 8;
    soup_spoon = ounce / 2;
    tea_spoon = soup_spoon / 3;
    printf("%.2f 杯 = %.2f 品脱 = %.2f 盎司 = %.2f 汤勺 = %.2f 茶勺", cups, pint, ounce, soup_spoon, tea_spoon);
    getchar();

    return 0;
}