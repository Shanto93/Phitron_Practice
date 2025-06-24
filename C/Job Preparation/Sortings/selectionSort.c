#include <stdio.h>

void printing_function(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int *arr, int n)
{
    int min_index, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    selectionSort(arr, n);
    printf("After Sort Array: ");
    printing_function(arr, n);
    return 0;
}