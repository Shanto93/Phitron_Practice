#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        int arr[n], cop[n], temp;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cop[i] = arr[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(arr[i] - cop[i]));
        }
        printf("\n");
    }
}