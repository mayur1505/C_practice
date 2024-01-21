#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the values of a, b, c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && a==c)
    {
        printf("All three numbers are same");
    }
    else
    {
        if (a>=b && a>=c)
            {
                printf("The greatest number is a");
            }
        else
            {
                if (b>=c)
                {
                    printf("The greatest number is b");
                }
                else
                {
                    printf("The greatest number is c");
                }
                
            }
    }
}