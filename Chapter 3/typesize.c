/* typesize.c -- 打印类型大小 */
#include <stdio.h>

int main(void)
{
    // C99 为类型大小提供 %zd 转换说明
    printf("Ttype int has a size of %zd bytes.\n", sizeof(int));
    printf("Ttype char has a size of %zd bytes.\n", sizeof(char));
    printf("Ttype long has a size of %zd bytes.\n", sizeof(long));
    printf("Ttype long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Ttype double has a size of %zd bytes.\n", sizeof(double));
    printf("Ttype long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}