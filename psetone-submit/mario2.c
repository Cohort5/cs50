#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("What is the height? ");
        // l = get_int("What is the length? ");
    }

    while (height < 0 || height > 8);  // breaks out of loop


    for (int i = 1; i < height + 1; i++) // the amount of rows

    {
        for (int k = 0; k < height - i; k++) // amount of spaces per row
        {
            printf(" "); //spaces
        }

        for (int j = 0; j < i; j ++) // amount of hashs per row

        {
            printf("#");  // print hash marks
        }
        printf("\n"); // print and adds new line
    }
}


// vertical and horizontal loop inside and then concat - j
// # recreate the pyramid, use (#) for bricks
// get (height) and get (width), 1-8
// print height, then width
// prompt user for postive number (1-8)
// functions, conditions, boolean expr, loops, and/or/not, variables