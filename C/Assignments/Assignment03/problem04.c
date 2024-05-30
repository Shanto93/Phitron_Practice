#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int length = strlen(s);
    int i = 0, j = length - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else if (s[i] != s[j])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char s[1001];
    scanf("%s", &s);
    int result = is_palindrome(s);

    if (result == 1)
    {
        printf("Not Palindrome\n");
    }
    else if (result == 0)
    {
        printf("Palindrome\n");
    }
}
