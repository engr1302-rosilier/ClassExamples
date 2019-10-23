/******************************************************************************

Week 10 Day 1 - Arrays & Random
Example 1 - write functions to pick a random integer and a random float
in a given range

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototypes
int getRandomInt(int a, int b);
float getRandomFloat(int a, int b);

int main()
{
    int low, high, randint;
    float randfloat;
    
    // seed the random generator
    srand(time(NULL));
    
    printf("Enter the low end of the range: ");
    scanf("%d", &low);
    
    printf("Enter the high end of the range: ");
    scanf("%d", &high);
    
    for (int i=0; i<10; i++) {
        randint = getRandomInt(low, high);
        printf("The random integer is %d\n", randint);
    }
    
    for (int i=0; i<10; i++) {
        randfloat = getRandomFloat(low, high);
     printf("The random float is %f\n", randfloat);
    }
    
    return 0;
}


// function definitions

int getRandomInt(int a, int b) {
    
    return a + rand() % (b-a+1); 
    
}

float getRandomFloat(int a, int b) {
    
    return a + ((float) rand()/RAND_MAX) * (b-a+1); 
    
}
