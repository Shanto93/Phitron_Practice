#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int round;
        scanf("%d", &round);
        char s[round];
        scanf("%s", &s);
        int count = 0, count02 = 0;
        int length = strlen(s);
        for (int i = 0; i < length; i++)
        {
            if (s[i] == 'T')
            {
                count++;
            }
            else if (s[i] == 'P')
            {
                count02++;
            }
        }

        if (count > count02)
        {
            printf("Tiger\n");
        }
        else if (count < count02)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
}