/******************************************************************************

Week 4 Day 1 - Selection
Example 2 - if-else statement

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number=0;
    
    printf("Pleease enter a number");
    scanf("%d", &number);
    
    if (number < 100)
      puts("The number is less than 100\n");
    else 
      puts("The number is not less than 100");

    return 0;
}
