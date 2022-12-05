#include<stdio.h>
void main()
{
    int age;
    printf("enter age:");
    scanf("%d",&age);
    if(age<18)
    {
        printf("childhood");
    }
    else if(age>=18 && age<60)
    {
        printf("voter,adult");
    }
    else if(age>=60)
    {
        printf("voter,senior citizen");
    }
    else
    {
        printf("invalid");
    }
}