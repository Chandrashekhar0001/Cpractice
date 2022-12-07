#include<stdio.h>   //  condition for even and odd
int main()
{
    int x[4],i;
    for(i=0;i<=3;i++)
    {
        printf("Enter value:");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=3;i++)
    {
       x[i]%2==0?printf("even"):printf("odd");
       printf("\n");
    }

}