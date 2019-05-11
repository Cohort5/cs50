#include <stdio.h>  // file that declares printf
// have to teach the computer
void cough(void); // copy first line of function to create prot-type

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
}

void cough(void) // void neither takes or gives input
{
    printf("cough\n");
}

