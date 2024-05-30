#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000], r[1000];
    scanf("%s %s", s, r);
    int l1, l2;
    l1 = strlen(s);
    l2 = strlen(r);
    printf("%d %d\n", l1, l2);
    printf("%s %s", s, r);
}