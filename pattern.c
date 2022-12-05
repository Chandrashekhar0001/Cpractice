#include<stdio.h>
int main()
{
    int n,j;
    printf("enter number:");
    scanf("%d",&n);
    if(n<=50)
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    else if(n>50)
    {
        printf("number is to large,enter smaller than 50");
    }
}