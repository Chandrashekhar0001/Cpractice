#include<stdio.h>
int main()//  print values 
{
    int x[5],i,j;

    for(i=0;i<=4;i++)
    {
        printf("Enter number:");
        scanf("%d",&x[i]);
    }
    for(j=0;j<=4;j++)
    {
        printf("values:%d\n",x[j]);
    }
}