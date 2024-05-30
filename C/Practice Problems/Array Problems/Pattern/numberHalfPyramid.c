#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);

    for(int i = 1; i <= line; i++)
    {
        for(int j = 1; j <=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int i = line-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}