#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);

    for (int i = 1; i <= line; i++)
    {
        for (int z = 1; z <= line - i; z++)
        {
            printf(" ");
        }
        if (i % 2 == 1)
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("#");
            }
        }
        else if (i % 2 == 0)
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("-");
            }
        }
        printf("\n");
    }
    for (int i = line - 1; i >= 1; i--)
    {
        for (int z = line - i; z >= 1; z--)
        {
            printf(" ");
        }
        if (i % 2 == 1)
        {
            for (int j = 2 * i - 1; j >= 1; j--)
            {
                printf("#");
            }
        }
        else if (i % 2 == 0)
        {
            for (int j = 2 * i - 1; j >= 1; j--)
            {
                printf("-");
            }
        }

        printf("\n");
    }
}