#include<stdio.h>
int main()  //sum of two arrays
{
    int x[5],y[5],z[5],i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&x[i]);
    }
     for(i=0;i<=4;i++)
     {
        scanf("%d",&y[i]);
     }
     for(i=0;i<=4;i++)
     {
        z[i]=x[i]+y[i];
        printf("%d",z[i]);
     }
}