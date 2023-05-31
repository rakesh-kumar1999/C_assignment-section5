/*Write a program to print the following structure
    4 3 2 1 2 3 4
      3 2 1 2 3
        2 1 2
          1
*/
#include "stdio.h"
void main()
{
    int i,j,k;
    for (i = 1; i <= 4; i++)
    {
     k=4;
        for (j = 1; j <= 7; j++)
        {
            if (j >=i && j <= (8-i))
            {
                printf("%d",k+1-i);
                 j<4?k--:k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}