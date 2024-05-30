#include <stdio.h>
void func(int arr[], int n, int i)
{
    if (i == n)
        return;
    func(arr, n, i + 1);
    printf("%d\n", arr[i]);
}

int main()
{
    int n = 5, i = 0;
    // scanf("%d",&n);
    int arr[5] = {10, 20, 30, 40, 50};
    func(arr, n, i);
}