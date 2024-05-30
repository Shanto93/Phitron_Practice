#include <stdio.h>
int main()
{
    int n;
    // Size of array
    scanf("%d", &n);
    int arr[n];
    // Insert Array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int i = 0, j = n - 1;

    // Array reverse part
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d   ", arr[i]);
    }

}