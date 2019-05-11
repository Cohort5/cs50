#include <cs50.h>
#include <math.h>
#include <stdio.h>

//only function that auto returns
int main(void)

    string fname = get_string("What is your first name? ");
    string lname = get_string("What is your last name?  ");
    printf("Hello, Mr/Ms. %s, %s!\n", fname, lname);

    // int myNum = 45;
    int myFloat = round(3.87 * 100);
    int other = round(1.52 * 100);
    int total = myFloat + other;
    int cents = total % 100;
    int dollars = total / 100;
    printf("adding the numbers: $%i.%i\n", dollars, cents );

    printf("adding the numbers: %.8f\n", (float)total / 100.0);

    float divison = 78.0/(float)15;  // interger based divison in C only
    printf("the divison: %.1f\n", divison);
}

