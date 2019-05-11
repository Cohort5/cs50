#include <cs50.h>
#include <stdio.h>

void printSum(void); // declare the function
void printSums(int, int); // place holder
int squared(int);

int main(void)
{
    printf("Hello, World!\n"); // using stdio to print Hello
    printSums(4, 8);
    int threeSquared = squared(3);
    printf("3 sqaured is; %i\n", threeSquared);
}

int squared(num)
{
    return num * num;
}

void printSum(void) // printSom will not complie b/c of linkage
{
    printf("1 + 2 = %i\n", 1 + 2); // create and define the function
}

void printSums(x, y) // more explicit (int x, int y)
{
    printf("%i + %i = %i\n", x, y, x + y);
}


// step one - create runable code
// step two - create and define the function
// step three - declare the function to the complier
// step four - explicit (void) is a place holder
// %i - int, %f - float, %c - char, %s - string,
// DRY - DONT, REPEAT, YOURSELF
// function that declares, defines, prints..


// ~/workspace/weekone-examples/ $ style50 func.c
// Looks good!
// But consider adding more comments!
// ~/workspace/weekone-examples/ $

