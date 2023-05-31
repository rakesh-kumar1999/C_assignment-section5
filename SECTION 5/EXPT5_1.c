/*Write programs to print the following structure:
      *
    * * *
  * * * * *
 * * * * * * *
 */
#include "stdio.h"
#include "conio.h"
void main()
{
  int i, j;
    for (i = 1; i <= 4; i++)
    {
      for (j = 1; j <= 7; j++)
        {
          if (j >= (5 - i) && j <= (i + 3))
             printf("*");
          else
            printf(" ");  
        }
        printf("\n");
    }
}