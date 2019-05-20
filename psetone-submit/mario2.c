#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int h;

    do
    {
        h = get_int("What is the height? ");   // pyramid left and right
        // l = get_int("What is the length? ");
    }
    while (h < 0 || h > 8);  // breaks out of loop

    for (int i = 1; i < h + 1; i++) // the amount of rows

    {
        for (int k = 0; k < h - i; k++) // spaces
        {
            printf(" "); //space
        }

        for (int j = 0; j < i; j ++) // prints hash + rows

        {
            printf("#");  // print hash marks
        }
        printf("\n"); // print new line
    }
}

// vertical and horizontal loop inside and then concat - j
// # recreate the pyramid, use (#) for bricks
// get (height) and get (width), 1-8
// print height, then width
// prompt user for postive number (1-8)
// functions, conditions, boolean expr, loops, and/or/not, variables