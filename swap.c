//swap two integers using pointers
#include<stdio.h>
void swap(int*, int*);
void main()
{
    int a,b;
    printf("Enter the values of a and b \n");
    scanf("%d %d",&a,&b);
    printf("The values of a=%d and b=%d \n",a,b);
    swap(&a,&b);
    printf("The swapped values of a=%d and b=%d",a,b);
}

void swap(int *p, int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}