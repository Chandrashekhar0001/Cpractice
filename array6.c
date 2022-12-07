#include<stdio.h>   ///initialization of 2-D array with rows and columns
int main()
{
    int i,j;
    int x[4][3]={{2,4,6},{1,2,3},{8,10,12},{5,7,9}};
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("Values are=%d\n%d",x[i][j]);
        }
    }
}