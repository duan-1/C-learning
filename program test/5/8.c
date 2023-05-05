/* 编写一个程序，显示求模运算的结果。把用户输入的第 1 个整数作为求模运算符的第 2 个运算对象，
该数在运算过程中保持不变。用户后面输入的数是第 1 个运算对象。当用户输入一个非正值时，程序结束。
其输出示例如下：
This program computers moduli.
Enter an integer to serve as the second operand: 256
Now enter the first operand: 438
438 % 256 is 182
Enter next number for first operand (<= 0 to quit): 1234567
1234567 % 256 is 135
Enter next number for first operand (<= 0 to quit): 0
Done */
#include <stdio.h>

int main(void)
{
    int firstOperand, secondOperand;

    printf("This program computers moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    fflush(stdin);
    scanf("%d", &secondOperand);
    printf("Now enter the first operand: ");
    fflush(stdin);
    scanf("%d", &firstOperand);
    while (firstOperand > 0)
    {
        printf("%d %% %d is %d\n", firstOperand, secondOperand, firstOperand % secondOperand);
        printf("Enter next number for first operand (<= 0 to quit): ");
        fflush(stdin);
        scanf("%d", &firstOperand);
    }
    printf("Done\n");

    fflush(stdin);
    printf("press any key to quit...");
    getchar();
    return 0;
}