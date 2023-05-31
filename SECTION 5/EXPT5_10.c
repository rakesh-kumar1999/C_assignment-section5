/*Write a program that takes an integer ‘n’ as input and prints the Fibonacci series up to
‘n’. (Hint: Fibonacci series: 1 1 2 3 5 8 13 21 …)*/
#include "stdio.h"
int main()
{
    int i, fib1, fib2, fib, end;
    printf("To prints the Fibonacci series up to 'n':Enter the value of n ?\n");
    scanf("%d", &end);
    printf("Fibonacci series upto %d are: 1,", end);
    fib1 = 0;
    fib2 = 1;
    for (i = 2; i <= end; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        printf("%d,", fib);
    }
    return 0;
}