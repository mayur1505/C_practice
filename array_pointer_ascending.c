//store 5 no in array, arrange them in ascending order

#include<stdio.h>

void input(int *p)
{   
    int i;
    printf("Enter any 5 values \n");
    for(i=0;i<=4;i++)
        scanf("%d",p+i);
}

void display(int *q)
{   
    int i;
    printf("The values you entered are \n");
    for(i=0;i<=4;i++)
        printf("%d \n",*(q+i));
}

void sort(int *r)
{
    //bubble sort
    int round,t,i;
    for (round=1; round<=4; round++)
        {
            for (i=0; i<=4-round; i++)
                if (*(r+i) > *(r+i+1))
                    {
                        t=*(r+i);
                        *(r+i)=*(r+i+1);
                        *(r+i+1)=t;
                    }
        }
}
void main()
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    printf("In ascending order \n");
    display(a);
}
