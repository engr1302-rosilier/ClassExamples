/******************************************************************************

Week 6 Day 1 - File I/O
Example 1 - open and close text files, check for errors

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inF, *outF;
    
    // open input FILE
    outF = fopen("output.txt", "w");
    
    if (!outF) {    
        printf("oops! and error opening the output file. Bailing...");
        exit(1);
    }
    
    // open input FILE
    inF = fopen("input.txt", "r");

// Alternative way to check for error condition     
//    if (inF == NULL) {

    if (!inF) {    
        printf("oops! and error opening the input file. Bailing...");
        exit(1);
    }

    printf("Ok, both opened just fine!");
    
    // close both files
    fclose(inF);
    fclose(outF);

    return 0;
}
