//make a new data type with the help of union

#include<stdio.h>

union item
{
    /* data */
    int x;
    float y;
    char z;
};

void main()
{
    union item i1;
    i1.x=5;
    printf("\n x=%d",i1.x);
    i1.y=3.5;
    printf("\n x=%f",i1.y);
    i1.z='a';
    printf("\n x=%c",i1.z);    
}
