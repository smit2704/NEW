#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d,&a");
    if(a>0)
    {
        printf("The number is positive",a);
    }
    else
    {
         printf("The number is negative",a);
    }    
}