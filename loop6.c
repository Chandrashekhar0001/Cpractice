#include<stdio.h>
void main()//    o  d  d        l  o  o  p
{
    int x,sq;
    char c;
    do
    {
        printf("Enter number:");
        scanf("%d",&x);

        sq=x*x;
        printf("square=%d\n",sq);
        printf("Enter choice:");
        scanf("%s",&c);
    } while (c=='y');
    
     
}