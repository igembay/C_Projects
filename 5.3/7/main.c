#include <stdio.h>
#include <math.h>
int main(){
    int k,x;
    scanf("%d%d",&k,&x);
    printf("%.0f", x/1000*pow(k,3) + x/100%10*pow(k,2) + x/10%10*k + x%10);
}
