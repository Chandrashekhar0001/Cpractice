#include<stdio.h>
int main()
{
    int r,c,s;
    for(r=1;r<=5;r++)
    {
        for(s=1;s<=5-r;s++)
        printf("");
        for(c=1;c<=r;c++)
        printf("*");
        printf("\n");
    }
    for(r=5;r>=1;r--)
    {
        for(s=1;s<=5-r;s++)
        printf("");
        for(c=1;c<=r;c++)
        printf("*");
        printf("\n");
    }
}