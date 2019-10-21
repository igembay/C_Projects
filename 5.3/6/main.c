#include <stdio.h>
int main(){
    int B,B3,B2,B1,B0;
    scanf("%d",&B);
    B3=B/1000,B2=B/100%10,B1=B/10%10,B0=B%10;
    printf("%d",B3*8+B2*4+B1*2+B0);
}
