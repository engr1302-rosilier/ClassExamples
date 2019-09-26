/******************************************************************************

Week 6 Day 2 - File I/O
Example 1 - read integers from an input file and print them in a single, 
            formatted column to an output file

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inF, *outF;
    int  number;
    
    // open output FILE
    outF = fopen("output.txt", "w");
    
    if (!outF) {    
        printf("oops! error opening the output file. Bailing...");
        exit(1);
    }
    
    // open input FILE
    inF = fopen("input.txt", "r");
    
    if (!inF) {    
        printf("oops! error opening the input file. Bailing...");
        exit(1);
    }

    printf("Ok, both opened just fine!\n");
    
    // read integers from input and print formatted to output
    // repeat until end of files
    
    while (!feof(inF)) {
        
        fscanf(inF, "%d", &number);
        fprintf(outF, "%05d\n", number);
        
    }
    
    printf("Ok, I'm done!");
    
    // close both files
    fclose(inF);
    fclose(outF);

    return 0;
}
