#include<stdio.h>
int main()
{
    int y;
    char q;
    printf("enter qualification:");
    scanf("%c",&q);
    printf("enter experience:");
    scanf("%d",&y);
    if((y>10)&&(q=='p'))
    {
        printf("15000");
    }
    else if((y<10)&&(q=='p'))
    {
        printf("10000");
    }
    else if((y<10)&&(q=='g'))
    {
    printf("7000");
    }
    else
    {
        printf("invalid");
    }
}