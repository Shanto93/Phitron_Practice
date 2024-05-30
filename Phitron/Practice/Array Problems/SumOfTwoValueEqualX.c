#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int number, count = 0;
    scanf("%d", &number);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == number)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
    }
    if (count > 0)
    {
        printf("Matched\n");
    }
    else
    {
        printf("Not Matched\n");
    }
}