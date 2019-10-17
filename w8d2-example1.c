/******************************************************************************

Week 8 Day 2 - Arrays
Example 1 - create an array and set the elements to different values

*******************************************************************************/
#include <stdio.h>

// global constants
#define SIZE 10

int main()
{
    // declare an array of 10 integers
    int array[SIZE] = {0};
    
    // print the array
    for (int i=0; i<SIZE; i++) {
        printf("[%d]", array[i]);
    }
    puts("");
    
    // set all elements to 1
    //array[0] = 1;
    //array[1] = 1;
    //array[2] = 1;
    // this way is the hard way! use a for loop instead...
    for (int i=0; i<SIZE; i++) {
        array[i] = 1;
    }
    
    // print the array
    for (int i=0; i<SIZE; i++) {
        printf("[%d]", array[i]);
    }
    puts("");

    // set array elements equal to position 
    for (int i=0; i<SIZE; i++) {
        array[i] = i;
    }
    
    // print the array
    for (int i=0; i<SIZE; i++) {
        printf("[%d]", array[i]);
    }
    puts("");

    // set array elements equal to series of even numbers
    for (int i=0; i<SIZE; i++) {
        array[i] = i*2;
    }
    
    // print the array
    for (int i=0; i<SIZE; i++) {
        printf("[%d]", array[i]);
    }
    puts("");

    return 0;
}
