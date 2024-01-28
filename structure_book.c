//write a code which will take info of book from user and will print it using structure

#include<stdio.h>
struct book input();
void display(struct book );
struct book
{
    int bookid;
    char title[20];
    float price;

};
void main()
{
    struct book b1;
    b1=input();
    display(b1);
}

struct book input()
{   
    struct book b2;
    printf("Enter the info of like bookid , title and price \n");
    scanf("%d",&b2.bookid);
    flush(stdin);
    gets(b2.title);
    scanf("%f",&b2.price);
    return b2;
}

void display(struct book b3)
{
    printf("The info you entered is bookid=%d \n bookname=%s \n bookprice=%f \n",b3.bookid,b3.title,b3.price);
}