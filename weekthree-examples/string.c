// #include <cs50.h>   // file that declares string
#include <stdlib.h>  // library for malloc
#include <stdio.h>  // file that declares printf

void modifyArray(int theArray[])
{
    theArray[2] = 44;
    for (int number = 0; number < 3; number++)
    {
        printf("The number at %i is %i\n", number, theArray[number]);
    }

}

int main(void)
{
    char* name = "Paul";   // replace string name
    printf("Hello, World!, %s\n", name);    // function, using string, adding second argument name of the variable

    for (int letter = 4; letter >= 0; letter--)
    {
        printf("%c, name[letter]");
    }
    printf("\n")



    // int anArray[] = {28, 32, 29};
    // // printf("position 2 is %i\n", anArray[1]);
    // // modifyArray(anArray);
    // // printf("positon 3 is %i\n", anArray[2]);

    // int* anotherArray = malloc(sizeof(int) *3);
    // anotherArray[1] = 8;
    // printf("the number at positon 2 is %i\n", anotherArray[1]);

}

// alias string char*