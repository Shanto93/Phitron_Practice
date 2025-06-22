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
    { // number of passes
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()

{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before Sort Array : ");

    printing_function(arr, n);
    printf("\n");

    bubble_sort(arr, n);

    printf("Sorted array: ");
    printing_function(arr, n);
    printf("\n");

    return 0;
}