#include<stdio.h>
int main()
{
    char i,j;
    for(i='A';i<='Z';i++)
    {
        if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
        {
            for(j='A';j<=i;j++)
            {
                if(j=='A'||j=='E'||j=='I'||j=='O'||j=='U')
                {
                    printf("%c",j);
                }
            }
        }
        printf("\n");
    }
    

    
}