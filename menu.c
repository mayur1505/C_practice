//use of switch for making restaurant menu for order

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    
    printf("\n 1. Chinese menu");
    printf("\n 2. Italian menu");
    printf("\n 3. Indian menu");
    printf("\n 4. Marathi menu");
    printf("\n Enter 0 for exit");

    while (1)
    {
        printf("\n Please kindly choose your choice of menu (or enter 0 to exit): ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            printf("Thanks for choosing Chinese menu\n");
            break;
        case 2:
            printf("Thanks for choosing Italian menu\n");
            break;
        case 3:
            printf("Thanks for choosing Indian menu\n");
            break;
        case 4:
            printf("Thanks for choosing Marathi menu\n");
            break;
        case 0:
            exit(0);
        default:
            printf("Please choose correct menu\n");
            break;
        }
    }

    return 0;
}
