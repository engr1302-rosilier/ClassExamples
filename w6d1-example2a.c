/******************************************************************************

Week 6 Day 1 - File I/O
Example 2a - read three integers from an input file, print the sum to an output file

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inF, *outF;
    int a, b, c;
    
    // open output FILE
    outF = fopen("output.txt", "w");
    
    if (!outF) {    
        printf("oops! and error opening the output file. Bailing...");
        exit(1);
    }
    
    // open input FILE
    inF = fopen("input.txt", "r");
    
    if (!inF) {    
        printf("oops! and error opening the input file. Bailing...");
        exit(1);
    }

    printf("Ok, both opened just fine!");
    
    // read 3 numbers and add them, save to output
    fscanf(inF, "%d%d%d", &a, &b, &c);
    fprintf(outF, "%d\n", a+b+c);
    
    // close both files
    fclose(inF);
    fclose(outF);

    return 0;
}
