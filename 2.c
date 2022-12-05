#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter Three number");
    scanf("%d%d%d",&a,&b,&c);
    int l=a>=b?a:b;
    l=l>=c?l:c;
    printf("Maximum is %d",l);

}