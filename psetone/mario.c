#include <cs50.h>
#include <math.h>
#include <stdio.h>

// stirng height = #;
// get height();

int main(void)
{
    int h, l;
    do
    {
        h = get_int("What is the height? " );
        l = get_int("What is the length? " );
    }
    while (h < 1 || h > 8);
    while (l < 1 || l > 8);

    printf("#       %c\n",h+l);
    printf("##      %c\n",h+l);
}
    // printf("###     %c\n", 3rd);
    // printf("####    %c\n", 4th);
    // printf("#####   %c\n", 5th);
    // printf("######  %c\n", 6th);
    // printf("####### %c\n", 7th);
    // printf("########%c\n", 8th);

// }
//     if (h >= 1 || h <= 8)
// {
//     printf("The height is: %i\n", h);
//     printf("The height is: %i\n", l);
// }


// # recreate the pyramid, use (#) for bricks
// get (height) and get (width), 1-8
// print height, then width
// prompt user for postive number (1-8)
// functions, conditions, boolean expr, loops, and/or/not, variables