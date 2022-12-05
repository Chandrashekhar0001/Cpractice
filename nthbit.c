#include<stdio.h>
int main()
{
    int x,n,a;
    printf("enter number:");
    scanf("%d",&x);

    printf("enter bit to right shift:");
    scanf("%d",&n);

    a=(x>>n)&1;
    printf("nth bit=%d",a);
}