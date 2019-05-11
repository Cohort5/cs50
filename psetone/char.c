// How do you know if a mumbers is even or odd number /2
#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    // Prompt user for answer
    char c = get_char("Answer: ");

    // Check answer
    if (c == 'Y' || c == 'y')
    {
        printf("yes\n");
    }
    else if(c == 'N' || c == 'n')
    {
        printf("no\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}