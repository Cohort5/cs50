// Floating-point arithmetic with double
#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    // Prompt user for x
    double x = get_double("x: ");
    // Prompt user for y
    double y = get_double("y: ");
    // Perform division
    printf("x / y = %.50f\n", x / y);  // show me a float with .7 or .50 more decimal places %, %.7, %.50
}