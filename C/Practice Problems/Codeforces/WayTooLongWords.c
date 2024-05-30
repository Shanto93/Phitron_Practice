#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int n;
    scanf("%d", &n);
    for(int j = 0; j < n; j++)
    {
        scanf("%s", a);
    int len, count = 0;
    len = strlen(a);

    for(int i = 0; i < len; i++)
    {
        count++;
    }
    if(count <= 10)
        {
            printf("%s", a);
        }
        else
        {
            printf("%c%d%c\n",a[0],len-2,a[len-1]);
        }
    }
}