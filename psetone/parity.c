// How do you know if a mumbers is even or odd number /2
#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    // Prompt user for integer
    int n = get_int("n: ");
    // Check parity of integer
    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}