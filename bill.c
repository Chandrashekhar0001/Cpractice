#include<stdio.h>
void main()
{
    int a;
    printf("Enter units:");
    scanf("%d",&a);
    if((a>=300)&&(500>=a))
    {
        printf("Rs.=%f",a*5.8);
    }
    else if (a<=300)
    {
        printf("Rs.=%d",a*2);
    }
    else
    {
        printf("Rs.=%f",a*8.2);
    }
    
}