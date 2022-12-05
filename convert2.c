#include<stdio.h>
int main()
{
    int x,sum;
    char c;
    printf("enter number:");
    scanf("%d",&x);

    printf("enter character:");
    scanf("%c",&c);

    sum=x+c;
    printf("value of sum=%d",sum);
}