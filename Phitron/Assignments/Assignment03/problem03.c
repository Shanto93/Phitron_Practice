#include <stdio.h>

 int count_before_one(int arr[], int count, int n)
 {
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            break;
        }
        if(arr[i] != 1)
        {
            count++;
        }
    }
    return count;
 }
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

    }
    int count = 0;
    int result = count_before_one(arr, count, n);
    printf("%d\n", result);
}