// How do you know if a mumbers is even or odd number /2
#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");
    // Prompt user for y
    int y = get_int("y: ");

    // Compare x and y
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if(x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}