// call stack

#include <cs50.h>
#include <math.h>
#include <stdio.h>

long long fact(long n)
{
    if (n == 1)
        return 1;
        else
            return n * fact(n-1);
}

long long main(void)
{
    printf("%llu\n", fact(20));

}