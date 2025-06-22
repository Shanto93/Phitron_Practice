#include <stdio.h>

void printing_function(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubble_sort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)