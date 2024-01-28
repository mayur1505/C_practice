//write a odd or even code with the help of enum
#include<stdio.h>
enum boolean
{
    false, true
};

enum boolean isEven(int x)
{
    if (x%2==0)
        return(true);
    else
        return(false);
}

void main()
{
    int n;
    enum boolean result;
    printf("Enter a number \n");
    scanf("%d",&n);
    result=isEven(n);
    if(result==true)
        printf("Even number");
    else
        printf("odd number");
}