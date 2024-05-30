#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int val = strcmp(a, b);
    if(val == 0)
    {
        printf("Equal\n");
    }
    else if(val > 0)
    {
        printf("A boro\n");
    }
    else
    {
        printf("B boro\n");
    }

}