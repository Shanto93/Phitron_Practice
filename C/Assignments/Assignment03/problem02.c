#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);

    for (int i = 1; i <= line; i++)
    {
        for (int z = line - i; z >= 1; z--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}