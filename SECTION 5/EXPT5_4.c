/*: Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!).*/
#include "stdio.h"
int main()
{
    int n, i, j, fact;
    float sum = 1.0;
    printf("To calculate the value of the following series 1- (2/3!)+(3/4!)-(4/5!)+....± (n/(n+1)!)\nEnter the value of 'n':");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= (i + 1); j++)
        {
            fact = fact * j;
        }
        if (i % 2 == 0)
        {
        sum =sum - (float)i /(float) fact;
        }
        else
        {
          sum = sum +(float) i / (float)fact;
        }
    }
    printf("After calculation, the value of the following series:%g", sum);
    return 0;
}