#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        long long total;
        int a, b, c;
        scanf("%lld %d %d %d", &total, &a, &b, &c);
        if (total % (a * b * c) == 0)
        {
            printf("%lld\n", total / (a * b * c));
        }
        else
        {
            printf("-1\n");
        }
    }
}