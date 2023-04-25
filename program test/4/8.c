/* 编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，
显示小数点后面一位数字。接下来，使用 1 加仑大约 3.785 升，1 英里大约为 1.609 千米，
把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，
显示小数点后面 1 位数字。注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），
而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。
使用 #define 创建符号常量或使用 const 限定符创建变量来表示两个转换系数。 */
#include <stdio.h>

#define GALLONTOL 3.785
#define MILESTOKM 1.609

int main(void)
{
    float mileage, gasolineQuantity;
    printf("请输入你的里程数（英里）：\n");
    fflush(stdin);
    scanf("%f", &mileage);
    printf("请输入你消耗的汽油量（加仑）：\n");
    fflush(stdin);
    scanf("%f", &gasolineQuantity);
    printf("你每加仑汽油行驶的英里数为：%.1f 公里\n", mileage / gasolineQuantity);
    printf("你每百公里消耗的汽油量为：%.1f 升\n", (gasolineQuantity * GALLONTOL) / (mileage * MILESTOKM));

    fflush(stdin);
    getchar();
    return 0;
}