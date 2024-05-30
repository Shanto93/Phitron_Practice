#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;

    if (row != col)
    {
        count++;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == row - 1)
            {
                if (arr[i][j] == 1)
                {
                    continue;
                }
                else
                {
                    count++;
                }
            }
            else if (arr[i][j] != 0)
            {
                count++;
            }
        }
    }

    if (count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}