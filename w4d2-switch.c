/******************************************************************************

Week 4 Day 2 - Selection
Example 1 - switch statement

*******************************************************************************/

#include <stdio.h>

int main() {

  int fortuneNum;
  puts("Enter an integer number to get your fortune!");
  scanf("%d", &fortuneNum);

  switch(fortuneNum) {
    case 1: 
      printf("You will find true love.\n");
      break; 
    case 2 :
      printf("You will have an wonderful surprise.\n");
      break;
    case 3 :
      printf("You will become a millionaire.\n");
      break;
    default :
      printf("The stars are not clear. Try again.\n");
  }

}
