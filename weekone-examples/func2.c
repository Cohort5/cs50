//writting functions from our solution - example code

#include <cs50.h>
#include <stdio.h>

int total(int, int, int);  // just a declaration of what is to be expected - three intergers

// int total(int a, int b, int c)   // declares and then what it does
// {
//     return a + b + c;
// }

int main(void)   // declares and then what it does
{
    printf("Hello\n");
    int result = total(5, 8, 2);
    printf("%i\n", result);
    printf("%i\n", total(4, 4, 4)); // inline execution in hardware cash - l1, l2, l3
}

int total(a, b, c)   // declares and then what it does
{
    return a + b + c;
}

////RESTART required related to memory leaks stored in the heap