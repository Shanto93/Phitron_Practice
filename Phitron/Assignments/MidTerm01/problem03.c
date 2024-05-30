#include <stdio.h>
#include <math.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        int m1, m2, d1, d2, kom;
        scanf("%d %d %d", &m1, &m2, &d1);
        d2 = ceil((m1 * d1) / (m1 + m2));
        kom = d1 - d2;
        printf("%d\n", kom);
    }
}