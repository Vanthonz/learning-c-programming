#include <stdio.h>

int main()
{

    char symbol;
    int w = 0;
    int z;
    int x;
    int y;

    /*printf("Enter a symbol +(addition) or -(subtraction): ");
    scanf("%c", &symbol);
    */
    

    printf("Enter a symbol +(addition) or -(subtraction): ");
    scanf("%c", &symbol);


    if(symbol == '+')
    {
        printf("Enter 1st number: ");
        scanf("%d", &x);

        printf("Enter 2nd number: ");
        scanf("%d", &y);
        
        z = x + y;

        printf("solution = %d\n", z);
    }
    else if(symbol == '-')
    {
        printf("2nd will be subtracted from 1st\n");
        
        printf("Enter 1st number: ");
        scanf("%d", &x);

        printf("Enter 2nd number: ");
        scanf("%d", &y);

        z = x - y;
        
        printf("solution = %d\n", z);
    }

    return 0;
}