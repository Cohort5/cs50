#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int add(int x, int y)  // define and declare
{
    return x + y;
}

int modifyAdder(int* x, int y)  // creating the data type x declaritive pointer
{
    *x += 7;                    // creates a place to store the address
    return *x + y;
}

int main(void)
{
    int a = 5;  // testing the ints with printf
    int b = 13;
    printf("The total is %i\n", add(a, b));    // function, using string, adding second argument name of the variable
    printf("The modified total is %i\n", modifyAdder(&a, b));
    printf("Runnig normal add again: %i\n", add(a, b));
}
    // int* intPointer = &b;  // * is creating the pointer near the data type
    // printf("b is %i\n", b);

    // *intPointer += 4;   // *calls it to go to the address and modify the data there (b)
    // printf("now b is %i\n", b);
    // &b refers to the address of the item
    // *int recalls

    // x = a in main just add a pointer so the machine knows what it is in the data stack
    // intPointer is actually an address of the stored data in hexci decimal
    // char* , int*, & give the address of the value being stored (b)
    // heap data stays in the program and is not deleted like in the main data stack
    // heap vs. stack , heap = outside of main, stack = inside the main
    // int* x, declartive pointer to store data
    // *x , goes to the address were the pointer stored the data