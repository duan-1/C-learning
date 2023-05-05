/* 编写一个程序，提示用户输入一个 double 类型的数，并打印该数的立方值。自己设计一个函数计
算并打印立方值。main 函数要把用户输入的值传递给该函数。 */
#include <stdio.h>

void printCube(double num);

int main(void)
{
    double num;

    printf("Enter a number: ");
    fflush(stdin);
    scanf("%lf", &num);
    printCube(num);

    fflush(stdin);
    printf("press any key to quit...");
    getchar();
    return 0;
}

void printCube(double num)
{
    double numCube;
    numCube = num * num * num;
    printf("The cube of %lf is %lf\n", num, numCube);
}