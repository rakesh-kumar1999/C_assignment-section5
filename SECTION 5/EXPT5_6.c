/*Write a program to find out the HCF and LCM of two numbers.*/
#include "stdio.h"
#include"stdlib.h"
int main()
{
    int num1, num2, max, min, hcf = 1, lcm = 1;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    max = num1 > num2 ? num1 : num2;
    min = num1 > num2 ? num2 : num1;
    /* FOR HCF */
    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }
    printf("HCF of %d & %d is %d", num1, num2, hcf);
    /* FOR LCM*/
    // lcm=(num1*num2)/hcf;/*alternate way*/
    for (int j=max; ;j++)
    {
        if (j % num1 == 0 &&j % num2 == 0)
        {
            lcm = j;
            printf("\nLCM of %d & %d is %d ", num1, num2, j);
            exit(0);
        }
    }
     return 0;
}