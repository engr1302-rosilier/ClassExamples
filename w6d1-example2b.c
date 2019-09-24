/******************************************************************************

Week 6 Day 1 - File I/O
Example 2b - read three characters from an input file, print them back to an output file

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *inF, *outF;
    char ch1, ch2, ch3;
    
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
    
    // read 3 characters then print them to the output file
    fscanf(inF, "%c %c %c", &ch1, &ch2, &ch3);
    fprintf(outF, "%c %c %c\n", ch1, ch2, ch3); 
    
    // close both files
    fclose(inF);
    fclose(outF);

    return 0;
}
