#include<stdio.h>
void main()
{//area of rectangle using scanf function
    int a,b,area;
    printf("enter length=");
    scanf("%d",&a);
    printf("enter breadth=");
    scanf("%d",&b);
    area=a*b;
    printf("area:%d",area);
}