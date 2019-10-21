#include <stdio.h>
#include <math.h>
int main(){
    int N,r=1;
    scanf("%d",&N);
    while(pow(2,r)<N) r++;
    printf("%d",r);
    return 0;
}
