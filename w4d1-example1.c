/******************************************************************************

Week 4 Day 1 - Selection
Example 1 - if statement

*******************************************************************************/

#include <stdio.h>

int main()
{
    int number=0;
    
    printf("Pleease enter a number");
    scanf("%d", &number);
    
    if (number < 100)
      puts("The number is less than 100\n");

    return 0;
}
