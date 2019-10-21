#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,p,S;
    scanf("%f%f%f",&a,&b,&c);
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f",S);
    return 0;
}
