#include <stdio.h>
int main()
{
    long long money;
    scanf("%lld",&money);
    if(money > 1000){
        printf("I will buy Punjabi\n");
        money = money - 1000;
        if(money >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad luck!");
    }
}