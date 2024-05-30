#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    gets(s);
    int l, i;
    l = strlen(s);
    for(i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
}