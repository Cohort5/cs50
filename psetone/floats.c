// Floating-point arithmetic with float
#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    // Prompt user for x
    float x = get_float("x: ");
    // Prompt user for y
    float y = get_float("y: ");
    // Perform division
    printf("x / y = %.50f\n", x / y);  // show me a float with .7 or .50 more decimal places %, %.7, %.50
}