
#include <stdio.h>

#define SIZE 5

// prototype
void squareArray(int* ptr, int size);

int main()
{
    
    int number[SIZE];
    
    for (int i=0; i<SIZE; i++) {
       printf("Enter a number: ");
//       scanf("%d", &number[i]); // array notation
       scanf("%d", number + i);  // pointer notation
    }
    
    squareArray(number, SIZE);
 
    // squareIt(&number); is equivalent
    
    printf("The square of the array is... ");
    for (int i=0; i<SIZE; i++) {
//       printf("%d ", number[i]); // array notation
       printf("%d ", *(number + i)); // pointer notation
    }

    return 0;
}


// definitions
void squareArray(int* ptr, int size) {
  
  int x;
  
  for (int i=0; i<size; i++) {
      x = *(ptr+i);
      *(ptr+i) = x * x;
  }
  
}