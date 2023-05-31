/*: Write a program to input a number and check whether it is Armstrong or not (An
Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For
example, 371 is an Armstrong number since 33 + 73 + 13 = 371).*/
#include "stdio.h"
#include "math.h"
int main()
{
    int num,storenum, digit, lastdigit, sum = 0;
    printf("Enter a number to check is it armstrong or not\n");
    scanf("%d", &num);
    storenum = num;
    digit = (int)log10(num) + 1;
    while (num != 0)
    {
        lastdigit = num % 10;
        sum = sum + (int)pow(lastdigit, digit);
        num = num / 10;
    }
    if (storenum == sum)
        printf("%d is armstrong",storenum);
    else
        printf("%d is not a armstrong",storenum);
    return 0;
}