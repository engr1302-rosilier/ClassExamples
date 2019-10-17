/******************************************************************************

Week 7 Day 2 - Functions
Example 1 - create a function to calculate the area of a circle

*******************************************************************************/
#include <stdio.h>

// constants
#define PI 3.141592654

// prototypes
float circleArea(int d);

// globals

int main()
{
    // variables
    int diameter;
    float area;
    
    puts("Please enter a diameter (integer): ");
    scanf("%d", &diameter);
    
    area = circleArea(diameter);
    
    printf("Great, the area of that circle is %.2f", area);

    return 0;
}

// function definitions
float circleArea(int d) {
    
    float r;
    r = (float) d / 2;
    
    return r * r * PI;
}
