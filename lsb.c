#include<stdio.h>
int main()// least significant bit
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    if(x&1==1)
    {
        printf("set");
    }
    else
    {
        printf(" Unset");
    }
}