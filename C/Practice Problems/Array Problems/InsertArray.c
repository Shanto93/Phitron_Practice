#include <stdio.h>
int main()
{
    int n;
    printf("Size of aray is: ");
    scanf("%d", &n);
    int arr[n+1];
    printf("Insert  aray is: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos, val;
    scanf("%d %d", &pos, &val);

    for(int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    printf("Print of aray is: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d   ", arr[i]);
    }
}