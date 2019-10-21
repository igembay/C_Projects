#include <stdio.h>
int main(){
    int N,i=0,j=0;
    scanf("%d",&N);
    for(; i++<=N; N%i!=0 ? :(printf("%d ",i),j++));
    printf("\n%d",j);
    return 0;
}
