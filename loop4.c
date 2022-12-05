#include<stdio.h>
void main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int sum=0;
    for (int i = 0; i <=n; i++)
    {
     sum=sum+i;   
    }
    printf("%d",sum);
    
}