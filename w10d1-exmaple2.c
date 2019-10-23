/******************************************************************************

Week 10 Day 1 - Arrays & Random
Example 2 - create a program to simulate rolling a dice and count how many times
each side is rolled on a tally chart

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 10000
#define SIDES 9

// prototypes
int getRandomInt(int a, int b);

int main()
{
    int diceroll;
    int tally[SIDES] ={0};
    int i;
    
    // seed
    srand(time(NULL));
    
    // roll the dice ROLLS times
    for (i=0; i<ROLLS; i++) {
        diceroll = getRandomInt(1,SIDES);
        tally[diceroll-1]++;
    }
    
    // print results
    for (i=0; i<SIDES; i++) {
        printf("You rolled a %d - %d times\n", i+1, tally[i] );
    }
    
    return 0;
}


// function definitions

int getRandomInt(int a, int b) {
    
    return a + rand() % (b-a+1); 
    
}

