/*----------------------------------------------------*/
/* Class: EG 1302B Fall 2019                          */
/*                                                    */
/* This is our first collaborative program!           */
/*                                                    */
/*----------------------------------------------------*/

// Preprocessor directives
#include <stdio.h>

// Here are the rules... each class member must 
// contribute one scenario to our "What to Wear"
// program. Each scenario must:
//   - integrate to the existing code properly
//   - offer clothing advice for a specific 
//     range of temperatures (must not conflict
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
  int temp_in_F = 0;

  // Welcome & get the temperature from the user
  puts("Welcome to What to Wear!\n");
  puts("What is the current temperature? (whole number degrees F only please) ");
  scanf("%d", &temp_in_F);
  
  // Offer advice on what to wear based on temperature
  if (temp_in_F > 120 && temp_in_F < 130) { // Started by Prof Rosilier
    printf("You must be in Arizona! Definitely swimsuit weather!");  
    
  // ************ Do not modify anything above this line **************  



  // ************ Do not modify anything below this line **************  
    
  } else {
    printf("I got nothing... try again.");
  }

  // Exit program
  return 0;
}
/*----------------------------------------------------*/