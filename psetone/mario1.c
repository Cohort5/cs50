#include <cs50.h>
#include <math.h>
#include <stdio.h>

// stirng height = #;
// get height();

int main(void)
{
    int h;
    do
    {
        h = get_int("What is the height? " );

    }
    while (h < 1 || h > 8);


    printf("#       %c\n", h);
    printf("##      %c\n", h);
    printf("###     %c\n", h);
    printf("####    %c\n", h);
    printf("#####   %c\n", h);
    printf("######  %c\n", h);
    printf("####### %c\n", h);
    printf("########%c\n", h);
}
    // printf("x + y = %i\n", x + y);
    // printf("x - y = %i\n", x - y);
    // printf("x * y = %i\n", x * y);
    // printf("x / y = %i\n", x / y);
    // printf("x mod y = %i\n", x % y);



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