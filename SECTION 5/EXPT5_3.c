/*Write a program to count the number of digits in a number*/
#include "stdio.h"
int main()
{
    long long num;
    int digit = 0;
    printf("Enter a Number whose digit to be count:\n");
    scanf("%lld", &num);
    for (digit = 0; num != 0; num /= 10)
    {
        digit++;
    }
    printf("total digits :%d", digit);
    return 0;
}