
#include <stdio.h>

#define SIZE 3

// function prototypes
void multMatrix(int m[][SIZE], int size, int num, int r[][SIZE]);

int main()
{
    int matrixA[SIZE][SIZE] = {0};
    int result[SIZE][SIZE] = {0};
    int i, j, mult;
    
    puts("Please enter the 3x3 matrix coefficients in row order...");
    
    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            printf("Enter a coefficient: ");
            scanf("%d", &matrixA[i][j]);
        }
    }

    // print the matrix
    puts("The original matrix is: ");
    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            printf("%d ", matrixA[i][j]);
        }
        puts("");
    }
    
    // get the multiplier
    printf("What do you want to multiply by? ");
    scanf("%d", &mult);
    
    multMatrix(matrixA, SIZE, mult, result);

    // print the result
    puts("The result matrix is: ");
    for (i=0; i<SIZE; i++) {
        for (j=0; j<SIZE; j++) {
            printf("%d ", result[i][j]);
        }
        puts("");
    }


    return 0;
}

// function definitions

void multMatrix(int m[][SIZE], int size, int num, int r[][SIZE]) {
    
    int i, j;
    
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            r[i][j] = num * m[i][j];
        }
    }
    
}