#include<stdio.h>
int main()
{
    int a,b,c;
    printf("first number:");
    scanf("%d",&a);

    printf("second number:");
    scanf("%d",&b);

    printf("third  number:");
    scanf("%d",&c);

    if((a>b)&&(a>c))
    {
        printf("greatest number is:%d",a);
    }
    else if((b>a)&&(b>c))
    {
        printf("greatest number is :%d",b);
    }
    else
    {
        printf("greatest number is:%d",c);
    }
}