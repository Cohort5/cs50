// Interger arithmetic
#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");
    // Prompt user for y
    int y = get_int("y: ");
    // Perform arithmetic
    printf("x + y = %i\n", x + y);
    printf("x - y = %i\n", x - y);
    printf("x * y = %i\n", x * y);
    printf("x / y = %i\n", x / y);
    printf("x mod y = %i\n", x % y);   // modular arthmetic or remainders
}  // answers to be more precise using / and mod but works for (+ - *) so far...see floats.c