#include<stdio.h>
int main()   //  average of marks using array
{
    int x[5],i,sum=0,avg;
    for(i=0;i<=4;i++)
    {
        printf("Enter marks:");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+x[i];
    }
        avg=sum/5;
        printf("Average:%d",avg);
    
}