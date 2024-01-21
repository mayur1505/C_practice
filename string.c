#include<stdio.h>

// int main()
// {   
//     char s[20];
//     printf("Enter your name\n");
//     gets(s);
//     puts(s);
//     return 0;
// }

//handling multiple strings

int main()
{
    char s[3][10];
    int i;
    printf("Enter the strings");
    for(i=0;i<=2;i++)
        gets(s[i]);
    for(i=0;i<=2;i++)
        puts(s[i]);
    
    return 0;
}
