#include <stdio.h>

// This is the starter code for the in class group programming challenge
// to implement the Bubble Sort Algorithm

// constants
#define SIZE 10

// prototypes
void printArray(int array[], int size);
void sortLow2High(int array[], int size);

int main()
{
    int i;
    int myArray[SIZE] = {0}; // initialize to all zero's

    // get numbers from user
    for (i=0; i<SIZE; i++) {
        puts("Enter a random integer: ");
        scanf("%d", &myArray[i]);
    }
    
    printf("Here is the unsorted array: \n");
    printArray(myArray, SIZE);

	// call the function to sort the array. Note that the array 
	// WILL be modified by the function because arrays are passsed 
	// by REFERENCE
	sortLow2High(myArray, SIZE); 

    printf("Here is the sorted array: \n");
    printArray(myArray, SIZE);

    return 0;
}

// function definitions

// FUNCTION: printArray()
// input: integer array and integer size
// output: none
void printArray(int array[], int size) {
    
    int j;
    for (j=0; j<size; j++) {
        printf("[%d]", array[j]);
    }
    puts("");

    return;
}

// FUNCTION: sortLow2High()
// input: integer array and integer size
// output: none
void sortLow2High(int theArray[], int theSize) {

  // complete this function to perform a bubble sort (low to high)

}
