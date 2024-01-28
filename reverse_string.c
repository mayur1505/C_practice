#include<stdio.h>

char* reverse(char*);

void main()
{
    char s[10];
    printf("Put any string with length less than 9 \n");
    gets(s);
    printf("The reversed string is %s",reverse(s));
}

char* reverse(char *p)
{
    int l,i;
    char ch;
    for(l=0;*(p+l)!='\0';l++);//for calculating length of the string
    printf("The length of the string is %d \n",l);
    for(i=0;i<(l/2);i++)
    {
        ch=*(p+i);
        *(p+i)=*(p+(l-1)-i);
        *(p+(l-1)-i)=ch;
    }
    return p;
}