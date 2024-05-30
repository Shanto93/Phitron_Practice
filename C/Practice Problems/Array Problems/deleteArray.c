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
    scanf("%d", &pos);

    for(int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n-1; i++)
    {
        printf("%d   ", arr[i]);
    }

}