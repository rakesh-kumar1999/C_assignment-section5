/*Write a program to input a number and check whether it is prefect or not (A number is
called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number
since 1+2+4+7+14=28)*/
#include "stdio.h"
int main()
{
    int i, num, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("its proper divisor:\n");
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d+", i);
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("\nEntered number %d is perfect number", num);
    else
        printf("\nEntered number %d is not a perfect number ", num);
    return 0;
}