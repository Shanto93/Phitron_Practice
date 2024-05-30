#include <stdio.h>

void fun(int num)
{
    if (num == 0)
        return;
    int digit = num % 10;
    fun(num / 10);
    printf("%d ", digit);
}
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num;
        scanf("%d", &num);
        fun(num);
        if (num == 0)
        {
            printf("0");
        }
        printf("\n");
    }
}