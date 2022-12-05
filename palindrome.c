#include<stdio.h>
void main()   //  palindrome numbers 
{
    int n,r,sum=0,temp;
    printf("enter number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    printf("palindrome number");

    else
    printf("not palindrome");
}