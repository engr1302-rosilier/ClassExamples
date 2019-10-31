
#include <stdio.h>

// prototype
void squareIt(int* ptr);

int main()
{
    
    int number;
    int *numPtr = &number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    squareIt(numPtr);
 
    // squareIt(&number); is equivalent
    
    printf("The square is %d", number);

    return 0;
}

// definitions
void squareIt(int* ptr) {
    int x;
    
    x = *ptr;
    *ptr = x*x;
}