/******************************************************************************

Week 8 Day 2 - Arrays
Example 2 - create functions to print and update array

*******************************************************************************/
#include <stdio.h>

// global constants
#define SIZE 20

// prototypes
void printArray(const int a[], int size);
void setArrayPower3(int a[], int size);

int main()
{
    // declare an array of 10 integers
    int array[SIZE] = {0};
    
    // print the array
    printArray(array, SIZE);
    
    // set all elements to 1
    for (int i=0; i<SIZE; i++) {
        array[i] = 1;
    }
    
    // print the array
    printArray(array, SIZE);

    // set array elements equal to position 
    for (int i=0; i<SIZE; i++) {
        array[i] = i;
    }
    
    // print the array
    printArray(array, SIZE);

    // set array elements equal to series of even numbers
    for (int i=0; i<SIZE; i++) {
        array[i] = i*2;
    }
    
    // print the array
    printArray(array, SIZE);
    
    // call function to set elements equal to powers of 3
    setArrayPower3(array, SIZE);

    // print the array
    printArray(array, SIZE);
    

    return 0;
}

// function definition
void printArray(const int a[], int size) {
    
    for (int i=0; i<size; i++) {
        printf("[%d]", a[i]);
    }
    puts("");
    
}

void setArrayPower3(int a[], int size) {
    
    for (int i=0; i<SIZE; i++) {
        a[i] = i*i*i;
    }
    
}
