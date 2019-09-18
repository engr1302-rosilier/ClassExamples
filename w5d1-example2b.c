/******************************************************************************

Week 5 Day 1 - Repetition
Example 2 - while loop with sentinel version 2

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;    // running total
    
    while (number != -1) {
    
        puts("Please enter a integer: ");
        scanf("%d", &number);
        
        // this version moves the running total addition to after the
        // user input -- but we must make sure that the number entered
        // was not the sentinel
        if (number != -1)
          sum += number;
    }
    
    printf("The total is %d", sum);
    
    return 0;
}
