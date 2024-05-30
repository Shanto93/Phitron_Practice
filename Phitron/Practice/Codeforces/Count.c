#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);
    int l, i, sum = 0;
    l = strlen(s);
    for(i = 0; i < l; i++)
    {
        sum += s[i] - '0';
    }
    printf("%d", sum);
}