#include <stdio.h>

int main(void)
{
    int toes, di_toes, SQ_toes;

    toes = 10;
    di_toes = 2* toes;
    SQ_toes = toes * toes;

    printf("toes: %d\ndouble toes: %d\nsquare toes: %d", toes, di_toes, SQ_toes);
    
    return 0;
}