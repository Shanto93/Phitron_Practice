#include <stdio.h>
#include <string.h>
int main()
{
    char word[100001];
    scanf("%s", word);
    int len, count = 0;
    len = strlen(word);

    for (int i = 0; i < len; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    printf("%d\n", count);
}