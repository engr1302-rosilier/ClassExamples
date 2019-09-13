/******************************************************************************

Week 4 Day 1 - Selection
Example 4 - conditional statement

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number=0;
    
    printf("Pleease enter a number");
    scanf("%d", &number);
    
// number < 100 ? puts("The number is less than 100\n") : puts("The number is not less than 100");

  puts( number < 100 ? "The number is less than 100\n" : "The number is not less than 100" );

    return 0;
}
