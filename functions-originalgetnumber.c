/******************************************************************************

Week 7 Day 1 - Functions
Example 2b - read three characters from an input file, print them back to an output file

This program will ask the user to enter a number and check that it is
within a specified range. If it's not, the user is asked to try again.
This is the original version of the program where everything is done in
the main function and the range values are hardcoded to 10 and 20. We 
"functionalized" this program and separated the range checking in the revised
version which is in functions-getnumberinrange.c

*******************************************************************************/
#include <stdio.h>

int main()
{

	int number;
	
	do {
	    puts("Please enter an integer between 10-20 (inclusive): ");
		scanf("%d", &number);
		
		if (number < 10) {
			puts("That's too low");
		} else if (number > 20) {
			puts("That's too high");
	    }
	    
	} while (!(number >= 10 && number <= 20));
	
	printf("Thanks you entered %d", number);

	return 0;
}
	