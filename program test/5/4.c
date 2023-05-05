/* 编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英寸为单位显示该值，允许有小数部分。
程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters (<=0 to quit): 168.7
168.0 cm = 5 feet, 6.4 inches
Enter a height in centimeters (<=0 to quit): 0
bye */
#include <stdio.h>

#define INCHESTOCM 2.54
#define FEETTOINCHES 12

int main(void)
{
    float cm, inches;
    int feet;

    printf("Ener a height in centimeters: ");
    fflush(stdin);
    scanf("%f", &cm);
    while (cm > 0)
    {
        inches = cm / INCHESTOCM;
        feet = (int)inches / FEETTOINCHES;
        inches = inches - feet * FEETTOINCHES;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        printf("Ener a height in centimeters: ");
        fflush(stdin);
        scanf("%f", &cm);
    }
    printf("bye\npress any key to quit");

    fflush(stdin);
    getchar();
    return 0;
}