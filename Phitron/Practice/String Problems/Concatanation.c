#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    int m, n;
    m = strlen(a);
    n = strlen(b);
    char ans[m+n+1];
    for(int i = 0; i < m; i++)
    {
        ans[i] = a[i];
    }
    int j = m;
    for(int i = 0; i < n; i++)
    {
        ans[m] = b[i];
        m++;
    }

    
    

    printf("%s\n", ans);
}