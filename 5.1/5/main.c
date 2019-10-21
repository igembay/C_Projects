#include <stdio.h>

int main()
{
    int S,K;
    double M,x=3e-23;
    scanf("%d",&S);
    K=249.5/.05*S;
    M=249.5/x*S;
    printf("%d %.3e",K,M);
    return 0;
}
