#include <stdio.h>

int main()
{
    int K,K3,K2,K1;
    scanf("%d",&K);
    K3=(K/100)*1;
    K2=(K/10%10)*10;
    K1=(K%10)*100;
    printf("%d",K1+K2+K3);
    return 0;
}
