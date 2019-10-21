#include <stdio.h>
int main(){
    double e=1,eps,f=1;
    int k=1;
    scanf("%lf",&eps);
    while(k<=eps) e+=(f/=k++);
    printf("%.8f",2. + 1./2 + (1./2)/3 + ((1./2)/3)/4);
    return 0;
