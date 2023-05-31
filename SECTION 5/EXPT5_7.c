/*Write a program to input a number and check whether it is palindrome or not (a
palindrome number is a number that remains the same when its digits are reversed, e.g., 16461)*/
#include "stdio.h"
int main()
{
    long long num, storenum, reversenum = 0;
    int lastdigit=0;
    printf("Enter a number & check whether it is palindrome or not\n");
    scanf("%lld", &num);
    storenum = num;
    while (num != 0)
    {
        lastdigit = num % 10;
        reversenum = reversenum * 10 + lastdigit;
        num = num / 10;
    }
    if (storenum == reversenum)
        printf("Entered number %d is a palindrome", storenum);
    else
        printf("Entered number %d is not a palindrome", storenum);
    return 0;
}