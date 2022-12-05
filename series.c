#include<stdio.h>
void main()//////series of characters
{
    char i,j;
    for(i='A';i<='S';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        {
            printf("\n");
        }
    }
}