//do avg of 10 numbers 

#include<stdio.h>

int average(int);

int main()
{
    int a[10] , avg, sum=0,i;
    printf("Enter 10 numbers of your choice\n");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of all numbers is %d\n",sum);
    avg=average(sum);

    printf("The average of all numbers given is %d",avg);
 
    return 0;
}
 
int average(int s)
{
    int avg;
    avg= s/10.0;
    return avg;
}
