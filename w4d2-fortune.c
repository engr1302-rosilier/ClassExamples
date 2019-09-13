/*----------------------------------------------------*/
/* Class: EG 1302B Fall 2019                          */
/*                                                    */
/* This is our second collaborative program!          */
/*                                                    */
/*----------------------------------------------------*/

// Preprocessor directives
#include <stdio.h>

// Here are the rules... each class member must 
// contribute one scenario to our "Fortune Teller"
// program. Each scenario must:
//   - integrate to the existing code properly
//   - offer a fortune based on a specific initial (must not conflict
//     with existing entries)
//   - must include your name in a comment 
//     indicating which is your contribution
//   - only make changes in the designated area
//   - copy the code over to your favorite IDE
//     to test and make sure the program runs
//  If you find errors in another students' 
//  contribution, you can provide advice to fix
//  it within a comment, but do not change their code

// Main function
int main()
{

  // Declarations
  char firstInitial = 0;

  // Welcome & get the temperature from the user
  puts("Let me read your Fortune!\n");
  puts("What is your first initial? (one letter only, please!) ");
  scanf(" %c", &firstInitial);
  
  // Give fortune based on first initial
  switch (firstInitial) { // Started by Prof Rosilier
    case 'a':
    case 'A':
      printf("You are very smart!");  
      break;
    
  // ************ Do not modify anything above this line **************  



  // ************ Do not modify anything below this line **************  
    
    default:
      printf("I got nothing... try again.");
  }

  // Exit program
  return 0;
}
/*----------------------------------------------------*/