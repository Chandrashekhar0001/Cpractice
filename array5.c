#include<stdio.h>
int main()//  set of array size at run time
{
    int i,n;
    printf("Enter array size:");
    scanf("%d",&n);
    int x[n];
    for (i=0;i<=n-1; i++)
    {
        printf("Enter values:");
        scanf("%d",&x[i]);
    }
    for(i=0;i<=n-1;i++){
        printf("values:%d\n",x[i]);
    }
    
}