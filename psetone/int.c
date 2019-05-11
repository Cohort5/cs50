#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    int i = get_int("Choose a number: ");
    printf("Hello, World!, %i\n", i);    // function, using string, adding second argument name of the variable
}