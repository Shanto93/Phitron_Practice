#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++)
    {
        char s[10001];
        scanf("%s", s);
        int lower = 0, capital = 0, number = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                number++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
        }
        printf("%d %d %d\n", capital, lower, number);
    }

    
}