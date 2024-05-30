#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);

    for(int i = 1; i <= line; i++)
    {
        for(int z = 1; z <= line-i; z++)
        {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // for(int i = line-1; i >= 1; i--)
    // {
    //     for(int j = i; j > 0; j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
}   