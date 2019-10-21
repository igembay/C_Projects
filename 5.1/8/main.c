#include <stdio.h>

int main()
{
    int A,a3,a2,a1;
    float x,a4;
    scanf("%d",&A);
    a4=A/1000;
    a3=A%1000/100;//100%10
    a2=A%100/10;//10%10
    a1=A%10;
    x=a4*a2/(a3*a1);
    printf("%.2f",x);
    return 0;
}
