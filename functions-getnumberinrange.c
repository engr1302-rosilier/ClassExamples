/******************************************************************************

Week 7 Day 1 - Functions
Example 2b - read three characters from an input file, print them back to an output file

This program will ask the user to enter a number and check that it is
within a specified range. If it's not, the user is asked to try again.
This is the resulting program after we "functionalized" the original version
which is in functions-originalgetnumber.c

*******************************************************************************/
#include <stdio.h>

/* Function Prototypes --------------------------------- */
int getNumberInRange(int a, int b);

/* Main function --------------------------------- */
int main()
{

	int number;
	
    number = getNumberInRange(10, 20); 
    printf("Thanks you entered %d", number);

	return 0;
}
	
/* Programmer defined functions --------------------------------- */

// Function: getNumberInRange
// Job: ask the user for an integer in a specified range; if the number entered
// is out of range, print an error and repeat
// Input: integers representing the low and high end of the desired range (inclusive)
// Output: the validated integer entered by the user
int getNumberInRange(int a, int b) {

  int num;

  do {
	printf("Please enter an integer between %d and %d (inclusive): ", a, b);
	scanf("%d", &num);
		
	if (num < a) {
		puts("That's too low");
	} else if (num > b) {
		puts("That's too high");
	}
	    
  } while ( !(num >= a && num <= b) );
  
  return num;

}
	