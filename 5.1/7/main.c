#include <stdio.h>

int main()
{
    int K,K1,K2,K3;
    scanf("%d",&K);
    K1=K%10;
    K2=K/10%10;
    K3=K/100;
    printf("%d%d%d",K1,K2,K3);
    return 0;
}
