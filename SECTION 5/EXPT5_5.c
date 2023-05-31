/*Write a program to find the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7*/
#include "stdio.h"
int main()
{
    int i, start, end, count = 0, sum = 0;
    printf("Enter the start limit:");
    scanf("%d", &start);
    printf("Enter the end limit:");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        if (i % 7 == 0)
        {
            sum = sum + i;
            count++;
        }
    }
    printf("Total numbers divisible by 7 between %d to %d: %d\n",start,end,count);
    printf("Sum of all integers greater than %d and less than %d that are divisible by 7: %d",start,end, sum);
    return 0;
}