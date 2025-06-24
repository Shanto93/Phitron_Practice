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