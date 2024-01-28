//using #define write macro like function

#include<stdio.h>
#define sum(a,b) a+b
#define prod(a,b) a*b

void main()
{
    printf("The sum of 3 and 4 is %d \n", sum(3,4));
    printf("The production of 3 and 4 is %d \n", prod(3,4));
}