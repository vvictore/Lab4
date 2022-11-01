#include <stdio.h>

int main(void)
{
    char val;
    printf("Enter 'y' and press enter if you know how to use Git!\n");
    scanf(" %c", &val);

    if(val == 'y'){
        printf("You know how to use Git!");
    }
    
    else if(val != 'y')
    {
        printf("You do not know how to use Git!");
    }

    printf("\n");

    return 0;
}