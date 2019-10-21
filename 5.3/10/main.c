#include <stdio.h>
int main(){
    int N,k,x;
    scanf("%d%d%d",&N,&k,&x);
    printf("%d",(x+k)%N);
}
