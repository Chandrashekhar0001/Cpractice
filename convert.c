#include<stdio.h>
int main()
{//convert from one unit to other
    float a,meter,km;
    printf("enter valu in cm=");
    scanf("%f",&a);
    meter=a/100;
    printf("meter=%f\n",meter);
    km=a/100000;
    printf("kilometer=%f",km);
    
}