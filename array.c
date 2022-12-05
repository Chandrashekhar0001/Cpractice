#include<stdio.h>
int main()
{
    int x[3],y[3];
    int i;
    for(i=0;i<=2;i++)
    {
        printf("Enter first value:");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=2;i++)
    {
        printf("Enter second values:");
        scanf("%d",&y[i]);
    }
      for(i=0;i<=2;i++)
      {
       if(x[i]>y[i])
       {
        printf("greatest first  :%d\n",x[i]);
       }
       else
       {
        printf("greatest second:%d\n",y[i]);
       }
    
      }
}