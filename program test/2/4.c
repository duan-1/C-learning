#include <stdio.h>

void jelly();
void deny();

int main(void)
{
    jelly();
    jelly();
    jelly();
    deny();
    return 0;
}

void jelly()
{
    printf("For he's a jolly good fellow!\n");
}

void deny()
{
    printf("Which nobody can deny!");
}
