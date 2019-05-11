#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf
#include <string.h> // file that uses string funciont

int main(void)
{
    // for (c = 0; i < 4; i++)
    string name = "paul";  //0123
    // for (int letter = 0, letter < strlen(name); letter++)
    for (int letter = 0, length = strlen(name); letter < length; letter++)
    {
        printf("%c", name[letter]);
    }
        printf("\n");
}
}

// printf("%c\n", name[letter]);
// printf("letter:\t%i\tlength:\t%i\n", letter, length);
// printf("%c%d\n", 'b' - 'a');

// string name = cliff // 01234   \0 is null in the ascii table - terminator

// printf("%c\n", name[2]);  prints the position of u
// printf("%c%d\n", name[2], name[2]); add the name twice
// printf("%d\n", name[2]);  stands for double - repsent the value on the ascii table