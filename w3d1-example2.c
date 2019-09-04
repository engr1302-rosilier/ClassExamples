/******************************************************************************

Week 3 Day 1 - Standard I/O
Example 2 - ask the user to enter a letter and print it back

*******************************************************************************/
#include <stdio.h>

int main()
{    
    char character;
    
    printf("Please enter a letter: ");
    scanf(" %c", &character);
    
    printf("You entered the letter %c which has the ASCII value of %d", character, character);

    return 0;
}
