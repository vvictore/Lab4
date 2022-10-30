/******************************************************************************

ENGG1410 F22
LAB 4 
Prepared by AN

Task 1 - Fix the broken code

*******************************************************************************/
#include <stdio.h>

int main()
{
    // this program will calculate the sum of a positive integer
    // AND all positive integers below it, USING LOOPS
    
    // ex: 4: 4+3+2+1 = 10
    // you can verify your answers using the formula:
    // sum of first n natural numbers = n(n+1)/2
    
    int num,sum=0;
    printf("Enter a positive int: ");
    scanf("%d",&num);
    
    int ii;
    // there are many different ways to set up a loop for this calculation
    // choose what makes most sense to you
    for(ii=num;ii>=1;ii--)
    {
        sum = ii + sum;
        //sum *= num means sum = sum * num 
        //sum += num means sum = sum + num
        //for(11=0; ii<num: ii--)   sum = num*(num+ 1)/2; this way also works
    }
    
    printf("the sum of %d and all preceding +ints is %d",num,sum);
    

    return 0;
}
//I'm making a change just for the git thing
