// Interger arithmetic
#include <cs50.h>   // file that declares string
#include <stdio.h>  // file that declares printf

int h = get_int(hour);
int m = get_int(minute);

get_int("Choose the hour on the clock between 1-12: \n");
get_int("Choose the minutes on the clock between 1-60: \n");

int main(void)
{
    // Prompt user for x
    int hour = get_int("h: ");
    // Prompt user for y
    int minute = get_int("m: ");
    // Perform arithmetic
    printf("h mod m = %i\n", h % m);   // modular arthmetic or remainders
}  // answers to be more precise usin

// create a function that will take 2 parameters (int, int)
// the first int should be between the range of 1 and 12
// and represens which number the clock hand is pointing at
// the second can be any integer.

// MVP
// the second int will be a positive number only
// return the hour that the hand will be pointing at

// hacker 1
// return both the number of clock cycles and the final hour

// hacker 2
// accept negative numbers in the second int and go back on clock.