#include <stdio.h>

void main()

{
    int x=4, *p;//p is pointer which will store address of some variable
    p=&x;
    printf("%d %d \n",x,p);
    printf("%d %d\n",&x,*p);
    printf("%d \n",*&p);
}