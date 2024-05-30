#include <stdio.h>
#include <math.h>

int main()
{
    int row, inc;
    scanf("%d", &row);
    inc = floor(row / 2) + 1;

    for (int i = 0; i < 5 + inc; i++)
    {

        for (int j = ((5 + inc) - i) - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < row; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}