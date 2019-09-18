/******************************************************************************

Week 5 Day 1 - Repetition
Example 1 - while loop with counter

*******************************************************************************/
#include <stdio.h>

// we are using a symbolic constant to define the number of times to repeat
#define MAX 5

int main()
{
    int counter = 0;
    int number = 0;
    int sum = 0;    // running total
    
    while (counter < MAX) {
    
        puts("Please enter a integer: ");
        scanf("%d", &number);
        
        sum = sum + number;
    
        counter = counter + 1;
    }
    
    printf("The total is %d", sum);
    
    return 0;
}
