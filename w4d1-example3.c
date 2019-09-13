/******************************************************************************

Week 4 Day 1 - Selection
Example 3 - nested if-else statement

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number=0;
    
    printf("Pleease enter a number");
    scanf("%d", &number);
    
    if (number < 100)
      puts("The number is less than 100\n");
    else if (number > 100)
      puts("The number is greater than 100");
    else
    // else if (number == 100)
      puts("The number is equal to 100");

    return 0;
}
