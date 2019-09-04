/******************************************************************************

Week 3 Day 1 - Standard I/O
Example 1 - ask the user to enter a number and print it back

*******************************************************************************/
#include <stdio.h>

int main()
{    
 	int number;
    
    printf("Please enter a number: ");
    scanf("%d", &number);
    
    printf("You entered the number %d", number);
    
    // now ask for two numbers and print them both back
 	int number1, number2;
    
    printf("Please enter two numbers: ");
    scanf("%d%d", &number1, &number2);
    
    printf("You entered the numbers %d and %d", number1, number2);
    
    return 0;
}
