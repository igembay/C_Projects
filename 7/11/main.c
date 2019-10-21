#include <stdio.h>
int main(){
    int N,i=1,j=1;
    scanf("%d",&N);
    for(; ++i<N; N%i? :(i=N,j=0));
    printf("%d",j);
    return 0;
}
