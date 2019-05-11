#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    float f = get_float("Choose a number: ");   // float is a number with a decimal in it, more precise
    printf("Hello, World!, %f\n", f);           // function, using string, adding second argument name of the variable
}