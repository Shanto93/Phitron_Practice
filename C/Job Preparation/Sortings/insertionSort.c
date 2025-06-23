#include <stdio.h>

void printing_function(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int *arr, int n)
{
    for (int i = 1; i <= n - 1; i++)
    { // Total passes
        int key = arr[i], j;
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()

{
    int n = 6;
    int arr[] = {5, 2, 9, 1, 5, 6};
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);
    // int arr[n];
    // printf("Enter the elements of the array: ");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    printf("Before Sort Array : ");

    printing_function(arr, n);
    printf("\n");

    insertion_sort(arr, n);

    printf("Sorted array: ");
    printing_function(arr, n);
    printf("\n");

    return 0;
}