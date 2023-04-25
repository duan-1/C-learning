/* .编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度
和以兆字节（MB）为单位的文件大小。程序中应计算文件的下载时间。
注意，这里 1 字节等于 8 位。使用 float 类型，并用/作为除号。
该程序要以下面的格式打印 3 个变量的值（下载速度、文件大小和下载时间），
显示小数点后面两位数字：
At 18.12 megabits per second,
a file of 2.20 megabytes downloads in 0.97 seconds. */
#include <stdio.h>

int main(void)
{
    float speed, fileSize;
    printf("Please enter your network speed (Mb/s):\n");
    scanf("%f", &speed);
    printf("Please enter your file size (MB):\n");
    fflush(stdin);
    scanf("%f", &fileSize);
    printf("At %0.2f megabits per second,a file of %0.2f megabytes \
downloads in %0.2f seconds.\n", speed, fileSize, fileSize / (speed / 8));
    fflush(stdin);
    getchar();

    return 0;
}