#include <bits/stdc++.h>

using namespace std;

int *sort_it(int n)
{
    int *b = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n, greater<int>());
    return b;
}
int main()
{
    int n;
    cin >> n;
    int *a = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}