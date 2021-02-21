/**
 * Project Euler: Problem 001.
 *
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6, 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */

#include <stdio.h>

int main(void)
{
    int sum = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    fprintf(stdout, "Total sum is %d.\n", sum);
}