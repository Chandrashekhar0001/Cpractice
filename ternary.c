#include<stdio.h>
void main()
{    //checking even or odd using ternary operator
    int a;
    printf("enter number:");
    scanf("%d",&a);
    a%2==0?printf("even"):printf("odd");
}