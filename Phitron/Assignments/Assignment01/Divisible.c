#include <stdio.h>
int main()
{
    long long a,i;
    scanf("%lld",&a);
    for(i=1;i<=a;i++){
        if(i%3==0 && i%7==0){
            printf("%lld\n",i);
        }
    }
}