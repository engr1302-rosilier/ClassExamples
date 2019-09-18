/******************************************************************************

Week 5 Day 1 - Repetition
Example 2 - while loop with sentinel

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;    // running total
    
    while (number != -1) {
    
 		// this version does the addition to the running total att the
 		// beginning of the loop. This does nothing the first iteration
 		// since both sum and number are initialized to zero. The next
 		// time through it will add the number enter by the user. The
 		// reason we do it this way is so that we are sure the number 
 		// we are adding was not the sentinel   
        sum += number;
 
        puts("Please enter a integer (enter -1 to stop): ");
        scanf("%d", &number);
    }
    
    printf("The total is %d", sum);
    
    return 0;
}
