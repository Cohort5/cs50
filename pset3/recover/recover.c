#include <stdio.h>
#include <stdlib.h>

typedf uint8_t BYTE;

int main(int argc, char *argv[])
{
    int x = 0xe0;

    if(x >= 0xe0 && x <= 0xef)

    {
        printf("The number is within the range 0xe0 and 0xef\n"); // inclusive ==
    }
    else
    {
        printf("The statement is outside the range\n");
    }
}
