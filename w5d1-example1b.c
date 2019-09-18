/******************************************************************************

Week 5 Day 1 - Repetition
Example 1 - while loop with counter, using shortcuts

*******************************************************************************/
#include <stdio.h>

// we are using a symbolic constant to define the number of times to repeat
#define MAX 5

int main()
{
    int counter = 0;
    int number = 0;
    int sum = 0;    // running total
    
    // this example uses shortcuts to add to the counter and the running
    // total. Notice it must be postfix on the counter so that the addition
    // is done after the conditional comparison
    
    while (counter++ < MAX) {
    
        puts("Please enter a integer: ");
        scanf("%d", &number);
        
        sum += number;
    
    }
    
    printf("The total is %d", sum);
    
    return 0;
}
