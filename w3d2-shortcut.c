/******************************************************************************

Week 3 Day 2 - Arithmetic & Expressions
Shortcut example

*******************************************************************************/
#include <stdio.h>

int main()
{
   float price, tax;

   puts("Please enter the price:");
   scanf("%f", &price);
 
   tax = price * 0.0825;
   price = price + tax;
 
   printf("Your total with tax is %.2f", price);

    return 0;
}

	