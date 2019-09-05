/******************************************************************************

Week 3 Day 2 - Arithmetic & Expressions
Example 1 

*******************************************************************************/
#include <stdio.h>

int main()
{
   int number1, number2, number3;
   float average;
   
   puts("Please enter 3 integers: ");
   scanf("%d%d%d", &number1, &number2, &number3);
   
   average = (float) (number1 + number2 + number3) / 3;
   printf("The average is %.2f", average);
  
   return 0;
}

	