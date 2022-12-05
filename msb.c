#include<stdio.h>
int main()
{
    int b,x,n;
    printf("enter number:");
    scanf("%d",&n);
    b=sizeof(int)*8;
    x=1<<(b-1);
    if(n&x==1)
    {
        printf("set");
    }
    else{
        printf("unset");
    }
}