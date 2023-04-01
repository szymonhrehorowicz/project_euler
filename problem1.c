#include <stdio.h>

/*
    Problem 1
    =========
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
*/

/*
    Sum of all multiples of 3 is: 3 + 6 + ... + 999 = 3(1 + 2 + ... + 333) and sum of an arithmetic sequence is S(n)=(a1 + an)/2*n
    where ai is an ith( being an natural number) element of the sequence.

    So:
        3 + 6 + ... + 999 = 3(1 + 2 + ... + 333) = 3 * (1 + 333)/2 * 333

    and similarly
        5 + 10 + ... + 995 = 5(1 + 2 + ... + 199) = 5 * (1 + 199)/2 * 199

    Noticing that both sums will contain numbers such as 15, 30, ... we can subtract from sum of both multiples with the sum of multiples of 15
*/

long sum(int n)
{
    return n * (1 + n) / 2;
}

int main()
{
    long sumOfMultiples = 3 * sum((int)999 / 3) + 5 * sum((int)995 / 5) - 15 * sum((int)990 / 15);
    printf("sum of all multiples of 3 or 5 below 1000 is: %d", sumOfMultiples);

    return 0;
}