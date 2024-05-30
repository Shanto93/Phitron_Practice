#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int find;
        scanf("%d", &find);

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == find)
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}