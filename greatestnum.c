#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("The greatest number among a and b is %d",a>b?a:b);
}