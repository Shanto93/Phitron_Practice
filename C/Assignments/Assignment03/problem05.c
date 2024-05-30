#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count1++;
        }
        else if (arr[i] % 2 == 1)
        {
            count2++;
        }
    }
    printf("%d %d\n", count1, count2);
}
int main()
{
    odd_even();
    return 0;
}