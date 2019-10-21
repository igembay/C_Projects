#include <stdio.h>
#include <math.h>

int main()
{
    int K;
    double K10,K2,rez;
    scanf("%d",&K);
    K10=K*pow(10,9);
    K2=K*pow(2,30);
    rez=K2-K10;
    printf("%.0f",rez);
    return 0;
}
