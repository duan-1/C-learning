/* 将英寸转换为厘米 */
#include <stdio.h>

int main(void)
{
    float inch, cm;
    printf("请输入您的身高（英寸）：");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("您的身高为：%.2f 厘米。", cm);

    return 0;
}