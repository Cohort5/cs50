#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int main(void)
{
    string name = get_string("What is your name?\n");
    printf("Hello, World!, %s\n", name);    // function, using string, adding second argument name of the variable
}

// \\n escape, to show (\)

//      clang hello_world.c
//      ./a.out - runs the file
//      clang -o hello_world hello_world.c - saves it in a file
//      ./hello_world
//      make hello_world - even more options, make program that uses clang


