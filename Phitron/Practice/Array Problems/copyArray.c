#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int a[m];
    // Take input for array a
    for(int i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }
    int n;
    scanf("%d", &n);
    int b[n];

    // Take input for array b
    for(int i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    int ans[m+n];

    // Copying the value of array a into ans array
    for(int i=0; i<m; i++)
    {
        ans[i] = a[i];
    }

    int k = m;
     // Copying the value of array b into ans array
    for(int j = 0; j<n; j++)
    {
        ans[k] = b[j];
        k++;
    }

    // Printing array
    for(int i=0; i<m+n; i++)
    {
        printf("%d   ", ans[i]);
    }
}